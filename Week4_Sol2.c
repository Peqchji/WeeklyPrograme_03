#include <stdio.h>

float AVG_finder(float input[]){
    float results = 0;
    int i;
    for(i = 0; i < 10; i++){
        results += input[i];
    }
    return (results/10);
}

int main(){
    float Student_Height[10], results_main;
    int i;
    for(i = 0; i < 10; i++){
        scanf("%f", &Student_Height[i]);
        printf("Studet No.[%d] : %.4f cm\n", i+1, Student_Height[i]);
    }
    results_main = AVG_finder(Student_Height);
    printf("AVG = %.4f",  results_main);
    return 0;
}