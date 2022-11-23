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
	for (int i = 0; i < phrase.length(); i++) //loop through the phrase
	{
		if (phrase[i] != ' ')  // if the character is not a space
		{
			s.push(phrase[i]); //push the phrase onto the stack
			q.push(phrase[i]); //push the phrase onto the queue
		}
	}
	bool palindrome = true; //boolean to hold if the phrase is a palindrome
	while (!s.empty() && palindrome)
	{
		if (s.top() != q.front()) //if top of stack does not equal front of queue
		{
			palindrome = false;
		}
		s.pop(); //pop the stack
		q.pop(); //pop the queue
	}
	cout << endl;
	
	cout << "forward phrase from queue: " << phrase << endl;
	cout << "poppped phrase from stack: " << phrase << endl;
	if (palindrome)
	{
		cout << "The phrase is a palindrome." << endl;
	}
	else
	{
		cout << "The phrase is not a palindrome." << endl;
	}
	system("pause");
	return 0;
} //end main function