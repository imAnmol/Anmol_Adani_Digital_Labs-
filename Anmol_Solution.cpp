#include <bits/stdc++.h>
using namespace std;

int col_ind;
bool sort_col_ind(const vector<int>& vec1, const vector<int>& vec2)
{
	return vec1[col_ind] < vec2[col_ind];
}


int main()
{
    int rows,columns; 
    cout<<"Enter number of rows"<<endl;
    cin>>rows;
    cout<<"Enter number of columns"<<endl;
    cin>>columns;
    
    cin>>col_ind;
    vector<vector<int>> array(rows,vector<int>(columns,0));

    for (int i=0; i<rows; i++){
        for (int j=0; j<columns; j++){
            array[i][j] = (rand() % 100);
        }
    }

    cout << "The resultant Random generated array :" << endl;

    for (int i=0; i<rows; i++){
        for (int j=0; j<columns; j++)
            cout << array[i][j] << " ";
        cout << endl;
    }
	sort(array.begin(), array.end(), sort_col_ind);
	
	cout << "The Array after sorting is : "<<endl;
	
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j <columns; j++){
		    cout << array[i][j] << " ";
		}
			
		cout << endl;
	}
	return 0;
}