#include <stdio.h>
#include <stdint.h>
char * test_string = "hello world";

char test_me_global[] = "beefdeadcodedead";

int main(){

    int i = 0;
    int stop = 5;
    int stop_2 = 6;
    char test_me[8] = "abcdefg";
    char test_me2[] = "deadbeefdeadcode";
    ///testing test_me to see if we try to alter by putting string literal at positions 5 and 6
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
    ///testing test_me2 to see if we put in a string literal at positiong 6
    while (i < 17){
        if (i == stop_2){
            test_me2[i] = "X";
        }
        i++;

    }
    printf("%s \n", test_me2);

    //testing global variable
    i = 0;
    while (i < 17){
        if (i == stop_2){
            test_me_global[i] = 'X';
        }
        i++;
    }
    printf("%s \n", test_me_global);
    i = 0;
    while (i < 17){
        if (i == stop_2){
            test_me_global[i] = "X";
        }
        i++;
    }
    printf("%s \n", test_me_global);

}
