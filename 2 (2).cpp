// Базовий клас Паспорт
class Passport {
protected:
    string firstName;
    string lastName;
    string middleName;
    string birthDate;
    string passportNumber;
    string issueDate;

public:
    // Конструктор
    Passport(string first, string last, string middle, 
             string birth, string number, string issue) {
        firstName = first;
        lastName = last;
        middleName = middle;
        birthDate = birth;
        passportNumber = number;
        issueDate = issue;
    }

    // Функція для виводу паспортних даних
    void showPassportInfo() {
        cout << "=== Паспорт громадянина України ===" << endl;
        cout << "ПІБ: " << lastName << " " << firstName << " " << middleName << endl;
        cout << "Дата народження: " << birthDate << endl;
        cout << "Номер паспорта: " << passportNumber << endl;
        cout << "Дата видачі: " << issueDate << endl;
    }
};

// Похідний клас Закордонний паспорт
class ForeignPassport : public Passport {
private:
    string foreignPassportNumber;
    string visas[10];  // масив для віз
    int visaCount;

public:
    // Конструктор
    ForeignPassport(string first, string last, string middle,
                    string birth, string number, string issue,
                    string foreignNumber) : Passport(first, last, middle, birth, number, issue) {
        foreignPassportNumber = foreignNumber;
        visaCount = 0;  // спочатку віз немає
    }

    // Додавання візи
    void addVisa(string visaInfo) {
        if (visaCount < 10) {
            visas[visaCount] = visaInfo;
            visaCount++;
            cout << "Візу додано!" << endl;
        } else {
            cout << "Не можна додати більше віз!" << endl;
        }
    }

    // Функція для виводу інформації про закордонний паспорт
    void showForeignPassportInfo() {
        cout << "=== Закордонний паспорт ===" << endl;
        showPassportInfo();
        cout << "Номер закордонного паспорта: " << foreignPassportNumber << endl;
        
        if (visaCount > 0) {
            cout << "Візи:" << endl;
            for (int i = 0; i < visaCount; i++) {
                cout << "  " << (i + 1) << ". " << visas[i] << endl;
            }
        } else {
            cout << "Віз немає" << endl;
        }
    }
};