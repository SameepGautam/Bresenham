#include<iostream>
using namespace std;
#include <graphics.h>
void lineBres(int xa,int ya,int xb,int yb)
{

    int dx=abs(xa-xb), dy=abs(ya-yb);
    int p=2*dy -dx;
    int twoDy=2*dy, twoDyDx= 2*(dy-dx);
    int x,y,xEnd;
    if(xa>xb)
	{
        x=xb;
        y=yb;
    }
    else
    {
        x=xa;
        y=ya;
        xEnd=xb;
    }
    putpixel(x,y,1);
    while(x<xEnd)
    {
        x++;
        if(p<0)
            p+=twoDy;
        else
        {
            y++;
            p+=twoDyDx;
        }
        putpixel(x,y,7);
    }
}
int main()
{
    int xa,ya,xb,yb;
    cout<<"Breshenham line drawing algorithm by Sameep Gautam "<<endl;
    cout<<"Enter the value of x1 and y1: ";
    cin>>xa>>ya;
    cout<<endl<<"Enter the value of x2 and y2: ";
    cin>>xb>>yb;
    initwindow(400,400,"First Sample");
    lineBres(xa,ya,xb,yb);
    while (!kbhit( ))
    {
        delay(200);
    }
}
