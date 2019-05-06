#include "circle.hpp"
#include "vec2.hpp"
#include "color.hpp"

circle::circle(){
    center = Vec2();
    radius = 1.0f;
    color = Color();
}

circle::circle(Vec2 v, float r, Color c){
    center = v;
    radius = r;
    color = c;
}

circle::circle(const circle& temp){
    center = temp.getCenter;
    radius = temp.getRadius;
    color = temp.getColor;
}

const Vec2& circle::getCenter(){
    return center;
}

float circle::getRadius(){
    return radius;
}

const Color& circle::getColor(){
    return color;
}