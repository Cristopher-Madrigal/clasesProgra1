#include <iostream>

void fillWithRandoms(int*& prices) {
	prices = new int[50];
	for (int i = 0; i < 50; i++)
	{
		prices[i] = rand() % 90 + 10;
	}
}
float getAveragePrice(int*& prices) {
	float sum = 0;
	for (int i = 0; i < 50; i++)
	{
		sum += prices[i];
	}
	return sum / 50;
}


int main()
{
    int* prices = nullptr;
	fillWithRandoms(prices);
	getAveragePrice(prices);
}

