/*
 *   Copyright (c) 2025
 *   All rights reserved.
 */
#pragma once
#include <chrono>
#include <cstdint>

namespace tiller
{

/**
 * @brief Returns the current time in millis
 *
 * @return uint64_t Time in milliseconds
 */
static uint64_t millis()
{
    return std::chrono::duration_cast<std::chrono::milliseconds>(
               std::chrono::high_resolution_clock::now().time_since_epoch())
        .count();
}

}  // namespace tiller