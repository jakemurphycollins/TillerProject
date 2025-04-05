#pragma once

namespace tiller {

class IAdcDriver {
    public:
        /**
         * @brief Reads the voltage from ADC 
         * @details The voltage is read from ADC. 
         * 
         * @return float 
         */
        virtual float ReadVoltage() = 0;
};

}