#include <iostream>
#include <string>
using namespace std;

int main() {
	// The 2 dimensional array represents [x, y] coordinate pairs
	bool tileMap[20][20];
	bool* battleShip[5];
	int hitCounter = 0;


	// Each piece of the battleship occupies one cell of the grid.
	// Store the memory address of the cell the battleship occupies in the battleship. 
	battleShip[0] = &tileMap[5][5];
	battleShip[1] = &tileMap[5][6];
	battleShip[2] = &tileMap[5][7];
	battleShip[3] = &tileMap[5][8];
	battleShip[4] = &tileMap[5][9];


	bool done = false;
	// Use a sentinel-based loop to determine when the game should end.
	while (!done) {
		cout << "Enter X and Y coordinates to play: ";
		int x, y;
		cin >> x >> y;

		for (int z = 0; z < 5; z++) {

			if (hitCounter == 5)
				done = true;

			if (&tileMap[x][y] == battleShip[z]) {
				cout << "HIT!\n";
				hitCounter++;
			}
			else {
				done = true;
				cout << "miss";
			}

		}
		/* TODO:
		* 1. Get the memory address of the in the tileMap at the coordinates the user entered.
		* 2. Compare the memory address retrieved to the address stored in each part of the battleship.
		* 3. If the memory address of the cell does NOT match any of the battleship parts, output "miss" to the console.
		* 4. If the memory address of the cell DOES match any of the battleship parts, output "hit" to the console.
		* 5. When 5 hits have been registered, end the game by changing the sentinel value to "true"
		*/
	}
}
