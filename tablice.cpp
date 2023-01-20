int main()
{
    char table1[10] = { 'a','b','c','d','e','f','g','h' };

    for (int i = 1; i < sizeof(table1) / sizeof(char); i += 2) {

        cout << table1[i] << endl;

    }


    int table2[10] = { 1,2,3,4,5,6,7,8,9,10 };
    for (int i = 0; i < sizeof(table2) / sizeof(int); i++) {
        if (table2[i] % 2 == 1) {
            cout << table2[i] << endl;
        }
    }

    double table3[7] = { -1,2,3,4,-5,6,7 };
    for (int i = 0; i < sizeof(table3) / sizeof(double); i++) {

        cout << abs(table3[i]) << endl;

    }


    string table4[5] = { "aaaa","bb","cccc","ddddd","eee" };
    for (int i = 0; i < sizeof(table4) / sizeof(string); i++) {

        cout << table4[i] << "," << table4[i].length() << endl;
    }
    int tablica_intow[5] = { 4,5,7,7,0 };
    int max = 0;
    int max_intex = 0;
    for (int i = 0; i < sizeof(tablica_intow) / sizeof(int); i++) {
        if (tablica_intow[i] > tablica_intow[i - 1]) {
            tablica_intow[i] = max;


        }

    }
    cout << max;
