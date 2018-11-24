#include <iostream>
#include "string"
#include "vector"
#include "Caja.h"
#include "Libro.h"
#include "Ropa.h"
#include "Videojuego.h"
#include "Computadora.h"

using std::vector;
using std::cout;
using std::cin;
using std::endl;



Caja*** createMatrix();

//inicializa la matriz
void initMatrix(Caja***);

//Imprime una matriz n*n
void printMatrix2(Caja***);



//liberar una matriz de n*n enteros
void freeMatrix(Caja***&);

//llenar almacen
void llenar(Caja***,vector<Caja>);

int main() {
    int b=0;
    //Caja(const vector<Producto> &productos, const string &fragil, int peso_tot);
    int cajas=0;
    Caja*** retVal=createMatrix();
    initMatrix(retVal);
    vector<Caja> almacen;

    /*
     *   printMatrix(retVal);
         freeMatrix(retVal);
     */
    while(b==0){
        cout<<"*************MENU*************"<<endl;
        cout<<"1) Crear Libro "<<endl;
        cout<<"2) Crear Ropa "<<endl;
        cout<<"3) Crear Videojuegos "<<endl;
        cout<<"4) Crear Computadoras "<<endl;
        cout<<"5) Para una caja en específico que esté en el almacén poder ver toda su información."<<endl;
        cout<<"6) Ver todas las cajas en el almacén y mostrar su peso"<<endl;
        cout<<"7) Mover Cajas"<<endl;
        cout<<"8) Solo ver las cajas que son frágiles del almacén"<<endl;
        cout<<"9) salir"<<endl;
        cout<<"Ingrese su desicion: "<<endl;
        int des;
        cin>>des;

            if(des==1){
                string nombre,fragil;
                fragil="No";
                int peso;
                string codigo;
                cout<<"Ingrese el nombre del producto: "<<endl;
                cin>>nombre;
                cout<<"Ingrese el peso del producto: "<<endl;
                cin>>peso;
                cout<<"Ingrese el codigo ISBN del Libro: "<<endl;
                cin>>codigo;
                //const string &nombre, int peso, const string &fragil_s_n, const string &codigo_ISBN)
                Libro l(nombre,peso,fragil,codigo);
                int aux=0;
                for (auto &Caja : almacen) {
                    if(Caja.getPeso_tot()<999 && (Caja.getPeso_tot()+peso)<=999){
                            Caja.addProducto(l);
                            aux=1;
                    }
                }
                if(aux==0){
                    if(peso<=999){
                        Caja ol("No",peso);
                        ol.addProducto(l);
                        almacen.push_back(ol);
                    }else{
                        cout<<"El producto es muy pesado"<<endl;
                    }
                }

            } else if (des==2){
                string nombre,fragil;
                fragil="No";
                int peso;
                string tipo;
                cout<<"Ingrese el nombre del producto: "<<endl;
                cin>>nombre;
                cout<<"Ingrese el peso del producto: "<<endl;
                cin>>peso;
                cout<<"Ingrese el tipo de ropa: "<<endl;
                cin>>tipo;
                //const string &nombre, int peso, const string &fragil_s_n, const string &codigo_ISBN)
                Ropa l(nombre,peso,fragil,tipo);
                int aux=0;
                for (auto &Caja : almacen) {
                    if(Caja.getPeso_tot()<999 && (Caja.getPeso_tot()+peso)<=999){
                        Caja.addProducto(l);
                        aux=1;
                    }
                }
                if(aux==0){
                    if(peso<=999){
                        Caja ol("No",peso);
                        ol.addProducto(l);
                        almacen.push_back(ol);
                    }else{
                        cout<<"El producto es muy pesado"<<endl;
                    }
                }
            } else if (des==3){
                cout<<"************ELECTRONICOS************"<<endl;
                string nombre,fragil;
                fragil="Si";
                int peso;
                string desarollador;
                cout<<"Ingrese el nombre del producto: "<<endl;
                cin>>nombre;
                cout<<"Ingrese el peso del producto: "<<endl;
                cin>>peso;
                cout<<"Ingrese el desarollador: "<<endl;
                cin>>desarollador;
                    Videojuego v(nombre,peso,fragil,desarollador);
                        int aux=0;
                            for (auto &Caja : almacen) {
                                if(Caja.getPeso_tot()<999 && (Caja.getPeso_tot()+peso)<=999){
                                     Caja.addProducto(v);
                                     Caja.setFragil("Si");
                                        aux=1;
                                }
                            }
                 if(aux==0){
                    if(peso<=999){
                        Caja ol("Si",peso);
                        ol.addProducto(v);
                        almacen.push_back(ol);
                    }else{
                        cout<<"El producto es muy pesado"<<endl;
                    }
                }
            } else if (des==4){
                cout<<"************ELECTRONICOS************"<<endl;
                string nombre,fragil;
                fragil="Si";
                int peso;
                string sistema;
                cout<<"Ingrese el nombre del producto: "<<endl;
                cin>>nombre;
                cout<<"Ingrese el peso del producto: "<<endl;
                cin>>peso;
                cout<<"Ingrese el Sistema operativo: "<<endl;
                cin>>sistema;
                Computadora c(nombre,peso,fragil,sistema);
                int aux=0;
                for (auto &Caja : almacen) {
                    if(Caja.getPeso_tot()<999 && (Caja.getPeso_tot()+peso)<=999){
                        Caja.addProducto(c);
                        Caja.setFragil("Si");
                        aux=1;
                    }
                }
                if(aux==0){
                    if(peso<=999){
                        Caja ol("Si",peso);
                        ol.addProducto(c);
                        almacen.push_back(ol);
                    }else{
                        cout<<"El producto es muy pesado"<<endl;
                    }
                }
            } else if (des==5){
                llenar(retVal,almacen);
                printMatrix2(retVal);
                cout<<"Ingrese la posicion en i "<<endl;
                int i;
                cin>>i;
                cout<<"Ingrese la posicion en j "<<endl;
                int j;
                cin>>j;
                cout<<"Peso total"<<retVal[i][j]->getPeso_tot()<<endl;
                cout<<"Fragilidad"<<retVal[i][j]->getFragil()<<endl;
            }else if (des==6){
                llenar(retVal,almacen);
                printMatrix2(retVal);
            } else if (des==7){
                llenar(retVal,almacen);
                printMatrix2(retVal);
                cout<<"Ingrese la caja que desea mover i "<<endl;
                int i;
                cin>>i;
                cout<<"Ingrese la caja que desea mover j "<<endl;
                int j;
                cin>>j;
                cout<<"Ingrese a donde desea mover en i "<<endl;
                int i2;
                cin>>i2;
                cout<<"Ingrese a donde desea mover en j"<<endl;
                int j2;
                cin>>j2;
                int t=retVal[i][j]->getPeso_tot();
                int t2=retVal[i2][j2]->getPeso_tot();

                Caja* l=new Caja("No",t2);
                Caja* l2=new Caja("No",t);
                retVal[i][j]=l;
                retVal[i2][j2]=l2;

                printMatrix2(retVal);
            }else if(des==8544){
                llenar(retVal,almacen);
                for (int i = 0; i < 10; ++i) {
                    for (int j = 0; j <10 ; ++j) {
                        if(retVal[i][j]->getFragil()=="No"){
                            cout<<"[ ]";
                        }else{
                            cout<<"[0]";
                        }
                    }
                    cout<<endl;
                }
                cout<<endl;
            }
            else if(des==8){
                cout<<"*************Productos*************"<<endl;
                for (int i = 0; i <almacen.size() ; ++i) {
                    for (int j = 0; j < almacen.at(i).getProductos().size(); ++j) {
                        if (almacen.at(i).getFragil() == "Si") {
                            cout << "Caja: " << i << " Producto: " << almacen.at(i).getProductos().at(j).getNombre()<<endl;
                        }
                    }
                }
            } else if(des==9) {
                b=21;
            }else{
                    cout<<"Dato no valido"<<endl;
                }
            }


    return 0;
}


