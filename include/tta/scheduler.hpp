/*
 *   Copyright (c) 2025
 *   All rights reserved.
 */
#pragma once
#include <array>
#include <cstddef>
#include <cstdint>

#include "i_task.hpp"
#include "tiller_params.hpp"

namespace tiller
{

/**
 * @brief Holds all the tasks and run them at a regular basis
 *
 */
class Scheduler
{
   public:
    Scheduler(size_t tick_period_ms);
    ~Scheduler() = default;
    void Dispatch();
    bool AddTask(ITask &task);
    void Start();

   private:
    size_t tick_period_ms_;
    uint64_t time_of_last_tick_ms_{0};
    size_t current_tick_{0};
    std::array<ITask *, params::kMaxNumTasks> tasks_;
    size_t last_task_index_{0};
};

}  // namespace tiller