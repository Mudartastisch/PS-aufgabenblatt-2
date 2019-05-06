#ifndef CIRCLE_HPP
#define CIRCLE_HPP
#include "vec2.hpp"
#include "color.hpp"
#include "window.hpp"

class Circle
{
private:
    Vec2 center;
    float radius;
    Color color;
public:
    Circle();
    Circle(Vec2 v, float r, Color c);

    float getRadius();

    void draw(Window const& win);
};

#endif //CIRCLE_HPP