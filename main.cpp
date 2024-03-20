//программа-убийца, не запускать!

#include <iostream> //потоки ввода и вывода
#include <string.h> //строки

using namespace std; //cin cout

class Veicle {
    private:
        std::string name;
        int n_wheels;
        double volume_of_tank;
        double power_of_engine;
    public:
        Veicle(std::string v_name); //конструктор
        ~Veicle(); //деструктор
        Veicle(const Veicle &p); //копирующий конструктор
};

//конструктор
Veicle::Veicle(std::string v_name) {
    cout<<endl;
    cout<<" Введите имя тачки: "<<endl;
    cin>>v_name;
    cout<<" Мы записали: "<<v_name<<endl;
    name = v_name;
    cout<<" Мы записали: "<<name<<endl;
}
/*
//деструктор
Veicle::~Veicle() {
    cout<<" Мы удалили тачку"<<endl;
}

//копирующий конструктор: без него неявно стираются объекты
Veicle::Veicle(const Veicle &p) {

}*/

int main()
{
    setlocale(LC_ALL, "\Russian"); //разрешает использовать кириллицу

    Veicle car("My car");


    return 0;
}
