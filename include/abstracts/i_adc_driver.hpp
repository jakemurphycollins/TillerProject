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
        [[nodiscard]] virtual float ReadVoltage() = 0;
};

}