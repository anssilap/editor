//
// Created by anssi on 14.4.2022.
//

#ifndef EDITOR_COLOR_H
#define EDITOR_COLOR_H

#include <sstream>

struct color {
    float r;
    float g;
    float b;
    float a;
};

enum colors {
    cornflower_blue = 6591981
};

color color_with_alpha_from_int(int number) {
    color result;
    result.r = ((number >> 24) & 0xFF) / 255.0f;
    result.g = ((number >> 16) & 0xFF) / 255.0f;
    result.b = ((number >> 8) & 0xFF) / 255.0f;
    result.a = (number & 0xFF) / 255.0f;
    return result;
}

color color_with_full_alpha_from_int(int number) {
    color result;
    result.r = ((number >> 16) & 0xFF) / 255.0f;
    result.g = ((number >> 8) & 0xFF) / 255.0f;
    result.b = (number & 0xFF) / 255.0f;
    return result;
}

color color_with_full_alpha_from_hex_string(std::string hex_string) {
    unsigned int int_from_hex;
    std::stringstream ss;
    ss << std::hex << hex_string;
    ss >> int_from_hex;

    return color_with_full_alpha_from_int(int_from_hex);
}

color color_with_alpha_from_hex_string(std::string hex_string) {
    unsigned int int_from_hex;
    std::stringstream ss;
    ss << std::hex << hex_string;
    ss >> int_from_hex;

    return color_with_alpha_from_int(int_from_hex);
}

color color_from_ints(int r, int g, int b, int a) {
    color result;
    result.r = r / 255.0;
    result.g = g / 255.0;
    result.b = b / 255.0;
    result.a = a / 255.0;
    return result;
}



#endif //EDITOR_COLOR_H
