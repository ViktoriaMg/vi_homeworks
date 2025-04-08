#include <iostream>
#include <cstring> 
#include <Windows.h>
using namespace std;

class String {
public:
    String();
    String(const char* const);
    String(const String&);
    ~String();

    char& operator[](int offset);
    char operator[](int offset) const;
    String operator+(const String&);
    void operator+=(const String&);
    String& operator=(const String&);

    int GetLen() const { return itsLen; }
    const char* GetString() const { return itsString; }

    // Оператор << (виведення)
    friend ostream& operator<<(ostream& os, const String& str);

private:
    String(int);
    char* itsString;
    unsigned short itsLen;
};


String::String() {
    itsString = new char[1];
    itsString[0] = '\0';
    itsLen = 0;
}

String::String(int len) {
    itsString = new char[len + 1];
    for (int i = 0; i <= len; i++)
        itsString[i] = '\0';
    itsLen = len;
}

String::String(const char* const cString) {
    itsLen = strlen(cString);
    itsString = new char[itsLen + 1];
    for (int i = 0; i < itsLen; i++)
        itsString[i] = cString[i];
    itsString[itsLen] = '\0';
}

String::String(const String& rhs) {
    itsLen = rhs.GetLen();
    itsString = new char[itsLen + 1];
    for (int i = 0; i < itsLen; i++)
        itsString[i] = rhs[i];
    itsString[itsLen] = '\0';
}

String::~String() {
    delete[] itsString;
    itsLen = 0;
}


String& String::operator=(const String& rhs) {
    if (this == &rhs)
        return *this;
    delete[] itsString;
    itsLen = rhs.GetLen();
    itsString = new char[itsLen + 1];
    for (int i = 0; i < itsLen; i++)
        itsString[i] = rhs[i];
    itsString[itsLen] = '\0';
    return *this;
}

char& String::operator[](int offset) {
    if (offset >= itsLen)
        return itsString[itsLen - 1];
    else
        return itsString[offset];
}

char String::operator[](int offset) const {
    if (offset >= itsLen)
        return itsString[itsLen - 1];
    else
        return itsString[offset];
}

String String::operator+(const String& rhs) {
    int totalLen = itsLen + rhs.GetLen();
    String temp(totalLen);
    int i, j;
    for (i = 0; i < itsLen; i++)
        temp[i] = itsString[i];
    for (j = 0; j < rhs.GetLen(); j++, i++)
        temp[i] = rhs[j];
    temp[totalLen] = '\0';
    return temp;
}

void String::operator+=(const String& rhs) {
    unsigned short rhsLen = rhs.GetLen();
    unsigned short totalLen = itsLen + rhsLen;
    String temp(totalLen);
    int i, j;
    for (i = 0; i < itsLen; i++)
        temp[i] = itsString[i];
    for (j = 0; j < rhs.GetLen(); j++, i++)
        temp[i] = rhs[j];
    temp[totalLen] = '\0';
    *this = temp;
}


ostream& operator<<(ostream& os, const String& str) {
    os << str.GetString();
    return os;
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    String s1("Привіт");
    String s2(" світ!");
    String s3 = s1 + s2;
    cout << "Результат: " << s3 << endl;
    return 0;
}
