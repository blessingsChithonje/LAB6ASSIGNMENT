#include "Triangle.h"

namespace shapes
{
    Triangle::Triangle() : baseOfTriangle(0.00), hieghtOfTriangle(0.00)
    {
    }
    Triangle::Triangle(float base, float hieght) : baseOfTriangle(base), hieghtOfTriangle(hieght)
    {
    }
    Triangle::~Triangle()
    {
    }

    void Triangle::setBase(float base)
    {
        baseOfTriangle = base;
    }
    void Triangle::setHieght(float hiegth)
    {
        hieghtOfTriangle = hiegth;
    }

    float Triangle::getBase()
    {
        return baseOfTriangle;
    }
    float Triangle::getHieght()
    {
        return hieghtOfTriangle;
    }
}