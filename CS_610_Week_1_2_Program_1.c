/*
Course: Introduction to Parallel Computing
Course ID: CS-610
Semester: Summer 2022
Week: 1 & 2

Date: 27 May 2022 
Name: Tarun Dagar
University ID: U01835340
Email: TD03603N@pace.edu

Program: 1
Program Description: Develop and run a C* program to sum up integers from 1 to 100, and print out the sum value on the screen.
*/

#include <stdlib.h>

int startInteger = 1; /*Defining the start value*/
int endInteger = 100; /*Defining the end value*/
int sum = 0; /*Initializing the sum of all the integers as 0*/
int loopVariable; /*Initializing the loopVariable*/

/**/
void doubleLineSpace(){
  cout << endl << endl;
}

void displayIntro(){
  cout << "#####################################################################################" << endl;
  cout << "This is the program to print the sum of all the integers between " << startInteger <<" and "<< endInteger << endl;
  cout << "#####################################################################################" << endl;
  doubleLineSpace();
}

void displayExecutionCompleted()
{
  cout << "########################" << endl;
  cout << "## Execution Complete ##" << endl;
  cout << "########################" << endl;
  doubleLineSpace();
}

void displayResult(int result){
  cout << "#######################" << endl;
  cout << "### SUM of 1 to 100 ###" << endl;
  cout << "#######################" << endl;
  cout << "######## "<< result << " #########" << endl;
  cout << "#######################" << endl;
  doubleLineSpace();
}

void showExecutionStarted(){
  cout << "########################" << endl;
  cout << "## Execution Started ###" << endl;
  cout << "########################" << endl;
  doubleLineSpace();
}


/*Main Function*/
main(){
  displayIntro();
  showExecutionStarted();
  
  /*For Loop*/
  for (loopVariable = startInteger; loopVariable <= endInteger; loopVariable++)  /* variables cannot be declared in the for control block */
    sum += loopVariable; /*Adding Numbers to the Sum Variable*/
  displayResult(sum);
  displayExecutionCompleted();
  
}
