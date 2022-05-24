#pragma once
#include "TBody.h"
class TParallelepiped :
    public TBody
{
    double height;
    double length;
    double width;
public:
    TParallelepiped(double height, double length, double width);
    double findArea() override;
    double findVolume() override;
    double getHeight();
    double getLength();
    double getWidth();
    void infoOutput() override;
};