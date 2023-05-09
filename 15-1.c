//
//  15-1.c
//  IntroductionToSoftwareDesign_C
//
//  Created by 홍한별 on 2023/05/09.
//

#include<stdio.h>

int main(void) {
    char oper;
    int num1, num2, numCal;

    scanf("%d", &numCal);
    for (int i=0; i< numCal; i++) {
        scanf("%d", &num1);
        scanf(" %c", &oper);
        scanf("%d", &num2);
        printf("%d %c %d = ", num1, oper, num2);

        switch(oper) {
            
            case '+':
                printf("%.2f\n", (double)num1+num2);
                break;
            case '-':
                printf("%.2f\n", (double)num1-num2);
                break;
            case '*':
                printf("%.2f\n", (double)num1*num2);
                break;
            case '/':
                printf("%.2f\n", (double)num1/num2);
                break;
        }
    }
    return 0;
}
