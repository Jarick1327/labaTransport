#include <iostream> //������ ����� � ������
#include <string.h> //������

using namespace std; //cin cout
//1 ��������� ���� = 735,49875 ����
const double watt_in_hourses = 735,49875;

class Veicle {
    private:
        std::string name;
        int n_wheels;
        double volume_of_tank;
        double power_of_engine_hourse;
        double power_of_engine_watt;
    public:
        Veicle(std::string v_name); //�����������
        ~Veicle(); //����������
        Veicle(const Veicle &p); //���������� �����������
        void look_car(); //����� ������
};

//�����������
Veicle::Veicle(std::string v_name) {
    cout<<endl;
    cout<<" ������� ��� ����� ���������: "<<endl;
    cin>>v_name;
    //cout<<" �� ��������: "<<v_name<<endl;
    name = v_name;
    //cout<<" �� ��������: "<<name<<endl;
    cout<<" ������� ���������� ���� (����������� �������������): "<<endl;
    cin>>n_wheels;
    cout<<" ������� ����� ���� � ������ (������������� ���������� �����): "<<endl;
    cin>>volume_of_tank;
    cout<<" ������� �������� ��������� � ��������� ����� (������������� ���������� �����): "<<endl;
    cin>>power_of_engine_hourse;
    power_of_engine_watt = watt_in_hourses*power_of_engine_hourse;
    cout<<" � ������ ��� �����: "<<power_of_engine_watt<<endl;
}

//����������
Veicle::~Veicle() {
    cout<<endl<<" �� ������� ����� "<< name <<"."<<endl;
}

//���������� �����������: ��� ���� ������ ��������� �������
Veicle::Veicle(const Veicle &p) {
    //� ��� this ����� �� �����
    name = p.name;
    n_wheels = p.n_wheels;
    volume_of_tank = p.volume_of_tank;
    power_of_engine_hourse = p.power_of_engine_hourse;
    power_of_engine_watt = p.power_of_engine_watt;
}

//����� ������
void Veicle::look_car() {
    cout<<endl<<" ������������ ��������: "<<name;
    cout<<endl<<" ���������� ����: "<<n_wheels;
    cout<<endl<<" ����� ���� � ������: "<<volume_of_tank;
    cout<<endl<<" �������� ��������� � ��������� �����: "<<power_of_engine_hourse;
    cout<<endl<<" �������� ��������� � ������: "<<power_of_engine_watt<<endl;
}

int main()
{
    setlocale(LC_ALL, "\Russian"); //��������� ������������ ���������
    //SetConsoleCP(1251); // ���� � ������� � ��������� 1251
    //SetConsoleOutputCP(1251); // ����� �� ������� � ��������� 1251.

    Veicle car("My car");
    car.look_car();


    return 0;
}
