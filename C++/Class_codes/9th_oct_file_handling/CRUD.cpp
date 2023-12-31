#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Student {
private:
    int id;
    string name;
    int age;
    string stream;

public:
    void addStudent() {
        cout << "Enter Student Data" << endl;
        cout << "Enter the name: ";
        cin.ignore();
        getline(cin, name);
        cout << "Enter the age: ";
        cin >> age;
        cout << "Enter the stream: ";
        cin.ignore();
        getline(cin, stream);
        id++; // Increment the student ID.

        ofstream fout("abc.txt", ios::app);
        fout << id << endl;
        fout << name << endl;
        fout << age << endl;
        fout << stream << endl;
        fout.close();

        ofstream idFile("id.txt", ios::app);
        idFile << id << endl;
        idFile.close();

        cout << "Record added successfully" << endl;
    }

    void printStudent() {
        ifstream read("abc.txt");
        Student s;
        while (read >> s.id) {
            read.ignore();
            getline(read, s.name);
            read >> s.age;
            read.ignore();
            getline(read, s.stream);
            s.print();
        }
        read.close();
    }

    void print() {
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Stream: " << stream << endl;
        cout << "################################################" << endl << endl;
    }

    void search(int searchId) {
        ifstream read("abc.txt");
        Student s;
        bool found = false;
        while (read >> s.id) {
            read.ignore();
            getline(read, s.name);
            read >> s.age;
            read.ignore();
            getline(read, s.stream);
            if (s.id == searchId) {
                s.print();
                found = true;
                break;
            }
        }
        read.close();
        if (!found) {
            cout << "Student not found" << endl;
        }
    }

    void update(int updateId) {
        ifstream read("abc.txt");
        ofstream write("temp.txt");
        Student s;
        bool updated = false;
        while (read >> s.id) {
            read.ignore();
            getline(read, s.name);
            read >> s.age;
            read.ignore();
            getline(read, s.stream);

            if (s.id != updateId) {
                write << s.id << endl;
                write << s.name << endl;
                write << s.age << endl;
                write << s.stream << endl;
            }
            else {
                cout << "Enter the Data you want to update" << endl;
                cout << "Enter the name: ";
                cin.ignore();
                getline(cin, s.name);
                cout << "Enter the age: ";
                cin >> s.age;
                cin.ignore();
                cout << "Enter the stream: ";
                getline(cin, s.stream);

                write << s.id << endl;
                write << s.name << endl;
                write << s.age << endl;
                write << s.stream << endl;

                updated = true;
            }
        }
        read.close();
        write.close();

        if (updated) {
            remove("abc.txt");
            rename("temp.txt", "abc.txt");
            cout << "Record updated successfully" << endl;
        }
        else {
            cout << "Student not found" << endl;
        }
    }

    void deleteStudent(int deleteId) {
        ifstream read("abc.txt");
        ofstream write("temp.txt");
        Student s;
        bool deleted = false;
        while (read >> s.id) {
            read.ignore();
            getline(read, s.name);
            read >> s.age;
            read.ignore();
            getline(read, s.stream);

            if (s.id != deleteId) {
                write << s.id << endl;
                write << s.name << endl;
                write << s.age << endl;
                write << s.stream << endl;
            }
            else {
                deleted = true;
            }
        }
        read.close();
        write.close();

        if (deleted) {
            remove("abc.txt");
            rename("temp.txt", "abc.txt");
            cout << "Deletion done successfully" << endl << endl;
        }
        else {
            cout << "Student not found" << endl;
        }
    }
};

int main() {
    Student S;
    int choice;
    
    while (true) {
        cout << "Enter your choice" << endl;
        cout << "1. Add student" << endl;
        cout << "2. Print all students" << endl;
        cout << "3. Search" << endl;
        cout << "4. Update a student record" << endl;
        cout << "5. Delete a record" << endl;
        cout << "6. Exit" << endl;
        cout << ">> ";
        cin >> choice;

        switch (choice) {
            case 1:
                S.addStudent();
                break;
            case 2:
                S.printStudent();
                break;
            case 3:
                int id;
                cout << "Enter the ID of Student: ";
                cin >> id;
                S.search(id);
                break;
            case 4:
                cout << "Enter the ID to update: ";
                cin >> id;
                S.update(id);
                break;
            case 5:
                cout << "Enter the ID that needs to be deleted: ";
                cin >> id;
                S.deleteStudent(id);
                break;
            case 6:
                return 0;
        }

    }
    return 0;

}
