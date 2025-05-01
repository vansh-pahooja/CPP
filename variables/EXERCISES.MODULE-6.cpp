#include <iostream>
using namespace std;
int main (){
	
	//5.1 Strings Introduction
	
//1.Write a program to declare a string variable greeting and assign it the value "Welcome". Then print the value of greeting.
	
	string greeting="welcome";
	cout<<greeting<<endl;
	
	
	//2.What does the following code print?
    string name = "Alice";
    cout << name<<endl;
    //it prints "alice";
    
    
//3.	Modify the above program to ask the user for their name and then greet them by name.

	string namee;
	cout<<"enter your namee: "<<endl;
	getline(cin,namee);
	
	cout<<"hello "<<namee<<endl;
	
	//4.Write a program that reads two strings from the user, concatenates them, and then prints the result.

	string x;
	string y;
	cout<<"enter your x "<<endl;
	cin>>x;
	cout<<"your y is: "<<endl;
	cin>>y;
	cout<<"your x,y is: "<<x+y<<endl;
	
//	5.2 String Concatenation

//5.Write a program that concatenates the strings "Good" and "Morning" and prints the result.

 string greetingss="good";
 string greetings="morning";
 cout<<"greeting: "<<greetingss+greetings<<endl;
 
 //6.What will the following code output?
   string firstName = "John";
   string lastName = "Doe";
   cout << firstName + lastName<<endl;//output will be johndoe

//7.Write a program that concatenates a user’s first name and last name with a space between them.

	string name1="vansh";
	string name2="kumar";
	cout<<"your name is: "<<name1+" "+name2<<endl;
	
	//5.3 Numbers and Strings
    //8.Write a program that adds two numbers and prints the result.
    
    int no1=10;
    int no2=20;
    cout<<"your no1,no2 is: "<<no1+no2<<endl;
    
    //9.What will this program print?
    string a = "5";
    string b = "10";
    cout << a + b<<endl;//output will  be 510 because in string we do (concatenation) not (addition);
  
    //10.Write a program that concatenates a number (converted to a string) with another string and prints the result.
  
    int num1=10;
    string textt="is my lucky number";
    
    string strNumber = to_string(num1);
    
    cout<<"your result is: "<<strNumber+" "+textt<<endl;
	 
	//11. What happens if you try to add an integer and a string, like this:
	
    //string m = "Hello";
    //int l = 5;
    //string result = m + l;//it's cause error;
    
    
    //12.Write a program that converts an integer into a string and then concatenates it with another string.

    int num=25;
    string txt="is my seat no";
    
    string strnum= to_string(num);
    
    cout<<"your result is: "<<strnum+" "+txt<<endl;
    
    
    //13.Why is adding a number to a string causing an error in the example above?

    //because string stores characters/text besides int is a integer which stores numrical values and if we try to combine two data types it cause error 
    //if you want to add a number in a string you have to change the integer to string concentention;
    
    
    
     //5.4 String Length
     
    //14.Write a program that prints the length of the string "C++ Programming".
    
    string address="kasai moholla kandhkot";
    cout<<"the size of address is:"<<address.size()<<endl;
    
   //15. What does the following code print?
   string txxt = "OpenAI";
   cout << txxt.length()<<endl;//its prints 6;
    
    //16.Write a program that reads a string from the user and prints its length.


    string variable;
    cout << "Enter a string: ";
    cin.ignore();
    getline(cin, variable);
    cout << "Length of the string: " << variable.size() << endl;
    
  //17.Explain the difference between length() and size() for strings.
	
  //ans.according to me there is no difference its up to us what we wright  
  
  //5.5 Access Strings
  
//18.Write a program that accesses and prints the first character of the string "Computer".
  
  string character="computer";
  cout<<character[0]<<endl;
  
  //19.What will the following code output?
    string regards = "Hello";
    cout << regards[2]<<endl;//output will be l;
    
   //20. Write a program that prints the last character of the string "Programming".
    
    string job="programming";
    cout<<job[job.size() -1]<<endl;
    
    //21.Modify the above program to print the third character in the string entered by the user.
    
    string degree="computer science";
    cout<<degree[2]<<endl;
    
    //22.Write a program that changes the first letter of a string to uppercase and prints the result.
     string mystring="vansh";
        mystring[0] = toupper(mystring[0]);
    

    cout << "Result: " << mystring << endl;
    
    //23.Explain what happens when you access a character that is out of range using myString[index].
    
    //
	#include <iostream>
#include <string>

    std::string myString = "Hello";
    char ch = myString[10];  // Index out of range
    std::cout << ch << std::endl;  // Undefined behavior
    
    
    //5.6 Special Characters
  
   //24.Write a program that prints a string containing a double quote ("), like He said, "Hello!".

    string greet ="he said \"hello\" everyone";
    cout<<greet<<endl;
	
//25.What will this code print?
    string tt = "It's a beautiful day!";
     cout << tt<<endl;//output will be It's a beautiful day its in ' cotation  
     
   //26.Write a program that prints a string with both single and double quotes, and also contains a newline.
     
     string information="you\'r the most \"beautiful\" person";
     cout<<information<<endl;
     
     //27.Explain why escape characters like \n and \t are useful when working with strings.
     //ans.\n adds new line in code and \t adds tab width in code these are their works.
     
     
    // 5.7 User Input Strings
    
   //28.Write a program that asks the user for their name and then prints it.
	 
	 string namme;
	 cout<<"namme is: "<<endl;
	 cin.ignore();
	 cin>>namme;
	 cout<<"your name is: "<<namme<<endl;
	 
	//29. What will happen when the following code is run?
   string nname;
   cout << "Enter your nname: ";
   cin.ignore();
   getline(cin,nname);
   cout << "Your nname is: " << nname<<endl;//ans. it runs and out will what is my name or what i write on black screen;
	
	//30.Modify the above program to accept the user’s full name (first and last) and print it.
	
	string firstname;
	string lastname;
	string fullname;
	
	cout<<"enter your firstname: "<<endl;
	cin>>firstname;
	cout<<"enter your lastname: "<<endl;
	cin>>lastname;
	cin.ignore();
	cout<<"your fullname is: "<<firstname+" "+lastname<<endl;
	
	//31.What is the issue with using cin to input a full name with spaces?
	//the reason is when cin saw space or new line it automatically considered that code is over but if we want to add full text we should use getline();
	
//32.Write a program that accepts a full name from the user (with spaces) using getline() and then prints it.

    string fullnamee;
    cin.ignore();    
	getline(cin,fullnamee);
    cout<<"your fullnamee is: "<<fullnamee<<endl;

//33.Why does cin stop reading at the first space, and how can you handle this limitation when reading full names
//ans.in c++ cin>>variable reads only first word/ because after " " space and  /n newline he thinks program is over and 
//he ignores the last word;
//and to handle the limitation we should use getline();
 


}