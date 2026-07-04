#include <stdio.h>
#include <stdlib.h>
int b;
float calc_moy(int b);
float affiche_results(float t1, int t2);
int main(int argc, char* argv[]){
    do{
        printf("Enter The Recurson Number of calcule moyenne: ");
        scanf("%i",&b);
    } while (b <= 0);
    calc_moy(b);
    return 0;
}
float calc_moy(int b){
    if (b <= 0){
        return 0;
    }
    int L, C;
    printf("Enter The Materials Number and coefficients number please:\n");
    scanf("%i %i",&L ,&C);
    if (L<=0 && C<=0 || L<=0 || C<=0){
        printf("should be Materials number and coefficients number possitives!\n");
        return 1;
    }
    int i, coef[C], sum2=0;
    float note[L], sum1=0;
    char* name[L];
    for (i = 0; i < L; i++){
        printf("Enter The Name then the note then the coefficient of matiere%i: \n",i+1);
        scanf("%s %f %i",&name[i] ,&note[i] ,&coef[i]);
        sum1 += note[i] * coef[i];
        sum2 += coef[i];
    }
    affiche_results(sum1, sum2);
    return sum1;
}
float affiche_results(float t1, int t2){
    printf("\nThe Sum of matieres is: %.4f \n",t1);
    printf("\nThe Sum of coefficients is: %i \n",t2);
    float moy; 
    moy = t1 / t2;
    printf("\nThe Moyenne of student is: %.2f\n",moy);
    if (moy >= 16 && moy < 20){
        printf("Excelent!\n");
    }
    else if (moy >= 14 && moy < 16){
        printf("Very Good!\n");
    }
    else if (moy >= 10 && moy < 14){
        printf("good!\n");
    }
    calc_moy(b-1);
    return t1, t2;
}
