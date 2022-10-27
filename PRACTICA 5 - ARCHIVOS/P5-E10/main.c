#include <stdio.h>
#include <stdlib.h>
typedef struct{
float acidezFija;
float acidezVolatil;
float acidoCitrico;
float azucar;
float pH;
float sulfatos;
float alcohol;
int calidad;
char tipo[20];
}vino;
void maximos (float vmax[], vino v);
void minimos (float vmin[], vino v);
void total (float totales[], vino v);
void promedio(float totales[], int cant);
int main()
{
    char cadena[100];
    vino v;
    float vmax[7]={0};
    float vmin[7]={999};
    float totales[7]={0};
    int i;
    int cant =0;
    FILE* arch;
    arch= fopen("vinos.csv", "rb");
    if (arch== NULL){
        perror("ERROR! \n");
    } else{
    fgets(cadena,100,arch);
    fscanf(arch,"%f;%f;%f;%f;%f;%f;%f;%d;%s", &v.acidezFija, &v.acidezVolatil,&v.acidoCitrico, &v.azucar, &v.pH,&v.sulfatos,&v.alcohol,&v.calidad,&v.tipo);
    while(!feof(arch)){
            maximos (vmax, v);
            minimos (vmin,v);
            total (totales, v);
            cant++;
            printf( "%.3f| %.3f| %.3f| %.3f| %.3f| %.3f| %.3f| %d| %s| \n",v.acidezFija, v.acidezVolatil,v.acidoCitrico, v.azucar, v.pH,v.sulfatos,v.alcohol,v.calidad,v.tipo);
            fscanf( arch,"%f;%f;%f;%f;%f;%f;%f;%d;%s", &v.acidezFija, &v.acidezVolatil,&v.acidoCitrico, &v.azucar, &v.pH,&v.sulfatos,&v.alcohol,&v.calidad,&v.tipo);

        }
    promedio(totales,cant);
    FILE* nuevo;
    nuevo= fopen("nue.txt", "w");
    fprintf(nuevo,"AcidezFija AcidezVolatil AcidoCitrico Azucar pH Sulfatos Alcohol Calidad \n");
    fprintf(nuevo, "%.2f | %.2f | %.2f | %.2f | %.2f | %.2f | %.2f | %.2f \n ", vmax[0],vmax[2],vmax[2],vmax[3],vmax[4],vmax[5],vmax[6],vmax[7]);

    fprintf(nuevo, "%.2f | %.2f | %.2f | %.2f | %.2f | %.2f | %.2f | %.2f \n ", vmin[0],vmin[2],vmin[2],vmin[3],vmin[4],vmin[5],vmin[6],vmin[7]);

    fprintf(nuevo, "%.2f | %.2f | %.2f | %.2f | %.2f | %.2f | %.2f | %.2f \n ", totales[0],totales[2],totales[2],totales[3],totales[4],totales[5],totales[6],totales[7]);
    fclose(nuevo);
    fclose(arch);
    }
    return 0;
}
void maximos (float vmax[], vino v){
    if(vmax[0] < v.acidezFija){
        vmax[0]= v.acidezFija;
        }
    if(vmax[1] < v.acidezVolatil){
        vmax[1]= v.acidezVolatil;
        }
    if(vmax[2] < v.acidoCitrico){
        vmax[2]= v.acidoCitrico;
        }
    if(vmax[3] < v.azucar){
        vmax[3]= v.azucar;
        }
    if(vmax[4] < v.pH){
        vmax[4]= v.pH;
        }
    if(vmax[5] < v.sulfatos){
        vmax[5]= v.sulfatos;
        }
    if(vmax[6] < v.alcohol){
        vmax[6]= v.alcohol;
        }
    if(vmax[7] < v.calidad){
        vmax[7]= v.calidad;
        }
 }

void minimos (float vmin[], vino v){
    if(vmin[0] > v.acidezFija){
        vmin[0]= v.acidezFija;
        }
    if(vmin[1] > v.acidezVolatil){
        vmin[1]= v.acidezVolatil;
        }
    if(vmin[2] > v.acidoCitrico){
        vmin[2]= v.acidoCitrico;
        }
    if(vmin[3] > v.azucar){
        vmin[3]= v.azucar;
        }
    if(vmin[4] > v.pH){
        vmin[4]= v.pH;
        }
    if(vmin[5] > v.sulfatos){
        vmin[5]= v.sulfatos;
        }
    if(vmin[6] > v.alcohol){
        vmin[6]= v.alcohol;
        }
    if(vmin[7] > v.calidad){
        vmin[7]= v.calidad;
        }
 }
void total (float totales[], vino v){
totales[0]+=v.acidezFija;
totales[1]+=v.acidezVolatil;
totales[2]+=v.acidoCitrico;
totales[3]+=v.azucar;
totales[4]+=v.pH;
totales[5]+=v.sulfatos;
totales[6]+=v.alcohol;
totales[7]+=v.calidad;
}

void promedio(float totales[], int cant){
totales[0]/=cant;
totales[1]/=cant;
totales[2]/=cant;
totales[3]/=cant;
totales[4]/=cant;
totales[5]/=cant;
totales[6]/=cant;
totales[7]/=cant;

}
