/*
 *   Copyright (c) 2025
 *   All rights reserved.
 */
#pragma once
#include <utility>

#include "combination_sensor.hpp"
#include "encoder_sensor.hpp"
#include "linear_mapping.hpp"


namespace tiller::params
{

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

static constexpr size_t kMaxNumTasks{
    1};  ///< Number of tasks the scheduler can hold

}  // namespace tiller::params