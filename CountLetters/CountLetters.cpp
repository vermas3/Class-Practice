// CountLetters.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <stdio.h>
using namespace std;
int countletters(char myphr[100]);


int main() {
	char myphrase[100];
	cout << "Enter phrase" << endl;
	gets_s(myphrase);

	int ct =countletters(myphrase);
	cout << " you have " << ct << " letters " << endl;
	return 0;
}


int countletters(char myphr[100]) 
{
		int i;
		int count = 0;
		for ( i = 0; i < strlen(myphr); i++)
		{
			if (myphr[i]!=' ' && myphr[i]!=',' && myphr[i]!='!')
			{
				count += 1;
			}
		}
		return count;
	}
    

