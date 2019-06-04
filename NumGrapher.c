//Program that ask for user to input 4 number between 1 and 70 then constructs a graph to display
//the numbers

//Program by Ryan Sharma - 22/03/19
#include <stdio.h>

int main(int argc, char *argv[]){
    
    //Variables
    int i = 0;
    int N = 0;
    int j = 0;
    
    //Ask for user input
    
    printf("Enter how many numbers will be graphed: ");
    scanf("%d",&N);
    //Define A as Array with size equal to N
    int A[N];
    printf("Enter numbers %d numbers between 1 and 70: ", N);

    for(i = 0; i<N;i++){
        scanf("%d", &A[i]);
    }

    //Check inputs are valid:
    

    for(i = 0; i<N ; i++){
        printf("%2d |", A[i]);
        for(j = 0; j<A[i];j++){
            printf("*");
            
        }
        printf("\n");
    }
    
    printf("\n");

    return 0;
}