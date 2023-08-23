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

int findLowerPrice(int*& prices) {
	int lower = prices[0];
	for (int i = 1; i < 50; i++)
	{
		if (prices[i] < lower)
		{
			lower = prices[i];
		}
	}
	return lower;
}

float getAveragePriceWithOutLower(int*& prices) {
	float sum = 0;
	for (int i = 0; i < 50; i++)
	{
		if (prices[i] == findLowerPrice(*& prices))
		{
			i++;
		}
		sum += prices[i];
	}
	return sum / 50;
}
void sumHigherPrices(int*& prices, int number) {
	int sumHigher = 0;
	for (int i = 0; i < 50; i++)
	{
		if (prices[i] > number)
		{
			sumHigher += prices[i];
		}
	}
}

int main()
{
    int* prices = nullptr;
	int number = 0;
	fillWithRandoms(prices);
	getAveragePrice(prices);
	findLowerPrice(prices);
	getAveragePriceWithOutLower(prices);
	sumHigherPrices(prices, number);
}

