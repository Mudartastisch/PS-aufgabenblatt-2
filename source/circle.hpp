#ifndef CIRCLE_HPP
#define CIRCLE_HPP
#include "vec2.hpp"
#include "color.hpp"

class circle
{
private:
    Vec2 center;
    float radius;
    Color color;
public:
    circle();
    circle(Vec2 v, float r, Color c);
    circle(const circle& temp);

    const Vec2& getCenter();
    float getRadius();
    const Color& getColor();
};

#endif //CIRCLE_HPP