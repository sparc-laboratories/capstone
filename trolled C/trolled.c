/*
 * trolled.c
 *
 *  Created on: Nov 9, 2022
 *      Author: blair
 */

#include <stdio.h>

void trolled() {
	int len = 99;
	int i;

	for (i = 0; i<len; i++) {
		if (i>32 && i<77) {
			printf("*");
		}
		else {
			printf(".");
		}
	}
	printf("\n");

	for (i = 0; i<len; i++) {
		if ((i>24 && i<41) || (i>74 && i<80)) {
			printf("*");
		}
		else {
			printf(".");
		}
	}
	printf("\n");

	for (i = 0; i<len; i++) {
		if ((i>18 && i<30) || (i>39 && i<45) || (i == 60 || i == 61) || (i>77 && i<81)) {
			printf("*");
		}
		else {
			printf(".");
		}
	}
	printf("\n");

	for (i = 0; i<len; i++) {
		if ((i>16 && i<21) || (i == 65 || i == 66) || (i>79 && i<83)) {
			printf("*");
		}
		else {
			printf(".");
		}
	}
	printf("\n");

	for (i = 0; i<len; i++) {
		if ((i>13 && i<18) || (i == 22) || (i>24 && i<31) || (i>42 && i<46) || (i == 60 || i == 61 || i == 68) || (i>80 && i<84)) {
			printf("*");
		}
		else {
			printf(".");
		}
	}
	printf("\n");

	for (i = 0; i<len; i++) {
		if ((i>11 && i<16) || (i == 65 || i == 66 || i == 71) || (i>81 && i<85)) {
			printf("*");
		}
		else {
			printf(".");
		}
	}
	printf("\n");

	for (i = 0; i<len; i++) {
		if ((i>10 && i<14) || (i>25 && i<31) || (i == 51) || (i>61 &&  i<65) || (i == 68 || i == 73) || (i>82 && i<86)) {
			printf("*");
		}
		else {
			printf(".");
		}
	}
	printf("\n");

	for (i = 0; i<len; i++) {
		if ((i == 10 || i == 11 || i == 23 || i == 49 || i == 66 ||  i == 67 || i == 71 || i == 76) || (i>83 && i<87)) {
			printf("*");
		}
		else {
			printf(".");
		}
	}
	printf("\n");

	for (i = 0; i<len; i++) {
		if (i == 10 || i == 11 || i == 21 || i == 34 || i == 69 ||  i == 72 || i == 77 || i == 85 || i == 86) {
			printf("*");
		}
		else {
			printf(".");
		}
	}
	printf("\n");

	for (i = 0; i<len; i++) {
		if (i == 10 || i == 11 || i == 20 || i == 71 || i == 74 || i == 86 || i == 87) {
			printf("*");
		}
		else {
			printf(".");
		}
	}
	printf("\n");

	for (i = 0; i<len; i++) {
		if ((i == 9 || i == 10) || (i>52 && i<67) || (i>85 && i<89)) {
			printf("*");
		}
		else {
			printf(".");
		}
	}
	printf("\n");

	for (i = 0; i<len; i++) {
		if ((i>7 && i<11) || (i>22 && i<31) || (i>49 && i<55) || (i>57 && i<70) || (i>86 && i<90)) {
			printf("*");
		}
		else {
			printf(".");
		}
	}
	printf("\n");

	for (i = 0; i<len; i++) {
		if ((i>3 && i<8) || (i>18 && i<25) || (i>27 && i<32) || (i>45 && i<50) || (i>55 && i<64) || (i>65 && i<69) || (i>86 && i<90)) {
			printf("*");
		}
		else {
			printf(".");
		}
	}
	printf("\n");

	for (i = 0; i<len; i++) {
		if ((i>2 && i<6) || (i>8 && i != 14 && i != 18 && i<34) || (i>44 && i<48) || (i>52 && i<70) || (i == 74) || (i>78 && i != 87 && i<92 )) {
			printf("*");
		}
		else {
			printf(".");
		}
	}
	printf("\n");

	for (i = 0; i<len; i++) {
		if ((i == 2 || i == 3 || i == 7) || (i>25 && i<39) || (i>45 && i<55) || (i == 66 || i == 67 || i == 71) || (i>89 && i<93)) {
			printf("*");
		}
		else {
			printf(".");
		}
	}
	printf("\n");

	for (i = 0; i<len; i++) {
		if ((i == 1 || i == 2 || i == 5 || i == 9 || i == 10) || (i>31 && i<36) || (i>46 && i<52) || (i>57 && i<61) || (i>74 && i<85) ||
		(i == 92 || i == 93)) {
			printf("*");
		}
		else {
			printf(".");
		}
	}
	printf("\n");

	for (i = 0; i<len; i++) {
		if ((i == 1 || i == 2 || i == 4 || i == 7) || (i>10 && i<17) || (i == 33 || i == 34) || (i>59 && i<64) || (i>70 && i<77) ||
		(i>82 && i<87) || (i>90 && i != 92 && i<95 )) {
			printf("*");
		}
		else {
			printf(".");
		}
	}
	printf("\n");

	for (i = 0; i<len; i++) {
		if ((i>0 && i<4) || (i>8 && i<19) || (i == 23 || i == 33 || i == 34) || (i>61 && i<73) || (i == 78 || i == 79) || (i>84 && i<88) ||
		(i == 91) || (i>93 && i<97)){
			printf("*");
		}
		else {
			printf(".");
		}
	}
	printf("\n");

	for (i = 0; i<len; i++) {
		if ((i>0 && i<4) || (i == 9) || (i>16 && i<25) || (i == 33 || i == 34 || i == 78 || i == 79 || i == 86 || i == 87 || i == 91) ||
		(i>93 && i<97)) {
			printf("*");
		}
		else {
			printf(".");
		}
	}
	printf("\n");

	for (i = 0; i<len; i++) {
		if ((i>0 && i<4) || (i == 6 || i == 14 || i == 15) || (i>17 && i<22) || (i>29 && i<34) || (i>74 && i<80) ||
		(i == 87 || i == 88 || i == 91 || i == 95 || i == 96)) {
			printf("*");
		}
		else {
			printf(".");
		}
	}
	printf("\n");

	for (i = 0; i<len; i++) {
		if ((i == 1 || i == 2 || i == 7 || i == 14 || i == 15) || (i>26 && i<31) || (i>46 && i<55) || (i>70 && i<76) || (i>78 && i<85) ||
		(i == 87 || i == 88 || i == 91 || i == 95 || i == 96)) {
			printf("*");
		}
		else {
			printf(".");
		}
	}
	printf("\n");

	for (i = 0; i<len; i++) {
		if ((i>0 && i<5) || (i == 8 || i == 9) || (i>11 && i<16) || (i>25 && i<31) || (i == 51 || i == 52) || (i>66 && i<73) ||
		(i>77 && i != 81 && i != 85 && i<89 ) || (i == 91) || (i>93 && i<97)) {
			printf("*");
		}
		else {
			printf(".");
		}
	}
	printf("\n");

	for (i = 0; i<len; i++) {
		if ((i>1 && i != 4 && i<7 ) || (i>11 && i<16) || (i == 23 || i == 24) || (i>26 && i<32) || (i>40 && i<48) || (i == 51 || i == 52) ||
		(i>62 && i<70) || (i == 78 || i == 79 || i == 86 || i == 87) || (i>93 && i<97)) {
			printf("*");
		}
		else {
			printf(".");
		}
	}
	printf("\n");

	for (i = 0; i<len; i++) {
		if ((i>1 && i<5) || (i == 9 || i == 11 || i == 12) || (i>14 && i<18) || (i == 21) || (i>29 && i<33) || (i>46 && i != 48 && i<52 ) ||
		(i>57 && i != 66 && i<69 ) || (i>75 && i<80) || (i == 85 || i == 86 || i == 90) || (i>92 && i<96)) {
			printf("*");
		}
		else {
			printf(".");
		}
	}
	printf("\n");

	for (i = 0; i<len; i++) {
		if ((i>2 && i<6) || (i>10 && i<20) || (i>31 && i<38) || (i>52 && i<61) || (i == 67 || i == 68) || (i>72 && i<79) ||
		(i == 88 || i == 89 || i == 92 || i == 93)) {
			printf("*");
		}
		else {
			printf(".");
		}
	}
	printf("\n");

	for (i = 0; i<len; i++) {
		if ((i>3 && i<7) || (i>10 && i != 13 && i != 16 && i<23)|| (i>33 && i<37) || (i>47 && i<56) || (i>65 && i != 69 && i<78) || (i == 85) ||
		(i>90 && i<94)) {
			printf("*");
		}
		else {
			printf(".");
		}
	}
	printf("\n");

	for (i = 0; i<len; i++) {
		if ((i == 5 || i == 6) || (i>10 && i<15) || (i == 17 || i == 18) || (i>20 && i<29) || (i>36 && i<51) || (i == 53 || i == 54) ||
		(i>64 && i<72) || (i>73 && i<77) || (i>88 && i<92)) {
			printf("*");
		}
		else {
			printf(".");
		}
	}
	printf("\n");

	for (i = 0; i<len; i++) {
		if ((i == 5 || i == 6) || (i>10 && i<15) || (i == 17 || i == 18) || (i>22 && i<43) || (i == 53 || i == 54) || (i>60 && i<69) ||
		(i>72 && i<76) || (i>87 && i<90)) {
			printf("*");
		}
		else {
			printf(".");
		}
	}
	printf("\n");

	for (i = 0; i<len; i++) {
		if ((i == 5 || i == 6) || (i>10 && i<15) || (i == 17 || i == 18) || (i>21 && i<25) || (i == 32 || i == 33 || i == 41 || i == 42) ||
		(i>52 && i != 56 && i != 66 && i<69) || (i>71 && i<75) || (i>85 && i<89)) {
			printf("*");
		}
		else {
			printf(".");
		}
	}
	printf("\n");

	for (i = 0; i<len; i++) {
		if ((i == 5 || i == 6) || (i>10 && i<19) || (i == 22 || i == 23 || i == 32 || i == 33 || i == 41 || i == 42) || (i>51 && i<63) ||
		(i == 67 || i == 68) || (i>70 && i<74) || (i>84 && i<88)) {
			printf("*");
		}
		else {
			printf(".");
		}
	}
	printf("\n");

	for (i = 0; i<len; i++) {
		if ((i == 5 || i == 6) || (i>10 && i<60) || (i>66 && i<73) || (i == 85 || i == 86)) {
			printf("*");
		}
		else {
			printf(".");
		}
	}
	printf("\n");

	for (i = 0; i<len; i++) {
		if ((i == 5 || i == 6) || (i>10 && i != 54 && i<57) || (i>67 && i<71) || (i>83 && i<87)) {
			printf("*");
		}
		else {
			printf(".");
		}
	}
	printf("\n");

	for (i = 0; i<len; i++) {
		if ((i == 5 || i == 6) || (i>11 && i<48) || (i == 55 || i == 56) || (i>65 && i<69) || (i>82 && i<86)) {
			printf("*");
		}
		else {
			printf(".");
		}
	}
	printf("\n");

	for (i = 0; i<len; i++) {
		if ((i == 5 || i == 6) || (i>11 && i != 14 && i != 42 && i<45) || (i>54 && i<58) || (i>62 && i<67) || (i>81 && i<85)) {
			printf("*");
		}
		else {
			printf(".");
		}
	}
	printf("\n");

	for (i = 0; i<len; i++) {
		if ((i == 5 || i == 6) || (i>12 && i != 15 && i<18) || (i == 20 || i == 21 || i == 25 || i == 26) || (i>31 && i<35) ||
		(i == 43 || i == 44 || i == 56 || i == 57) || (i>60 && i<65) || (i>79 && i<83)) {
			printf("*");
		}
		else {
			printf(".");
		}
	}
	printf("\n");

	for (i = 0; i<len; i++) {
			if ((i == 5 || i == 6) || (i>12 && i != 19 && i<23) || (i == 26 || i == 27 || i == 33 || i == 34 || i == 43 || i == 44) ||
			(i>56 && i<63) || (i>78 && i<82)) {
				printf("*");
			}
			else {
				printf(".");
			}
		}
	printf("\n");

	for (i = 0; i<len; i++) {
			if ((i == 5 || i == 6) || (i>13 && i<18) || (i>20 && i<24) || (i>25 && i<29) || (i == 33 || i == 34 || i == 43 || i == 44) ||
			(i>53 && i<60) || (i == 67 || i == 73) || (i>76 && i<80)) {
				printf("*");
			}
			else {
				printf(".");
			}
		}
	printf("\n");

	for (i = 0; i<len; i++) {
			if ((i == 5 || i == 6) || (i>15 && i != 25 && i != 26 && i<29) || (i>32 && i<36) || (i == 43 || i == 44) || (i>46 && i<56) ||
			(i == 64 || i == 70 || i == 71) || (i>74 && i<79)) {
				printf("*");
			}
			else {
				printf(".");
			}
		}
	printf("\n");

	for (i = 0; i<len; i++) {
		if ((i == 5 || i == 6) || (i>20 && i<52) || (i == 61 || i == 62 || i == 67 || i == 68) || (i>72 && i<77)) {
			printf("*");
		}
		else {
			printf(".");
		}
	}
	printf("\n");

	for (i = 0; i<len; i++) {
		if ((i == 5 || i == 6) || (i>20 && i<52) || (i == 61 || i == 62 || i == 67 || i == 68) || (i>72 && i<77)) {
			printf("*");
		}
		else {
			printf(".");
		}
	}
	printf("\n");

	for (i = 0; i<len; i++) {
		if ((i>3 && i<7) || (i == 15 || i == 58 || i == 64 || i == 65 ) || (i>69 && i<75)) {
			printf("*");
		}
		else {
			printf(".");
		}
	}
	printf("\n");

	for (i = 0; i<len; i++) {
		if ((i == 4 || i == 5 || i == 16 || i == 53 || i == 54 || i == 61) || (i>66 && i<72)) {
			printf("*");
		}
		else {
			printf(".");
		}
	}
	printf("\n");

	for (i = 0; i<len; i++) {
		if ((i == 4 || i == 5 || i == 18 || i == 49 || i == 50 || i == 57 || i == 58) || (i>63 && i<69)) {
			printf("*");
		}
		else {
			printf(".");
		}
	}
	printf("\n");

	for (i = 0; i<len; i++) {
		if ((i == 2 || i == 3 || i == 9 || i == 10) || (i>18 && i<22) || (i>32 && i<43) || (i == 49 || i == 50) || (i>57 && i<64)) {
			printf("*");
		}
		else {
			printf(".");
		}
	}
	printf("\n");

	for (i = 0; i<len; i++) {
		if ((i == 1 || i == 2 || i == 12) || (i>37 && i<41) || (i>52 && i<58)) {
			printf("*");
		}
		else {
			printf(".");
		}
	}
	printf("\n");

	for (i = 0; i<len; i++) {
		if ((i>0 && i<4) || (i>13 && i<29) || (i>49 && i<55)) {
			printf("*");
		}
		else {
			printf(".");
		}
	}
	printf("\n");

	for (i = 0; i<len; i++) {
		if ((i>0 && i<4) || (i>45 && i<51)) {
			printf("*");
		}
		else {
			printf(".");
		}
	}
	printf("\n");

	for (i = 0; i<len; i++) {
		if ((i>1 && i<5) || (i>39 && i != 42 && i<48)) {
			printf("*");
		}
		else {
			printf(".");
		}
	}
	printf("\n");

	for (i = 0; i<len; i++) {
		if ((i>2 && i<7) || (i>34 && i<45)) {
			printf("*");
		}
		else {
			printf(".");
		}
	}
	printf("\n");

	for (i = 0; i<len; i++) {
		if ((i>3 && i<9) || (i>27 && i<37)) {
			printf("*");
		}
		else {
			printf(".");
		}
	}
	printf("\n");

	for (i = 0; i<len; i++) {
		if (i>6 && i<31) {
			printf("*");
		}
		else {
			printf(".");
		}
	}
	printf("\n");
}


