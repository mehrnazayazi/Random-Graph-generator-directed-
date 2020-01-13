#include <iostream>
using namespace std;

int main() {
    int numV, Randcost[250][250], Randcap[250][250];
    srand(time(NULL));
    for (int j = 0; j < 250; ++j) {
        for (int i = 0; i < 250; ++i) {
            Randcost[i][j] = -1;
            Randcap[i][j] = -1;
        }
    }
    //choose number of Vertices
    numV = (rand() % 90)+20;// v1 in the range 0 to 99
    for (int i = 0; i < numV ; ++i) {
        for (int j = 0; j < numV; ++j) {
            int fill = rand()%2;
            if(fill){
                if(Randcost[j][i]==-1){
                    Randcost[i][j] = rand() % 200;
//                    cout<<cost[i][j];
                    Randcap[i][j] = rand()%200;
                }
            }
        }
    }
    int m = 0;
    for (int k = 0; k <numV ; ++k) {
        for (int i = 0; i <numV ; ++i) {
            if(Randcap[k][i]!=-1){
                m++;
                cout<<k<<" "<<i<<" "<<Randcap[k][i]<<" "<<Randcost[k][i];
                cout.flush();
                cout<<endl;
            }

        }

    }
    cout<<m<<" , "<<numV;

    return 0;
}
