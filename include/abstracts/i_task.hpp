/*
 *   Copyright (c) 2025
 *   All rights reserved.
 */
#pragma once
#include <cstdint>

namespace tiller
{

class ITask
{
   public:
    virtual void RunIfReady(uint64_t current_tick) = 0;
};

}  // namespace tiller