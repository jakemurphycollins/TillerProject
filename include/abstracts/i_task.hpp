/*
 *   Copyright (c) 2025
 *   All rights reserved.
 */
#pragma once
#include <cstdint>

namespace tiller
{

/**
 * @brief Interface for a task meant to be executed at a regular rate
 *
 */
class ITask
{
   public:
    /**
     * @brief Checks to see if the task should run at this current time and then
     * runs the task if so
     *
     * @param current_time_ms Current scheduler time in milliseconds
     */
    virtual void RunIfReady(uint64_t current_time_ms) = 0;
};

}  // namespace tiller