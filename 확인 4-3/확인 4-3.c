#include<stdio.h>
int main(void)
{
  int hour, min, sec;
  double time = 3.76;
  hour=(int)time;
  //time-=hour
  //time*=60
  //min=(int)time
  min = (int)((time - hour) * 60);
  //time-=min
  //time*=60
  //sec=(int)time
  sec = (int)(((time - hour) * 60 - min)*60);
  printf("3.76�ð���%d�ð� %d�� %d���Դϴ�.\n", hour, min, sec);
  return 0;
}