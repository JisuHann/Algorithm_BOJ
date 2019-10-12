//BaekJoon Problem: https://www.acmicpc.net/problem/10845

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
int queue[10000];
int top = 0, bottom = 0, num = 0;
 
void push(int x) {
    queue[bottom++] = x;
    ++num;
}

void pop() {
    if (num != 0) {
        printf("%d\n", queue[top++]);
        --num;
    }
    else
        printf("-1\n");
}

void size() {
    printf("%d\n", num);
}

void empty() {
    if (num == 0)
        printf("1\n");
    else
        printf("0\n");
}

void front() {
    if (num != 0)
        printf("%d\n", queue[top]);
    else
        printf("-1\n");
}

void back() {
    if (num != 0)
        printf("%d\n", queue[bottom - 1]);
    else
        printf("-1\n");
}

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        char c[6];
        int x;
        scanf("%s", &c);
        if (!strcmp(c, "push")) {
            scanf("%d", &x);
            push(x);
        }
        else if (!strcmp(c, "pop"))
            pop();
        else if (strcmp(c, "size") == 0)
            size();
        else if (strcmp(c, "empty") == 0)
            empty();
        else if (strcmp(c, "front") == 0)
            front();
        else if (strcmp(c, "back") == 0)
            back();
    }
    return 0;
}
