
#include <graphics.h>  

   
int main()   
{  
          int gd = DETECT, gm;  
          int i, x, y, flag=0;  
          initgraph(&gd, &gm, "C:\\TC\\BGI");  
   
         x = getmaxx()/2;  
         y = 30;  
        while (!kbhit())   
      {  
            if(y >= getmaxy()-30 || y <= 30)  
           flag = !flag;  
           /* draws the gray board */  
           setcolor(RED);  
           setfillstyle(SOLID_FILL, RED);  
           circle(x, y, 30);  
           floodfill(x, y, RED);  
   
          delay(50);   
          cleardevice();  
          if(flag) 
		  {  
           y = y + 5;  
      }   
          else  
     {  
          y = y - 5;  
      }  
  }  
   
    getch();  
    closegraph();  
    return 0;   
    
    
}
