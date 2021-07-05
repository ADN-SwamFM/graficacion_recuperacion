 #include <winbgim.h>

 // definicion de constantes
 const int TAM_VEN_X = 700;
 const int TAM_VEN_Y = 700;
 const int RADIO_CIRCULO = 10;

 using namespace std;

 int main() {

  int tecla, clr;

  int maxx = TAM_VEN_X, maxy = TAM_VEN_Y, posx, posy;

  bool fin = false;

  posx = maxx / 2;
  posy = maxy / 2;

  // inicializacion de modo grafico
  initwindow(maxx, maxy);
  clr = getcolor();

  do
  {

        setcolor(clr);
        circle(posx, posy, RADIO_CIRCULO);

        tecla = getch();

        setcolor(getbkcolor());
        circle(posx, posy, RADIO_CIRCULO);

        switch(tecla)
        {
          case 0:
            switch(getch())
            {
              case KEY_UP: // hacia arriba
                 posy = (posy + (maxy - RADIO_CIRCULO)) % maxy;
                 break;
              case KEY_LEFT: // hacia la izquierda
                 posx = (posx + (maxx - RADIO_CIRCULO)) % maxx;
                 break;
              case KEY_RIGHT: // hacia la derecha
                 posx = (posx + RADIO_CIRCULO) % maxx;
                 break;
              case KEY_DOWN: // hacia abajo
                 posy = (posy + RADIO_CIRCULO) % maxy;
                 break;
            }
            break;
          case 27: // tecla ESC
             fin = true;
             break;
        }

  }  while (!fin);

  closegraph();

  return 0;
 }
