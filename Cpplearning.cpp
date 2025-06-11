/*Demonstrating classes and objects concepts in C++

class className {
access_modifier:
	//data member - variables that are defined inside a class

	//member function - functions/ methods declared inside a class
};
for example:

#include<iostream>
using namespace std;
class Lemayian {

	int age;

	void showAge() {
		cout << "Lemayian was 25 when he started coding in C++" << age << endl;
	}
};
int main() {
	cout << "Lemayian age is: 25 "<< endl;
}


//Demonstrating the use of acces modifiers
#include <iostream>
using namespace std; // Removed <bits/stdc++.h> for simplicity

// Creating a class
class Lemayian {
private: // Private section
	int age; // Can only be accessed within the class

public: // Public section
	// Method to set age
	void setAge(int a) {
		if (a >= 0) { // Basic validation
			age = a;
		}
		else {
			cout << "Age cannot be negative!" << endl;
		}
	}

	// Method to show age
	void showAge() {
		cout << "The age when Lemayian was coding cpp was : " << age << endl;
	}
};

int main() {
	Lemayian lema;

	// Try setting age (works)
	lema.setAge(25);
	lema.showAge(); // Prints: The age when Lemayian was coding cpp was : 25

	// Try setting invalid age (fails)
	lema.setAge(-5); // Prints: Age cannot be negative!
	lema.showAge(); // Still shows 25

	return 0;
}
*/


//Special Member functions

// 1. Constructor - class members used ton initialize objects.
#include<iostream>
using namespace std;
class Class {
public:

	//constructor
	Class() {
		cout << "Constructor is called!"<<endl;
	}
	//Destructor
	~Class() {
		cout << "Destructor is called! ";
	}
};
int main() {
	Class obj;
	return 0;
}




/*
C++ program o implement the memory management
 
#include<cstring>
#include<iostream>
using namespace std;

Driver code
int main() {
	int num = 5;
	float* ptr;

	Memory allocation of num number of floats
	ptr = new float[num];

	for (int i = 0; i < num; ++i){
		*(ptr + i) = i;
	}
	cout << "Display the FPA of students: " << endl;
	for (int i = 0; i < num; i++) {
		cout << "Student " << i + 1 << " : " << *(ptr + i)
			<< endl;
	}
	Ptr memory is  released
	delete[]ptr;
	return 0;

}

//Demonstration of multi-threading in C++
 
//C++ Program to implement the working of multithreading

#include <iostream>
#include <thread>

using namespace std;

#define NUM_THREADS 5

// Function to print Hello with thread
void PrintHello(int threadid) {
	cout << "Hello Dunia! Thread ID, " << threadid << endl;
}

int main() {
	// Create thread array
	thread threads[NUM_THREADS];
	int i;

	// Create threads
	for (i = 0; i < NUM_THREADS; i++) {
		cout << "main() : creating thread, " << i << endl;
		threads[i] = thread(PrintHello, i); // Create thread with argument
	}

	// Wait for all threads to complete
	for (i = 0; i < NUM_THREADS; i++) {
		threads[i].join(); // Join each thread
	}

	return 0;
}

/*Basic C++ Programs

#include<iostream> //includes the input ouput strema.
using namespace std; //Allows us to use cout and cin without prefixing them with std::

int main() {

	//Inserts a new line character

   This lines of codes demonstrate use of
	multi line comments in c++
	for a new learner like me
	
	Declariaring variables
	int age = 25;
	float height = 5.9;
	char grade = 'A';
	bool isStudent = true;
	cout << age << endl;
	cout << grade << endl;
	return 0;
	
	//Use of constants

	const float PI = 3.14159; //Constant declaration
	float radius = 5.0;
	float area = PI * radius * radius;

	cout << "Area of the circle: " << area << endl;
	return 0;
	

	//Demonstrating use of cin and cout

	int age;
	cout << "Enter your age: ";//Prompts the user to enter their age
	cin >> age; //Read input from the user
	cout << "Your age is:  "<<age<<endl; //Display the entered values
	return 0;

	

	//Demonstrating Control Flow and Decision Making

	// 1. Operators in C++

	int a = 10, b = 3;
	cout << "Sum: " << a + b << endl;
	cout << "Difference: " << a - b << endl;
	cout << "Product: " << a * b << endl;
	cout << "Quotient: " << a / b << endl;
	cout << "Renainder: " << a % b << endl;


	//Relational and logical operators
	int x = 5, y = 10;

	if (x >= y) {
		cout << "X is the larger number here." << endl;

	}
	cout << "Y is the larger digit here"<< endl;

	//2. ConditionL Statements

	int number;
	cout << "Enter a number: ";

	cin >> number;

	if (number > 0) {
		cout << "The number is positive :" << endl;

	} else if(number==0){
		cout << "The number is zero: " << endl;
	}
	else {
		cout << "The number is negative" << endl;
	}

	//Switch case Example

	int day;
	cout << "Enter Day of week ...";
	cin >> day;

	switch(day){
		case 1: cout << "Monday" << endl;
		break;
		case 2: cout << "Tuesday" << endl; break;
		case 3: cout << "Wednesday" << endl; break;
		case 4: cout << "Thursday" << endl; break;
		case 5: cout << "Friday" << endl; break;
		case 6: cout << "Saturday" << endl; break;
		case 7:cout << "Sunday" << endl; break;
		default: cout << "Invalidvvvee day" << endl;

	}

	//Loop and Iterations

	for (int i = 1; i <= 5; i++) {
		cout << "Number: " << i << endl;
	}



//Module 3.Function Defition and Declaration

#include<iostream>
using namespace std;

/*
//Function declaration
int product(int a, int b);

int main() {
	int result = product(5, 10); //Function call
	cout << "The product of a and b is  =  " << result << endl;
	return 0;

}
//Function defition
int product(int a, int b) {
	return a * b;

	
}
*/
//Function parameters(Pass by Value and Pass by Refference)

