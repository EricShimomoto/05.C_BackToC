#include<windows.h>

int WINAPI WinMain(HINSTANCE hInst, HINSTANCE hPrevInst, LPSTR args, int ncmdshow)
{
    MessageBox(NULL, "Hello World","My First GUI", MB_OKCANCEL);
    return 0;

}