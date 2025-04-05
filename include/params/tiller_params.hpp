#pragma once
#include "encoder_sensor.hpp"
#include "linear_mapping.hpp"
#include <utility>

namespace tiller::params {

static constexpr utility::LinearMapping<float>::Params
    kPotentiometerMappingParams{
        .input_limits{0.0F, 5.0F},
        .output_limits{-90.0F, 90.0F},
    };

static constexpr EncoderSensor::Params kTillerEncoderParams{
    .degrees_per_encoder_tick{0.01F},
};

} // namespace tiller::params