#include <stdio.h>

int main() {

	char first = getchar();
	char second = getchar();
	char third = getchar();

	long long total=0;
	if (first == "black")
	{
		total = 0;
	}
	else if (first == "brown")
	{
		total = 10;
	}
	else if (first == "red")
	{
		total = 20;
	}
	else if (first == "orange")
	{
		total = 30;
	}
	else if (first == "yellow")
	{
		total = 40;
	}
	else if (first == "green")
	{
		total = 50;
	}
	else if (first == "blue")
	{
		total = 60;
	}
	else if (first == "violet")
	{
		total = 70;
	}
	else if (first == "grey")
	{
		total = 80;
	}
	else if (first == "white")
	{
		total = 90;
	}

	if (second == "black")
	{
		total += 0;
	}
	else if (second == "brown")
	{
		total += 1;
	}
	else if (second == "red")
	{
		total += 2;
	}
	else if (second == "orange")
	{
		total += 3;
	}
	else if (second == "yeloow")
	{
		total += 4;
	}
	else if (second == "green")
	{
		total += 5;
	}
	else if (second == "blue")
	{
		total += 6;
	}
	else if (second == "violet")
	{
		total += 7;
	}
	else if (second == "grey")
	{
		total += 8;
	}
	else if (second == "white")
	{
		total += 9;
	}

	if (third == "black")
	{
		total *= 1;
	}
	else if (third == "brown")
	{
		total *= 10;
	}
	else if (third == "red")
	{
		total *= 100;
	}
	else if (third == "orange")
	{
		total *= 1000;
	}
	else if (third == "yeloow")
	{
		total *= 10000;
	}
	else if (third == "green")
	{
		total *= 100000;
	}
	else if (third == "blue")
	{
		total *= 1000000;
	}
	else if (third == "violet")
	{
		total *= 10000000;
	}
	else if (third == "grey")
	{
		total *= 100000000;
	}
	else if (third == "white")
	{
		total *= 1000000000;
	}


	printf("%d", total);
}