#include<iostream>
#include<string>
using namespace std;

int main() {
	string name = "John";
	float homeworkScore, testScore, quizScore, attendance, total;
	homeworkScore = 89.2;
	testScore = 88.7;
	quizScore = 78.9;
	attendance = 90.2;
	total = 0;
	cout << "Enter student's name: " << endl;
	cin >> name;
	cout << "Enter homework score: " << endl;
	cin >> homeworkScore;
	cout << "Enter quiz score: " << endl;
	cin >> quizScore;
	cout << "Enter test score: " << endl;
	cin >> testScore;
	cout << "Enter attendance score: " << endl;
	cin >> attendance;
	total = ((homeworkScore * 0.2) + (testScore * 0.5) + (quizScore *0.2) + (attendance * 0.1));

	cout << "" << endl;
	cout << "Grades for " << name << ":" << endl;
	cout << "Homework : " << homeworkScore << endl;
	cout << "Quiz : " << quizScore << endl;
	cout << "Test : " << testScore << endl;
	cout << "Attendance : " << attendance << endl;
	cout << "--------------------------" << endl;
	cout << "Total score: " << total << endl;

	return 0;
}