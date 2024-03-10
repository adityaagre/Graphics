#include <graphics.h>
#include <stdio.h>
  

int main()
{
    int gd = DETECT, gm, i, a;
  
   
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
  
    
    for (i = 0; i < 600; i++) {

        int height1 = 700 - i ; 
        int height1_lim = 250;
    
    printf("Rocket");
    
     line(0, 436, getmaxx(), 436);
     
   
    
    if(i<330)
    {
    line(50 + i, 405, 100 + i, 405);
        line(75 + i, 375, 125 + i, 375);
        line(50 + i, 405, 75 + i, 375);
        line(100 + i, 405, 100 + i, 345);
        line(150 + i, 405, 100 + i, 345);
        line(75 + i, 345, 75 + i, 370);
        line(70 + i, 370, 80 + i, 370);
        line(80 + i, 345, 100 + i, 345);
  
        
        circle(150 + i, 405, 30);
        circle(50 + i, 405, 30);
        
        rectangle(60+i, 370, 70+i, 350);
        
    }
    
    else if(i >= 330 && height1 >= height1_lim )
    {
    
    
       
       line(50 + 330, 405, 100 + 330, 405);
        line(75 + 330, 375, 125 + 330, 375);
        line(50 + 330, 405, 75 + 330, 375);
        line(100 + 330, 405, 100 + 330, 345);
        line(150 + 330, 405, 100 + 330, 345);
        line(75 + 330, 345, 75 + 330, 370);
        line(70 + 330, 370, 80 + 330, 370);
        line(80 + 330, 345, 100 + 330, 345);
  
        
        circle(150 + 330, 405, 30);
        circle(50 + 330, 405, 30);
        
        int height_change = i - 330;
        
         rectangle(390, 370 - height_change, 400, 350- height_change);
        
        
        }
        
       
        

  
       
       
  
       
       // rectangle(getmaxx() - i, 436,650 - i, 431);
                  
        
        
/*    rectangle(400,436, 425,400);
    
    int height = i-330;
    int x1 = 330;
    
    
    if(i+50 < 380)
    {
    rectangle(i, 375, i+50, 436);
    }
    
    
    
    else if((i >= x1) && (height < 60))
    {
    rectangle(330, 375-height, 380, 436-height);
    }
    
    else if(())
    
   */
   
        
        
        
        
        
        
       
        delay(20);
  
        
        cleardevice();
        
        
    }
    
    
  
    getch();
  
    
    closegraph();
}
