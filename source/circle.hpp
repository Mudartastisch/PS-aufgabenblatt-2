#ifndef CIRCLE_HPP
#define CIRCLE_HPP
#include "vec2.hpp"

class circle
{
private:
    Vec2 center;
    float radius;
public:
    circle();
    circle(Vec2 c, float r);
    circle(const circle& temp);

    const Vec2& getCenter();
    float getRadius();
};

#endif //CIRCLE_HPP