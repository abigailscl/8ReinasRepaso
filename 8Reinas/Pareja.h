#pragma once
class Pareja {

private:
    int a, b;

public:
    // constructor base
    Pareja() : a(0), b(0) {}

    // constructor parametrizado
    Pareja(const int a, const int b) {
        this->a = a;
        this->b = b;
    }

    // constructor de copia
    Pareja(const Pareja&);

    // operadores miembros
    Pareja& operator + (const Pareja& p);
    Pareja& operator - (const Pareja& p);
    Pareja& operator * (const Pareja& p);
    Pareja& operator / (const Pareja& p);
    Pareja& operator = (const Pareja& p);
    Pareja& operator % (const Pareja& p);
    Pareja& operator ++();
    Pareja& operator --();
    bool    operator ==(const Pareja& p) const;

    // operadores no miembros
    friend ostream& operator << (ostream& o, const Pareja& p);
    friend istream& operator >> (istream& o, Pareja& p);
};
