#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_CONTENEDORES 30

int pesos[MAX_CONTENEDORES];
int n = 0;
int ordenado = 0;

// PROTOTIPOS
void registrar();
void generarAleatorios();
void mostrar();
void mergeSort(int arr[], int izq, int der);
void merge(int arr[], int izq, int mid, int der);
void buscarBinaria();

int main() {
    int op;

    srand(time(NULL));

    do {
        printf("\n1. Registrar\n2. Aleatorios\n3. Mostrar\n4. Ordenar\n5. Buscar\n6. Salir\n");
        scanf("%d", &op);

        switch(op) {
            case 1: registrar(); break;
            case 2: generarAleatorios(); break;
            case 3: mostrar(); break;
            case 4:
                mergeSort(pesos, 0, n-1);
                ordenado = 1;
                break;
            case 5: buscarBinaria(); break;
        }
    } while(op != 6);

    return 0;
}

void registrar() {
    printf("Cantidad: ");
    scanf("%d", &n);

    for(int i=0;i<n;i++){
        scanf("%d",&pesos[i]);
    }
    ordenado=0;
}

void generarAleatorios() {
    printf("Cantidad: ");
    scanf("%d", &n);

    for(int i=0;i<n;i++){
        pesos[i]=rand()%30000;
    }
    ordenado=0;
}

void mostrar() {
    for(int i=0;i<n;i++){
        printf("%d ",pesos[i]);
    }
    printf("\n");
}

void merge(int arr[], int izq, int mid, int der) {
    int temp[30];
    int i=izq,j=mid+1,k=0;

    while(i<=mid && j<=der){
        if(arr[i]<arr[j]) temp[k++]=arr[i++];
        else temp[k++]=arr[j++];
    }

    while(i<=mid) temp[k++]=arr[i++];
    while(j<=der) temp[k++]=arr[j++];

    for(i=izq,k=0;i<=der;i++,k++){
        arr[i]=temp[k];
    }
}

void mergeSort(int arr[], int izq, int der) {
    if(izq<der){
        int mid=(izq+der)/2;
        mergeSort(arr,izq,mid);
        mergeSort(arr,mid+1,der);
        merge(arr,izq,mid,der);
    }
}

void buscarBinaria() {
    if(!ordenado){
        printf("Ordena primero\n");
        return;
    }

    int x;
    scanf("%d",&x);

    int izq=0,der=n-1;

    while(izq<=der){
        int mid=(izq+der)/2;

        if(pesos[mid]==x){
            printf("Encontrado en %d\n",mid);
            return;
        }else if(pesos[mid]<x){
            izq=mid+1;
        }else{
            der=mid-1;
        }
    }

    printf("No encontrado\n");
}