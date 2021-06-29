//Code by 6icada
//Please do not copy code

//Adding libraries
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Main function
int main(){
  //Adding vars
  char cmd[150];
  int x;

  //Choosing x
  printf("Enter x(192.160.x.1):  ");
  scanf("%d", &x);

  //Starting Action
  for(int y = 1; y < 256; y++){
    sprintf(cmd, "ping -c 1 192.168.%d.%d | grep \"64 bytes from\"", x, y);
    system(cmd);
  }
}
