//���������-������, �� ���������!

#include <iostream> //������ ����� � ������
#include <string.h> //������

using namespace std; //cin cout

class Veicle {
    private:
        std::string name;
        int n_wheels;
        double volume_of_tank;
        double power_of_engine;
    public:
        Veicle(std::string v_name); //�����������
        ~Veicle(); //����������
        Veicle(const Veicle &p); //���������� �����������
};

//�����������
Veicle::Veicle(std::string v_name) {
    cout<<endl;
    cout<<" ������� ��� �����: "<<endl;
    cin>>v_name;
    cout<<" �� ��������: "<<v_name<<endl;
    name = v_name;
    cout<<" �� ��������: "<<name<<endl;
}
/*
//����������
Veicle::~Veicle() {
    cout<<" �� ������� �����"<<endl;
}

//���������� �����������: ��� ���� ������ ��������� �������
Veicle::Veicle(const Veicle &p) {

}*/

int main()
{
    setlocale(LC_ALL, "\Russian"); //��������� ������������ ���������

    Veicle car("My car");


    return 0;
}
