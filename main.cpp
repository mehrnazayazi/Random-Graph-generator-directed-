#include <iostream>

int main() {
    int numV, cost[250][250], cap[250][250];
    for (int j = 0; j < 250; ++j) {
        for (int i = 0; i < ; ++i) {
            cost[i][j] = -1;
            cap[i][j] = -1;
        }
    }
    numV = rand() % 250;// v1 in the range 0 to 99
    for (int i = 0; i < numV ; ++i) {
        int iteration = rand() % numV;
        for (int j = 0; j < iteration; ++j) {
            int Vnum = rand() % numV;
            if(cost[i][Vnum]==-1 && cost[Vnum][i]==-1){
                int Ecost = rand() % 2000;
                int Ecap = rand() % 2000;
                cost[i][Vnum] = Ecost;
                cap[i][Vnum] = Ecap;
            }
        }
    }
    return 0;
}
