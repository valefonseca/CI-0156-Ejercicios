/* Ejemplo del Principio de Responsabilidad Única (SRP) */
#include <iostream>
#include <string>

// Clase que se encarga únicamente de la información del gato
class Cat
{
private:
    std::string name;
    int hungerLevel; // Nivel de hambre del 1 al 10

public:
    Cat(const std::string &catName, int hunger) : name(catName), hungerLevel(hunger) {}

    std::string getName() const
    {
        return name;
    }

    int getHungerLevel() const
    {
        return hungerLevel;
    }

    void setHungerLevel(int hunger)
    {
        hungerLevel = hunger;
    }

    void meow() const
    {
        std::cout << name << " dice: *miau* Mi nivel de hambre es " << hungerLevel << "!" << std::endl;
    }
};

// Clase que se encarga solo de alimentar al gato
class CatFeeder
{
public:
    void feedCat(Cat &cat)
    {
        std::cout << "... Alimentando a " << cat.getName() << " ..." << std::endl;
        cat.setHungerLevel(0); // El gato ya no tiene hambre
        std::cout << cat.getName() << " esta satisfecho y ronroneando <(=^.^=)>" << std::endl;
    }
};

int main()
{
    Cat mittens("Gatito", 8); // Un gato con nivel de hambre 8
    mittens.meow();           // El gato se queja de hambre

    CatFeeder feeder;
    feeder.feedCat(mittens); // Alimentamos al gato

    mittens.meow(); // Ahora el gato está contento y sin hambre

    return 0;
}
