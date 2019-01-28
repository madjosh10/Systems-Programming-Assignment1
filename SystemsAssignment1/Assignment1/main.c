/** @file Assignment1.c *
 *  This file contains the kernel's
 * main() function. *
 * You should add your own comments to replace this one. *
 * @author Joshua Madrigal
 */

#include <stdio.h>
#include <math.h>


void hourlyWorkerPaid();
void pieceWorkerPaid();
void commissionWorkerPaid();

int main()
{
    // variables for input
    char author[10];
    int input = 0;
    
    // while condition
    int endW = -1;
    
    // variables to increment how many people paid
    int managers = 0;
    int hourlyWorkers = 0;
    int commissionWorkers = 0;
    int pieceWorkers= 0;
    
    int manWeeklySal;
    
    printf("Please print your name:\n");
    scanf("%s", author);
    
    printf("Author: %s\n", author,"\n");
    
    do {
        
        printf("\nEnter Paycode (-1 to end):\n");
        scanf("%d", &input);
        
        switch (input) {
            case 1:
                managers++;
                printf("Managers has been selected\n");
                printf("Enter gross weekly salary\n");
                scanf("%d", &manWeeklySal);
                printf("Manager's pay is: $ %d", manWeeklySal);
                break;
                
            case 2:
                hourlyWorkers++;
                hourlyWorkerPaid();
                break;
            case 3:
                commissionWorkers++;
                commissionWorkerPaid();
                break;
            case 4:
                pieceWorkers++;
                pieceWorkerPaid();
                break;
            default:
                break;
        }
        
        
    } while (input != endW); // end while loop
    
    
    printf("\n");
    printf("Total number of managers paid : %d", managers);
    printf("\n");
    printf("Total number of commision workers: %d", commissionWorkers);
    printf("\n");
    printf("Total number of hourly workers: %d", hourlyWorkers);
    printf("\n");
    printf("Total number of piece workers paid : %d", pieceWorkers);
    printf("\n");
    printf("Written by Joshua Madrigal\n");
    
    

    return 0;
}

void pieceWorkerPaid() {
    int result;
    int pieces;
    int wagePerPiece;
    
    printf("Piece Worker selected\n");
    printf("Enter number of pieces\n");
    scanf("%d", &pieces);
    
    printf("Enter the wage per piece\n");
    scanf(" %d", &wagePerPiece);
    
    result = pieces * wagePerPiece;
    
    printf("Piece worker pay is: $%f", result);
    
}


void commissionWorkerPaid() {
    
    float result;
    float grossWeekSales;
    
    printf("Commission Worker selected\n");
    printf("Enter gross weekly sales\n");
    scanf("%f", &grossWeekSales);
    
    result = 250 + (.057 * grossWeekSales);
    
    
    printf("Hourly Workers pay is: $%f" , result);
    
    
    
} // end commissionWorkerPaid()

void hourlyWorkerPaid() {
    float result;
    float regHourlyWorkPay;
    float ovrTimeHours;
    float hoursWorked;
    float c;
    
    
    printf("Hourly Worker selected\n");
    printf("Enter hourly pay\n");
    scanf("%f", &regHourlyWorkPay);
    
    printf("Enter the hours worked:\n");
    scanf(" %f", &hoursWorked);
    
    if (hoursWorked > 40 ) {
        ovrTimeHours = hoursWorked - 40;
        c = ovrTimeHours * (regHourlyWorkPay * 1.5);
        result = c + (regHourlyWorkPay * 40);
        
    } else {
        result = hoursWorked * regHourlyWorkPay;
    }
    
    
    printf("Worker pay is: $%.2f" , result);
    
} // end hourlWorkerPaid()
