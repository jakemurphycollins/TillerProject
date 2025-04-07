/*
 *   Copyright (c) 2025
 *   All rights reserved.
 */
#pragma once
#include <algorithm>
#include <utility>

namespace tiller::utility
{

/**
 * @brief Generic linear mapping class
 *
 * @tparam DataType Data type used by the class
 */
template <typename DataType>
class LinearMapping
{
   public:
    /**
     * @brief Parameters that define the class's mapping
     *
     */
    struct Params
    {
        std::pair<DataType, DataType> input_limits{0, 0};
        std::pair<DataType, DataType> output_limits{0, 0};
    };

    /**
     * @brief Construct a new Linear Mapping object
     *
     * @param params Object specific parameters for how to map between the input
     * and output
     */
    LinearMapping(Params params)
        : params_(params),
          slope_((params.output_limits.second - params.output_limits.first) /
                 (params.input_limits.second - params.input_limits.first)),
          intercept_(params.output_limits.second -
                     (params.input_limits.second * this->slope_))
    {
    }

    /**
     * @brief Destroy the Linear Mapping object
     *
     */
    ~LinearMapping() = default;

    /**
     * @brief Map from the input range to the given output range
     *
     * @param input The input value to map
     * @return DataType The mapped output
     */
    DataType Map(DataType input)
    {
        DataType output = (this->slope_ * input) + this->intercept_;
        return std::clamp<DataType>(output, this->params_.output_limits.first,
                                    this->params_.output_limits.second);
    }

    DataType UnMap(DataType input)
    {
        DataType output = (input - this->intercept_) / this->slope_;
        return std::clamp<DataType>(output, this->params_.input_limits.first,
                                    this->params_.input_limits.second);
    }

   private:
    Params params_;       ///< Copy of the params for the class
    DataType slope_;      ///< Slope of the mapping
    DataType intercept_;  ///< Y-intercept of the mapping
};

}  // namespace tiller::utility