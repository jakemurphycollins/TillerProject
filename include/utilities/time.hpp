/*
 *   Copyright (c) 2025
 *   All rights reserved.
 */
#pragma once
#include <chrono>
#include <cstdint>

namespace tiller
{

static uint64_t millis()
{
    return std::chrono::duration_cast<std::chrono::milliseconds>(
               std::chrono::high_resolution_clock::now().time_since_epoch())
        .count();
}

}  // namespace tiller