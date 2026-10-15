// ********             ********
// *  * * *             * * *  *
// *  * * *             * * *  *
// ********             ********
//        ***************       
//        *             *       
//        *             *       
//        *   *     *   *       
//        *             *       
//        *   |     |   *       
//        *   |_____|   *       
//        *             *       
//        ***************       
#include <iostream>
using namespace std;

int main() {
    for (int i = 0; i < 13; i++) {
        for (int j = 0; j < 29; j++) {

            bool l_e = i < 4 && j <= 7;
            bool r_e = i < 4 && j >= 21;

            bool e_b =
                (l_e && (i == 0 || i == 3 || j == 0 || j == 7)) ||
                (r_e && (i == 0 || i == 3 || j == 21 || j == 28));

            bool e_s = (i == 1 || i == 2) &&
                (j == 3 || j == 5 || j == 23 || j == 25);

            bool f_b = i >= 4 && i <= 12 &&
                j >= 7 && j <= 21 &&
                (i == 4 || i == 12 || j == 7 || j == 21);

            bool e = i == 7 && (j == 11 || j == 17);

            bool m_s = (i == 9 || i == 10) &&
                (j == 11 || j == 17);

            bool m_b = i == 10 && j >= 12 && j <= 16;

            if (e_b || e_s || f_b || e)
                cout << '*';
            else if (m_s)
                cout << '|';
            else if (m_b)
                cout << '_';
            else
                cout << ' ';
        }
        cout << '\n';
    }

    return 0;
}
