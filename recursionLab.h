#include <iostream>
#include <string>

using namespace std;

// Write a function lineOfStars() that prints a line of n stars.
// Example: lineOfStars(3) returns "***"
//          lineOfStars(0) returns ""
// You may not use a loop.
string lineOfStars(int n) {
	int num =n;
	if(num==0){
		return "";
	}
	else{
		string s = *;
		return "s"+lineOfStars(num--);
	}
}

// Write a function power() that will
//    compute the x to the power of n recursively
// if the power is invalid, return 0
float power(float x, int n) {
	if(n<=0)
	return 0;
	else{
		return x*(power(n--));
	}
}

/*
Write a function stars(int n) that prints the shape below.
You may call lineOfStars as a subroutine.
You may not use a loop.  
stars(4);

should display:

****
***
**
*
**
***
****

*/
void stars(int n) {
if(n<=0)
return;
else{
		return lineOfStars(4)+lineOfStars(3)+lineOfStars(2)+lineOfStars(1)+lineOfStars+lineOfStars(2)+lineOfStars(3)+lineOfStars(4);
}
}

// Write a *recursive* function that will check if
//    a string is a palindrome
// Hint 1: you can call s.front() to get the first character of string and s.back() to get the last one
// Hint 2: s.substr(i,j) gives you the substring of s. For example if s = Hello, s(1,s.length()-1) gives you ello
bool isPalindromeR(string s)
{
	bool b =false;
	if(s=="")
	return false;
	else{
		if(s.front()==s.back()){
		b = true;
		s = s(1,s.length()-1);
		s = s(s.back,s.length()-1);
		isPalindromeR(s);
		}
		else
		b=false;
	return b;
	}
}


// Write a function that will return the reverse of a string
// The function should be recursive, you can use the substring
//  methods from the previous function
string reverse(string s)
{
	int num =0
	if(s=="")
	return "";
	else{
		p.substr(num,1)=reverse(s.substr(s.length()--,1));
		return p;
		}
	}
}
