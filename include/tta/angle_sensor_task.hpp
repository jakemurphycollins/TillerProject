/*
 *   Copyright (c) 2025
 *   All rights reserved.
 */
#pragma once
#include "i_angle_sensor.hpp"
#include "i_task.hpp"

namespace tiller
{

/**
 * @brief Concrete task for measuring the angle and reporting it to std::cout
 *
 */
class AngleSensorTask : public ITask
{
   public:
    /**
     * @brief Construct a new Angle Sensor Task object
     *
     * @param angle_sensor Reference to the angle sensor to use
     */
    AngleSensorTask(IAngleSensor &angle_sensor);
    /**
     * @brief Destroy the Angle Sensor Task object
     *
     */
    ~AngleSensorTask() = default;
    /**
     * @brief Runs the task each call
     *
     * @param current_time_ms This task runs each tick, so this is unused
     */
    void RunIfReady(uint64_t current_time_ms) override;

   private:
    IAngleSensor *p_angle_sensor_;  ///< Pointer to the angle sensor
};

}  // namespace tiller