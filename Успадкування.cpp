#include <iostream>
#include <string>
using namespace std;

// Базовий клас
class HomePet {
protected:
    string name;
    int age;

public:
    // Конструктор
    HomePet(string petName, int petAge) {
        name = petName;
        age = petAge;
    }

    // Проста функція для виводу інформації
    void showInfo() {
        cout << "Ім'я: " << name << ", Вік: " << age << " років" << endl;
    }
};

// Похідний клас Собака
class Dog : public HomePet {
private:
    string breed;

public:
    // Конструктор
    Dog(string name, int age, string dogBreed) : HomePet(name, age) {
        breed = dogBreed;
    }

    void showDogInfo() {
        showInfo();
        cout << "Вид: Собака, Порода: " << breed << endl;
        cout << "Характеристика: гавкає та приносить палицю" << endl;
    }
};

// Похідний клас Кішка
class Cat : public HomePet {
private:
    string color;

public:
    // Конструктор
    Cat(string name, int age, string catColor) : HomePet(name, age) {
        color = catColor;
    }

    void showCatInfo() {
        showInfo();
        cout << "Вид: Кішка, Колір: " << color << endl;
        cout << "Характеристика: муркоче та ловить мишей" << endl;
    }
};

// Похідний клас Папуга
class Parrot : public HomePet {
private:
    bool canTalk;

public:
    // Конструктор
    Parrot(string name, int age, bool talking) : HomePet(name, age) {
        canTalk = talking;
    }

    void showParrotInfo() {
        showInfo();
        if (canTalk) {
            cout << "Вид: Папуга, Уміє говорити: так" << endl;
            cout << "Характеристика: розмовляє та повторює слова" << endl;
        } else {
            cout << "Вид: Папуга, Уміє говорити: ні" << endl;
            cout << "Характеристика: співає та літає по кімнаті" << endl;
        }
    }
};

// Головна функція
int main() {
    cout << "=== НАШІ ДОМАШНІ ТВАРИНКИ ===" << endl;
    cout << endl;

    // Створюємо тваринок
    Dog myDog("Рекс", 3, "овчарка");
    Cat myCat("Мурка", 2, "сіра");
    Parrot myParrot("Кеша", 1, true);

    // Виводимо інформацію про тваринок
    cout << "--- Собака ---" << endl;
    myDog.showDogInfo();
    cout << endl;

    cout << "--- Кішка ---" << endl;
    myCat.showCatInfo();
    cout << endl;

    cout << "--- Папуга ---" << endl;
    myParrot.showParrotInfo();
    cout << endl;

    // Можна створити ще тваринок
    cout << "--- Ще один собака ---" << endl;
    Dog anotherDog("Бобік", 5, "дворняжка");
    anotherDog.showDogInfo();
    cout << endl;

    cout << "--- Ще один папуга ---" << endl;
    Parrot anotherParrot("Гоша", 2, false);
    anotherParrot.showParrotInfo();

    return 0;
}