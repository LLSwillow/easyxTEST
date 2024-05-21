#include<iostream>
#include<graphics.h>
using namespace std;
void draw(){
    initgraph(400,400);
    setbkcolor(RGB(100,52,63));
    cleardevice();

    for(int i=0;i<=400;i+=20)
    {
        line(0,i,400,i);
        line(i,0,i,400);
    }
    while(1);
    closegraph();
}
int main()
{
    draw();
    return 0;
}