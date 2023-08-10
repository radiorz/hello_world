#include <stdio.h>
#include <stdlib.h>
int main()
{
  int value = 0;
  scanf("%d", &value);
  printf("value %d\n", value);
  printf("Hello World!\n");
  printf("你好世界！\n");
  system("pause"); // 防止运行后自动退出，需头文件stdlib.h
  return 0;
}
