#include <stdio.h>


// Pattern 1:-
void pattern1(int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++){
            printf("* ");
        }
            printf("\n");
    }
    printf("---------------------------------\n");
}

//Pattern 2:-

void pattern2(int n){
    for(int i = n; i > 0; i--){
        for(int j = i; j > 0; j--){
            printf("* ");
        }
    printf("\n");
    }
    printf("---------------------------------\n");
}

//Pattern 3:-

void pattern3(int n){
    int space, i = 1, j = 1;
    for(;i <= n; i++){    
        for(space = n - i; space > 0; space--){
            printf(" ");
        }
        for(j = 1; j <= i; j++){
            printf("*");
        }
    printf("\n");
    }
    printf("---------------------------------\n");
}

//Pattern 4:-

void pattern4(int n){
    int space, i = 1, j = 1;
    for(;i <= n; i++){    
        for(space = n - i; space > 0; space--){
            printf(" ");
        }
        for(j = 1; j <= i; j++){
            printf(" *");
        }
    printf("\n");
    }
    printf("---------------------------------\n");
}

//Pattern 5:-
//has a lot more variations just as the * pattern
void pattern5(int n){
    int i, j, space;
    for(i = 1; i <= n; i++){
        for(j = 1; j <= i; j++){
            printf("%d",i);
        }
        printf("\n");
    }
    printf("---------------------------------\n");
}

//Pattern 6:-
//most important pattern as it requires nice mathematics
void pattern6(int n){
    int space, i = 1, j = 1;
    for(;i <= n; i++){ 
        int something = 1;   
        for(space = n - i; space > 0; space--){
            printf(" ");
        }
        for(j = 1; j <= i; j++){
            printf("%d ",something);
            something = something*(i-j)/j;
        }
    printf("\n");
    }
    printf("---------------------------------\n");
}
int main(){
    int n = 10;
    pattern1(n);
    pattern2(n);
    pattern3(n);
    pattern4(n);
    pattern5(n);
    pattern6(n);
}