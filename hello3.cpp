// hello2.cpp
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name;
    int age;

    cout << "こんにちは私はコンピューターです．" << endl;
    cout << "あなたの名前を入力してください．" << endl;
    cin >> name;
    cout << name << "さん．よろしく．" << endl;
    cout << "ところで、" << name << "さん。失礼ですがお年はいくつですか？" << endl;
    cout << "(入力はかならず、半角の数字でお願いします。)" << endl;
    cin >> age; //年齢（整数）の入力 勝手にintへキャストされる．

    cout << "なるほど。" << age << "歳ですか。" << endl;
    cout << "私はもうすぐ2歳のマシンです。" << endl;
}