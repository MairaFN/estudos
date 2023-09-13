#include <iostream>
using namespace std;

int ** criar_matriz(int lin,int col){
    int ** mat;
    mat = new int*[lin];
    for(int i=0;i < lin;i++){
        mat[i]= new int[col];
    }
    return mat;
}

void ler_matriz(int**mat,int lin,int col){
    for(int i=0;i<lin;i++){
        for(int j=0; j<col;j++){
            cout<<"Valor ["<<i+1<<", "<<j+1<<"]: ";
            cin>>mat[i][j];

        }
        
    }
    cout<<endl;
}

void imprimir_matriz(int*mat[], int lin,int col){
    for(int i=0;i<lin;i++){
        for(int j=0; j<col;j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int lin;
    int col;
    cout << "Quantas linhas? ";
    cin >> lin;
    cout << "Quantas colunas? ";
    cin >> col;

    int ** matriz = criar_matriz(lin,col);
    ler_matriz(matriz,lin,col);
    //cout<<"----Matriz----"<<endl;
    imprimir_matriz(matriz,lin,col);



    return 0;
}