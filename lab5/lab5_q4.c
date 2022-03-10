/**
 * @file lab5_q4.c
 * 
 * @author Madison Mejia
 *
 * @date 3/9/2022
 * 
 * Assignment: Lab 5
 * 
 * @brief a program that enumerates months
 *  
 * @details when a date is typed, it's stored into a structure which
 * then finds the day and month in order to return 
 * the associated zodiac sign
 * 
 * @bug Unrecognized value gets spammed along with menu input
 */

#include <stdio.h>
#include <stdlib.h>

///enumerates the months
enum month {
        JAN = 1,
        FEB,
        MAR,
        APR,
        MAY,
        JUN,
        JUL,
        AUG,
        SEP,
        OCT,
        NOV,
        DEC
};

///gives numeric value to quit and continue
enum menu {
        QUIT = 13, CONTINUE
};

///stores date
struct data_t{
        unsigned short month;
        unsigned short day;
        unsigned short year;
};

int main(void)
{
        struct data_t date;

        while (1) {

                ///Asks for user to continue witht the program or quit
                int menu;

                printf("Type 1 to enter a date\n");
                printf("Type 0 to quit\n");
                printf("Enter: ");
                scanf("%d", &menu);

                menu = menu + 13;

                switch (menu) {
                case CONTINUE:

                        ///Prompts user to input date
                        printf("Enter a date in the format MM/DD/YY: ");
                        scanf("%02hd/%02hd/%02hd", &date.month, &date.day, &date.year);

                        /**
                         * Switch statement checks the month and date 
                         * then returns zodiac sign
                         */
                        switch (date.month) {
                        case JAN:
                                if (date.day <= 19) {
                                        printf("Capricorn\n");
                                } else {
                                        printf("Aquarius\n");
                                }
                                break;
                        case FEB:
                                if (date.day <= 19) {
                                        printf("Aquarius\n");
                                } else {
                                        printf("Pisces\n");
                                }
                                break;
                        case MAR:
                                if (date.day <= 20) {
                                        printf("Pisces\n");
                                } else {
                                        printf("Aries\n");
                                }
                                break;
                        case APR:
                                if (date.day <= 20) {
                                        printf("Aries\n");
                                } else {
                                        printf("Taurus\n");
                                }
                                break;
                        case MAY:
                                if (date.day <= 20) {
                                        printf("Taurus\n");
                                } else {
                                        printf("Gemini\n");
                                }
                                break;
                        case JUN:
                                if (date.day <= 20) {
                                        printf("Gemini\n");
                                } else {
                                        printf("Cancer\n");
                                }
                                break;
                        case JUL:
                                if (date.day <= 22) {
                                        printf("Cancer\n");
                                } else {
                                        printf("Leo\n");
                                }
                                break;
                        case AUG:
                                if (date.day <= 22) {
                                        printf("Leo\n");
                                } else {
                                        printf("Virgo\n");
                                }
                                break;
                        case SEP:
                                if (date.day <= 23) {
                                        printf("Virgo\n");
                                } else {
                                        printf("Libra\n");
                                }
                                break;
                        case OCT:
                                if (date.day <= 22) {
                                        printf("Libra\n");
                                } else {
                                        printf("Scorpio\n");
                                }
                                break;
                        case NOV:
                                if (date.day <= 22) {
                                        printf("Scorpio\n");
                                } else {
                                        printf("Sagittarius\n");
                                }
                                break;
                        case DEC:
                                if (date.day <= 21) {
                                        printf("Sagittarius\n");
                                } else {
                                        printf("Capricorn\n");
                                }
                                break;
                        default:
                                printf("Unrecognized value\n");
                                break;
                        }
                case QUIT:
                        exit(0);
                        break;
                default:
                        printf("Unrecognized value\n");
                }

        }
}