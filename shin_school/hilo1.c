#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#define MAXNUM 200

int main(void)
{
    int turn = 0, num, key;
    char buf[81];

    srand((unsigned)time(NULL));
    num = rand()%MAXNUM + 1;
    do{
        printf("Input number [1 : %d] --> ", MAXNUM);
        key = atoi(fgets(buf, sizeof(buf), stdin));
        if((key < 1)||(key > MAXNUM)){
            puts("\tOut of range");
        }else if(key < num){
            puts("\tMore larger");
        }else if(key > num){
            puts("\tMore smaller");
        }
        turn++;
    }while(num != key);
    printf("You win(turn: %d).The answer was %d\n", turn, num);
    return 0;
}