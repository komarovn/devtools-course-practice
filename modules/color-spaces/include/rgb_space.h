// Copyright 2017 Nesterov Alexander
#ifndef MODULES_COLOR_SPACES_INCLUDE_RGB_SPACE_H_
#define MODULES_COLOR_SPACES_INCLUDE_RGB_SPACE_H_
#include <algorithm>

class RGBSpace {
 private:
    uint8_t red;
    uint8_t green;
    uint8_t blue;
    void swap(RGBSpace &rgb_space);

 public:
    RGBSpace(): red(0), green(0), blue(0) {}
    RGBSpace(const uint8_t red_, const uint8_t green_, const uint8_t blue_);
    RGBSpace(const RGBSpace &rgb_space);

    RGBSpace& operator=(const RGBSpace &rgb_space);

    uint8_t GetRed() const;
    uint8_t GetGreen() const;
    uint8_t GetBlue() const;
    void SetRed(const uint8_t red_);
    void SetGreen(const uint8_t green_);
    void SetBlue(const uint8_t blue_);
};

#endif  // MODULES_COLOR_SPACES_INCLUDE_RGB_SPACE_H_
