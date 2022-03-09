/**
 * @file array.h
 * 
 * @author Gabe Turner
 *
 * @date 10/10/2021
 *  
 * Assignment: Lab 5
 *
 * @brief header file for array.c
 *
 * @details see array.c for details
 *  
 * @bugs none
 *
 * @todo none
 */

#ifndef ARRAY_H_
#define ARRAY_H_

#include <stdlib.h> 		/* for size_t declaration */

//defines LT, LE, GT, GE, E for use in getcount()
#define LT 10
#define LE 11
#define GT 12
#define GE 13
#define E 14

/* function declarations go here */
void print_array(int a[], size_t size);
int find_max(int a[], size_t size);
int find_min(int a[], size_t size);
int find_mid(int max, int min);
int get_count(int a[], size_t size, int type, int x);
int linear_search(int a[], size_t size, int x);
int get_sum(int a[], size_t size);
int find_average(size_t size, int sum);
void organize(int a[], size_t size);
void reverse(int a[], size_t size);
int get_median(int a[], size_t size);
int even_count(int a[], size_t size);
int odd_count(int a[], size_t size);
int divisible_count(int a[], size_t size, int min);
#endif

 