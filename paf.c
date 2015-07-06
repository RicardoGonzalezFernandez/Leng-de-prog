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
        printf("%s\n",car); 
        fgets(cad,80,lee);
        printf("%s\n",cad);
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
    printf("el menor es %d\n", menor);
    if(!(esc=fopen("salida.sal","w"))) /* controlamos si se produce un error */
        printf("Error al abrir el fichero");
    else{
        fprintf(esc,"%d",menor);
        fclose(esc);
    }
    



 


    printf("%d %d %d %d %d\n",f[0],f[1],f[2],f[3],f[4]);
    printf("%d\n",n); 
    printf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d\n\n",a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9],a[10],a[11],a[12],a[13],a[14],a[15],a[16],a[17]);
    printf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d\n\n",b[0],b[1],b[2],b[3],b[4],b[5],b[6],b[7],b[8],b[9],b[10],b[11],b[12],b[13],b[14],b[15],b[16],b[17]);
    printf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d\n\n",c[0],c[1],c[2],c[3],c[4],c[5],c[6],c[7],c[8],c[9],c[10],c[11],c[12],c[13],c[14],c[15],c[16],c[17]);

}