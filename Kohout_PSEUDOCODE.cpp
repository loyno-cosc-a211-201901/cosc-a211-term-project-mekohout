//Megan KOhout
// psuedocode for the term Project
//march 18 2019
#include <iostream>
#include <cstdlib>
using namespace std;
int main (){

// I plan to make a real time GPA estimator/ calculator for my classes.
//
// I plan to include assignments, quizzes, and tests, along with a way to add the grades received on assignments tests and quizzes throughout the course. This feature will project your final grade based on the average grade on previous tests and assignments. Projected grade will be converted to a 4.0 scale and adjusted based on credit hours of the class. 4.0 scale will be calibrated to hours and project a GPA.
//
// need to do:
// - input class name
// - define percentage worth assignment, test, quizzes
// - define hours of class
// - add and average gpa by hours
//
//
// FOR EACH CLASS:
//   ability to name class
//   say what things are graded and weight of grade
//   ask how many quizzes or tests or etc there are, make an array
//   input grades for each quiz and average based on array length
//   predict a percentage
//   convert to ABCDF scale based on % and display class grade. save gpa number and hours worth
//
//
// GENERAL:
//   continue asking for classes until "have any more classes you want to add" == no
//   calculate gpa by hours in class total
//   cout what gpa is and grade for each class, along with quiz and test average.
//
//
// PSEUDOCODE FOR CLASS:
//   ask name for class
//   ask for hours of class
//   select if there are tests and/or assignments and/or quizzes
//   make variables named these things
//   ask for percent weight to each of these variables. function for each and variable for percentage
//   ask for percentage received for each quiz/test/assignment for all quizzes and append to array
//   average by length of array
//   define to variable score of quiz
//   multiply avg score of quiz by percent weight
//   add avgs*weight to get class percentage
//   convert to ABCDF for cout
//   convert ABCDF to 4.0 scale
//   multiply by hours in class
//   define variable class to gpa * hour function
//
// PSEUDOCODE FOR GENERAL:
//   add all classes * hour to get overall gpa
//   cout each class and avg determined for each subject
//   cout gpa
}
