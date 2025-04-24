#include <stdio.h>

int data(int n, int *m, int *d){
    int t;
    if((0 < n) && (n <= 366)){
        if((1 <= n) && (n <= 31)){
            *m = 1;
        }else if((32 <= n) && (n <= 60)){
            *m = 2;
        }else if((61 <= n) && (n <= 91)){
            *m = 3;
        }else if((92 <= n) && (n <= 121)){
            *m = 4;
        }else if((122 <= n) && (n <= 152)){
            *m = 5;
        }else if((153 <= n) && (n <= 182)){
            *m = 6;
        }else if((183 <= n) && (n <= 213)){
            *m = 7;
        }else if((214 <= n) && (n <= 244)){
            *m = 8;
        }else if((245 <= n) && (n <= 274)){
            *m = 9;
        }else if((275 <= n) && (n <= 305)){
            *m = 10;
        }else if((306 <= n) && (n <= 335)){
            *m = 11;
        }else if((336 <= n) && (n <= 366)){
            *m = 12;
        }

        switch(*m){
            case 1 : *d = n;        break;
            case 2 : *d = n - 31;   break;
            case 3 : *d = n - 60;   break;
            case 4 : *d = n - 91;   break;
            case 5 : *d = n - 121;  break;
            case 6 : *d = n - 152;  break;
            case 7 : *d = n - 182;  break;
            case 8 : *d = n - 213;  break;
            case 9 : *d = n - 244;  break;
            case 10 : *d = n - 274; break;
            case 11 : *d = n - 305; break;
            case 12 : *d = n - 335;break;
        }
        return 1;

    }else{
        *m = 0;
        *d = 0;
        return 0;
    }
}

int main(void){
    int n, j, m, d;

    printf("令和6年のn日目を入力してください：");   scanf("%d", &n);

    j = data(n, &m, &d);
    
    printf("%d日目は%d月%d日です。%d\n", n, m, d, j);

    return 0;
}