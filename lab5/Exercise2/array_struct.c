/**
 * @file array_struct.c
 * 
 * @author Madison Mejia
 *
 * @date 3/9/2022
 * 
 * @brief finds different information about values in a structure
 *  
 * @details finds the max and min of the average heights and ages of the people
 * also calculates the average ages and heights, then prints values 
 * 
 * @bug none
 */

#include "array_struct.h"
#include <stdio.h>
#include <stddef.h>

enum type {
	MIN_A, MAX_A, MIN_H, MAX_H
};

int main(void)
{

	struct data_t data[SIZE];

	/* data initialization calls */
	init_array(data, 0, 'A', 23, 74);
	init_array(data, 1, 'B', 22, 64);
	init_array(data, 2, 'C', 19, 68);
	init_array(data, 3, 'D', 20, 76);
	init_array(data, 4, 'E', 22, 62);

	///all of the following calculates and prints values
	int tmp = max_age(data);
	print_info(data, tmp, MAX_A);

	tmp = min_age(data);
	print_info(data, tmp, MIN_A);

	tmp = max_height(data);
	print_info(data, tmp, MAX_H);

	tmp = min_height(data);
	print_info(data, tmp, MIN_H);

	printf("Average age: %d\n", avg_age(data));

	printf("Average height: %d\n", avg_height(data));

	return 0;
}

/**
 * @brief initializes structure at an index, identifying ID, years, and height
 * @param data[] the initialized structure  
 * @param index index of person
 * @param id letter ID distinguishes structures apart
 * @param years age
 * @param inches height
 */
void init_array(struct data_t data[], int index, char id, int years, int inches)
{
	data[index].subject = id;
	data[index].age = years;
	data[index].height = inches;
}

/**
 * @brief prints message with structure values
 * @param data[] the initialized structure
 * @param i index of structure
 * @param type min or max of age or height
 */
void print_info(struct data_t data[], int i, int type)
{
	switch (type) {
	case MIN_A:
		printf("Minimum Age: \n");
		break;
	case MAX_A:
		printf("Maximum Age: \n");
		break;
	case MIN_H:
		printf("Minimum height: \n");
		break;
	case MAX_H:
		printf("Maximum height: \n");
		break;
	}
	printf("ID: %c\n", data[i].subject);
	printf("Height: %d\n", data[i].height);
	printf("Age: %d\n\n", data[i].age);
}

/**
 * @brief searches for max age
 * @param data[] initialized structure
 * @return index that has max age
 */
int max_age(struct data_t data[]) 
{
	int i = 0;
	int tmp = i;

	for(i = 1; i < SIZE; i++) {
		if (data[i].age > data[tmp].age) {
			tmp = i;
		}
	}
	return tmp;
}

/**
 * @brief searches for min age
 * @param data[] initialized structure
 * @return index that has min age
 */
int min_age(struct data_t data[]) 
{
	int i = 0;
	int tmp = i;

	for(i = 1; i < SIZE; i++) {
		if (data[i].age < data[tmp].age) {
			tmp = i;
		}
	}
	return tmp;
}

/**
 * @brief searches for max height
 * @param data[] initialized structure
 * @return index that has max height
 */
int max_height(struct data_t data[]) 
{
	int i = 0;
	int tmp = i;

	for(i = 1; i < SIZE; i++) {
		if (data[i].height > data[tmp].height) {
			tmp = i;
		}
	}
	return tmp;
}

/**
 * @brief searches for min height
 * @param data[] initialized structure
 * @return index that has min height
 */
int min_height(struct data_t data[]) 
{
	int i = 0;
	int tmp = i;

	for(i = 1; i < SIZE; i++) {
		if (data[i].height < data[tmp].height) {
			tmp = i;
		}
	}
	return tmp;
}

/**
 * @brief calculates the average age
 * @param data[] initialized structure
 * @return average age of structure
 */
int avg_age(struct data_t data[]) 
{
	int sum = 0;
	int i;

	for(i = 0; i < SIZE; i++) {
		sum = sum + data[i].age;
	}
	return sum / SIZE;
}

/**
 * @brief calculates the average height
 * @param data[] initialized structure
 * @return average height of structure
 */
int avg_height(struct data_t data[]) 
{
	int sum = 0;
	int i;

	for(i = 0; i < SIZE; i++) {
		sum = sum + data[i].height;
	}
	return sum / SIZE;
}