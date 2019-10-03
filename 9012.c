
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char arr[51];
    int point;
    int i;
    int N;
    int it;
    int reset;
    point = 0;

    scanf("%d",&N);
    for(it = 0; it<N; it++){
        scanf("%s",&arr);

        for(i = 0; i<50; i++){
            if(arr[i] == '('){
                point++;
            }
            else if(arr[i] == ')'){
                point--;
                if(point <0){
                    printf("NO\n");
                    break;
                }
            }
        }
        if(point >0){
            printf("NO\n");
        }
        else if(point == 0){
            printf("YES\n");
            }

        for(reset = 0; reset<50;reset++){
                arr[reset] = 0;
            }
        point = 0;
    }
}

