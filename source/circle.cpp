#include "circle.hpp"
#include "vec2.hpp"

circle::circle(){
    center = Vec2(0.0f,0.0f);
    radius = 1.0f;
}

circle::circle(Vec2 c, float r){
    center = c;
    radius = r;
}

circle::circle(const circle& temp){
    center = temp.getCenter;
    radius = temp.getRadius;
}

const Vec2& circle::getCenter(){
    return center;
}

float circle::getRadius(){
    return radius;
}