#include <iostream>
using namespace std;
int main()
{
   // 1
   /*int i = 2;
    do {
            cout << i << endl; 
        i+=2;
    } while (i <= 100);*/
    //2
   /* int a, b;
    cin >> a >> b;
    int i = b;
    int sum = 0;
    do {
        if (i % 2 != 0) {
            sum = sum + i;
        }
            i-=1;
    } while (i >= a);
    cout << sum << endl;*/
    //3
  /*int n;
    cin >> n;
    int i = 1;
    do {
        cout << i*i << endl;
        i++;
    } while (i * i <= n);*/
    //29. с помощью оператора while напишите программу вывода всех четных чисел в диапазоне от 2 до 100 включительно.
   /*int i = 2;
    do {
        cout << i << endl;
        i += 2;
    } while (i <= 100);*/
    //30. С помощью оператора while напишите программу определения суммы всех нечетных чисел в диапазоне от 1 до 99 включительно.
    /*int sum = 0;
    int i = 1;
    do {
        sum = sum + i;
        i += 2;
    } while (i <= 99);
    cout << sum;*/
   // 17. В ЭВМ вводятся по очереди данные о росте N учащихся класса.Определить средний рост учащихся класса.
    /*int n, a;
    int sum = 0;
    cin >> n;
    int i = 1;
    do{
        cin >> a;
        sum = sum + a;
        i++;
    }while (i <= n);
    sum = sum / n;
    cout << sum << endl;*/
   // 18. Задано натуральное число N.Найти количество натуральных чисел, не превосходящих N и не делящихся ни на одно из чисел 2, 3, 5.
   /* int n;
    int sum = 0;
    cin >> n;
    int i = 1;
    do {
        if (i % 2 != 0 && i % 3 != 0 && i % 5 != 0) {
            sum += 1;
        }
        i++;
    } while (i <= n);
    cout << sum << endl;*/
   // 22. дано натуральное n.вычислить: 1 + 1 / 2 + 1 / 3 + 1 / 4 + ... + 1 / n.
    int n;
    double sum = 0;
    cin >> n;
    double i = 1.0;
    do {
        sum = sum + 1/i;
        i++;
    } while (i <= n);
    cout << sum << endl;

















    return 0;
}



