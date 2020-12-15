/* Лабораторна робота #12. Варіант #15.
 *
 * Розробити класи для описаних нижче об'єктів згідно свого варіанту.
 * Включити в клас методи set (...), get (...), show (...). Визначити інші методи.
 *
 * Person: Прізвище, Ім'я, По батькові, Адреса, Пол, Освіта, Рік народження.
 * Створити масив об'єктів. вивести:
 *     а) список громадян, вік яких перевищує заданий;
 *     б) список громадян з вищою освітою;
 *     в) список громадян чоловічої статі.
 */

#include <iostream>
#include <string>

using namespace std;

class Person
{
    string FirstName[20],
           LastName[20],
           Surname[20],
           Address[20];

    int    Action = 1,
           Num = 0,
           Education[20],
           Year[20];
    
    bool   Gender[20];

    public:

        void dataTitle() {
            cout << "#"           << string(2,' ');
            cout << "Прізвище"    << string(4,' ');
            cout << "Ім'я"        << string(6,' ');
            cout << "По-батькові" << string(3,' ');
            cout << "Стать"       << string(2,' ');
            cout << "Адреса"      << string(8,' ');
            cout << "Освіта"      << string(2,' ');
            cout << "Рік народженняn\n\n";
        }

        // Флормула для визначення ширини:
        // (length / 2) - max
        void dataPrint(int i) {
            cout << i + 1 << string(2,' ');
            cout << LastName[i]  << string(12 - (LastName[i].length() / 2),' ');
            cout << FirstName[i] << string(10 - (FirstName[i].length()  / 2),' ');
            cout << Surname[i]   << string(14 - (Surname[i].length() / 2),' ');
            cout << Gender[i]    << string(6,' ');
            cout << Address[i]   << string(13 - (Address[i].length() / 2),' ');
            cout << Education[i] << string(7,' ');
            cout << Year[i]      << endl;
        }

        // Встановлення значення.
        void set() {

            cout << "Прізвище:\t";
            cin  >> LastName[Num];

            cout << "Ім'я\t\t";
            cin  >> FirstName[Num];

            cout << "По-батькові:\t";
            cin  >> Surname[Num];

            cout << "Стать:\t\t";
            cin  >> Gender[Num];

            cout << "Адреса:\t\t";
            cin  >> Address[Num];

            cout << "Освіта:\t\t";
            cin  >> Education[Num];

            cout << "Рік народження:\t";
            cin  >> Year[Num];

            Num++;
            
            system("clear");
            cout << "Успішно додано!\n\n";
        }
        
        // Виведення значень згідно завданню.
        void get() {

            system("clear");
            
            this->dataTitle();
            
            cout << "Список людей, які народилися після 2000 року:\n\n";
            for(int i = 0; i < Num; i++) {
                if (Year[i] > 2000) {
                    this->dataPrint(i);
                }
            }

            cout << "\nСписок людей з вищою освітою:\n\n";
            for(int i = 0; i < Num; i++) {
                if (Education[i] == 2) {
                    this->dataPrint(i);
                }
            }

            cout << "\nСписок людей, які є чоловіками:\n\n";
            for(int i = 0; i < Num; i++) {
                if (Gender[i] == 0) {
                    this->dataPrint(i);
                }
            }
            
            cout << endl;
        }

        // Вивід усіх введених значень.
        void show() {

            system("clear");

            if( Num > 0 ) {
                this->dataTitle();
                for(int i = 0; i < Num; i++) {
                    this->dataPrint(i);
                }
                cout << endl;
            } else {
                cout << "Немає жодного об'єкту.\n\n";
            }
        }

        Person() {
            while(Action != 0) {
                
                cout << "1 - Встановити значення." << endl
                     << "2 - Вивести всі данні. (" << Num << ")" << endl
                     << "3 - Вивести данні згідно завдання." << endl
                     << "0 - Вихід із програми." << endl;
                
                cout << "\nОберіть дію: ";
                cin  >> Action;

                switch(Action) {
                    case 0:
                        cout << endl;
                        break;
                    case 1:
                        this->set();
                        break;
                    case 2:
                        this->show();
                        break;
                    case 3:
                        this->get();
                        break;
                    default:
                        cout << "Неправильна дія." << endl;
                        break;
                }
            }
        }
};

int main()
{
    Person Person;
    return 0;
}
