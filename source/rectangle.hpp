#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP
#include "vec2.hpp"
#include "color.hpp"

class rectangle
{
private:
    Vec2 min;
    Vec2 max;
    Vec2 topLeft;
    Vec2 bottomRight;
    Color color;
public:
    rectangle();
    rectangle(Vec2 min_, Vec2 max_, Color c);
    rectangle(const rectangle& temp);

    const Vec2& getMin();
    const Vec2& getMax();
    const Color& getColor();
};


#endif //RECTANGLE_HPP