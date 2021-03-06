#include "pch.h"
#include <iostream>
struct Order {
	char date[15];
	char region[15];
	char rep[10];
	char item[15];
	int units;
	float cost;
	float totalCost;
};

struct Order orders[100];
float totalFind(char wordSearch[15], int n);
int getFile();

int main() {
	char wordSearch[15];
	int n = getFile();
	for (;;) {
		printf("Enter product name (or return to quit): ");
		gets_s(wordSearch);
		if (wordSearch[0] == 0) {
			break;
		}
		float total = totalFind(wordSearch, n);
		printf("Total sales for %s: %.2f\n", wordSearch, total);

	}
}

float totalFind(char wordSearch[15], int n) {
	float total = 0;
	for (int i = 0; i < n; i++) {
		int f = strcmp(orders[i].item, wordSearch);
		if (f == 0) {
			total += orders[i].totalCost;
		}
	}
	return total;
}

int getFile() {
	FILE *file;
	file = fopen("C:\\Users\\Shain\\Downloads\\SampleData.txt", "r");
	int Countorder = 0;
	if (file == NULL) {
		printf("Error reading file");
	}
	for (int i = 0; !feof(file); i++) {
		fscanf(file, "%s", &orders[i].date);
		fscanf(file, "%s", &orders[i].region);
		fscanf(file, "%s", &orders[i].rep);
		fscanf(file, "%s", &orders[i].item);
		fscanf(file, "%d", &orders[i].units);
		fscanf(file, "%f", &orders[i].cost);
		fscanf(file, "%f\n", &orders[i].totalCost);
		Countorder++;
	}
	return Countorder;
}