//Megan Kohout
//final project
//compute grade for classes by input of individual grades
//april 12 2019
#include <cstdlib>
#include <iomanip>
#include<iostream>
#include <time.h>
#include <fstream>

using namespace std;
ifstream gradeStorage ("/Users/kohou_000/Documents/School/19S/Intro to Programming/GitHub/cosc-a211-term-project-mekohout/Proposal/grade.txt");
void assignmentInformation(int [],int,double);
void assignmentGrader(int[],int,double,double);
string letterGrade(int);
//void quizInformation();
//string letterGrade(int);

int main (){
  string className;
  int classNumber=0;
  int gradesAssignments[20];
  int numberAssignments;
  double weightAssignments;
  double averageAssignments;
  double weightedAssignments;
  //int gradesQuizzes[20];
  //numberQuizzes;
  //weightQuizzes;
  //int gradesTests[20];
  //numberTests;
  //weightTests;
  string userClassInput="class";
  int compositeGradeWeighted[10][3];//column: class row: 0=assignment weight, 1=quiz weight, 2=test weight
    cout<< "Welcome to the GPA calculator. This program will store your class name, ";
    cout<< "display your grade, and more!" <<endl;
    cout<< "Please input the name of your class, if there are no more classes to enter, write 'no'."<<endl;
      cin >> userClassInput; //made this variable mean name of class. will store to display
      gradeStorage>> userClassInput; //make this class name a line in the storage file
      //ask for hours in class
      //turn input string into a constant per each class
      {
        assignmentInformation(gradesAssignments,numberAssignments,weightAssignments);
        assignmentGrader(gradesAssignments,numberAssignments,weightAssignments,weightedAssignments);

        //testInformation();
        //quizInformation();

        //input test grades
        //input quiz grades
        //calculate total grade
          //display letter grade
        //calculate weight and display 4.0 scale gpa

        //cout << compositeGradeWeighted;
      } while (userClassInput!="no"||userClassInput!="No");

        //weight of assignments
        //assign number to quiz
        //assign number of tests


        gradeStorage.close();
  }

  void assignmentInformation (int gradesAssignments[], int numberAssignments,double weightAssignments){
    double temp;
          cout << "How much weight is given to assignments? For 70%, write .7."<<endl;
          cin >> temp;
          cin.clear();
          if (temp>0&&temp<1){
            weightAssignments=temp;
          }
        //}
  } //this determines the assignment amount and how much the assignments are weighted. need to input actual grades still

// void quizInformation(){
    //   cout << "Does this class have quizzes that are graded? If not, write no. If yes, write how many."<< endl;
    // }

//void testInformation(){
        //}


void assignmentGrader (int gradesAssignments[],int numberAssignments, double weightAssignments, double weightedAssignments){
      int count = 0;
      int responsePlaceHold;
      double total=0;
      double gradePlaceHold=0;
      double averageAssignments;
      //IF NOT 0 assignments
      cout << "How many assignments are there to be graded?"<< endl;
      cin >> responsePlaceHold;//get their answer
        if (responsePlaceHold==0){//if no asssignments then dont have var assignment
          gradesAssignments[1]=0;
          //numberAssignments=0;
        } else{//if there are assignments
        numberAssignments=responsePlaceHold; //say how many things will be in the array
        cout<< "Please enter the grade in percentage notation for each assignment one at a time. For 70% write .70"<<endl;
      for (int count=0; count<=numberAssignments; count++){
        cout << "Grade: ";
        cin>> gradePlaceHold;
        cin.clear();
        count++;
        if (gradePlaceHold>0&&gradePlaceHold<=1){
        gradesAssignments[count]=gradePlaceHold;
        //cout<< "grades inputted";
      }}//read in all of the grades for amount earlier said how many there were
      for (int k=0;k<=20;k++){
        total=total+gradesAssignments[k]; // add them all together
      }
      averageAssignments=total/numberAssignments; //determine what the grade average of the assignments is
      cout << "Your average assignment grade is: "<< letterGrade(averageAssignments)<<endl; //print out A-F grade
      weightedAssignments = averageAssignments*weightAssignments;  //return average assignment grade with weight
      //compositeGradeWeighted[classNumber][0];
      cout<< "assignments weighted: "<<weightedAssignments<<endl;
      gradeStorage >> weightedAssignments;
       }
     }

string letterGrade(int grade){
  if(grade>=93){
    return "A";
  } else if ((grade < 93) &&(grade>=90)){
    return "A-";
  } else if ((grade<90)&&(grade>=87)){
    return "B+";
  } else if ((grade<87)&&(grade>=83)){
    return "B";
  } else if ((grade<83)&&(grade>=80)){
    return "B-";
  } else if ((grade<80)&&(grade>=77)){
    return "C+";
  } else if ((grade<77)&&(grade>=73)){
    return "C";
  } else if ((grade<73)&&(grade>=70)){
    return "C-";
  } else if ((grade<70)&&(grade>=67)){
    return "D+";
  } else if ((grade<67)&&(grade>=63)){
    return "D";
  } else if ((grade<63)&&(grade>=60)){
    return "D-";
  } else if (grade<60){
    return "F";
  } else {return "invalid grade";}}//char A-F grade funciton
