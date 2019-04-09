//neko.cpp
#include <iostream>
#include <string>
using namespace std;

class Neko
{
    string name;

  public:
    Neko(string); // construct
    void naku() const;
};

Neko::Neko(string s) : name(s) {}
void Neko::naku() const
{
    cout << "にゃあ。俺様は" << name << "だ。" << endl;
}

class Dog
{
    string name;

  public:
    Dog(string);
    void naku() const;
};

Dog::Dog(string s) : name(s) {}
void Dog::naku() const
{
    cout << "わん。俺様は" << name << "だ。" << endl;
}

int main()
{
    Neko dora("ボス"); //「ボス」というの名前を持ったdoraが生成される
    Dog kuro("クロ");

    cout << "あなたの名づけた猫がメモリ上に生成されました。" << endl;
    cout << "猫が鳴きます。" << endl;

    dora.naku();

    kuro.naku();
}