#include <stdio.h>
int main(){
    float input, results = 0;
    int i;
    for(i = 0; i < 10; i++){
        scanf("%f", &input);
        printf("Studet No.[%d] : %.4f cm\n", i+1, input);
        results += input;
    }
    printf("Avg : %.4f", results/10);
    return 0;
}