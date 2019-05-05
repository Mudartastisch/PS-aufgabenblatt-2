#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP
#include "vec2.hpp"

class rectangle
{
private:
    Vec2 min;
    Vec2 max;
    Vec2 topLeft;
    Vec2 bottomRight;
public:
    rectangle();
    rectangle(Vec2 min, Vec2 max);
    rectangle(const rectangle& temp);

    const Vec2& getMin();
    const Vec2& getMax();
};


#endif //RECTANGLE_HPP