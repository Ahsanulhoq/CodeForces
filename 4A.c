#include<stdio.h>
int main(){
for(int i=0; ;i++){
            //printf("Enter an integer from 1 to 100=");
        int a;

        scanf("%d",&a);
        if(a>=1&&a<=100){
            if(a!=2&&a%2==0)
            {
                printf("YES");
                break;

            }
            else{
                printf("NO");
                break;
            }
        }
        else{
            printf("Wrong input\n");
         continue;
        }
      }
        return 0;
        }
