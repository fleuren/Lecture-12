#include <iostream>
#include <string>
using namespace std;

int main()
{
/*
	int ages[5];

	ages[0] = 19;
	ages[1] = 23;
	ages[2] = 22;
	ages[3] = 30;
	ages[4] = 18;

int array[5] = {19, 23, 22, 30, 18};
*/
/*
int heartRates[8] = {54, 60, 71, 59, 62, 63, 60, 58};
for(int i = 0; i < 8; i++){
	cout << heartRates[i] << endl;
}
*/
/*
string month[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
for(int i = 0; i < 12; i++){
	cout << month[i] << endl;
}
*/
int gradeInput[5];
int sum = 0;

cout << "Enter marks" << endl;
for(int x = 0; x < 5; x++){
cin >> gradeInput[x];
sum += gradeInput[x];
}

cout << "Inputted Marks" << endl;
for(int y = 0; y < 5; y++){
	cout << gradeInput[y] << endl;
}


cout << "Sum: " << sum << endl;
cout << "Average: " << sum/5 << endl;
}