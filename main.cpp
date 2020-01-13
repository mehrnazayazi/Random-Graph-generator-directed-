#include <iostream>
using namespace std;

int main() {
    int numV, cost[250][250], cap[250][250];
    srand(time(NULL));
    for (int j = 0; j < 250; ++j) {
        for (int i = 0; i < 250; ++i) {
            cost[i][j] = -1;
            cap[i][j] = -1;
        }
    }
    //choose number of Vertices
    numV = (rand() % 70)+20;// v1 in the range 0 to 99
    for (int i = 0; i < numV ; ++i) {
        for (int j = 0; j < numV; ++j) {
            int fill = rand()%2;
            if(fill){
                if(cost[j][i]==-1){
                    cost[i][j] = rand() % 200;
//                    cout<<cost[i][j];
                    cap[i][j] = rand()%200;
                }
            }
        }
    }
    int m = 0;
    for (int k = 0; k <numV ; ++k) {
        for (int i = 0; i <numV ; ++i) {
            if(cap[k][i]!=-1){
                m++;
                cout<<k<<" "<<i<<" "<<cap[k][i]<<" "<<cost[k][i];
                cout.flush();
                cout<<endl;
            }

        }

    }
    cout<<m<<" , "<<numV;

    return 0;
}
