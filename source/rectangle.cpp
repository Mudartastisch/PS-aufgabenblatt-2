#include "rectangle.hpp"
#include "vec2.hpp"

rectangle::rectangle(){
    min = Vec2(0.0f,0.0f);
    max = Vec2(1.0f,1.0f);
    topLeft = Vec2(min.x, max.y);
    bottomRight = Vec2(max.x, min.y);
}

rectangle::rectangle(Vec2 min_, Vec2 max_){
    min = min_;
    max = max_;
    topLeft = Vec2(min.x, max.y);
    bottomRight = Vec2(max.x, min.y);
}

rectangle::rectangle(const rectangle& temp){
    min = temp.getMin;
    max = temp.getMax;
    topLeft = Vec2(min.x, max.y);
    bottomRight = Vec2(max.x, min.y);
}

const Vec2& rectangle::getMin(){
    return min;
}

const Vec2& rectangle::getMax(){
    return max;
}