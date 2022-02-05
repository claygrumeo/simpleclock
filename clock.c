#include <stdio.h>
#include <windows.h>
#include <time.h>

int main () {

  int delay = 1000;
  int h, m, s;

  time_t seconds;
  struct tm *timeStruct;

  seconds = time(NULL);
  timeStruct = localtime(&seconds);

  h = timeStruct->tm_hour;
  m = timeStruct->tm_min;
  s = timeStruct->tm_sec;

  while(1) {
    system("cls");

    s++;
    if (s > 59) {
      m++;
      s = 0;
    }

    if (m > 59) {
      h++;
      m = 0;
    }

    if (h > 12) {
      h = 1;
    }

    printf("------------\n");
    printf("| %02d:%02d:%02d |\n", h, m, s);
    printf("------------\n");
    Sleep(delay);
  }
}

