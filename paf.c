// Ricardo Gonzalez Fernandez
// 19.291.921-5
// Ejercicio PAF
//
#include <stdio.h>

int main(){
    FILE *lee;
    FILE *esc;
    char cad[80];
    char car[80];
    int f[80];
    int i=0;
    int n=0;
    int *puntero=0;
    int menor=999999;


    if (!(lee=fopen("entrada.ent","r"))) 
        printf("Error al abrir el fichero"); // Importante! este algoritmo no funciona si N > 10
    else{
        fgets(car,80,lee); 
        fgets(cad,80,lee);
        fclose(lee);
    }
    n=car[0]-48;
    int p=1;
    int a[n];
    int b[n];
    int c[n];
    a[0]=0;
    b[n]=0;
    b[n-1]=0;
    for (i=0; i<n; ++i){
       f[i]=cad[i*2]-48;
    }
    puntero=&f[0];
    for (i=0; i<n ; ++i){
        a[i+1]=f[i]+a[i];
    }
    int j=n;
    for (i=n; i>0 ; --i){
        b[i-1]=f[i-1]+b[i];
    }
    for (i=1; i<n; ++i){
        c[i]=a[i]-b[i];
        if (c[i]<0){
            c[i]=c[i]*-1;
        }
        if (menor>c[i]){
            menor=c[i];
        }

    }
    if(!(esc=fopen("salida.sal","w"))) /* controlamos si se produce un error */
        printf("Error al abrir el fichero");
    else{
        fprintf(esc,"%d",menor);
        fclose(esc);
    }
}