#include<stdio.h>  
#include<graphics.h>  
void bressenhams(int x0, int y0, int x1, int y1)  
{  
    int dx, dy, p, x, y;  
    dx=x1-x0;  
    dy=y1-y0;  
    x=x0;  
    y=y0;  
    p=2*dy-dx;  
    while(x<x1)  
    {  
        if(p>=0)  
        {  
            putpixel(x,y,1);  
            y=y+1;  
            p=p+2*dy-2*dx;  
            delay(100);
        }  
        else  
        {  
            putpixel(x,y,1);  
            p=p+2*dy;}  
            x=x+1;  
            delay(100);
        }  
}  
int main()  
{  
    int gd=DETECT, gm;
	int x0, y0, x1, y1; 
	 
    initgraph (&gd, &gm, "C:\\Users\\franc\\OneDrive\\Escritorio\\Graficación\\Bressenhams");  
    printf("Introduce las coordenadas de primer punto:  ");  
    scanf("%d%d",&x0, &y0);  
    printf("Introduce las coordenadas de segundo punto:  ");  
    scanf("%d%d", &x1, &y1);
    //int x0 = 2, y0 = 2, x1 = 140, y1 = 160;  
    bressenhams(x0, y0, x1, y1);  
    return 0;  
} 

