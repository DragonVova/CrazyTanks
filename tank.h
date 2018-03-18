#ifndef TANK_H
#define TANK_H

#include "field.h"

class Tank
{
public:
    Tank(const Field &field);

    void DrawTank();
    void UpdateTankCursor(int x, int y);
    void Control(const Field &field);
    void Motion();
    int Move;
    int getTankWidth() const;
    int getTankHeight() const;
    int mTankWidth;
    int mTankHeight;
private:
    const int mFieldWidth;
    const int mFieldHeight;
    int mTank[nConstants::TANKHEIGHT][nConstants::TANKWIDTH];

};

#endif // TANK_H
