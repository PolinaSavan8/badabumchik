#include <iostream>
#include <algorithm> 
using namespace std;
int main() {
    int grades[] = { 7, 5, 8, 3, 9, 6, 7, 4, 8, 7, 6 }; 
    int n = sizeof(grades) / sizeof(grades[0]); 
    double sum = 0;
    for (int i = 0; i < n; i++) {
        sum += grades[i];
    }
    double average = sum / n;
    cout << "Средний балл: " << average << endl;
    int max = *max_element(grades, grades + n);
    int min = *min_element(grades, grades + n);
    cout << "Максимальная оценка: " << max << endl;
    cout << "Минимальная оценка: " << min << endl;
    int above_avg = 0;
    for (int i = 0; i < n; i++) {
        if (grades[i] > average) above_avg++;
    }
    cout << "Студентов с оценкой выше среднего: " << above_avg << endl;
    bool has_fail = false;
    for (int i = 0; i < n; i++) {
        if (grades[i] < 4) {
            has_fail = true;
            break;
        }
    }
    cout << "Есть неудовлетворительные оценки: " << (has_fail ? "да" : "нет") << endl;
    sort(grades, grades + n);
    cout << "Отсортированные оценки: ";
    for (int i = 0; i < n; i++) {
        cout << grades[i] << " ";
    }
    cout << endl;

    return 0;
}