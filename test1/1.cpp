#include <iostream>
#include <graphics.h>
using namespace std;
int main()
{
    initgraph(800, 500, 1); // 1表示显示控制台
    //int x = 10, y = 20;
    //cout << x << " " << y;
    setbkcolor(RED);
    setbkcolor(RGB(134, 82, 234));
    cleardevice();

    line(0,0,100,100);
    circle(200,200,100);
    rectangle(0,0,200,200);
    setfillcolor(YELLOW);
    fillcircle(200,200,100);
    solidrectangle(200,200,500,500);

    
    while (1)
        ; // 防止闪屏
    closegraph();
    return 0;
}