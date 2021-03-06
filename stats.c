/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file <stats.c>
 * @brief <C programming file >
 *
 * <couple of functions to analyze given character array to give analytics like maximum, minimum, mean and median.
 *  Also sorted data from larger to smaller >
 *
 * @author <Krishna Chaitanya Tirumalaraju>
 * @date <2018/09/16 >
 *
 */



#include <stdio.h>
#include "stats.h"

#define SIZE (40)

int main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  print_array(test,SIZE);
  print_statistics(test,SIZE);
}


void print_statistics(unsigned char*ptr, unsigned int size){
	
}



void print_array(unsigned char *ptr, unsigned int size){
	
}


unsigned char find_minimum(unsigned char *ptr, unsigned int size) {
	
}


unsigned char find_maximum(unsigned char *ptr, unsigned int size){
	
}

unsigned char find_mean(unsigned char *ptr, unsigned int size){
	
}

void sort_array(unsigned char *ptr, unsigned int size){
	
}

unsigned char find_median(unsigned char *ptr, unsigned int size){
	
}
