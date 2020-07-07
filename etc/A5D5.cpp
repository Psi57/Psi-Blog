#include <iostream>
using namespace std;
class Sym5;
ostream& operator<<(ostream& out, const Sym5& a);
class Sym5 {
    friend ostream& operator<<(ostream& out, const Sym5& a);

public:
    Sym5()
    {
        to[1] = to[2] = to[3] = to[4] = to[5] = 0;
    }
    Sym5 operator*(const Sym5& a) const
    {
        Sym5 res;
        for (int i = 1; i < 6; ++i) {
            res.to[i] = to[a.to[i]];
        }
        return res;
    }
    bool operator==(const Sym5& a) const
    {
        for (int i = 1; i < 6; i++) {
            if (to[i] != a.to[i]) {
                return false;
            }
        }
        return true;
    }
    void set(int a, int b, int c, int d, int e)
    {
        to[1] = a;
        to[2] = b;
        to[3] = c;
        to[4] = d;
        to[5] = e;
    }

    int to[6];
};
ostream& operator<<(ostream& out, const Sym5& a)
{
    bool flag[6];
    int i, j;
    for (i = 1; i < 6; ++i) {
        flag[i] = true;
    }

    for (i = 1; i < 6; i++) {
        if (flag[i]) {
            out << "(";
            j = i;
            do {
                flag[j] = false;
                out << j;
                j = a.to[j];
            } while (j != i);
            out << ")";
        }
    }
    return out;
}

Sym5 D5[10];
Sym5 A5[60];
bool flag[60];
namespace DFS {
int cnt = 0;
Sym5 t;
bool flag[6];
void dfs(int d)
{
    if (d == 6) {
        int i, j, c = 0;
        for (i = 1; i < 6; i++) {
            for (j = i + 1; j < 6; j++) {
                if (t.to[j] < t.to[i]) {
                    c++;
                }
            }
        }
        if ((c % 2) == 0) {
            A5[cnt++] = t;
        }
        return;
    }
    for (int i = 1; i < 6; i++) {
        if (!flag[i]) {
            flag[i] = true;
            t.to[d] = i;
            dfs(d + 1);
            flag[i] = false;
        }
    }
}
};

Sym5 res1[6];
int rcnt = 0;

int x[20] = { 1, 2, 2, 3, 3, 4, 4, 5, 5, 1, 1, 3, 1, 4, 2, 4, 2, 5, 3, 5 };
int main(int argc, char* argv[])
{
    Sym5 temp;
    temp.set(2, 3, 4, 5, 1);
    D5[0].set(1, 2, 3, 4, 5);
    int i, j, k;
    for (i = 1; i < 5; i++) {
        D5[i] = D5[i - 1] * temp;
    }
    temp.set(2, 1, 5, 4, 3);
    for (i = 5; i < 10; i++) {
        D5[i] = D5[i - 5] * temp;
    }

    DFS::dfs(1);

    for (i = 0; i < DFS::cnt; i++) {
        if (!flag[i]) {
            cout << A5[i] << endl;
            res1[rcnt++] = A5[i];
            for (j = 0; j < 10; j++) {
                temp = A5[i] * D5[j];
                for (k = 0; k < 60; k++) {
                    if (A5[k] == temp) {
                        flag[k] = true;
                        break;
                    }
                }
            }
        }
    }

    for (i = 0; i < 6; i++) {
        for (j = 0; j < 10; j++) {
            cout << (j==0 ? "&" : " + ")<< "x_" << res1[i].to[x[j]] << "x_" << res1[i].to[x[++j]];
        }
        for (; j < 20; j++) {
            cout << " - x_" << res1[i].to[x[j]] << "x_" << res1[i].to[x[++j]] ;
        }
        cout<< "\\\\" << endl;
    }
    return 0;
}
