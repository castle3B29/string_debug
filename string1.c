#include <stdio.h>
#include <stdint.h>
char * test_string = "hello world";

int main(){

    int i = 0;
    int stop = 5;
    int stop_2 = 6;
    char test_me[8] = "abcdefg";
    char test_me2[] = "deadbeefdeadcode";
    while(i < 8){
        if(i == stop){
            test_me[i] = "w";
        }
        if(i == stop_2){
            test_me[i] = "w";
        }
        i++;
    }
    printf("%s \n", test_me);
    i = 0;
    while (i < 17){
        if (i == stop_2){
            test_me2[i] = "X";
        }
        i++;

    }
    printf("%s \n", test_me2);
}
