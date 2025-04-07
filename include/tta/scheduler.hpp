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
    /**
     * @brief Construct a new Scheduler object
     *
     * @param tick_period_ms
     */
    Scheduler(size_t tick_period_ms);
    /**
     * @brief Destroy the Scheduler object
     *
     */
    ~Scheduler() = default;
    /**
     * @brief Checks if a tick period has elapsed and if so loops through the
     * tasks and calls RunIfReady for each
     *
     */
    void Dispatch();
    /**
     * @brief Adds task to the scheduler
     *
     * @param task Reference to the task to add to the scheduler
     * @return true Task was added
     * @return false Task wasn't added successfully
     */
    bool AddTask(ITask &task);
    /**
     * @brief Starts the scheduler
     *
     */
    void Start();

   private:
    size_t tick_period_ms_;             ///< Tick period in ms for the scheduler
    uint64_t time_of_last_tick_ms_{0};  ///< Time of the last tick in ms
    std::array<ITask *, params::kMaxNumTasks>
        tasks_;                  ///< Array of tasks controlled by the scheduler
    size_t last_task_index_{0};  ///< Last task index in the array
};

}  // namespace tiller