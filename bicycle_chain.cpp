#include<bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> pedal;
    int n, m, max=0, total;
    double aux, cont;

    cin >> n;

    while(n--){
        cin >> aux;
        pedal.push_back(aux);
    }

    cin >> m;

    while (m--)
    {
        cin >> aux;

        for(auto& item : pedal){
            cont = aux/item;

            if(cont - (int)cont == 0 and max < cont){
                total = 1;
                max = cont;
            }
            else if(cont == max)
                total++;
        }
    }

    cout << total << endl;

    return 0;
}
