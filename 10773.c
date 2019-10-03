//Problem URL: https://www.acmicpc.net/problem/10773

# include <stdio.h>
# include <stdlib.h>

int main() {

    int num;
    scanf("%d", &num);
    int* list = (int*)malloc(sizeof(int)*num);  //allocated memory(based on loop)

    int i, temp,sum=0;
    int top = 0;
    for (i = 0; i < num; i++) {
        scanf("%d", &temp);
        if (temp != 0) 
            list[top++] = temp;
        else list[top--];
    }

    for (i = 0; i < top; i++) {
        sum += list[i];
    }
    printf("%d", sum);
    free(list);
}
