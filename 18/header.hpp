#include <iostream>

#define MAX 100

class SqList
{
public:
	double length = 0;
	double *arr;

public:
	SqList(double a[], unsigned len)
	{
		arr = new double[len];
		for (unsigned i = 0; i < len; i++)
		{
			arr[i] = a[i];
		}
		length = len;
	}

	SqList(unsigned len): length(len), arr(new double[len])
	{

	}

	double& operator[](unsigned i)//假如这里不是double&, 那么就不可以赋值
	{
		return  arr[i];
	}
};