Caja*** createMatrix(){
    Caja*** retVal=NULL;
    //provisionar las filas
    retVal=new Caja**[10];
    //provisionar las columnas de cada fila
    for(int i=0;i<10;i++){
        retVal[i]=new Caja* [10];
    }

    return retVal;

}


//inicializar la matriz
void initMatrix(Caja*** matrix){
    for(int i=0;i<10;i++) {
        for (int j = 0; j < 10; j++) {
            matrix[i][j]=NULL;
        }
    }


}

//Imprimir la matriz

void printMatrix2(Caja*** matrix) {
    cout << "**************ALMACEN**************" << endl;
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (matrix[i][j]==NULL) {
                cout << "[ ]" ;
            }else{
                int x=matrix[i][j]->getPeso_tot();
                while(x>=10){
                    x/=10;
                }
                cout<<"["<<x<<"]";
            }
        }
        cout << endl;
    }
    cout << endl;
}


void freeMatrix(Caja***& matrix){
    //primero liberar las columnas de cada fila
    for(int i=0;i<10;i++){
        delete[] matrix[i];
        matrix[i]=NULL;
    }
    //liberar filas
    delete[] matrix;
    matrix=NULL;

}

void llenar(Caja*** x,vector<Caja> a){
    int size=a.size();
    int aux=0;
    cout<<size;
        for (int i = 0; i < 10; ++i) {
            for (int j = 0; j < 10; ++j) {
                if (aux==size){
                    i=10;
                    break;
                }else{
                    x[i][j]= &a.at(aux);
                    aux++;
                }

            }

    }
}

void llenar2(Caja*** x,vector<Caja> a){
    int size=a.size();
    int aux=0;
    cout<<size;
    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 10; ++j) {
            if (aux==size){
                i=10;
                break;
            }else{
                x[i][j]= &a.at(aux);
                aux++;
            }

        }

    }
}












