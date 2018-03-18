#ifndef HELPER_H
#define HELPER_H

namespace nConstants
{
    const int HEIGHT     = 27;
    const int WIDTH      = 60;
    const bool GAMEOVER  = false;
    const int TANKHEIGHT = 3;
    const int TANKWIDTH  = 3;
    const int OBSTACLES  = 1;
    const int CLEARFIELD = 0;
//    int x;
//    int y;
}

namespace eNum
{
   enum Move{Stop = 0, Left, Right, Up, Down, Fire};
}
#endif // HELPER_H
