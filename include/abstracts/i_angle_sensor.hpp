#pragma once

namespace tiller {
    
/**
 * @brief Interface describing a sensor that reads an angle
 * 
 */
class IAngleSensor {
    public:
        /**
         * @brief Reads the angle from the peripheral and returns it
         * 
         * @return float Returns an angle in units of degrees
         */
        virtual float Read() = 0;
};

}