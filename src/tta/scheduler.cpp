/*
 *   Copyright (c) 2025
 *   All rights reserved.
 */
#include "scheduler.hpp"

#include "time.hpp"

namespace tiller
{

Scheduler::Scheduler(size_t tick_period_ms) : tick_period_ms_(tick_period_ms) {}

void Scheduler::Dispatch()
{
    auto current_time_ms = millis();
    if(this->tick_period_ms_ > current_time_ms - this->time_of_last_tick_ms_)
    {
        return;
    }
    for(auto &p_task : this->tasks_)
    {
        p_task->RunIfReady(current_time_ms);
    }
    this->time_of_last_tick_ms_ = current_time_ms;
}

bool Scheduler::AddTask(ITask &task)
{
    if(this->last_task_index_ == this->tasks_.max_size())
    {
        return false;
    }
    this->tasks_.at(this->last_task_index_) = &task;
    this->last_task_index_++;
    return true;
}

void Scheduler::Start()
{
    this->time_of_last_tick_ms_ = millis();
    for(auto &p_task : this->tasks_)
    {
        p_task->RunIfReady(this->time_of_last_tick_ms_);
    }
}

}  // namespace tiller