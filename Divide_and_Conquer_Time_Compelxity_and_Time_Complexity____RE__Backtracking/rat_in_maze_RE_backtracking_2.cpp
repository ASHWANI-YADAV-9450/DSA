 #include<iostream>
 #include<vector>
 using namespace std;

 int dx[4] = {1,0,0,-1};
 int dy[4] = {0, -1, 1, 0};
 char direction [4] = {'D', 'L', 'R', 'U'};

 bool isSafe(int i, int j, int row, int col, int arr[][4],
 vector<vector<bool> > &visited ) {
    if( ((i>=0 && i<row) && (j >=0 && j <col)) &&
    (arr[i][j] ==1) && (visited[i][j]==false)) {
        return true;
    }
    else {
        return false;
    }
 }

 void solveMaze(int arr[4][4], int row, int col, int i, int j,
 vector<vector<bool> >& visited, vector<string>& path, string output) {

    // base case
  // Corrected base case condition
if (i == row - 1 && j == col - 1) {
    // answer found
    path.push_back(output);
    return;
}

for(int k=0; k<4; k++) {
    int newx = i +dx[k];
    int newy = j + dy[k];
    char dir = direction[k];

    if(isSafe(newx, newy, row, col, arr, visited)) {
          visited[newx][newy] = true;
        solveMaze(arr, row, col, newx, newy, visited, path, output + dir);

        // backtrack
        visited[newx][newy] = false;
    }
}


    
 }

 int main() {
    // int maze[3][3] = { {1,0,0}, {1,1,0}, {1,1,1} };

    int maze[4][4] ={ {1,0,0,0}, 
                 {1,1,0, 1},
                 {1,1,0,0},
                 {0,1,1,1}};

    if(maze[0][0] ==0) {
        cout << "No path exists"<< endl;
    }

    int row =4;
    int col =4;

    // vector<vector<bool> > visited(row, vector<bool>(col, false));
    vector<vector<bool> > visited(row, vector<bool>(col, false));

    // src ki value k true mark kredete h
    visited[0][0] = true;

    vector<string> path;
    string output = "";

    solveMaze(maze, row,col, 0,0, visited, path, output);

    cout<< "printing the result" << endl;

    for(auto i: path) {
        cout << i << " ";
    }
    cout << endl;

    if(path.size() == 0) {
        cout << "No Path Exists " <<endl;
    }
 }  