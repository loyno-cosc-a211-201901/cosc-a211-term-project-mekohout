//Megan Kohout
//final project
#include <cstdlib>
#include <iomanip>
#include<iostream>
#include <time.h>

using namespace std;

int responsePlaceHold=0;
string className;
int gradePlaceHold;
int gradesAssignments[20];
int numberAssignments;
int weightAssignments;
int averageAssignments;
int weightedAssignments;
//int gradesQuizzes[20];
//numberQuizzes;
//weightQuizzes;
//int gradesTests[20];
//numberTests;
//weightTests;
string userClassInput;

int assignmentInformation (){
  cout << "Does this class have assignments that are graded? If not, write 0. If yes, write how many."<< endl;
  cin >> responsePlaceHold;//get their answer
    if (responsePlaceHold==0||responsePlaceHold==0){//if no asssignments then dont have var assignment
      gradesAssignments[1]=0;
      numberAssignments=0;
    } else if (responsePlaceHold>0){//if there are assignments
      numberAssignments=responsePlaceHold; //say how many things will be in the array
      cout << "How much weight is given to assignments? For 70%, write .7.";
      cin >> weightAssignments;
    } return weightAssignments, gradesAssignments[], numberAssignments;
} //this determines the assignment amount and how much the assignments are weighted. need to input actual grades still
// void quizInformation(){
//   cout << "Does this class have quizzes that are graded? If not, write no. If yes, write how many."<< endl;
// }

//void testInformation(){

//}
int assignmentGrader (string className){
  int count =0;
  int total=0;
  //IF NOT 0 assignments
  do{
  cout<< "Please enter the grade in percentage notation for each assignment one at a time. For 70% write .7. If no more assigments, write -1."<<endl;
  cin>> gradePlaceHold;
  gradesAssignments[count]=gradePlaceHold;
  count++;
} while (gradePlaceHold!= (-1));
  for (int k=0;k<=20;k++){
    total=total+gradesAssignments[k];
  }
  averageAssignments=total/numberAssignments; //determine what the grade average of the assignments is
  cout << "Your average assignment grade is: "<<averageAssignments<< endl;
  //convert to A-F SCALE
  weightedAssignments = averageAssignments*weightAssignments;  //display average assignment grade
  return weightedAssignments;

//char A-F grade funciton
}
int main (){


    cout<< "Welcome to the GPA calculator. This program will store your class name, ";
    cout<< "display your grade, and more!" <<endl;
    cout<< "Please input the name of your class, if there are no more classes to enter, write 'no'."<<endl;
      cin >> userClassInput; //made this variable mean name of class. will store to display
      //ask for hours in class
      {
        assignmentInformation();
        //testInformation();
        //quizInformation();
        assignmentGrader();
        //input test grades
        //input quiz grades
        //calculate total grade
          //display letter grade
        //calculate weight and display 4.0 scale gpa


      } while (userClassInput!="no"||userClassInput!="No");

        //weight of assignments
        //assign number to quiz
        //assign number of tests

    }


}
