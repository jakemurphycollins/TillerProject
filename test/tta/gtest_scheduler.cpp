/*
 *   Copyright (c) 2025
 *   All rights reserved.
 */
#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <cstddef>
#include <cstdint>

#include "gmock_task.hpp"
#include "tiller_params.hpp"
#include "time.hpp"
#include "tta/scheduler.hpp"

namespace tiller
{

using testing::_;
using testing::AtLeast;

class SchedulerTest : public testing::Test
{
   protected:
    void SetUp() {}
};

TEST_F(SchedulerTest, when_addingTask_excpect_pass)
{
    MockTask mock_task;
    Scheduler scheduler{0};
    EXPECT_TRUE(scheduler.AddTask(mock_task));
}

TEST_F(SchedulerTest, when_numberOfTaskExceedLimit_expect_lastAdditionToFail)
{
    MockTask mock_task;
    Scheduler scheduler{0};
    for(unsigned i = 0; i < params::kMaxNumTasks; i++)
    {
        EXPECT_TRUE(scheduler.AddTask(mock_task));
    }
    EXPECT_FALSE(scheduler.AddTask(mock_task));
}

TEST_F(SchedulerTest, when_tickFrequencyIs10ms_expect_taskRuns4TimesIn40Ms)
{
    static constexpr size_t kTickPeriodMs{10};
    static constexpr size_t kExpectedNumCalls{4};
    MockTask mock_task;
    Scheduler scheduler{kTickPeriodMs};
    scheduler.AddTask(mock_task);
    EXPECT_CALL(mock_task, RunIfReady(_))
        .Times(AtLeast(kExpectedNumCalls + 1));  // One extra for start
    scheduler.Start();
    auto start_time = millis();
    // Run for at least one extra period in case test isn't in sync with the
    // class
    while((kExpectedNumCalls + 1) * kTickPeriodMs > millis() - start_time)
    {
        scheduler.Dispatch();
    }
}

};  // namespace tiller