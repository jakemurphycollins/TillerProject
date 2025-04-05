#pragma once
#include <algorithm>
#include <utility>

namespace tiller::utility {

template <typename DataType> class LinearMapping {
public:
  struct Params {
    std::pair<DataType, DataType> input_limits{0, 0};
    std::pair<DataType, DataType> output_limits{0, 0};
  };
  LinearMapping(Params params)
      : params_(params),
        slope_((params.output_limits.second - params.output_limits.first) /
               (params.input_limits.second - params.input_limits.first)),
        intercept_(params.output_limits.second -
                   (params.input_limits.second * this->slope_)) {}
  ~LinearMapping() = default;
  DataType Map(DataType input) {
    DataType output = (this->slope_ * input) + this->intercept_;
    return std::clamp<DataType>(output, this->params_.output_limits.first,
                                this->params_.output_limits.second);
  }

private:
  Params params_;
  DataType slope_;
  DataType intercept_;
};

} // namespace tiller::utility