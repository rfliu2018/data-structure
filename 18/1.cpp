#include "./header.hpp"
using namespace std;

typedef double ElemType;

void del_min(SqList&l, ElemType&value)
{
	value = l[0];
	int pos = 0;
	for (int i = 1; i < l.length; i++)
	{
		if (l[i] < value)
		{
			pos = i;
			value = l[i];
		}
	}
	l[pos] = l[l.length - 1];
	l.length--;
}


int main()
{
	SqList s(20);
	cout << s.length << endl;

	for (int i = 0; i < s.length; i++)
	{
		s[i] = i * i;
	}

	for (int i = 0; i < s.length; i++)
	{
		cout << s[i] << "\t";
	}
	cout << endl;
}
