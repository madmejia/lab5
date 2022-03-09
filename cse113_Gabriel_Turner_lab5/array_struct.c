 /**
 * @file array_struct.c
 * 
 * @author Gabe Turner
 *
 * @date 10/10/2021
 *
 * Assignment: Lab 5
 *
 * @brief a program that finds different information about a structure array
 *
 * @details this finds the max, min and average of the height and ages of people. It first stores
 * these values in a structure at a certain index. For the max and min it then returns the index
 * at the selected value and prints the structure information at the value. Then with average, 
 * it calculates the average and then prints the value found.
 *
 * @bugs none
 *
 * @todo none
 */
#include "array_struct.h"
#include <stdio.h>
#include <stddef.h>

enum type{
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
	
	/*calculates and prints values*/
	int tmp = max_age(data);
	print_info(data, tmp, MAX_A);

	tmp = min_age(data);
	print_info(data, tmp, MIN_A);

	tmp = max_height(data);
	print_info(data, tmp, MAX_H);

	tmp = min_height(data);
	print_info(data, tmp, MIN_H);

	printf("average age: %d\n", avg_age(data));

	printf("average height: %d\n", avg_height(data));
	return 0;
}

/** initializes the structure at a given index which defines the id, years, and height
 * @param data[] the structure that is being initialized
 * @param index index of person in structure
 * @param id a letter id to tell the structures apart
 * @param years age of person
 * @param inches height of person
 */
void init_array(struct data_t data[], int index, char id, int years, int inches){
	data[index].subject = id;
	data[index].age = years;
	data[index].height = inches;
}

/** prints a message with the structure values at a given index.
 * @param data[] the structure that is being used
 * @param i index of the structure
 * @param type whether it is the min or max and age or height
 */
void print_info(struct data_t data[], int i, int type){
	switch (type)
	{
	case MIN_A:
		printf("MINIMUM AGE:\n");
		break;
	case MAX_A:
		printf("MAXIMUM AGE:\n");
		break;
	case MIN_H:
		printf("MINIMUM HEIGHT:\n");
		break;
	case MAX_H:
		printf("MAXIMUM HEIGHT:\n");
		break;
	}
	printf("ID: %c\n", data[i].subject);
	printf("Height: %d\n", data[i].height);
	printf("Age: %d\n\n", data[i].age);
}

/** looks through the structure for the max age
 * @param data[] the structure that is being searched
 * @return the index that has the max age
 */
int max_age(struct data_t data[]){
	int i = 0;
	int tmp = i;
	for(i = 1; i < SIZE; i++){
		if (data[i].age > data[tmp].age)
		{
			tmp = i;
		}
		
	}
	return tmp;
}

/** looks through the structure for the min age
 * @param data[] the structure that is being searched
 * @return the index that has the min age
 */
int min_age(struct data_t data[]){
	int i = 0;
	int tmp = i;
	for(i = 1; i < SIZE; i++){
		if (data[i].age < data[tmp].age)
		{
			tmp = i;
		}
		
	}
	return tmp;
}

/** looks through the structure for the max height
 * @param data[] the structure that is being searched
 * @return the index that has the max height
 */
int max_height(struct data_t data[]){
	int i = 0;
	int tmp = i;
	for(i = 1; i < SIZE; i++){
		if (data[i].height > data[tmp].height)
		{
			tmp = i;
		}
		
	}
	return tmp;
}

/** looks through the structure for the min height
 * @param data[] the structure that is being searched
 * @return the index that has the min height
 */
int min_height(struct data_t data[]){
	int i = 0;
	int tmp = i;
	for(i = 1; i < SIZE; i++){
		if (data[i].height < data[tmp].height)
		{
			tmp = i;
		}
		
	}
	return tmp;
}

/** calculates the average age in the structure
 * @param data[] the structure that is being calculated
 * @return the average age of the structure, adds the value then divides by size
 */
int avg_age(struct data_t data[]){
	int sum = 0;
	for(int i = 0; i < SIZE; i++){
		sum = sum + data[i].age;
	}
	return sum / SIZE;
}

/** calculates the average height in the structure
 * @param data[] the structure that is being calculated
 * @return the average height of the structure, adds the value then divides by size
 */
int avg_height(struct data_t data[]){
	int sum = 0;
	for(int i = 0; i < SIZE; i++){
		sum = sum + data[i].height;
	}
	return sum / SIZE;
}