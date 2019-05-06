#include "circle.hpp"
#include "vec2.hpp"
#include "color.hpp"
#include "mat2.hpp"
#include <cmath>
#include <GLFW/glfw3.h>
#include <utility>

#include <iostream>

Circle::Circle(){
    center = Vec2();
    radius = 1.0f;
    color = Color();
}

Circle::Circle(Vec2 v, float r, Color c){
    center = v;
    radius = r;
    color = c;
}

float Circle::getRadius(){
    return radius;
}

void Circle::draw(Window const& win){
    Vec2 point1 = {center.x, center.y - radius};
    Mat2 rota;
    Vec2 ZP;
    Vec2 OQ;
    Vec2 OZ = {400.0f, 400.0f};
    Vec2 point2;
    float degree = 10.0f;

    for( float a = 0.0; a < 360.0f; a = a + degree ){
        ZP = operator-(point1, OZ);
        rota = make_rotation_mat2(degree * (2 * M_PI / 360));
        OQ = operator*(ZP, rota); 
        point2 = operator+(OQ, OZ); 
        win.draw_line(point1.x, point1.y, point2.x, point2.y, color.r + (0.05f * a) , color.g, color.b + (0.05f * a));
        point1 = {point2.x, point2.y};
    }    

}