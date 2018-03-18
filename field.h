#ifndef FIELD_H
#define FIELD_H


#include "helper.h"
class Field
{
public:
    Field();
    void DrawField();
    void UpdateFieldCursor(int x, int y);
    bool getGameOver() const;
    int getWidth() const;
    int getHeight() const;

private:
    int mField[nConstants::HEIGHT][nConstants::WIDTH];
    const int mHeight;
    const int mWidth;
    bool GameOver;
};

#endif // FIELD_H
