#include <iostream>
#include <string>

// Clase base
class Cat
{
public:
    virtual void react() const = 0; // Comportamiento base de los gatos
    virtual ~Cat() = default;
};

// Gato naranja, una extensión de la clase Cat
class OrangeCat : public Cat
{
public:
    void react() const override
    {
        std::cout << "El gato naranja salta por la sala y persigue su cola" << std::endl;
    }
};

// Gato negro, otra extensión de la clase Cat
class BlackCat : public Cat
{
public:
    void react() const override
    {
        std::cout << "El gato negro bosteza y se queda dormido en el sillon" << std::endl;
    }
};

// Método que llama a la reacción de cualquier tipo de gato
void makeCatReact(const Cat &cat)
{
    cat.react();
}

int main()
{
    OrangeCat garfield;
    BlackCat luna;

    makeCatReact(garfield); // Garfield es un gato naranja
    makeCatReact(luna);     // Luna es un gato negro

    return 0;
}
