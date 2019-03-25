// rocket.cpp
#include <iostream>
#include <string>

using namespace std;

class Rocket
{
    int speed;
    int fuel;

  public:
    Rocket(int);
    void accelrate();
};

Rocket::Rocket(int x) : fuel(x), speed(0) {}

void Rocket::accelrate()
{
    if (fuel >= 2)
    {
        speed += 2;
        fuel -= 2;
        cout << "現在の燃料は" << fuel << "です．" << endl;
        cout << "現在の速度は" << speed << "です．" << endl;
    }
    else
    {
        cout << "燃料切れです．加速できません．漂流します．" << endl;
    }
}

int main()
{
    cout << "ロケットをメモリ上につくります。燃料（整数）を入力してください。" << endl;
    int n;    //ユーザの入力した値を格納する変数をひとつ用意しました。その名はnです。
    cin >> n; //ユーザの入力した数字をnに代入しました。

    //nをコンストラクタに渡してロケットをつくります。
    Rocket ohtori(n); //これでnの値がコンストラクタの定義のxにコピーされ、
                      //コンストラクタの中身が実行され、nenryoの値がnの値に
                      //なったロケットohtori（鳳号）が生成されるわけです。
                      //このohtoriをオブジェクトなどとよぶのでした。
    cout << "加速します。" << endl;
    ohtori.accelrate(); //ohtoriに対してkasokuを使っています
    cout << "また、加速します。" << endl;
    ohtori.accelrate(); //ohtoriに対してkasokuを使っています
    cout << "またまた、加速してみます。" << endl;
    ohtori.accelrate(); //ohtoriに対してkasokuを使っています
    cout << "鳳号の冒険は終わりました。" << endl;
}