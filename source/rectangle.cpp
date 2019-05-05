#include "rectangle.hpp"
#include "vec2.hpp"

rectangle::rectangle(){
    min = Vec2(0.0f,0.0f);
    max = Vec2(1.0f,1.0f);
    topLeft = Vec2(min.x, max.y);
    bottomRight = Vec2(max.x, min.y);
}

rectangle::rectangle(Vec2 min, Vec2 max){

}

rectangle::rectangle(const rectangle& temp){

}