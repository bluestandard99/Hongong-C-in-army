#include<stdio.h>
int main(void)
{
  int weight;
  double height;
  printf("몸무게(kg)와 키(cm)입력:");
  scanf("%d%lf", &weight, &height);
  double BMI;
  height /=100;
  BMI = weight / (height*height);
  printf("%s\n", (20.0<=BMI)&&(BMI<25.0) ? "표준입니다." : "체중관리가 필요합니다.");

  return 0;
}