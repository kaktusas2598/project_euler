/* What is the greanum product of four adjacent numbers 
 * in the same direction (up, down, left, right, or diagonally)
 * in the 20×20 grid?
 */
#include<iostream>
#include<fstream>

using namespace std;

int main(){

	int product = 0;

	//grid params
	const int width = 20;
	const int height = 20;

	//grid matrix
	int **grid = new int*[height];
	for(int i=0; i<height;i++)
		grid[i] = new int[width];

	//grid file
	fstream grid_file("grid.dat",ios_base::in);

	//read numbers from grid file to matrix
	int num = 0;
	for(int i=0; i< height;i++){
		for(int j=0; j< width;j++){
			grid_file >> num;
			grid[i][j] = num;
		}
		cout << endl;
	}

	//left-right check
	for(int i=0;i<height;i++)
		for(int j=0;j< width-3;j++)//0 to 16(0123..16 17 18 19)
			if(grid[i][j]*grid[i][j+1]*grid[i][j+2]*grid[i][j+3] > product)
				product = grid[i][j]*grid[i][j+1]*grid[i][j+2]*grid[i][j+3];
	//up-down check
	for(int i=0;i<height-3;i++)
		for(int j=0;j<width;j++)
			if(grid[i][j]*grid[i+1][j]*grid[i+2][j]*grid[i+3][j] > product)
				product = grid[i][j]*grid[i+1][j]*grid[i+2][j]*grid[i+3][j];
	//diagonal checks
	//left to right
	for(int i=0;i<height-3;i++)
		for(int j=0;j<width-3;j++)
			if(grid[i][j]*grid[i+1][j+1]*grid[i+2][j+2]*grid[i+3][j+3] > product)
				product = grid[i][j]*grid[i+1][j+1]*grid[i+2][j+2]*grid[i+3][j+3];
	//right to left
	for(int i=0;i<height-3;i++)
		for(int j=3;j<width;j++)
			if(grid[i][j]*grid[i+1][j-1]*grid[i+2][j-2]*grid[i+3][j-3] > product)
				product = grid[i][j]*grid[i+1][j-1]*grid[i+2][j-2]*grid[i+3][j-3];

	cout << "Largest product in grid: " << product << endl;

	//free memory
	for(int i=0; i<height;i++)
		delete [] grid[i];
	delete [] grid;

	return 0;
}