/*Pass by value :
void add(int x) {
	x = x + 5; //This only changes the local copy of X
	cout << "Inside function: " << x << endl;
}
int main() {
	int x = 10;
	add(x); //Pass by value
	cout <<"Outside function :" << x << endl;
	return 0;
}

//Pass by reference example

void add(int& x) {//Pass by reference
	x = x+5; //This changes the acual value x
	cout << "Inside function: " << x << endl;
}
int main() {
	int x = 10;
	add(x); //Pass by reference
	cout << "Outside function: " << x<<endl; //x is now changed
	return 0;
	}

// Module 4. Arrays and Strings
// declaration and initialization of arrays

int main() {
	int arr[5] = { 11, 22, 33, 44, 55};
	
	for (int i = 0; i < 5; i++) {
		cout << "Element" << i + 1 << ":" << arr[i] << endl; //Accesing array elementts
	}


	//Multi-Dimensional Array
	int matrix[2][3] = { {1,2,3},{4,5,6} }; //Initializinig a 2*3 matrix
	//Display the matrix
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			cout << matrix[i][j] << " ";//Accesing matrix elements
		}
		cout << endl; //Move to the next line after each row
	}
	return 0;
}

//Module 5. Introduction to Strings
#include<string> //include the string library
using namespace std;
int main() {
	string str = "Supa Enkop pookin!!!"; //Display the string



	//str.length() returns the number of characters in the string
	cout << "String: " << str << endl;
	cout << "Length: " << str.length() << endl; //Display the length of string

	//Accessing individual character
	for (int i = 0; i < str.length(); i++) {

		//str[i] accesses the individual characters of the string
		cout << "Character at position: " << i << ": " << str[i] << endl;
	}

	//String operations
	string str1 = "Supa";
	string  str2 = "Enkop";
	string str3 = "Pookin!";
	string result;

	//Concatenation
	result = str1 + str2 + str3;
	cout <<"Concatenated String: " << result << endl;

	//Comparison
	if (str1 == str2) {
		cout << "String are equal. " << endl;
	}
	else {
		cout << "Strings are not equal ." << endl;
	}

	//Substring
	string sub = result.substr(6, 9); //Get substring starting at index 6 with length 9
	cout << "Substring: " << sub << endl;

	return 0;

}

//MODULE 6. ADVANCED TOPICS

// a. Pointers(are variables that store memory addresses used to directly access and manipulate memory

#include<iostream>
using namespace std;

int main() {
	int num = 10;
	int* ptr = &num; //Pointer to a interger

	cout << "Value of num: " << num << endl;
	cout << "Address of num: " << &num << endl;
	cout << "Value of ptr: " << ptr << endl; // address stored in pointer
	cout << "Value at ptr: " << *ptr << endl; //deferencing pointer to get value

	return 0;
}
// b. Classes and objects

#include<iostream>
using namespace std;
class Rectangle {
public:
	int width, height;

	void setValues(int w, int h) {
		width = w;
		height = h;
	}
	int area() {
		return width * height;
	}
};
int main() {
	Rectangle rect;
	rect.setValues(4, 8); //set width and height

	cout << "Area of Rectangle: " << rect.area() << endl; //Calculate and display area

	return 0;
}

#include<iostream>
#include<string>
using namespace std;

class Car {
public:
	string brand;
	int year;
	void displayCar(string brand, int year) {
		return brand, year;
	}
};
int main() {
	Car cr;
	cr.displayCar("Cayenne", 2024);
	cout << "The brand of car is: " <<cr.displayCar() << endl;
	return 0;
}

#include <iostream>
#include <stack>
#include <string>
using namespace std;

// Check if a character is an operator
bool isOperator(char c) {
	return (c == '+' || c == '-' || c == '*' || c == '/');
}

// Get operator precedence
int precedence(char op) {
	if (op == '+' || op == '-') return 1;
	if (op == '*' || op == '/') return 2;
	return 0;
}

// Convert infix to postfix
string infixToPostfix(string infix) {
	stack<char> s;
	string postfix = "";

	for (char c : infix) {
		if (isalnum(c)) { // Operand (letter or number)
			postfix += c;
		}
		else if (c == '(') {
			s.push(c);
		}
		else if (c == ')') {
			while (!s.empty() && s.top() != '(') {
				postfix += s.top();
				s.pop();
			}
			s.pop(); // Remove '('
		}
		else if (isOperator(c)) {
			while (!s.empty() && s.top() != '(' && precedence(s.top()) >= precedence(c)) {
				postfix += s.top();
				s.pop();
			}
			s.push(c);
		}
	}

	// Pop remaining operators
	while (!s.empty()) {
		postfix += s.top();
		s.pop();
	}

	return postfix;
}

int main() {
	string infix = "a+b*c";
	cout << "Infix: " << infix << endl;
	cout << "Postfix: " << infixToPostfix(infix) << endl;
	return 0;
}


//SDT simple to evvaluate an arithmetic expression during parsing ie to 
//compute 3+4*2

#include<iostream>
using namespace std;

//Global index for input string
string input;
int index = 0;

//Forward declarations for recursive descent
struct Expr {
	int value; //Syntesized attribute
};

//Factor: id(number)
Expr F() {
	Expr f;
	if (isdigit(input[index])) {
		f.value = input[index] - '0'; //Convert char to int
		index++;
	}
	return f;
}

//Term T->T*F|F
Expr T() {
	Expr t = F();
	while (index < input.length() && input[index] == '*') {
		index++; //Skip '*'
		Expr f = F();
		t.value = t.value*f.value; //SDT action : compute multiplication

	}
	return t;
}
//Expression E->E+T|T
Expr E() {
	Expr e = T();
	while (index < input.length() && input[index] == '+') {
		index++; //Skip '+'
		Expr t = T();
		e.value = e.value + t.value; //SDT action: compute addition

	}
	return e;
}
int main() {
	input = "3+4*2"; //Input expression (no spaces!)
	Expr result = E();
	cout << "Valueof " << input<<" = " << result.value << endl;
	return 0;
}


//Recursive descen parser wth SDT to convert an infix expression to postfix using attributes

#include<iostream>
#include<string>

using namespace std;

//Global input string and index
string input;
int index = 0;

//Structure to hold attributes
struct Expr {
	string postfix; //Syntesized attribute for postfix notation
};

//Factor :F->id (variable or number)
Expr F() {
	Expr f;
	if (isalnum(input[index])) {//Check if its a letter or digit
		f.postfix = input[index]; //Store the character as postfix
		index++;

	}
	return f;
}
//Term T->T*F|F
Expr T() {
	Expr t = F();
	while (index < input.length() && input[index] == '*') {
		index++;
		Expr f = F();
		t.postfix = t.postfix + "*"; //SDT action: build postfix
	}
	return t;
}
//Expression E->E+T|T
Expr E() {
	Expr e = T();
	while (index << input.length() && input[index] == '+') {
		index++; //Skip '+'
		Expr t = T();
		e.postfix = e.postfix + t.postfix + "+"; //SDT action: build postfix
	}
	return e;
}
int main() {
	input = "a+b*c"; //Infix expression (no space)
	Expr result = E();
	cout << "Infix " << input << endl;
	cout << "Postfix " << result.postfix << endl;
	return 0;
}

//Simple arrays in c++
#include<iostream>
using namespace std;

int main() {
		//Declare an arrayof 5 integers
		int numbers[5] = { 11,23,34,45,67 };

		//Print each element
		cout << "Array elemts: ";
		for (int i = 0; i < 5; i++) {
			cout << numbers[i] << endl;
		}
		cout << endl;
		return 0;
}



/*
//Array based queue

#include<iostream>
using namespace std;

//Queue Class (Array-based)
class Queue {
private:
	static const int MAX_SIZE = 5;
	int *arr;
	int frontIndex;
	int rearIndex;
	int currentSize;

public:
	//Constructor
	Queue() {
		arr = new int[MAX_SIZE];
		frontIndex = 0;
		rearIndex = -1;
		currentSize = 0;
	}

	//Enqueue(add element)
	void enqueue(int value) {
		if (currentSize < MAX_SIZE) {
			rearIndex = (rearIndex + 1) % MAX_SIZE; //Circular queue
			arr[rearIndex] = value;
			currentSize++;

		}
		else {
			cout << "Queue is full! " <<endl;
		}
	}
	//Dequeue(remove an element)
	void dequeue() {
		if (currentSize > 0) {
			frontIndex = (frontIndex + 1) % MAX_SIZE;
			currentSize--;
		}
		else {
			cout << "Queue is empty! " << endl;
		}
	}
	//Front (Peek at front element)
	int front() {
		if (currentSize > 0) {
			return arr[frontIndex];
		}
		cout << "Queue is empty!" << endl;
		return -1;
	}
	//check if empty
	bool isEmpty() {
		return currentSize == 0;
	}
	//Destructor
	~Queue() {
		delete[]arr;
	}
};
int main() {
	Queue q;
	q.enqueue(10);
	q.enqueue(20);
	q.enqueue(30);
	q.enqueue(50);
	cout<<"Front element: "<<q.front()<<endl;
	q.dequeue();
	cout << "Font element after dequeue: " << q.front() << endl;
	return 0;
}
*/