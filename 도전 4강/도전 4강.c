#include<stdio.h>
int main(void)
{
  int weight;
  double height;
  printf("������(kg)�� Ű(cm)�Է�:");
  scanf("%d%lf", &weight, &height);
  double BMI;
  height /=100;
  BMI = weight / (height*height);
  printf("%s\n", (20.0<=BMI)&&(BMI<25.0) ? "ǥ���Դϴ�." : "ü�߰����� �ʿ��մϴ�.");

  return 0;
}