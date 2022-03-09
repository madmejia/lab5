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

void init_array(struct data_t data[], int index, char id, int years, int inches)
{
	data[index].subject = id;
	data[index].age = years;
	data[index].height = inches;
}

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

int avg_age(struct data_t data[]) 
{
	int sum = 0;
	int i;

	for(i = 1; i < SIZE; i++) {
		sum = sum + data[i].age;
	}
	return sum / SIZE;
}

int avg_height(struct data_t data[]) 
{
	int sum = 0;
	int i;

	for(i = 1; i < SIZE; i++) {
		sum = sum + data[i].height;
	}
	return sum / SIZE;
}