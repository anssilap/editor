//
// Created by anssi on 14.4.2022.
//

#ifndef EDITOR_COLOR_H
#define EDITOR_COLOR_H

struct color {
    float r = 1;
    float g = 0;
    float b = 1;
    float a = 0;
};

//color color_from_int(int number) {
//}

color color_from_ints(int r, int g, int b, int a) {
    color c;
    c.r = r / 255.0;
    c.g = g / 255.0;
    c.b = b / 255.0;
    c.a = a / 255.0;
    return c;
}



#endif //EDITOR_COLOR_H
