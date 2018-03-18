#include <iostream>
#include <stdio.h>
#include <field.h>
#include <time.h>
#include <tank.h>
#include <helper.h>
#include <conio.h>
#include <windows.h>

using namespace std;


int main()
{
    Field obj_Field;
    Tank obj_Tank(obj_Field);

    while(false == obj_Field.getGameOver())
    {
      obj_Field.DrawField();
      obj_Tank.DrawTank();
      obj_Tank.Control(obj_Field);
      obj_Tank.Motion();
    }
    //obj_Field.DrawField();
    //obj_Tank.DrawTank();
    return 0;
}



