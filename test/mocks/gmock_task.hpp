/*
 *   Copyright (c) 2025
 *   All rights reserved.
 */
#pragma once
#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include "i_task.hpp"

namespace tiller
{
class MockTask : public ITask
{
   public:
    MOCK_METHOD(void, RunIfReady, (uint64_t), (override));
};
}  // namespace tiller