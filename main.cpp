#include <iostream>
#include "ArrayInt.h"
#include <vector>

using namespace std;

void find_diff(vector<int> &massiv) {
int temp;
int ii = 1;
temp = massiv[0];
    for(int i = 0; i < massiv.size(); i++) {
        for (int j = 1; j < massiv.size(); j++) {
				if (massiv[j] > temp) {
					temp = massiv[j];
					ii++;
		}
      }
    }
        cout << ii;
}

int main()
{

//Task 1.4--------------------
cout << "Task 1" << endl;
ArrayInt new_massiv;
new_massiv.push_back(2);
new_massiv.push_back(1);
new_massiv.push_back(7);
new_massiv.push_back(4);

new_massiv.Print();

//Task 1.3--------------------

new_massiv.sort_massiv();
new_massiv.Print();

//Task 1.1--------------------

new_massiv.pop_back();
new_massiv.Print();

//Task 1.3--------------------
new_massiv.pop_front();
new_massiv.Print();

//Task 2----------------------
cout << "Task 2" << endl;
vector <int> massiv = {1, 1, 2, 2, 3, 3, 4, 5};
find_diff(massiv);



    return 0;
}
