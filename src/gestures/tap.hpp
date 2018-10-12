#pragma once

#include <chrono>

#include <gesture.hpp>

class Tap : public Gesture {
 public:
  Tap(const std::shared_ptr<TouchPoint>& tp,
      GestureState state = GestureState::POSSIBLE);

  const std::shared_ptr<TouchPoint> touch_point() const;

  double time_finished() const override;
};
