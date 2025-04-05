#pragma once
#include "combination_sensor.hpp"
#include "encoder_sensor.hpp"
#include "linear_mapping.hpp"
#include <utility>

namespace tiller::params {

/**
 * @brief Params for the linear mapping used by the tiller potentiometer
 *
 */
static constexpr utility::LinearMapping<float>::Params
    kPotentiometerMappingParams{
        .input_limits{0.0F, 5.0F},
        .output_limits{-90.0F, 90.0F},
    };

/**
 * @brief Params for the incremental encoder
 *
 */
static constexpr EncoderSensor::Params kTillerEncoderParams{
    .degrees_per_encoder_tick{0.01F},
};

/**
 * @brief Params for the combining the relative encoder with the absolute
 * potentiometer
 *
 */
static constexpr CombinationSensor::Params kTillerAngleSensorParams{
    .max_drift_deg{2.0F},
};

} // namespace tiller::params