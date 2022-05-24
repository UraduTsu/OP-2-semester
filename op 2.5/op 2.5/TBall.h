#pragma once
#include "TBody.h"
class TBall :
    public TBody
{
    double radius;
public:
    TBall(double radius);
    double findVolume() override;
    double findArea() override;
    double getRadius();
    void infoOutput() override;
};