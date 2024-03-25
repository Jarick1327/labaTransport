#include <iostream> //потоки ввода и вывода
#include <string.h> //строки

using namespace std; //cin cout
//1 лошадиная сила = 735,49875 Ватт
const double watt_in_hourses = 735,49875;

class Veicle {
    private:
        std::string name;
        int n_wheels;
        double volume_of_tank;
        double power_of_engine_hourse;
        double power_of_engine_watt;
    public:
        Veicle(std::string v_name); //конструктор
        ~Veicle(); //деструктор
        Veicle(const Veicle &p); //копирующий конструктор
        void look_car(); //метод класса
};

//конструктор
Veicle::Veicle(std::string v_name) {
    cout<<endl;
    cout<<" Введите имя тачки латиницей: "<<endl;
    cin>>v_name;
    //cout<<" Мы записали: "<<v_name<<endl;
    name = v_name;
    //cout<<" Мы записали: "<<name<<endl;
    cout<<" Введите количество колёс (натуральное положительное): "<<endl;
    cin>>n_wheels;
    cout<<" Введите объём бака в литрах (положительная десятичная дробь): "<<endl;
    cin>>volume_of_tank;
    cout<<" Введите мощность двигателя в лошадиных силах (положительная десятичная дробь): "<<endl;
    cin>>power_of_engine_hourse;
    power_of_engine_watt = watt_in_hourses*power_of_engine_hourse;
    cout<<" В ваттах это будет: "<<power_of_engine_watt<<endl;
}

//деструктор
Veicle::~Veicle() {
    cout<<endl<<" Мы удалили тачку "<< name <<"."<<endl;
}

//копирующий конструктор: без него неявно стираются объекты
Veicle::Veicle(const Veicle &p) {
    //у нас this слева от равно
    name = p.name;
    n_wheels = p.n_wheels;
    volume_of_tank = p.volume_of_tank;
    power_of_engine_hourse = p.power_of_engine_hourse;
    power_of_engine_watt = p.power_of_engine_watt;
}

//метод класса
void Veicle::look_car() {
    cout<<endl<<" Транспортное средство: "<<name;
    cout<<endl<<" Количество колёс: "<<n_wheels;
    cout<<endl<<" Объём бака в литрах: "<<volume_of_tank;
    cout<<endl<<" Мощность двигателя в лошадиных силах: "<<power_of_engine_hourse;
    cout<<endl<<" Мощность двигателя в ваттах: "<<power_of_engine_watt<<endl;
}

int main()
{
    setlocale(LC_ALL, "\Russian"); //разрешает использовать кириллицу
    //SetConsoleCP(1251); // Ввод с консоли в кодировке 1251
    //SetConsoleOutputCP(1251); // Вывод на консоль в кодировке 1251.

    Veicle car("My car");
    car.look_car();


    return 0;
}
