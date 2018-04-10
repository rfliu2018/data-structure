#include <iostream>

using namespace std;

int main()
{
	int a[12] = {1, 3, 4, 5};

	int*beg = begin(a), *en = end(a);

	while (beg != en)
	{
		cout << *beg << "\t";
		beg++;
	}
	cout << endl;
}
