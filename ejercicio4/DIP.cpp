#include <iostream>
#include <string>

// Abstracción del alimentador
class ICatFeeder
{
public:
    virtual void feed(const std::string &catName) const = 0;
    virtual ~ICatFeeder() = default;
};

// Alimentador manual
class ManualFeeder : public ICatFeeder
{
public:
    void feed(const std::string &catName) const override
    {
        std::cout << "Alimentando manualmente a " << catName << " con un pescado >-;;;;@>" << std::endl;
    }
};

// Alimentador automático
class AutomaticFeeder : public ICatFeeder
{
public:
    void feed(const std::string &catName) const override
    {
        std::cout << "El alimentador automatico ha servido una lata de comida a " << catName << " [o88o]" << std::endl;
    }
};

// Gato que depende de un alimentador abstracto
class HungryCat
{
private:
    std::string name;
    const ICatFeeder &feeder; // Dependencia inversa
public:
    HungryCat(const std::string &name, const ICatFeeder &feeder) : name(name), feeder(feeder) {}

    void askForFood() const
    {
        std::cout << name << " tiene hambre <(u + u)> !!" << std::endl;
        feeder.feed(name);
    }
};

int main()
{
    ManualFeeder humanFeeder;
    AutomaticFeeder robotFeeder;

    HungryCat garfield("Garfield", humanFeeder);
    HungryCat luna("Luna", robotFeeder);

    garfield.askForFood(); // Alimentado manualmente
    luna.askForFood();     // Alimentado automáticamente

    return 0;
}
