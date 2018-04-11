#include "./header.hpp"
using namespace std;

typedef double ElemType;

void del_min(SqList&l, ElemType&value)
{
	if (l.length <= 0)
	{
		cerr << "Error!\n";
		exit(-1);
	}
	value = l[0];
	int pos = 0;
	for (unsigned i = 1; i < l.length; i++)
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

void reverse(SqList& l)
{
	ElemType e;
	for (unsigned i = 0; i < l.length / 2; i++)
	{
		e = l[i];
		l[i] = l[l.length - 1 - i];
		l[l.length - 1 - i] = e;
	}
}



void test_del_min()
{
	double a[10] {18, 24, 53, 2, 4, 5, 6,  10, 6, 4};
	SqList s(a, 10);
	cout << s.length << endl;


	for (unsigned i = 0; i < s.length; i++)
	{
		cout << s[i] << "\t";
	}
	cout << endl;

	double b;
	del_min(s, b);

	cout << s.length << endl;
	cout << endl;
	for (unsigned i = 0; i < s.length; i++)
	{
		cout << s[i] << "\t";
	}
	cout << endl;

}

void test_reverse()
{
	double a[10] {18, 24, 53, 2, 4, 5, 6,  10, 6, 4};
	SqList s(a, 10);
	cout << s.length << endl;


	for (unsigned i = 0; i < s.length; i++)
	{
		cout << s[i] << "\t";
	}
	cout << endl;

	reverse(s);

	for (unsigned i = 0; i < s.length; i++)
	{
		cout << s[i] << "\t";
	}
	cout << endl;
}

int main()
{
	test_reverse();
	return 0;
}
