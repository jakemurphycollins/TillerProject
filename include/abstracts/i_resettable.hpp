/*
 *   Copyright (c) 2025
 *   All rights reserved.
 */
#pragma once

namespace tiller
{

/**
 * @brief Resettable class with a settable initial state
 *
 * @tparam DataType Type of the initial state of the class
 */
template <typename DataType>
class IResettable
{
   public:
    /**
     * @brief Reset the state of the class to the initial state
     *
     * @param init_state Template typed initial state of the class
     */
    virtual void Reset(DataType init_state) = 0;
};

}  // namespace tiller