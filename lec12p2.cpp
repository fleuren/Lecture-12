#include <iostream>
#include <string>
using namespace std;

int main(){
//"auto" command sample
/*
string courses[] = {"BSU CC", "BSU BA", "HNC CC", "HND"};

for (int i=0; i < 4; i++){
cout << courses[i] << endl;
}
for (auto course: courses){//range based for loop
cout << course << endl;
}
*/
//codelab output using auto
/*	
char letters[] = {'C', 'o', 'd', 'e', 'L', 'a', 'b'};
for(auto letter : letters){
cout << letter;
}
*/

//input-output using arrays	
/*
int intInput[5];

cout << "Enter integer values" << endl;
for(int x = 0; x < 5; x++){
cin >> intInput[x];
}

cout << endl;
cout << "Inputted integers:" << endl;
for(auto intInput : intInput){
	cout << intInput << endl;
}
*/
//snacks iteration, and snacks output
cout << endl;
string snacks[3][4] = {
{"| Galaxy silk,", " Mars Bar,", " Snickers,"," Bounty,"},//first row
{"| Flavoured Youghurt,", " Oman chips,"," Oreo,"," Lays,"}, //second row
{"| Apple,"," Banana,"," Orange,"," Pear"} //third row
};
for(int x = 0; x < 3; x++){
for(int y = 0; y < 4; y++){
cout << snacks[x][y] << " ";
}
cout << endl;
}

cout << endl;

char face[5][5] = {
{'-','-','-','-','-'},
{'-','O','-','O','-'},
{'-','@','@','@','-'},
{'-','^','^','^','-'},
{'-','v','v','v','-'},
};
for(int i = 0; i < 5; i++){
for(int j = 0; j < 5; j++){
cout << face[i][j];
}
cout << endl;
}
return 0;
}

