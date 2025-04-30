#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_PEOPLE 100

typedef struct {
	char name[100];
	double height;
	double weight;
} Person;

int compare_height(const void *a, const void *b) {
	const Person *pa = (const Person *)a;
	const Person *pb = (const Person *)b;
	if (pa->height < pb->height) return -1;
	else if (pa->height > pb->height) return 1;
	else return 0;
}

int main(void)
{
	FILE *fp;

	if ((fp = fopen("hw.txt", "r")) == NULL)
		printf("\aファイルをオープンできません。\n");
	else {
		Person data[MAX_PEOPLE];
		int ninzu = 0;
		double hsum = 0.0, wsum = 0.0;

		while (ninzu < MAX_PEOPLE &&
		       fscanf(fp, "%s%lf%lf", data[ninzu].name, &data[ninzu].height, &data[ninzu].weight) == 3) {
			hsum += data[ninzu].height;
			wsum += data[ninzu].weight;
			ninzu++;
		}

		qsort(data, ninzu, sizeof(Person), compare_height);

		for (int i = 0; i < ninzu; i++) {
			printf("%-10s %5.1f %5.1f\n", data[i].name, data[i].height, data[i].weight);
		}

		printf("----------------------\n");
		if (ninzu > 0)
			printf("平均       %5.1f %5.1f\n", hsum / ninzu, wsum / ninzu);

		fclose(fp);
	}

	return 0;
}
