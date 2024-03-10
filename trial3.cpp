#include <graphics.h>
#include <stdio.h>

int main()
{
    int gd = DETECT, gm, i, a;
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

    int x1, y1, x2, y2;
    x1 = 50;
    y1 = 100;
    x2 = 550;
    y2 = 400;

    // player1
    int xp1, yp1;

    // player2
    int xp2, yp2;

    // ball
    int xb1, yb1;

    int time = -500;
    bool stop = false;

    while (time<1000)
    {
        rectangle(x1, y1, x2, y2);

        setfillstyle(SOLID_FILL, GREEN);
        floodfill(55, 380, 15);

        rectangle(x1 + 10, ((y1 + y2) / 2) - 30, x1 - 10, ((y1 + y2) / 2) + 30);
        rectangle(x2 + 10, ((y1 + y2) / 2) - 30, x2 - 10, ((y1 + y2) / 2) + 30);
        line((x1 + x2) / 2, y1, (x1 + x2) / 2, y2);
        circle((x1 + x2) / 2, (y1 + y2) / 2, 15);

        if(time<=0)
        {
            xp1 = x1 + 20;
            yp1 = (y1 + y2) / 2;

            xp2 = x2 - 20;
            yp2 = (y1 + y2) / 2;

            xb1 = xp1 + 500+time;
            yb1 = (y1 + y2) / 2;

            if(xb1>x2)
                xb1=x2;


        }

        else if (time <= 500)
        {
            xp1 = x1 + 20 +time;
            if(xp1>(x1+x2)/2 - 20)
            {
                xp1=(x1+x2)/2 - 20;
            }
            yp1 = (y1 + y2) / 2;

            xp2 = x2 - 20;
            yp2 = (y1 + y2) / 2;

            xb1 = (x1 + x2) / 2;
            yb1 = (y1 + y2) / 2;
        }

        else if (time <= 1000)
        {
            xp1 = x1 + 20;
            yp1 = (y1 + y2) / 2;

            xp2 = (x1+x2)/2 - 20 ;
            yp2 = (y1 + y2) / 2;

            
            xb1 = ((x1 + x2) / 2) + (time-500);
            yb1 = ((y1 + y2) / 2) + (time-500);

            if(yb1 > y2)
            {
                yb1 = y2;
                xb1 = ((x1 + x2) / 2) + 150;
            }

            if(yp2 > y2)
            {
                yp2 = y2;
                xp2 = ((x1 + x2) / 2) + 130;
            }
            
            

        }

        // player
        circle(xp1, yp1, 20); // red
        
        circle(xp2, yp2, 20);

        // ball
        circle(xb1, yb1, 20); // yellow

        time++;
        delay(10);
        cleardevice();
    }

    

    getch();
    closegraph();
}