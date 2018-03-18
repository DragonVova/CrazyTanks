#include <iostream>
#include "field.h"
#include "tank.h"
#include <windows.h>

Field::Field() :
    mHeight(nConstants::HEIGHT)
  , mWidth(nConstants::WIDTH)
  , GameOver(nConstants::GAMEOVER)
{
    for(int i = 0 ; i < nConstants::HEIGHT; ++i)
    {
        for (int j = 0; j < nConstants::WIDTH; ++j)
        {
            if(0 == j ||
               j == nConstants::WIDTH - 1 ||
               0 == i ||
               i == nConstants::HEIGHT - 1 )
            {
                mField[i][j] = nConstants::OBSTACLES;
            }
            else
            {
                mField[i][j] = nConstants::CLEARFIELD;
            }
        }
    }
}

void Field::UpdateFieldCursor(int x, int y)
{
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

bool Field::getGameOver() const
{
    return GameOver;
}



void Field::DrawField()
{
    UpdateFieldCursor(0,0);
//    for(int i=0; i<mWidth; ++i)
//    {
//        mField[0][i] = nConstants::OBSTACLES;//+
//        std::cout << mField[0][i];
//    }
//    std::cout<<std::endl;


//    for(int i=0; i<mHeight-1; i++)
//    {
//        for(int k=0; k<mWidth; ++k)
//        {
//            if (k == 0 || k == mWidth-1)
//                std::cout<<"#";
//            std::cout<<" ";
//        }
//        std::cout<<std::endl;
//    }


//    for(int i=0; i<mWidth; ++i)
//    {
//        mField[nConstants::WIDTH][i] = nConstants::OBSTACLES;
//        std::cout << i;
//    }
//    std::cout<<std::endl;
    for(int i = 0 ; i < nConstants::HEIGHT; ++i)
    {
        for (int j = 0; j < nConstants::WIDTH; ++j)
        {
            if(mField[i][j] == nConstants::OBSTACLES)
                std::cout << "#";
            else
                std::cout << " ";
        }
        std::cout<<std::endl;
    }
}

int Field::getWidth() const
{
    return mWidth;
}

int Field::getHeight() const
{
    return mHeight;
}


