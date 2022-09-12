using namespace std;


int check_number() {//Проверка для ввода числа из 1 задания
    int k;
    cin >> k;
    while (cin.fail()) {
        cin.clear();
        cin.ignore(32767, '\n');
        cout << "\nНеккоректное число, повторите ввод: "<<endl;
        cin >> k;
    }
    return k;
}

class diapozon {
    public:
        void set_diapozon(double set_left, double set_right) {//получание классом значений дапазона
            left = set_left;
            right = set_right;
            comparison();
        }
        void comparison() {//смена границ диапазона, если они введены неправильно 
            double k=0;
            if(left>right) {
                k=left;
                left=right;
                right=k;
                cout<<"Границы поменялись местами"<<endl;
            }
        }
        int get_left() {
            return left;
        }
        int get_right() {
            return right;
        }
        bool rangecheck(double number) {//проверка, входит ли число в диапазон
            return ((number>=left) && (number<right));
        }
    private:
        double left;
        double right;
};
