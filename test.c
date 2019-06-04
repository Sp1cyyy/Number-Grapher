//Program that ask for user to input 4 number between 1 and 70 then constructs a graph to display
//the numbers

//Program by Ryan Sharma - 22/03/19
#include <stdio.h>

int main(int argc, char *argv[]){
    int n = 0;
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    int i = 0;
    int j = 0;

    printf("Enter numbers: ");
    
    while(scanf("%d", &n) >= 0){
        printf("%2d |",n);

        for(i = 1; i<= n; i++){
            printf("*");
        }
        printf("\n");
        char next_char = (char)getchar();
        if(next_char == '\n') break;
        ungetc(next_char, stdin);
    }
    return 0;
}
