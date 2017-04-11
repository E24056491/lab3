#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

int main()
{
	int num = 0;
	int insert = 0;
	int moveterm = 0;
	int sum = 0;
	ifstream Filein("filein.txt", ios::in);
	Filein>>num;
	vector<int> cows(num);
	
	for(int i = 0; i < num; i++)
	{
		Filein>>cows.at(i);
	} 
	
	for(int next = 1; next < num; next++)
	{
		insert = cows.at(next);
		moveterm = next;
		while(moveterm > 0 && cows.at(moveterm-1) > insert)
		{
			cows.at(moveterm) = cows.at(moveterm-1);
			moveterm--;
		}
		cows.at(moveterm) = insert;
	}
	for(int j = 3; j < num; j++)
	{
		sum += cows.at(j);
	}
	cout<<sum<<endl;
	
} 	
	
	
	
	

