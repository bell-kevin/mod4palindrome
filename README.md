# mod4palindrome

This exercise demonstrates your competency in the skills learned in this module. You must complete this exercise on your own, without any help from an instructor or another student. If you get stuck, go back through the relevant sections in the book, the quizzes, and the assignments for this module -- everything you need to do in this exercise has been covered in this module.

These are the skills you practiced in this and previous modules and will now demonstrate:

-Using STL functions

-Using stacks

-Using queues
 

Module 4 Competency Exercise: Palindrome

Create a project that uses a queue and a stack to determine if a phrase is a palindrome (the same letters forwards and backwards).

Ask the user to enter a phrase to test. Insert each character that is not a space into both a queue and a stack. This removes the spaces from the phrase. Dequeueing the queue and storing the characters in a string creates a forward phrase with no spaces. Popping the stack and storing the characters in a string creates a reversed phrase with no spaces. Display the strings to the user. If these two strings are equal, the phrase is a palindrome. Tell the user if it is or is not a palindrome.

The results could look like this:

![2320 M3 Competency palindrome](https://github.com/bell-kevin/mod4palindrome/blob/main/palindrome.PNG)    

![2320 M3 Competency not palindrome](https://github.com/bell-kevin/mod4palindrome/blob/main/palindromeNOT.PNG)

Since a string is an array of characters, it is easy to go through the phrase one letter at a time for this project. Use an STL deque container for a queue of the characters and an STL stack container using a vector of the characters in this project. Remember that a pop for a stack and a pop_front for a queue each removes an element but does not return the value in that element. You have to get the value in the element and then remove it, in exactly the same way for both data structures.

Run the project with a phrase that is a palindrome and take a screenshot. Run the project again with a phrase that is not a palindrome and take another screenshot.

 

NOTE: Remember the requirements for a header and a pause at the end of the program, discussed in the reading "Console Applications". These are required in every console application project.

Submission: Submit a single zipped folder containing all of the specified screenshots AND the root folder for the project.

== We're Using GitHub Under Protest ==

This project is currently hosted on GitHub.  This is not ideal; GitHub is a
proprietary, trade-secret system that is not Free and Open Souce Software
(FOSS).  We are deeply concerned about using a proprietary system like GitHub
to develop our FOSS project. I have a [website](https://bellKevin.me) where the
project contributors are actively discussing how we can move away from GitHub
in the long term.  We urge you to read about the [Give up GitHub](https://GiveUpGitHub.org) campaign 
from [the Software Freedom Conservancy](https://sfconservancy.org) to understand some of the reasons why GitHub is not 
a good place to host FOSS projects.

If you are a contributor who personally has already quit using GitHub, please
email me at **bellKevin@pm.me** for how to send us contributions without
using GitHub directly.

Any use of this project's code by GitHub Copilot, past or present, is done
without our permission.  We do not consent to GitHub's use of this project's
code in Copilot.

![Logo of the GiveUpGitHub campaign](https://sfconservancy.org/img/GiveUpGitHub.png)
