#include <iostream>
using namespace std;
void swap(int* n1, int* n2)
{
	*n1 = (*n1)*(*n2);
	*n2 = (*n1) / (*n2);
	*n1 = (*n1) / (*n2);

}

int main() 
{
	int *ptr1;
	int *ptr2;
	int x, y;
	cout << "enter 1st value " << endl;
	cin >> x;
	cout << "enter 2nd value " << endl;
	cin >> y;
	ptr1 = &x;
	ptr2 = &y;
	swap(*ptr1, *ptr2);
	cout<<"after swaping"<<endl;
	cout<< *ptr1  <<"  "<< *ptr2;

	
}
