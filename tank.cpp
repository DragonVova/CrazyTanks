#include <iostream>
#include "tank.h"
#include "field.h"
#include "helper.h"
#include <windows.h>
#include <conio.h>

Tank::Tank(const Field &field) :
      Move                 (eNum::Stop)
    , mTankWidth  (nConstants::TANKWIDTH)
    , mTankHeight (nConstants::TANKHEIGHT)
    , mFieldWidth (nConstants::WIDTH)
    , mFieldHeight (nConstants::HEIGHT)
{
//    for(int i = 0 ; i < nConstants::HEIGHT; ++i)
//    {
//        for (int j = 0; j < nConstants::WIDTH; ++j)
//        {
//            if(0 == j ||
//               j == nConstants::WIDTH - 1 ||
//               0 == i ||
//               i == nConstants::HEIGHT - 1 )
//            {
//                mTank[i][j] = nConstants::OBSTACLES;
//            }
//            else
//            {
//                mTank[i][j] = nConstants::CLEARFIELD;
//            }
//        }
//    }
}

void Tank::UpdateTankCursor(int x, int y)
{

    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}


void Tank::DrawTank()
{
   //Create gun
    UpdateTankCursor(0, 0);
    for(int i=0; i<mFieldHeight; ++i)
    {
        for(int k=0; k<=mFieldWidth; ++k)
        {
            if (i == mTankHeight && k == mTankWidth)
            {
                std::cout<<"@";
            }
            else std::cout<<" ";
        }
        std::cout<<std::endl;
    }

}

int Tank::getTankWidth() const
{
    return mTankWidth;
}

int Tank::getTankHeight() const
{
    return mTankHeight;
}


void Tank::Control(const Field& field)
{
    if (_kbhit())
    {
        switch (_getch())
        {
        case 75:
            Move = (eNum::Left);
          //  isMove = field.check(--mTankHeight, mTankWidth);
            break;
        case 77: Move = (eNum::Right); break;
        case 80: Move = (eNum::Down); break;
        case 72: Move = (eNum::Up); break;
        case 32: Move = (eNum::Fire);break;
        default: break;
        }
    }
}

void Tank::Motion()
{

    switch(Move)
    {
    case (eNum::Up): mTankHeight--;break;
    case (eNum::Down): mTankHeight++;break;
    case (eNum::Left): mTankWidth--;break;
    case (eNum::Right): mTankWidth++;break;
    case (eNum::Fire):  ;break;
    default: break;
    }

    Move = eNum::Stop;
}
