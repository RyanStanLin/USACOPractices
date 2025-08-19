#include <iostream>
#include <vector>
#include <cstdio>
#include <cstdlib>
using namespace std;

int getDistance(short posA,short posB) {
    return std::abs(static_cast<int>(posA)-static_cast<int>(posB));
}

int getMin(int a,int b) {
    return a<b?a:b;
}

int strategyTeleport(short startPoint,short destinationPoint,short TeleportPointA,short TeleportPointB) {
    int toTeleportDistanceA = getDistance(startPoint,TeleportPointA)+getDistance(destinationPoint,TeleportPointB);
    int toTeleportDistanceB = getDistance(startPoint,TeleportPointB)+getDistance(destinationPoint,TeleportPointA);
    return getMin(toTeleportDistanceA,toTeleportDistanceB);
}

int strategyDirect(short a_start, short b_dest) {
    return getDistance(a_start,b_dest);
}

int main() {
    //freopen("teleport.in","r",stdin);
    //freopen("teleport.out","w",stdout);
    short a_start,b_dest;
    short x_tele,y_tele;
    scanf("%hd %hd",&a_start,&b_dest);
    scanf("%hd %hd",&x_tele,&y_tele);
    printf("%hd",getMin(strategyTeleport(a_start,b_dest,x_tele,y_tele),strategyDirect(a_start,b_dest)));
}
