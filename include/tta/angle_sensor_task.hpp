/*
 *   Copyright (c) 2025
 *   All rights reserved.
 */
#pragma once
#include "i_angle_sensor.hpp"
#include "i_task.hpp"


namespace tiller
{

class AngleSensorTask : public ITask
{
   public:
    AngleSensorTask(IAngleSensor &angle_sensor);
    ~AngleSensorTask() = default;
    void RunIfReady(uint64_t current_tick) override;

   private:
    IAngleSensor *p_angle_sensor_;
};

}  // namespace tiller