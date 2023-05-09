//
//  15-2.c
//  IntroductionToSoftwareDesign_C
//
//  Created by 홍한별 on 2023/05/09.
//

#include <stdio.h>
int main(void){
    int num;
    scanf("%d", &num);
    
    for(int i=1; i<=num/2+1; i++){
        for(int j=1; j<=num/2+1; j++){
            printf(" ");
        }
        for(int j=0; j<2*i-1; j++){
            printf("*");
        }
        printf("\n");
    }
    for(int i=num/2-1; i>=1; i--){
        for(int j=1; j<=num/2+1-i; j++)
            printf(" ");
        for(int j=0; j<2*i-1; j++)
            printf("*");
        printf("\n");
    }
return 0;
}
