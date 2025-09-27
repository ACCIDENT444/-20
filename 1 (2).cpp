#include <iostream>
#include <string>
using namespace std;

// Базовий клас Студент
class Student {
protected:
    string firstName;
    string lastName;
    string group;
    double averageGrade;

public:
    // Конструктор
    Student(string first, string last, string gr, double avg) {
        firstName = first;
        lastName = last;
        group = gr;
        averageGrade = avg;
    }

    // Функція для виводу інформації
    void showInfo() {
        cout << "Студент: " << firstName << " " << lastName << endl;
        cout << "Група: " << group << endl;
        cout << "Середній бал: " << averageGrade << endl;
    }

    // Функція для отримання стипендії
    void getScholarship() {
        if (averageGrade >= 4.5) {
            cout << "Отримує підвищену стипендію!" << endl;
        } else if (averageGrade >= 3.5) {
            cout << "Отримує звичайну стипендію!" << endl;
        } else {
            cout << "Не отримує стипендію!" << endl;
        }
    }
};

// Похідний клас Аспірант
class Aspirant : public Student {
private:
    string researchTopic;
    string scienceAdvisor;

public:
    // Конструктор
    Aspirant(string first, string last, string gr, double avg, 
             string topic, string advisor) : Student(first, last, gr, avg) {
        researchTopic = topic;
        scienceAdvisor = advisor;
    }

    // Функція для виводу інформації про аспіранта
    void showAspirantInfo() {
        showInfo();
        cout << "Тема дослідження: " << researchTopic << endl;
        cout << "Науковий керівник: " << scienceAdvisor << endl;
    }

    // Аспірант отримує стипендію за іншими правилами
    void getAspirantScholarship() {
        cout << "Аспірант отримує наукову стипендію!" << endl;
    }
};