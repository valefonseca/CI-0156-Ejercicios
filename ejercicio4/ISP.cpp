#include <iostream>

// Interfaces específicas
class IMeower
{
public:
    virtual void meow() const = 0;
    virtual ~IMeower() = default;
};

class IHunter
{
public:
    virtual void hunt() const = 0;
    virtual ~IHunter() = default;
};

class IAdorable
{
public:
    virtual void beCute() const = 0;
    virtual ~IAdorable() = default;
};

// Gato que puede maullar
class OrangeCat : public IMeower
{
public:
    void meow() const override
    {
        std::cout << "El gato naranja maulla muy fuerte <(- O -)> !!" << std::endl;
    }
};

// Gato que caza
class BlackCat : public IHunter
{
public:
    void hunt() const override
    {
        std::cout << "El gato negro esta cazando un raton <(o + o)>  ~<>" << std::endl;
    }
};

// Gato que es adorable
class CalicoCat : public IAdorable
{
public:
    void beCute() const override
    {
        std::cout << "El gato calico se acurruca y te mira con ojos grandes <(O w O)>" << std::endl;
    }
};

int main()
{
    OrangeCat garfield;
    BlackCat luna;
    CalicoCat simba;

    garfield.meow();
    luna.hunt();
    simba.beCute();

    return 0;
}
