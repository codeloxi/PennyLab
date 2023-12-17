//
//  main.c
//  Penny_Lab
//
//  
//

#include <stdio.h>

FILE *fp;
int doublePennies();
int main(void) {
    fp = fopen("csis.txt", "w");
    doublePennies();
    
    fclose(fp);
    return 0;
}

int doublePennies(void) {
    
    double total = 0;
    double balance = 0;
    double deposit = 0.005;
    int day = 0;
    
    printf("Enter the total amount of money you want to accumulate. \n");
    scanf("%lf", &total);
    fprintf(fp,"Enter the total amount of money you want to accumulate. \n");
    
    printf("Day\t          Deposit\t          Balance\t\n");
    fprintf(fp,"Day\t          Deposit\t          Balance\t\n");
    printf("---\t          -------\t          -------\t\n");
    fprintf(fp, "---\t          -------\t          -------\t\n");
    while (balance < total) {
        deposit = (deposit * 2);
        balance = (balance + deposit);
        day++;
        if (balance < 10) {
            printf(" %d\t          %.2lf\t\t          %.2lf\n", day, deposit, balance);
            fprintf(fp, " %d\t          %.2lf\t\t          %.2lf\t\n", day, deposit, balance);
        } else if (balance >= 10 && day < 10){
            printf(" %d\t          %.2lf\t\t          %.2lf\t\n", day, deposit, balance);
            fprintf(fp, " %d\t          %.2lf\t\t          %.2lf\t\n", day, deposit, balance);
        }
        if (balance > 10 && day >= 10 && balance < 100) {
            printf(" %d\t          %.2lf\t\t          %.2lf\t\n", day, deposit, balance);
            fprintf(fp, " %d\t          %.2lf\t\t          %.2lf\t\n", day, deposit, balance);
        } else if (balance > 10 && day >= 10 && deposit < 100) {
            printf(" %d\t          %.2lf\t\t          %.2lf\t\n", day, deposit, balance);
            fprintf(fp, " %d\t          %.2lf\t\t          %.2lf\t\n", day, deposit, balance);
        }
        if (balance > 100 && day >= 10 && balance < 1000 && deposit >100) {
            printf(" %d\t          %.2lf\t          %.2lf\t\n", day, deposit, balance);
            fprintf(fp, " %d\t          %.2lf\t          %.2lf\t\n", day, deposit, balance);
        } else if ( balance > 1000 && day >= 10 && deposit < 1000) {
            printf(" %d\t          %.2lf\t          %.2lf\t\n", day, deposit, balance);
            fprintf(fp, " %d\t          %.2lf\t          %.2lf\t\n", day, deposit, balance);
        }
        if (balance > 1000 && day >= 10 && balance < 10000 && deposit >1000) {
            printf(" %d\t          %.2lf\t          %.2lf\t\n", day, deposit, balance);
            fprintf(fp, " %d\t          %.2lf\t          %.2lf\t\n", day, deposit, balance);
        }else if (balance > 10000 && day >= 10 && deposit < 10000) {
            printf(" %d\t          %.2lf\t          %.2lf\t\n", day, deposit, balance);
            fprintf(fp, " %d\t          %.2lf\t          %.2lf\t\n", day, deposit, balance);
        }
        if (balance > 10000 && day >= 10 && balance < 100000 && deposit > 10000) {
            printf(" %d\t          %.2lf\t          %.2lf\t\n", day, deposit, balance);
            fprintf(fp, " %d\t          %.2lf\t          %.2lf\t\n", day, deposit, balance);
        } else if (balance > 100000 && day >= 10 && deposit < 100000) {
            printf(" %d\t          %.2lf\t          %.2lf\t\n", day, deposit, balance);
            fprintf(fp, " %d\t          %.2lf\t          %.2lf\t\n", day, deposit, balance);
        }
        if (balance > 100000 && day >= 10 && balance < 1000000 && deposit > 100000) {
            printf(" %d\t          %.2lf\t          %.2lf\t\n", day, deposit, balance);
            fprintf(fp, " %d\t          %.2lf\t          %.2lf\t\n", day, deposit, balance);
        } else if (balance > 1000000 && day >= 10 && deposit < 1000000) {
            printf(" %d\t          %.2lf\t          %.2lf\t\n", day, deposit, balance);
            fprintf(fp, " %d\t          %.2lf\t          %.2lf\t\n", day, deposit, balance);
        }
    }
    printf("It took %d days to accumlate at least: $%.2lf.\n", day, total);
    fprintf(fp, "It took %d days to accumlate at least: $%.2lf.\n", day, total);
    
    return 0;
}
