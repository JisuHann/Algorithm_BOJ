#include <stdio.h>
#include <string.h>

int check_marking(char list[]){
    int a = strlen(list);
    char check;
    int top =0;
    for(int j = 0;j<a;j++){
        check = list[j];
        switch(check){
            case '(':
                top++;
                break;
            case ')':
                top--;
                if(top<0){
                    return 0;
                }
                break;
        }        
    }
    if(top != 0)
        return 0;
    return 1;
}


int main(void){
    int num;
    scanf("%d", &num);
    for(int i =0;i<num;i++){
        char a[50]={0,};
        scanf("%s\n", &a);
        if(check_marking(a) == 1){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
    }
}
