 /**
 * @file array_struct.h
 * 
 * @author Gabe Turner
 *
 * @date 10/10/2021
 *
 * Assignment: Lab 5
 *
 * @brief a program that enumerates values like months
 *
 * @details this uses a menu to either quit the program or to type in a date. Then when the date is
 * typed, it stores it in a structure. This structure is then called to find the month and is used 
 * in a switch statement. This switch statement will return a value based on what the day in the month
 * is.
 *
 * @bugs none
 *
 * @todo none
 */

#include <stdio.h>
#include <stdlib.h>

/*gives a numeric value to each month*/
enum month{
    JAN = 1, FEB, MAR, APR, MAY, JUN, JUL,
    AUG, SEP, OCT, NOV, DEC
};

/*gives a numeric value to quit and continue*/
enum menu{
    QUIT = 13, CONTINUE
};

/*stores da date*/
struct date_t{
    unsigned short month;
    unsigned short day;
    unsigned short year;
};

int main(void){
    
    struct date_t date;

    while (1)
    {
        /*this will have it to where if you type 1 it asks for date but if you type 0 it quits*/
        int menu;
        printf("type 1 to enter a date\ntype 0 to quit\n");
        scanf("%d", &menu);
        /*because 13 is quit and 14 is continue, 13 is added to menu*/
        menu = menu + 13;

        switch (menu){
        case CONTINUE:
            
            /*if it is continue then it will ask for a date*/
            printf("enter date in MM/DD/YY:  ");
            scanf("%02hd/%02hd/%02hd", &date.month, &date.day, &date.year);
            /*depending on the month, it then checks what day it is and prints the horoscope*/
            switch (date.month)
            {
            case JAN:
                if (date.day <= 20){
                    printf("CAPPRICORN\n");
                }else{
                    printf("AQUARIUS\n");
                }
                break;
            case FEB:
                if (date.day <= 19){
                    printf("AQUARIUS\n");
                }else{
                    printf("PISCES\n");
                }
                break;
            case MAR:
                if (date.day <= 21){
                    printf("PISCES\n");
                }else{
                    printf("ARIES\n");
                }
                break;
            case APR:
                if (date.day <= 20){
                    printf("ARIES\n");
                }else{
                    printf("TAURUS\n");
                }
                break;
            case MAY:
                if (date.day <= 21){
                    printf("TAURUS\n");
                }else{
                    printf("GEMINI\n");
                }
                break;
            case JUN:
                if (date.day <= 21){
                    printf("GEMINI\n");
                }else{
                    printf("CANCER\n");
                }
                break;
            case JUL:
                if (date.day <= 23){
                    printf("CANCER\n");
                }else{
                    printf("LEO\n");
                }
                break;
            case AUG:
                if (date.day <= 23){
                    printf("LEO\n");
                }else{
                    printf("VIRGO\n");
                }
                break;
            case SEP:
                if (date.day <= 23){
                    printf("VIRGO\n");
                }else{
                    printf("LIBRA\n");
                }
                break;
            case OCT:
                if (date.day <= 23){
                    printf("LIBRA\n");
                }else{
                    printf("SCORPIO\n");
                }
                break;
            case NOV:
                if (date.day <= 22){
                    printf("SCORPIO\n");
                }else{
                    printf("SAGITTARIUS\n");
                }
                break;
            case DEC:
                if (date.day <= 22){
                    printf("SAGITTARIUS\n");
                }else{
                    printf("CAPRICORN\n");
                }
                break;
            default:
                printf("unknown value\n");
                break;
            }
            break;
        case QUIT:
            exit(0);
            break;
        default:
            printf("unknown value try again\n");
        }
    }
}