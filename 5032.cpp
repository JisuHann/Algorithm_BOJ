#include <stdio.h>
#include <string>
#include <string.h>
#include <vector>
#include <stdlib.h>
#include <iostream>
#include <algorithm>
#include <math.h>
#pragma warning(disable:4996)                                                                      
#define _CRT_SECURE_NO_WARNINGS
using namespace std;
using namespace std;
int main()
{
    int e,f,c;
    cin >> e >> f >> c;
    int sum = 0;
    int total = e+f;
    while (total>=c){
        sum+=total/c;
        total = total/c + total%c;
    }
    cout << sum;
}
