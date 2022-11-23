// mod4palindrome.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


//Create a project that uses a queue and a stack to determine if a phrase is a palindrome (the same letters forwards and backwards).
#include <iostream>
#include <string>
#include <stack>
#include <queue>
using namespace std;

int main()
{
	cout << "Module 4 Competency Palindrome by Kevin Bell\n\n";
	string phrase; //string to hold the phrase
	stack<char> s; //stack to hold the phrase
	queue<char> q; //queue to hold the phrase
	cout << "Enter a phrase, and I will check if it is a palindrome:\n";
	getline(cin, phrase); //get the phrase
// Insert each character that is not a space into both a queue and a stack. This removes the spaces from the phrase. 
// Dequeueing the queue and storing the characters in a string creates a forward phrase with no spaces. 
//Popping the stack and storing the characters in a string creates a reversed phrase with no spaces
	for (int i = 0; i < phrase.length(); i++)
	{
		if (phrase[i] != ' ')
		{
			s.push(phrase[i]);
			q.push(phrase[i]);
		}
	}
	string forward = "";
	string reverse = "";
	while (!q.empty())
	{
		forward += q.front();
		q.pop();
	}
	while (!s.empty())
	{
		reverse += s.top();
		s.pop();
	}
	cout << endl;
	cout << "forward phrase from queue: " << forward << endl;
	cout << "popped phrase from stack: " << reverse << endl;
	cout << endl;
	// Compare the forward and reverse phrases. If they are the same, the phrase is a palindrome.
	if (forward == reverse)
	{
		cout << "The phrase is a palindrome.\n";
	}
	else
	{
		cout << "The phrase is not a palindrome.\n";
	}
	system("pause");
	return 0;
} //end main function
