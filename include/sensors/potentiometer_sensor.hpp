#pragma once

#include "i_angle_sensor.hpp"

namespace tiller {

class PotentiometerSensor : public IAngleSensor {
    public:
        PotentiometerSensor() = default;
        ~PotentiometerSensor() = default;
        float Read() override;
};

}