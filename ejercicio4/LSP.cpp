#include <iostream>
#include <string>

// Clase base Gato
class Cat
{
public:
    virtual void playWithToy(const std::string &toy) const
    {
        std::cout << "El gato juega con su " << toy << "!!" << std::endl;
    }
    virtual ~Cat() = default;
};

// Clase derivada Gato naranja
class OrangeCat : public Cat
{
public:
    void playWithToy(const std::string &toy) const override
    {
        std::cout << "El gato naranja ataca " << toy << " con mucha energia <(O w O)>" << std::endl;
    }
};

// Clase derivada Gato negro
class BlackCat : public Cat
{
public:
    void playWithToy(const std::string &toy) const override
    {
        std::cout << "El gato negro mira " << toy << " sin mucho interes <(U + U)>" << std::endl;
    }
};

// Clase derivada Gato calico
class CalicoCat : public Cat
{
public:
    void playWithToy(const std::string &toy) const override
    {
        std::cout << "El gato calico analiza " << toy << " y lo huele desconfiado <(- + -)>" << std::endl;
    }
};

void testPlay(Cat &cat, const std::string &toy)
{
    cat.playWithToy(toy);
}

int main()
{
    OrangeCat garfield;
    BlackCat luna;
    CalicoCat simba;

    testPlay(garfield, "el raton de juguete");
    testPlay(luna, "el laser");
    testPlay(simba, "la pelota");

    return 0;
}
