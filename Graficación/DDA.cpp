// DDA
#include<graphics.h> 
   
int abs (int n) 
{ 
    return ( (n>0) ? n : ( n * (-1))); 
} 
  

void DDA(int X0, int Y0, int X1, int Y1) 
{ 

    int dx = X1 - X0; 
    int dy = Y1 - Y0; 
  
    int steps = abs(dx) > abs(dy) ? abs(dx) : abs(dy); 
  
  
    float Xinc = dx / (float) steps; 
    float Yinc = dy / (float) steps; 
  
     
    float X = X0; 
    float Y = Y0; 
    for (int i = 0; i <= steps; i++) 
    { 
        putpixel (X,Y,RED);  
        X += Xinc;            
        Y += Yinc;           
        delay(100);           
    
    } 
} 
  
int main() 
{ 
    int gd = DETECT, gm; 
  	int x0, y0, x1, y1;
  	
    // inicia la funcion de graphics
    
    initgraph (&gd, &gm, "");    
  	printf("Introduce las coordenadas de primer punto:  ");  
    scanf("%d%d",&x0, &y0);  
    printf("Introduce las coordenadas de segundo punto:  ");  
    scanf("%d%d", &x1, &y1);
    
    //int x0 = 2, y0 = 2, x1 = 14, y1 = 16; 
    DDA(x0, y0, x1, y1); 
    return 0; 
}  
