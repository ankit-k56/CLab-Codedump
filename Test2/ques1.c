#include <stdio.h>
struct Player {
    char name[50];
    int age;
    char country[50];
};
int main() {
    int numPlayers;
    printf("Enter the number of players: ");
    scanf("%d", &numPlayers);
    struct Player players[numPlayers];
    for (int i = 0; i < numPlayers; i++) {
        printf("\nEnter details for Player %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", players[i].name);
        printf("Age: ");
        scanf("%d", &players[i].age);
        printf("Country: ");
        scanf("%s", players[i].country);
    }
    printf("\nPlayer Details:\n");
    for (int i = 0; i < numPlayers; i++) {
        printf("\nPlayer %d:\n", i + 1);
        printf("Name: %s\n", players[i].name);
        printf("Age: %d\n", players[i].age);
        printf("Country: %s\n", players[i].country);
    }
    return 0;
}
