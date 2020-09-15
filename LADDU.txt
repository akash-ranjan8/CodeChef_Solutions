#include<stdio.h>
#include<math.h>
typedef long long int lli;
int main() {
  int testcases;
  scanf("%d", &testcases);
  while(testcases--){
    int n,laddus=0;
    char s[20];
    scanf("%d %s", &n, &s);
    while(n--){
        char s1[20];
        scanf("%s", &s1);
        if(s1[8]=='W'){
            int x;
            scanf("%d", &x);
            if(x<20){
                laddus+=320-x;
            }
            else{
                laddus+=300;
            }
        }
        else if(s1[8]=='R'){
            laddus+=300;
        }
        else if(s1[8]=='H'){
            laddus+=50;
        }
        else{
            int y;
            scanf("%d", &y);
            if(y>=50 && y<=1000){
                laddus +=y;
            }
        }
    }

    if(s[0]=='N'){
        printf("%d\n", laddus/400);
    }
    else{
        printf("%d\n", laddus/200);
    }
  }
  return 0;
}

