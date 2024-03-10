#include <stdio.h>

void gotoxy(int x, int y) {
  printf("\033[%d;%df", y, x);
}

void clear() {
  printf("\033[2J");
}

void draw_xy(int x, int y, unsigned char r, unsigned char g, unsigned char b) {
  gotoxy(x, y);
  printf("\033[48;2;%d;%d;%dm \033[0;00m", r, g, b);
}

#define R 0xff000000
#define G 0x00ff0000
#define B 0x0000ff00
#define A 0x000000ff

#define RGBA(r, g, b, a) (r << 24 | g << 16 | b << 8 | a)

int main() {
  int imagem[10][10] = {
    {RGBA(255, 0, 0, 255), RGBA(230, 25, 25, 255), RGBA(204, 51, 51, 255), RGBA(179, 76, 76, 255), RGBA(153, 102, 102, 255), RGBA(128, 128, 128, 255), RGBA(102, 153, 153, 255), RGBA(76, 179, 179, 255), RGBA(51, 204, 204, 255), RGBA(25, 230, 230, 255)},
    {RGBA(255, 25, 0, 255), RGBA(230, 51, 25, 255), RGBA(204, 76, 51, 255), RGBA(179, 102, 76, 255), RGBA(153, 128, 102, 255), RGBA(128, 153, 128, 255), RGBA(102, 179, 153, 255), RGBA(76, 204, 179, 255), RGBA(51, 230, 204, 255), RGBA(25, 255, 230, 255)},
    {RGBA(255, 51, 0, 255), RGBA(230, 76, 25, 255), RGBA(204, 102, 51, 255), RGBA(179, 128, 76, 255), RGBA(153, 153, 102, 255), RGBA(128, 179, 128, 255), RGBA(102, 204, 153, 255), RGBA(76, 230, 179, 255), RGBA(51, 255, 204, 255), RGBA(25, 255, 230, 255)},
    {RGBA(255, 76, 0, 255), RGBA(230, 102, 25, 255), RGBA(204, 128, 51, 255), RGBA(179, 153, 76, 255), RGBA(153, 179, 102, 255), RGBA(128, 204, 128, 255), RGBA(102, 230, 153, 255), RGBA(76, 255, 179, 255), RGBA(51, 255, 204, 255), RGBA(25, 255, 230, 255)},
    {RGBA(255, 102, 0, 255), RGBA(230, 128, 25, 255), RGBA(204, 153, 51, 255), RGBA(179, 179, 76, 255), RGBA(153, 204, 102, 255), RGBA(128, 230, 128, 255), RGBA(102, 255, 153, 255), RGBA(76, 255, 179, 255), RGBA(51, 255, 204, 255), RGBA(25, 255, 230, 255)},
    {RGBA(255, 128, 0, 255), RGBA(230, 153, 25, 255), RGBA(204, 179, 51, 255), RGBA(179, 204, 76, 255), RGBA(153, 230, 102, 255), RGBA(128, 255, 128, 255), RGBA(102, 255, 153, 255), RGBA(76, 255, 179, 255), RGBA(51, 255, 204, 255), RGBA(25, 255, 230, 255)},
    {RGBA(255, 153, 0, 255), RGBA(230, 179, 25, 255), RGBA(204, 204, 51, 255), RGBA(179, 230, 76, 255), RGBA(153, 255, 102, 255), RGBA(128, 255, 128, 255), RGBA(102, 255, 153, 255), RGBA(76, 255, 179, 255), RGBA(51, 255, 204, 255), RGBA(25, 255, 230, 255)},
    {RGBA(255, 179, 0, 255), RGBA(230, 204, 25, 255), RGBA(204, 230, 51, 255), RGBA(179, 255, 76, 255), RGBA(153, 255, 102, 255), RGBA(128, 255, 128, 255), RGBA(102, 255, 153, 255), RGBA(76, 255, 179, 255), RGBA(51, 255, 204, 255), RGBA(25, 255, 230, 255)},
    {RGBA(255, 204, 0, 255), RGBA(230, 230, 25, 255), RGBA(204, 255, 51, 255), RGBA(179, 255, 76, 255), RGBA(153, 255, 102, 255), RGBA(128, 255, 128, 255), RGBA(102, 255, 153, 255), RGBA(76, 255, 179, 255), RGBA(51, 255, 204, 255), RGBA(25, 255, 230, 255)},
    {RGBA(255, 230, 0, 255), RGBA(230, 255, 25, 255), RGBA(204, 255, 51, 255), RGBA(179, 255, 76, 255), RGBA(153, 255, 102, 255), RGBA(128, 255, 128, 255), RGBA(102, 255, 153, 255), RGBA(76, 255, 179, 255), RGBA(51, 255, 204, 255), RGBA(25, 255, 230, 255)}
  };

  // copia imagem original para imagem 2
  int imagem2[10][10];
  for (int x = 0; x < 10; x++) {
    for (int y = 0; y < 10; y++)
      imagem2[x][y] = imagem[x][y];
  }

  // copia imagem original para imagem 3
  int imagem3[10][10];
  for (int x = 0; x < 10; x++) {
    for (int y = 0; y < 10; y++) 
      imagem3[x][y] = imagem[x][y];
  }

  // imagem em branco
  int imagem4[10][10];
  for (int x = 0; x < 10; x++) {
    for (int y = 0; y < 10; y++) 
      imagem4[x][y] = 0xFFFFFFFF;
  }

  // Exercício 1
  unsigned char *pchar2 = (unsigned char *)imagem2;
  for (int i = 0; i < 100; i++)
    if ((i < 10) || (90 <= i && i <= 99) || (i % 10 == 0 || i % 10 == 9)) {
      for (int j = 1; j <= 2; j++)
        pchar2[j + 4 * i] = 0;
      pchar2[3 + 4 * i] = 0xff;
    }

  // Exercício 2
  unsigned char *pchar3 = (unsigned char *)imagem3;
  for (int i = 0; i < 100; i++)
  if (!(i % 11 && i % 9)) {
    for (int j = 2; j <= 3; j++)
      pchar3[j + 4 * i] = 0;
    pchar3[1 + 4 * i] = 0xff;
  }

  // Exercício 3
  pchar2 = (unsigned char *)imagem2;
  pchar3 = (unsigned char *)imagem3;
  unsigned char *pchar4 = (unsigned char *)imagem4;
  for (int i = 0; i < 100; i++) {
    if (!(i % 11 && i % 9)) {
      for (int j = 2; j <= 3; j++)
        pchar4[j + 4 * i] = 0;
      pchar4[1 + 4 * i] = 0xff;
    }
    if ((i < 10) || (90 <= i && i <= 99) || (i % 10 == 0 || i % 10 == 9)) {
      for (int j = 1; j <= 2; j++)
        pchar4[j + 4 * i] = 0;
      pchar4[3 + 4 * i] = 0xff;
    }
  }

  clear();
  gotoxy(1, 1);
  printf("Imagem original\n");
  int xoffset = 1, yoffset = 3;
  for (int x = 0; x < 10; x++) {
    for (int y = 0; y < 10; y++) {
      draw_xy(x + xoffset, y + yoffset, (imagem[x][y] & R) >> 24, (imagem[x][y] & G) >> 16, (imagem[x][y] & B) >> 8);
    }
  }

  gotoxy(25, 1);
  printf("Imagem 2 com quadrado vermelho\n");
  xoffset = 25, yoffset = 3;
  for (int x = 0; x < 10; x++) {
    for (int y = 0; y < 10; y++) {
      draw_xy(x + xoffset, y + yoffset, (imagem2[x][y] & R) >> 24, (imagem2[x][y] & G) >> 16, (imagem2[x][y] & B) >> 8);
    }
  }

  gotoxy(1, 14);
  printf("Imagem 3 com X azul\n");
  xoffset = 1, yoffset = 17;
  for (int x = 0; x < 10; x++) {
    for (int y = 0; y < 10; y++) {
      draw_xy(x + xoffset, y + yoffset, (imagem3[x][y] & R) >> 24, (imagem3[x][y] & G) >> 16, (imagem3[x][y] & B) >> 8);
    }
  }

  gotoxy(25, 14);
  printf("Imagem 4 com a sobreposição");
  gotoxy(25, 15);
  printf("da imagem 2 em imagem 3");
  xoffset = 25, yoffset = 17;
  for (int x = 0; x < 10; x++) {
    for (int y = 0; y < 10; y++) {
      draw_xy(x + xoffset, y + yoffset, (imagem4[x][y] & R) >> 24, (imagem4[x][y] & G) >> 16, (imagem4[x][y] & B) >> 8);
    }
  }
  printf("\n");
  return 0;
}