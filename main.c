#include <stdio.h>
#include <stdlib.h>
int Dimension_matrice() /* fonction qui retourne la taille du matrice */
{
int taillematrice;
do
{
printf("Donner la dimension de la matrice");
scanf("%d",&taillematrice);
}
while(taillematrice<=0);
return taillematrice;}

void LIRE_MATRICE (float **matrice,int taille_matrice)
{
/* Variables locales */
int i,j,count=0;
/* Saisie des composantes de la matrice */
for (i=0; i<taille_matrice; i++)
{
 for (j=0; j<taille_matrice; j++)
 {
matrice[i][j]=rand()%10+1;

count=count+1;
 }

}
printf("la complexite du remlissage d'une matrice dense  est %d\n",count);
}
/*retourner la minimum entre deux variables*/
int minimum(int a,int b)
{
    if (a<b)
        return a;
    else
        return b;
}
void LIRE_MATRICE_demi_bande_inferieur (float **matrice,int m,int taille_matrice)
{
/* Variables locales */
int i,j,count=0;
/* Saisie des composantes de la matrice demi bande inferieur*/
for (i=0; i<taille_matrice; i++)
{
 for (j=0; j<=i; j++)
 {
     if(abs(i-j)<=m){
matrice[i][j]=rand()%10+1;

count=count+1;
 }

}}
printf("la complexite du remlissage d'une matrice demi bande inferieur  est %d\n",count);
}
void LIRE_MATRICE_demi_bande(float **matrice,int m,int taille_matrice)
{
/* Variables locales */
int i,j,count=0;
/* Saisie des composantes de la matrice demi bande inferieur*/
for (i=0; i<taille_matrice; i++)
{
 for (j=0; j<=taille_matrice; j++)
 {
     if(abs(i-j)<=m){
matrice[i][j]=rand()%10+1;

count=count+1;
 }

}}
printf("la complexite du remlissage d'une matrice demi bande  est %d\n",count);
}
void LIRE_MATRICE_demi_bande_superieur (float **matrice,int m,int taille_matrice)
{
/* Variables locales */
int i,j,count=0;
/* Saisie des composantes de la matrice */
for (i=0; i<taille_matrice; i++)
{
    int min=minimum(m+i,taille_matrice);
 for (j=i; j<=min; j++)
 {
matrice[i][j]=rand()%10+1;

count=count+1;
 }

}
printf("la complexite du remlissage d'une matrice demi bande superieur est %d\n",count);
}
void ECRIRE_MATRICE (float **matrice, int taille_matrice)
{
/* Variables locales */
int i,j;
/* Affichage des composantes de la matrice */
for (i=0; i<taille_matrice; i++)
 {
 for (j=0; j<taille_matrice; j++){
printf("%f\t", matrice[i][j]," ");
}
 printf("\n");
 }}
 /* Saisie des composantes de la vecteur */
 void saisir_Vecteur(float* vecteur,int taille_matrice)
{ int count=0;
for(int i=0;i<taille_matrice;i++)
    {
vecteur[i]=rand()%10+1;

count=count+2;
    }
    /*affichage de la complixite de la remplissage de la vecteur*/
printf("le nombre d'operation totale pour la remplissage d'un vecteur est %d\n",count);
}

 /*multiplication des composantes de la vecteur par les composantes de la matrice dense*/
void multiplier_MatriceDense_Par_Un_Vecteur(float** matrice,float* vecteur , int taille_matrice, float*resultat)
{int count=0;
for(int i=0;i<taille_matrice;i++)
    {
for(int j=0;j<taille_matrice;j++)
        {
resultat[i]=resultat[i]+(matrice[i][j]* vecteur[j]);
count=count+2;
        }

    }
printf("le nombre d'operation totale pour la multiplication d'une matrice dense par un vecteur est %d\n",count);


}

/* Affichage des composantes de la vecteur */
void affichage_vecteur(float * vecteur,int taille_matrice ){
    int i;
       printf("vecteur=(");
    for(i=0;i<taille_matrice;i++){
    printf(" %f",vecteur[i]);
    }
    printf(")");

}
/* Saisie des composantes de la matrice triangulaire inferieur*/
void Lire_matriceTriang_Inf(float** matrice,int taille_matrice)
{
    int i,j, count=0;
for(int i=0;i<taille_matrice;i++)
    {
for(int j=0;j<=i;j++)
        {
matrice[i][j]=rand()%10+1;
count=count+2;
        }
    }
    printf("le nombre d'operation totale pour la remplissage remplissage d'une matrice triangulaire inferieure est %d\n",count);
}
 /*multiplication des composantes de la vecteur par les composantes de la matrice triangulaire inferieur*/
void multiplier_Matrice_Triangulaire_Inferieur_ParUnVecteur(float** matrice,float* vecteur , int n, float *resultat)
{int count=0;
for(int i=0;i<n;i++)
    {
for(int j=0;j<=i;j++)
        {
resultat[i]=resultat[i]+(matrice[i][j]* vecteur[j]);
count=count+2;
        }

    }
printf("le nombre d'operation totale pour la multiplication d'une matrice triangulaire inferieur par un vecteur est %d\n",count);



}
void multiplier_Matrice_demi_bande_ParUnVecteur(float** matrice,int m,float* vecteur , int n, float *resultat)
{int count=0;

      for(int i=0;i<m+1;i++)
     {
         for(int j=0;j<=(m+i);j++)
         {
             resultat[i]=resultat[i]+matrice[i][j]*vecteur[j];
             count+=2;
         }
     }
      for(int i=m+1;i<n-m;i++)
     {
         for(int j=i-m;j<=(m+i);j++)
         {
             resultat[i]=resultat[i]+matrice[i][j]*vecteur[j];
             count=count+2;
         }
     }
      for(int i=n-m;i<n;i++)
     {
         for(int j=i-m;j<n;j++)
         {
             resultat[i]=resultat[i]+matrice[i][j]*vecteur[j];
             count=count+2;
         }
     }


    printf("la complexite de la multiplication d'une matrice bande par un vecteur est %d\n",count);
}
/* Saisie des composantes de la matrice triangulaire superieur*/
void Lire_matriceTriang_Sup(float** matrice,int taille_matrice)
{int count=0;
for(int i=0;i<taille_matrice;i++)
    {
for(int j=i;j<=taille_matrice;j++)
        {
matrice[i][j]=rand()%10+1;
count=count+2;
        }
    }
printf("le nombre d'operation totale pour le  remlissage d'une matrice triangulaire superieur est %d\n",count);

}
void Lire_matriceTriang_Sup_Diagonale_unitaire(float** matrice,int taille_matrice)
{int count=0;
for(int i=0;i<taille_matrice;i++)
    {
for(int j=i+1;j<=taille_matrice;j++)
        {
matrice[i][j]=rand()%10+1;
count=count+1;
        }
        matrice[i][i]=1;
    }
printf("le nombre d'operation totale pour le remlissage d'une matrice triangulaire superieur a diagonale unitaire  est %d\n",count);

}
void Lire_matriceTriang_inf_Diagonale_unitaire(float** matrice,int taille_matrice)
{
    int count=0;
for(int i=0;i<taille_matrice;i++)
    {
for(int j=0;j<=i-1;j++)
        {
matrice[i][j]=rand()%10+1;
count=count+1;
        }
        matrice[i][i]=1;
    }
printf("le nombre d'operation totale pour le remlissage d'une matrice triangulaire inferieur a diagonale unitaire  est %d\n",count);

}
/*multiplication des composantes de la vecteur par les composantes de la matrice triangulaire superieur*/
multiplier_Matrice_Triangulaire_superieur_ParUnVecteur(float** matrice,float* vecteur , int taille_matrice, float*resultat)
{ int i,j,count=0;
for(int i=0;i<taille_matrice;i++)
    {
for(int j=i;j<taille_matrice;j++)
        {
resultat[i]=resultat[i]+(matrice[i][j]* vecteur[j]);
count=count+2;
        }

    }
printf("le nombre d'operation totale pour la multiplication d'une matrice triangulaire superieur par un vecteur est %d\n",count);


}
/*retourner la maximum entre deux variables*/
int max (int a,int b)
{
    if (a>b)
        return a;
    else
        return b;
}
multiplier_Matrice_Triangulaire_diag_inferieur_ParUnVecteur(float** matrice,int m,float* vecteur , int taille_matrice, float*resultat)
{ int i,j,count=0;
for(int i=0;i<taille_matrice;i++)
    {
for(int j=max(0,i-taille_matrice);j<=i;j++)
        {
resultat[i]=resultat[i]+(matrice[i][j]* vecteur[j]);
count=count+2;
        }

    }
printf("le nombre d'operation totale pour la multiplication d'une matrice triangulaire demi bande inferieur  par un vecteur est %d\n",count);


}
/*multiplication des composantes de la vecteur par les composantes de la matrice demi bande superieur*/
multiplier_Matrice_Triangulaire_bande_superieur_ParUnVecteur(float** matrice,int m,float* vecteur , int taille_matrice, float*resultat)
{ int i,j,count=0;
for(int i=0;i<taille_matrice;i++)
    {

for(int j=i;j<minimum(i+m,taille_matrice);j++)
        {
resultat[i]=resultat[i]+(matrice[i][j]* vecteur[j]);
count=count+2;
        }

    }
printf("le nombre d'operation totale pour la multiplication d'une matrice triangulaire demi bande  superieur par un vecteur est %d\n",count);


}
 /*multiplication de deux matrices denses*/

void multiplierDeuxMatricesDenses(float**matrice1,float **matrice2,float**resultat,int taille_matrice)
{  int count=0;
for(int i=0;i<taille_matrice;i++)
    {
for(int j=0;j<taille_matrice;j++)
        {for(int k=0;k<taille_matrice;k++){
resultat[i][j]+=matrice1[i][k]*matrice2[k][j];
count=count+2;
        }

        }
    }
    printf("le nombre d'operation totale pour la multiplication d'une matrice dense par une matrice dense est %d\n",count);


}
/*calcul de la transposee d'une matrice */
void transformerEnTranspose(float **matrice,float **transpose,int taille_matrice)
{
for(int i=0;i<taille_matrice;i++)
for(int j=0;j<taille_matrice;j++)
    {
transpose[i][j]=matrice[j][i];

    }
}
void multiplier_Matrice_ParTranspose(float**matrice1,float**matricetranspose,float**resultat,int taille_matrice)
{  int count=0;
for(int i=0;i<taille_matrice;i++)
    {
for(int j=0;j<taille_matrice;j++)
        {for(int k=0;k<taille_matrice;k++){
resultat[i][j]+=matrice1[i][k]*matricetranspose[k][j];
count=count+2;
        }
        }
    }
printf("le nombre d'operation totale pour la multiplication  d'une matrice par son transpose est %d\n",count);
}
/*multiplication de deux matrices triangulaires inferieurs*/
void multiplier_Deux_Matrices_TriangInf(float**matrice1, float**matrice2,float**resultat,int taille_matrice)
{int i,j,count=0;

for(int i=0;i<taille_matrice;i++)
    {
for(int j=0;j<=i;j++)
        {
for(int k=j;k<=i;k++)
            {
resultat[i][j]=resultat[i][j]+matrice1[i][k]*matrice2[k][j];
count=count+2;
            }
        }
    }
printf("le nombre d'operation totale pour la multiplication d'une matrice triangulaire inferieur par une matrice triangulaire inferieur est %d\n",count);
}
void multiplier_DeuxMatrices_Triang_Sup(float **matrice1, float**matrice2,float **resultat,int taille_matrice)
{int count=0;

for(int i=0;i<taille_matrice;i++)
    {
for(int j=i;j<taille_matrice;j++)
        {
for(int k=i;k<=j;k++)
            {
resultat[i][j]=resultat[i][j]+matrice1[i][k]*matrice2[k][j];
count=count+2;
            }
        }
    }
printf("le nombre d'operation totale pour de multiplication d'une matrice triangulaire superieur par une matrice triangulaire superieur est %d\n",count);
}
/*multiplication d'une matricedense par une matrice triangulaire superieur*/
void multiplier_Matrices_dense_Triang_Sup(float**matrice1, float**matrice2,float**resultat,int taille_matrice)
{int count=0;

for(int i=0;i<taille_matrice;i++)
    {
for(int j=0;j<taille_matrice;j++)
        {
for(int k=0;k<=j;k++)
            {
resultat[i][j]=resultat[i][j]+matrice1[i][k]*matrice2[k][j];
count=count+2;
            }
        }
    }
printf("le nombre d'operation totale pour de multiplication d'une matrice dense par une matrice triangulaire superieur est %d\n",count);
}
/*multiplication d'une matrice dense par une matrice triangulaire inferieur*/
void multiplier_Matrices_dense_Triang_Inf(float**matrice1, float**matrice2,float**resultat,int taille_matrice)
{int count=0;

for(int i=0;i<taille_matrice;i++)
    {
for(int j=0;j<taille_matrice;j++)
        {
for(int k=j;k<taille_matrice;k++)
            {
resultat[i][j]=resultat[i][j]+matrice1[i][k]*matrice2[k][j];
count=count+2;
            }
        }
    }
printf("le nombre d'operation totale pour la multiplication d'une matrice dense par une matrice triangulaire superieur est %d\n",count);
}
/*multiplication d'une matrice triangulaire inferieur par une matrice triangulaire superieur*/
    void produit_mInf_mSup(float **matrice1 ,float **matrice2,float ** resultat,int taille_matrice){

    int i;
    int j;
    int k;
    int count= 0;


    for(i=0;i<taille_matrice;i++){
            /*if i>=J*/
        for(j=0;j<=i;j++){
            for(k=0;k<=j;k++){
                resultat[i][j]+=matrice1[i][k]*matrice2[k][j];
                count += 2;
            }
        }
         /*if i<j*/
        for(j=i;j<taille_matrice;j++){
            resultat[i][j]=0 ;
            for(k=0;k<=i;k++){
                resultat[i][j]+=matrice1[i][k]*matrice2[k][j];
                count+=2;
            }
        }
    }
    printf("le nombre d'operation total pour la multiplication d'une matrice triangulire inferieur par une matrice triangulaire suprieur est= %d \n",count);

    }
    /*multiplication d'une matrice triangulaire inferieur par une matrice triangulaire superieur*/
    void produit_mSup_mInf(float **matrice1 ,float **matrice2,float ** resultat,int taille_matrice){

    int i;
    int j;
    int k;
    int count= 0;
    for(i=0;i<taille_matrice;i++){
            /*i>=j*/
        for(j=0;j<=i;j++){
            for(k=i;k<taille_matrice;k++){
                resultat[i][j]+=matrice1[i][k]*matrice2[k][j];
                count += 2;
            }
        }
             /*i<j*/
          for(j=i+1;j<taille_matrice;j++){
            for(k=j;k<taille_matrice;k++){
                resultat[i][j]+=matrice1[i][k]*matrice2[k][j];
                count += 2;
            }
        }}
    printf("Le nombre d'operation totale pour la multiplication d'une matrice tringulaire superieur par une matrice triangulaire inferieur= %d \n",count);
}
void resolution_systeme_triangulaire_inferieur(float **Matrice,float*x,float *b,int taille_matrice)
{
    int i,j,count=0;
     /*resolution du systeme Matrice*X=b avec Matrice une matrice trinagulaire inferieur*/
    for(i=0;i<taille_matrice;i++){
        x[i]=b[i];
        for(j=0;j<i;j++){
            x[i]-=Matrice[i][j]*x[j];
            count+=2;
        }
        x[i]=x[i]/Matrice[i][i];
        count+=1;
    }
    printf("Le nombre d'operation totale pour la resolution du systeme triangulaire inferieur=%d\n",count);

}
void resolution_systeme_triangulaire_superieur(float **Matrice,float*x,float *b,int taille_matrice)
{
   int i,j,count=0;
   /*resolution du systeme Matrice*X=b avec Matrice une matrice trinagulaire superieur*/
for(i=taille_matrice-1;i>=0;i--)
{
x[i]=b[i];
for(j=i+1;j<taille_matrice;j++)
{
x[i]-=Matrice[i][j]*x[j];
count+=2;
}
x[i]=x[i]/Matrice[i][i];
count+=1;
}
printf("Le nombre d'operation totale pour la resolution du systeme triangulaire superieur=%d\n",count);

}
void resolution_systeme_triangulaire_demi_bande_superieur(float **Matrice,int m,float*x,float *b,int taille_matrice)
{
   int i,j,count=0;
   /*resolution du systeme Matrice*X=b avec Matrice une matrice trinagulaire demi bande  superieur*/
for(i=taille_matrice-1;i>=0;i--)
{
x[i]=b[i];
for(j=i+1;j<minimum(i+m,taille_matrice);j++)
{
x[i]-=Matrice[i][j]*x[j];
count+=2;
}
x[i]=x[i]/Matrice[i][i];
count+=1;
}
printf("Le nombre d'operation totale pour la resolution du systeme triangulaire demi bande superieur=%d\n",count);

}
void resolution_systeme_triangulaire_demi_bande_inferieur(float **Matrice,int m,float*x,float *b,int taille_matrice)
{
   int i,j,count=0;
   /*resolution du systeme Matrice*X=b avec Matrice une matrice trinagulaire demi bande inferieur*/
for(i=0;i<taille_matrice;i++)
{
x[i]=b[i];
for(j=max(0,i-taille_matrice);j<=i-1;j++)
{
x[i]-=Matrice[i][j]*x[j];
count+=2;
}
x[i]=x[i]/Matrice[i][i];
count+=1;
}
printf("Le nombre d'operation totale pour la resolution du systeme bande\n triangulaire inferieur=%d\n",count);

}
void resolution_systeme_triangulaire_supe_dia_unit(float **Matrice,float*x,float *b,int taille_matrice)
{
    int i,j,count=0;
     /*resolution du systeme Matrice*X=b avec Matrice une matrice trinagulaire superieur a diagonale unitaire*/
  for(i=taille_matrice-1;i>=0;i--){
        x[i]=b[i];
        for(j=i+1;j<=taille_matrice;j++){
            x[i]-=Matrice[i][j]*x[j];
            count+=2;
        }

    }
    printf("Le nombre d'operation totale pour la resolution du systeme triangulaire inferieur=%d\n",count);

}
void resolution_systeme_triangulaire_inf_dia_unit(float **Matrice,float*x,float *b,int taille_matrice)
{
    int i,j,cost=0;
    for(i=0;i<taille_matrice;i++){
        x[i]=b[i];
        for(j=0;j<i;j++){
            x[i]-=Matrice[i][j]*x[j];
            cost+=2;
        }
    }
       printf("Le nombre d'operation totale pour la resolution du systeme triangulaire inferieur a diagonale unitaire est =%d\n",cost);

}
/*Méthode de decomposition LU*/
void LU(float **Matrice, float **L, float **U, float *x, float *y, float *b,int taille_matrice)
{
int i,j,k,count=0;
//calcul des composantes des matrices L  et U//
for(i=0;i<taille_matrice;i++)
{
L[i][i]=1;
for(j=0;j<=i-1;j++)
{
L[i][j]=Matrice[i][j];
for(k=0;k<=j-1;k++)
{
L[i][j]-=L[i][k]*U[k][j];
count+=2;
}
L[i][j]/=U[j][j];
count+=1;
}
for(j=i;j<taille_matrice;j++)
{
U[i][j]=Matrice[i][j];
for(k=0;k<=i-1;k++)
{
U[i][j]-=L[i][k]*U[k][j];
count+=2;
}
}
}
printf("Le nombre d'operation totale pour la decomposition LU est=%d\n",count);
resolution_systeme_triangulaire_inf_dia_unit(L,y,b,taille_matrice);/*resolution de systeme Ly=b avec L matrice triangulaire inferieur a diagonale unitaire  */
resolution_systeme_triangulaire_superieur(U,x,y,taille_matrice);/*resolution de systeme Ux=y avec U matrice triangulaire superieur*/
}
/*Méthode de cholesky*/
void Cholesky(float **Matrice, float **L, float *x, float *y, float *b,int taille_matrice)
{
int i,j,k,count=0;
float **T;
T=(float**)malloc(taille_matrice*sizeof(int*));
for(i=0;i<taille_matrice;i++){
T[i]=(float**)calloc(taille_matrice,sizeof(int));}
//calcul des composantes de la matrice L//
for(j=0;j<taille_matrice;j++)
{
L[j][j]=Matrice[j][j];
for(k=0;k<=j-1;k++)
{
L[j][j]-=L[j][k]*L[j][k];
count+=2;
}
L[j][j]=sqrt(L[j][j]);
for(i=j+1;i<taille_matrice;i++)
{

L[i][j]=Matrice[i][j];
for(k=0;k<=j-1;k++)
{
L[i][j]-=L[i][k]*L[j][k];
count+=2;
}
L[i][j]/=L[j][j];
count+=1;
}}

printf("Le nombre d'operation totale pour la decomposition de L est=%d\n",count);
resolution_systeme_triangulaire_inferieur(L,y,b,taille_matrice);/*resolution de systeme Ly=b avec L matrice triangulaire inferieur */
transformerEnTranspose(L,T,taille_matrice);/*calcule de la transpose de L car Tx=y*/
resolution_systeme_triangulaire_superieur(T,x,y,taille_matrice);/*resolution de systeme Tx=y avec T la matrice transposee de l*/
}

/*Méthode d’élimination de Gauss*/
void Gauss(float **Matrice, float *b, float *x, int taille_matrice)
{
int i,j,k,count=0;
/*triangularisation de la matrice*/
for(k=0;k<taille_matrice-1;k++)
{
for(i=k+1;i<taille_matrice;i++)
{
Matrice[i][k]/=Matrice[k][k];
count+=1;
for(j=k+1;j<taille_matrice;j++)
{
Matrice[i][j]-=Matrice[i][k]*Matrice[k][j];
count+=2;
}
b[i]-=Matrice[i][k]*b[k];
count+=2;
}
}
printf("Le nombre d'operation totale pour la triangularisation du matrice est =%d\n",count);
printf("\n");
/*resolution de la matrice triangulaire superieur */
resolution_systeme_triangulaire_superieur(Matrice,x,b,taille_matrice);
}
/*resolution avec la methode de gauss_jordan*/
void Gauss_Jordan(float **Matrice, float *b, float *x, int taille_matrice)
{
int i,j,k,count=0;

for(i=0;i<taille_matrice;i++)
x[i]=b[i];
for(k=0;k<taille_matrice;k++)
{
for(j=k+1;j<taille_matrice;j++)
{
Matrice[k][j]/=Matrice[k][k];
count+=1;
}
x[k]/=Matrice[k][k];
count+=1;
for(i=0;i<=k-1;i++)
{
for(j=k+1;j<taille_matrice;j++)
{
Matrice[i][j]-=Matrice[i][k]*Matrice[k][j];
count+=2;
}
x[i]-=Matrice[i][k]*x[k];
count+=2;
}
for(i=k+1;i<taille_matrice;i++)
{
for(j=k+1;j<taille_matrice;j++)
{
Matrice[i][j]-=Matrice[i][k]*Matrice[k][j];
count+=2;
}
x[i]-=Matrice[i][k]*x[k];
count+=2;
}
}
printf("Le nombre d'operation totale pour la methode de gauss_jordan est=%d\n",count);
}

int main()
{
int choix;
int choix1;
int i,l,m;
int taille_matrice;
float **matrice_demi_bande_inferieur;
float **matrice_demi_bande;
float **matrice_demi_bande_superieur;
float **matrice_trian_superieur;
float **matrice_trian_superieur1;
float **matrice_transpsee;
float  **matrice_dense;
float **matrice_dense1;
float **matrice_trian_inferieur;
float **matrice_trian_inferieur1;
float **matrice_resultat;
float **U;
float **L;
float *b;
float *x;
float *y;
printf("************************************************************************************************************************************************************************");
printf("                                                                           Bienvenue                                                \n");
printf("************************************************************************************************************************************************************************\n");
printf("-----------------------------------\n");
printf("1.Multiplication matrice*vecteur\n");
printf("2.Multiplication matrice*matrice\n");
printf("3.Resolution des systemes Lineaires\n");
printf("-----------------------------------\n");

do
{
printf("Donner votre choix\n");
scanf("%d",&choix);
}
while(choix!=1&&choix!=2&&choix!=3);
if(choix==1){
printf("----------------------------------------------------------------\n");
printf("1.1-Multiplication matrice dense *vecteur\n");
printf("1.2-Multiplication matrice_triangulaire_superieur*vecteur\n");
printf("1.3-Multiplication matrice_triangulaire_inferieur*vecteur\n");
printf("1.4-Multiplication matrice_demi_bande*vecteur\n");
printf("1.5-Multiplication matrice_demi_bande_superieur*vecteur\n");
printf("1.6-Multiplication matrice_demi_bande_inferieur*vecteur\n");
printf("-----------------------------------------------------------------\n");
do
{
printf("Donner votre choix\n");
scanf("%d",&choix1);
}
while((choix1!=1)&&choix1!=2&&choix1!=3&&choix1!=4&&choix1!=5&&choix1!=6);
  switch(choix1) {
  case 1:
      printf("-------------------------------------------------------------------------\n");
        matrice_dense=(float**)malloc(taille_matrice*sizeof(int*));
for(i=0;i<taille_matrice;i++){
matrice_dense[i]=(float*)calloc(taille_matrice,sizeof(int));}
  taille_matrice=Dimension_matrice();
   printf("-------------------------------------------------------------------------\n");
  LIRE_MATRICE(matrice_dense, taille_matrice);

    x=(float*)calloc(taille_matrice,sizeof(int));
    b=(float*)calloc(taille_matrice,sizeof(int));
     printf("-------------------------------------------------------------------------\n");
      printf("Matrice dense:\n");
    printf("-------------------------------------------------------------------------\n");
    ECRIRE_MATRICE(matrice_dense,taille_matrice);
     printf("-------------------------------------------------------------------------\n");
    saisir_Vecteur(b,taille_matrice);
    printf("-------------------------------------------------------------------------\n");
    affichage_vecteur(b,taille_matrice);
    printf("\n");
      printf("-------------------------------------------------------------------------\n");
    multiplier_MatriceDense_Par_Un_Vecteur(matrice_dense,b ,taille_matrice,x);
     printf("-------------------------------------------------------------------------\n");
    printf("La resultat de multiplication matrice dense*vecteur est:\n");
      printf("-------------------------------------------------------------------------\n");
      affichage_vecteur(x,taille_matrice);
    break;
     case 2:
   printf("-------------------------------------------------------------------------\n");
   taille_matrice=Dimension_matrice();
matrice_trian_superieur=(float**)malloc(taille_matrice*sizeof(int*));
for(i=0;i<taille_matrice;i++){
matrice_trian_superieur[i]=(float*)calloc(taille_matrice,sizeof(int));}
      printf("-------------------------------------------------------------------------\n");
   Lire_matriceTriang_Sup(matrice_trian_superieur,taille_matrice);
    b=(float*)calloc(taille_matrice,sizeof(int));
    x=(float*)calloc(taille_matrice,sizeof(int));
     printf("-------------------------------------------------------------------------\n");
      printf("Matrice Triangulaire superieur:\n");
            printf("-------------------------------------------------------------------------\n");
    ECRIRE_MATRICE(matrice_trian_superieur,taille_matrice);
          printf("-------------------------------------------------------------------------\n");
    saisir_Vecteur(b,taille_matrice);
    printf("-------------------------------------------------------------------------\n");
    affichage_vecteur(b,taille_matrice);
    printf("\n");
      printf("-------------------------------------------------------------------------\n");
    multiplier_Matrice_Triangulaire_superieur_ParUnVecteur(matrice_trian_superieur,b ,taille_matrice,x);
     printf("-------------------------------------------------------------------------\n");
    printf("La resultat de multiplication matrice triangulaire superieur *vecteur est:\n");
      affichage_vecteur(x,taille_matrice);
    break;
     case 3:
   printf("-------------------------------------------------------------------------\n");
        matrice_trian_inferieur=(float**)malloc(taille_matrice*sizeof(int*));
for(i=0;i<taille_matrice;i++){
matrice_trian_inferieur[i]=(float*)calloc(taille_matrice,sizeof(int));}
  taille_matrice=Dimension_matrice();
   Lire_matriceTriang_Inf(matrice_trian_inferieur,taille_matrice);
    b=(float*)calloc(taille_matrice,sizeof(int));
    x=(float*)calloc(taille_matrice,sizeof(int));
     printf("-------------------------------------------------------------------------\n");
      printf("Matrice Triangulaire inferieur:\n");
         printf("-------------------------------------------------------------------------\n");
    ECRIRE_MATRICE(matrice_trian_inferieur,taille_matrice);
       printf("-------------------------------------------------------------------------\n");
    saisir_Vecteur(b,taille_matrice);
    affichage_vecteur(b,taille_matrice);
    printf("\n");
      printf("-------------------------------------------------------------------------\n");
    multiplier_Matrice_Triangulaire_Inferieur_ParUnVecteur(matrice_trian_inferieur,b ,taille_matrice,x);
     printf("-------------------------------------------------------------------------\n");
    printf("La resultat de multiplication matrice triangulaire inferieur *vecteur est:\n");
      affichage_vecteur(x,taille_matrice);
    break;
    case 4:
         matrice_demi_bande=(float**)malloc(taille_matrice*sizeof(int*));
for(i=0;i<taille_matrice;i++){
matrice_demi_bande[i]=(float*)calloc(taille_matrice,sizeof(int));}
  taille_matrice=Dimension_matrice();
    b=(float*)calloc(taille_matrice,sizeof(int));
    x=(float*)calloc(taille_matrice,sizeof(int));
      printf("-------------------------------------------------------------------------\n");
     printf("donner la largeur de la matrice demi bande :");
  scanf("%d",&m);
    printf("-------------------------------------------------------------------------\n");
      LIRE_MATRICE_demi_bande(matrice_demi_bande,m,taille_matrice);
     printf("-------------------------------------------------------------------------\n");
      printf("Matrice Demi bande :\n");
         printf("-------------------------------------------------------------------------\n");
    ECRIRE_MATRICE(matrice_demi_bande,taille_matrice);
       printf("-------------------------------------------------------------------------\n");
    saisir_Vecteur(b,taille_matrice);
      printf("-------------------------------------------------------------------------\n");
    affichage_vecteur(b,taille_matrice);
    printf("\n");
      printf("-------------------------------------------------------------------------\n");
multiplier_Matrice_demi_bande_ParUnVecteur(matrice_demi_bande,m,b ,taille_matrice,x);
     printf("-------------------------------------------------------------------------\n");
    printf("La resultat de multiplication matrice demi bande*vecteur est:\n");
     printf("-------------------------------------------------------------------------\n");
      affichage_vecteur(x,taille_matrice);

    break;
             case 5:
   matrice_demi_bande_superieur=(float**)malloc(taille_matrice*sizeof(int*));
for(i=0;i<taille_matrice;i++){
matrice_demi_bande_superieur[i]=(float*)calloc(taille_matrice,sizeof(int));}
  taille_matrice=Dimension_matrice();
    b=(float*)calloc(taille_matrice,sizeof(int));
    x=(float*)calloc(taille_matrice,sizeof(int));
      printf("-------------------------------------------------------------------------\n");
     printf("donner la largeur de la matrice demi bande superieur:");
  scanf("%d",&m);
    printf("-------------------------------------------------------------------------\n");
      LIRE_MATRICE_demi_bande_superieur (matrice_demi_bande_superieur,m,taille_matrice);
     printf("-------------------------------------------------------------------------\n");
      printf("Matrice Demi bande superieur:\n");
         printf("-------------------------------------------------------------------------\n");
    ECRIRE_MATRICE(matrice_demi_bande_superieur,taille_matrice);
       printf("-------------------------------------------------------------------------\n");
    saisir_Vecteur(b,taille_matrice);
      printf("-------------------------------------------------------------------------\n");
    affichage_vecteur(b,taille_matrice);
    printf("\n");
      printf("-------------------------------------------------------------------------\n");
multiplier_Matrice_Triangulaire_superieur_ParUnVecteur(matrice_demi_bande_superieur,b ,taille_matrice,x);
     printf("-------------------------------------------------------------------------\n");
    printf("La resultat de multiplication matrice demi bande superieur *vecteur est:\n");
         printf("-------------------------------------------------------------------------\n");
      affichage_vecteur(x,taille_matrice);
    break;
         case 6:
   matrice_demi_bande_inferieur=(float**)malloc(taille_matrice*sizeof(int*));
for(i=0;i<taille_matrice;i++){
matrice_demi_bande_inferieur[i]=(float*)calloc(taille_matrice,sizeof(int));}
  taille_matrice=Dimension_matrice();
    b=(float*)calloc(taille_matrice,sizeof(int));
    x=(float*)calloc(taille_matrice,sizeof(int));
      printf("-------------------------------------------------------------------------\n");
     printf("donner la largeur de la matrice demi bande inferieur:");
  scanf("%d",&m);
    printf("-------------------------------------------------------------------------\n");
      LIRE_MATRICE_demi_bande_inferieur (matrice_demi_bande_inferieur,m,taille_matrice);
     printf("-------------------------------------------------------------------------\n");
      printf("Matrice Demi bande inferieur:\n");
         printf("-------------------------------------------------------------------------\n");
    ECRIRE_MATRICE(matrice_demi_bande_inferieur,taille_matrice);
       printf("-------------------------------------------------------------------------\n");
    saisir_Vecteur(b,taille_matrice);
      printf("-------------------------------------------------------------------------\n");
    affichage_vecteur(b,taille_matrice);
    printf("\n");
      printf("-------------------------------------------------------------------------\n");
multiplier_Matrice_Triangulaire_diag_inferieur_ParUnVecteur(matrice_demi_bande_inferieur,m,b ,taille_matrice,x);
     printf("-------------------------------------------------------------------------\n");
    printf("La resultat de multiplication matrice demi bande inferieur *vecteur est:\n");
         printf("-------------------------------------------------------------------------\n");

      affichage_vecteur(x,taille_matrice);
    break;
     default:
   printf("error");}}
   if(choix==2){
printf("----------------------------------------------------------------\n");
printf("2.1-Multiplication matrice dense * une matrice dense\n");
printf("2.2-Multiplication matrice dense * sa transposee\n");
printf("2.3-Multiplication matrice dense * une matrice triangulaire inferieur\n");
printf("2.4-Multiplication matrice dense * matrice triangulaire superieur \n");
printf("2.5-Multiplication matrice triangulaire superieur *matrice triangulaire superieur\n");
printf("2.6-Multiplication matrice triangulaire inferieur*matrice triangulaire inferieur\n");
printf("2.7-Multiplication matrice triangulaire inferieur*matrice triangulaire superieur\n");
printf("2.8-Multiplication matrice triangulaire superieur*matrice triangulaire inferieur\n");
printf("-----------------------------------------------------------------\n");
do
{
printf("Donner votre choix\n");
scanf("%d",&choix1);
}
while((choix1!=1)&&choix1!=2&&choix1!=3&&choix1!=4&&choix1!=5&&choix1!=6&&choix1!=7&&choix1!=8);
 switch(choix1) {
  case 1:
      printf("-------------------------------------------------------------------------\n");
       taille_matrice=Dimension_matrice();
        matrice_dense=(float**)malloc(taille_matrice*sizeof(int*));
for(i=0;i<taille_matrice;i++){
matrice_dense[i]=(float*)calloc(taille_matrice,sizeof(int));}
   matrice_dense1=(float**)malloc(taille_matrice*sizeof(int*));
for(i=0;i<taille_matrice;i++){
matrice_dense1[i]=(float*)calloc(taille_matrice,sizeof(int));}
    matrice_resultat=(float**)malloc(taille_matrice*sizeof(int*));
for(i=0;i<taille_matrice;i++){
matrice_resultat[i]=(int*)calloc(taille_matrice,sizeof(int));}
  LIRE_MATRICE(matrice_dense, taille_matrice);

   printf("-------------------------------------------------------------------------\n");
      printf("Matrice dense 1:\n");
       printf("-------------------------------------------------------------------------\n");
    ECRIRE_MATRICE(matrice_dense,taille_matrice);
     printf("-------------------------------------------------------------------------\n");
    LIRE_MATRICE(matrice_dense1, taille_matrice);
   printf("-------------------------------------------------------------------------\n");
      printf("Matrice dense 2:\n");
       printf("-------------------------------------------------------------------------\n");
    ECRIRE_MATRICE(matrice_dense1,taille_matrice);
     printf("-------------------------------------------------------------------------\n");
    multiplierDeuxMatricesDenses(matrice_dense,matrice_dense1,matrice_resultat,taille_matrice);
     printf("-------------------------------------------------------------------------\n");
    printf("La resultat de multiplication matrice dense par une matrice dense  est:\n");
     printf("-------------------------------------------------------------------------\n");
ECRIRE_MATRICE(matrice_resultat,taille_matrice);
 printf("-------------------------------------------------------------------------\n");
    break;
      case 2:
      printf("-------------------------------------------------------------------------\n");
       taille_matrice=Dimension_matrice();
        matrice_dense=(float**)malloc(taille_matrice*sizeof(int*));
for(i=0;i<taille_matrice;i++){
matrice_dense[i]=(float*)calloc(taille_matrice,sizeof(int));}
   matrice_transpsee=(int**)malloc(taille_matrice*sizeof(int*));
for(i=0;i<taille_matrice;i++){
 matrice_transpsee[i]=(float*)calloc(taille_matrice,sizeof(int));}
  matrice_resultat=(float**)malloc(taille_matrice*sizeof(int*));
for(i=0;i<taille_matrice;i++){
matrice_resultat[i]=(float*)calloc(taille_matrice,sizeof(int));}
   printf("-------------------------------------------------------------------------\n");
  LIRE_MATRICE(matrice_dense, taille_matrice);
   printf("-------------------------------------------------------------------------\n");
      printf("Matrice dense :\n");
         printf("-------------------------------------------------------------------------\n");

    ECRIRE_MATRICE(matrice_dense,taille_matrice);
   printf("-------------------------------------------------------------------------\n");
      printf("Transpose de la matrice:\n");
         printf("-------------------------------------------------------------------------\n");
      transformerEnTranspose(matrice_dense,matrice_transpsee,taille_matrice);
    ECRIRE_MATRICE(matrice_transpsee,taille_matrice);
       printf("-------------------------------------------------------------------------\n");

     multiplier_Matrice_ParTranspose(matrice_dense,matrice_transpsee,matrice_resultat,taille_matrice);
     printf("-------------------------------------------------------------------------\n");
    printf("La resultat de multiplication matrice dense par sa transposee  est:\n");
       printf("-------------------------------------------------------------------------\n");

    ECRIRE_MATRICE(matrice_resultat,taille_matrice);
       printf("-------------------------------------------------------------------------\n");

    break;
     case 3:
      printf("-------------------------------------------------------------------------\n");
       taille_matrice=Dimension_matrice();
        matrice_dense=(float**)malloc(taille_matrice*sizeof(int*));
for(i=0;i<taille_matrice;i++){
matrice_dense[i]=(float*)calloc(taille_matrice,sizeof(int));}
   matrice_trian_inferieur=(float**)malloc(taille_matrice*sizeof(int*));
for(i=0;i<taille_matrice;i++){
 matrice_trian_inferieur[i]=(float*)calloc(taille_matrice,sizeof(int));}
 matrice_resultat=(float**)malloc(taille_matrice*sizeof(int*));
for(i=0;i<taille_matrice;i++){
 matrice_resultat[i]=(float*)calloc(taille_matrice,sizeof(int));}
    printf("-------------------------------------------------------------------------\n");
 LIRE_MATRICE(matrice_dense, taille_matrice);
   printf("-------------------------------------------------------------------------\n");
      printf("Matrice dense :\n");
         printf("-------------------------------------------------------------------------\n");
    ECRIRE_MATRICE(matrice_dense,taille_matrice);
       printf("-------------------------------------------------------------------------\n");
   Lire_matriceTriang_Inf(matrice_trian_inferieur, taille_matrice);
   printf("-------------------------------------------------------------------------\n");
      printf("Matrice triangulaire inferieur :\n");
    ECRIRE_MATRICE(matrice_trian_inferieur,taille_matrice);
       printf("-------------------------------------------------------------------------\n");

    multiplier_Matrices_dense_Triang_Inf(matrice_dense,matrice_trian_inferieur,matrice_resultat,taille_matrice);
     printf("-------------------------------------------------------------------------\n");
  printf("La resultat de multiplication matrice dense par une matrice triangulaire inferieur est:\n");
     printf("-------------------------------------------------------------------------\n");

   ECRIRE_MATRICE(matrice_resultat,taille_matrice);
      printf("-------------------------------------------------------------------------\n");

     break;
case 4:
      printf("-------------------------------------------------------------------------\n");
       taille_matrice=Dimension_matrice();
        matrice_dense=(float**)malloc(taille_matrice*sizeof(int*));
for(i=0;i<taille_matrice;i++){
matrice_dense[i]=(float*)calloc(taille_matrice,sizeof(int));}

   matrice_trian_superieur=(float**)malloc(taille_matrice*sizeof(int*));
for(i=0;i<taille_matrice;i++){
 matrice_trian_superieur[i]=(float*)calloc(taille_matrice,sizeof(int));}
 matrice_resultat=(float**)malloc(taille_matrice*sizeof(int*));
for(i=0;i<taille_matrice;i++){
 matrice_resultat[i]=(float*)calloc(taille_matrice,sizeof(int));}
    printf("-------------------------------------------------------------------------\n");

 LIRE_MATRICE(matrice_dense, taille_matrice);
   printf("-------------------------------------------------------------------------\n");
      printf("Matrice dense :\n");
         printf("-------------------------------------------------------------------------\n");

    ECRIRE_MATRICE(matrice_dense,taille_matrice);
       printf("-------------------------------------------------------------------------\n");

   Lire_matriceTriang_Sup(matrice_trian_superieur, taille_matrice);
   printf("-------------------------------------------------------------------------\n");
      printf("Matrice triangulaire superieur :\n");
         printf("-------------------------------------------------------------------------\n");

    ECRIRE_MATRICE(matrice_trian_superieur,taille_matrice);
       printf("-------------------------------------------------------------------------\n");

    multiplier_Matrices_dense_Triang_Sup(matrice_dense,matrice_trian_superieur,matrice_resultat,taille_matrice);
     printf("-------------------------------------------------------------------------\n");
  printf("La resultat de multiplication matrice triangulaire superieur par une matrice triangulaire inferieur est:\n");
      printf("-------------------------------------------------------------------------\n");
ECRIRE_MATRICE(matrice_resultat,taille_matrice);
   printf("-------------------------------------------------------------------------\n");

     break;
              case 5   :
      printf("-------------------------------------------------------------------------\n");
       taille_matrice=Dimension_matrice();
        matrice_trian_superieur=(float**)malloc(taille_matrice*sizeof(int*));
for(i=0;i<taille_matrice;i++){
matrice_trian_superieur[i]=(float*)calloc(taille_matrice,sizeof(int));}
   matrice_trian_superieur1=(float**)malloc(taille_matrice*sizeof(int*));
for(i=0;i<taille_matrice;i++){
 matrice_trian_superieur1[i]=(float*)calloc(taille_matrice,sizeof(int));}
 matrice_resultat=(float**)malloc(taille_matrice*sizeof(int*));
for(i=0;i<taille_matrice;i++){
 matrice_resultat[i]=(float*)calloc(taille_matrice,sizeof(int));}
  Lire_matriceTriang_Sup(matrice_trian_superieur, taille_matrice);
   printf("-------------------------------------------------------------------------\n");
      printf("Matrice triangulaire superieur 1:\n");
         printf("-------------------------------------------------------------------------\n");

    ECRIRE_MATRICE(matrice_trian_superieur,taille_matrice);
       printf("-------------------------------------------------------------------------\n");

     Lire_matriceTriang_Sup(matrice_trian_superieur1, taille_matrice);
   printf("-------------------------------------------------------------------------\n");
      printf("Matrice triangulaire superieur 2:\n");
         printf("-------------------------------------------------------------------------\n");

    ECRIRE_MATRICE(matrice_trian_superieur1,taille_matrice);
       printf("-------------------------------------------------------------------------\n");

    multiplier_DeuxMatrices_Triang_Sup(matrice_trian_superieur,matrice_trian_superieur1,matrice_resultat,taille_matrice);
     printf("-------------------------------------------------------------------------\n");
   printf("La resultat de multiplication d'une matrice triangulaire superieur par une matrice triangulaire superieur est:\n");
     printf("-------------------------------------------------------------------------\n");

   ECRIRE_MATRICE(matrice_resultat,taille_matrice);
      printf("-------------------------------------------------------------------------\n");

     break;

        case 6:
      printf("-------------------------------------------------------------------------\n");
       taille_matrice=Dimension_matrice();
        matrice_trian_inferieur=(float**)malloc(taille_matrice*sizeof(int*));
for(i=0;i<taille_matrice;i++){
matrice_trian_inferieur[i]=(float*)calloc(taille_matrice,sizeof(int));}
   matrice_trian_inferieur1=(float**)malloc(taille_matrice*sizeof(int*));
for(i=0;i<taille_matrice;i++){
 matrice_trian_inferieur1[i]=(float*)calloc(taille_matrice,sizeof(int));}
 matrice_resultat=(float**)malloc(taille_matrice*sizeof(int*));
for(i=0;i<taille_matrice;i++){
 matrice_resultat[i]=(float*)calloc(taille_matrice,sizeof(int));}
    printf("-------------------------------------------------------------------------\n");

  Lire_matriceTriang_Inf(matrice_trian_inferieur, taille_matrice);
   printf("-------------------------------------------------------------------------\n");
      printf("Matrice triangulaire inferieur 1:\n");
         printf("-------------------------------------------------------------------------\n");

    ECRIRE_MATRICE(matrice_trian_inferieur,taille_matrice);
       printf("-------------------------------------------------------------------------\n");

     Lire_matriceTriang_Inf(matrice_trian_inferieur1, taille_matrice);
   printf("-------------------------------------------------------------------------\n");
      printf("Matrice triangulaire inferieur 2:\n");
         printf("-------------------------------------------------------------------------\n");

    ECRIRE_MATRICE(matrice_trian_inferieur1,taille_matrice);
       printf("-------------------------------------------------------------------------\n");

     multiplier_Deux_Matrices_TriangInf(matrice_trian_inferieur,matrice_trian_inferieur1,matrice_resultat,taille_matrice);
     printf("-------------------------------------------------------------------------\n");
   printf("La resultat de multiplication matrice triangulaire inferieur par une matrice triangulaire inferieur est:\n");
   printf("-------------------------------------------------------------------------\n");

ECRIRE_MATRICE(matrice_resultat,taille_matrice);
   printf("-------------------------------------------------------------------------\n");

     break;

  case 7:
      printf("-------------------------------------------------------------------------\n");
       taille_matrice=Dimension_matrice();
        matrice_trian_inferieur=(float**)malloc(taille_matrice*sizeof(int*));
for(i=0;i<taille_matrice;i++){
matrice_trian_inferieur[i]=(float*)calloc(taille_matrice,sizeof(int));}
   matrice_trian_superieur=(float**)malloc(taille_matrice*sizeof(int*));
for(i=0;i<taille_matrice;i++){
 matrice_trian_superieur[i]=(float*)calloc(taille_matrice,sizeof(int));}
 matrice_resultat=(float**)malloc(taille_matrice*sizeof(int*));
for(i=0;i<taille_matrice;i++){
 matrice_resultat[i]=(float*)calloc(taille_matrice,sizeof(int));}
  Lire_matriceTriang_Inf(matrice_trian_inferieur, taille_matrice);
   printf("-------------------------------------------------------------------------\n");
      printf("Matrice triangulaire inferieur :\n");
         printf("-------------------------------------------------------------------------\n");

    ECRIRE_MATRICE(matrice_trian_inferieur,taille_matrice);
       printf("-------------------------------------------------------------------------\n");

   Lire_matriceTriang_Sup(matrice_trian_superieur, taille_matrice);
   printf("-------------------------------------------------------------------------\n");
      printf("Matrice triangulaire superieur :\n");
         printf("-------------------------------------------------------------------------\n");

    ECRIRE_MATRICE(matrice_trian_superieur,taille_matrice);
       printf("-------------------------------------------------------------------------\n");

    produit_mInf_mSup(matrice_trian_inferieur,matrice_trian_superieur,matrice_resultat,taille_matrice);
     printf("-------------------------------------------------------------------------\n");
  printf("La resultat de multiplication matrice triangulaire inferieur par une matrice triangulaire superieur est:\n");
     printf("-------------------------------------------------------------------------\n");

   ECRIRE_MATRICE(matrice_resultat,taille_matrice);
      printf("-------------------------------------------------------------------------\n");

     break;
  case 8:
      printf("-------------------------------------------------------------------------\n");
       taille_matrice=Dimension_matrice();
        matrice_trian_inferieur=(float**)malloc(taille_matrice*sizeof(int*));
for(i=0;i<taille_matrice;i++){
matrice_trian_inferieur[i]=(float*)calloc(taille_matrice,sizeof(int));}
   matrice_trian_superieur=(float**)malloc(taille_matrice*sizeof(int*));
for(i=0;i<taille_matrice;i++){
 matrice_trian_superieur[i]=(float*)calloc(taille_matrice,sizeof(int));}
 matrice_resultat=(float**)malloc(taille_matrice*sizeof(int*));
for(i=0;i<taille_matrice;i++){
 matrice_resultat[i]=(float*)calloc(taille_matrice,sizeof(int));}
    printf("-------------------------------------------------------------------------\n");

 Lire_matriceTriang_Sup(matrice_trian_superieur, taille_matrice);
   printf("-------------------------------------------------------------------------\n");
      printf("Matrice triangulaire superieur :\n");
         printf("-------------------------------------------------------------------------\n");

    ECRIRE_MATRICE(matrice_trian_superieur,taille_matrice);
      printf("-------------------------------------------------------------------------\n");
 Lire_matriceTriang_Inf(matrice_trian_inferieur, taille_matrice);
       printf("Matrice triangulaire inferieur :\n");
          printf("-------------------------------------------------------------------------\n");

    ECRIRE_MATRICE(matrice_trian_inferieur,taille_matrice);
       printf("-------------------------------------------------------------------------\n");

   produit_mSup_mInf(matrice_trian_superieur,matrice_trian_inferieur,matrice_resultat,taille_matrice);
     printf("-------------------------------------------------------------------------\n");
  printf("La resultat de multiplication matrice triangulaire superieur par une matrice triangulaire inferieur est:\n");
      printf("-------------------------------------------------------------------------\n");
ECRIRE_MATRICE(matrice_resultat,taille_matrice);
   printf("-------------------------------------------------------------------------\n");

     break;

       default:
   printf("error");}}
     if(choix==3){
printf("----------------------------------------------------------------\n");
printf("3.1-Resolution d'un systeme triangulaire inferieur\n");
printf("3.2-Resolution d'un systeme triangulaire superieur\n");
printf("3.3-Resolution d'un systeme triangulaire superieur a diagonale unitaire\n");
printf("3.4-Resolution d'un systeme triangulaire inferieur a diagonale unitaire\n");
printf("3.5-Resolution d'un systeme triangulaire demi_bande superieur.\n");
printf("3.6-Resolution d'un systeme triangulaire demi_bande inferieur.\n");

printf("3.7-Methode d'elimination de Gauss.\n");
printf("3.8-Methode d'elimination de Gauss Jordan.\n");
printf("3.9-Methode de Decomposition LU.\n");
printf("3.10-Methode de Cholesky.\n");
printf("-----------------------------------------------------------------\n");
do
{
printf("Donner votre choix\n");
scanf("%d",&choix1);
}
while((choix1!=1)&&choix1!=2&&choix1!=3&&choix1!=4&&choix1!=5&&choix1!=6&&choix1!=7&&choix1!=8&&choix1!=9&&choix1!=10&&choix1!=11);
 switch(choix1) {
  case 1:
     printf("-------------------------------------------------------------------------\n");
         taille_matrice=Dimension_matrice();
        matrice_trian_inferieur=(float**)malloc(taille_matrice*sizeof(int*));
for(i=0;i<taille_matrice;i++){
matrice_trian_inferieur[i]=(float*)calloc(taille_matrice,sizeof(int));}
 printf("-------------------------------------------------------------------------\n");
Lire_matriceTriang_Inf(matrice_trian_inferieur, taille_matrice);
 printf("-------------------------------------------------------------------------\n");
  ECRIRE_MATRICE(matrice_trian_inferieur,taille_matrice);
   printf("-------------------------------------------------------------------------\n");
   b=(float*)calloc(taille_matrice,sizeof(int));
    x=(float*)calloc(taille_matrice,sizeof(int));
     saisir_Vecteur(b,taille_matrice);
      printf("-------------------------------------------------------------------------\n");
       affichage_vecteur(b,taille_matrice);
       printf("\n-------------------------------------------------------------------------\n");
    resolution_systeme_triangulaire_inferieur(matrice_trian_inferieur,x,b,taille_matrice);
    printf("-------------------------------------------------------------------------\n");
  printf("Le resultat de  resolution d'un systeme triangulaire inferieur est\n");
     printf("-------------------------------------------------------------------------\n");
    affichage_vecteur(x,taille_matrice);
    break;
      case 2:
 printf("-------------------------------------------------------------------------\n");
         taille_matrice=Dimension_matrice();
        matrice_trian_superieur=(float**)malloc(taille_matrice*sizeof(int*));
for(i=0;i<taille_matrice;i++){
matrice_trian_superieur[i]=(float*)calloc(taille_matrice,sizeof(int));}
Lire_matriceTriang_Sup(matrice_trian_superieur, taille_matrice);
 printf("-------------------------------------------------------------------------\n");
  ECRIRE_MATRICE(matrice_trian_superieur,taille_matrice);
        printf("-------------------------------------------------------------------------\n");

   b=(float*)calloc(taille_matrice,sizeof(int));
    x=(float*)calloc(taille_matrice,sizeof(int));
     saisir_Vecteur(b,taille_matrice);
      printf("-------------------------------------------------------------------------\n");
       affichage_vecteur(b,taille_matrice);
         printf("\n-------------------------------------------------------------------------\n");
    resolution_systeme_triangulaire_superieur(matrice_trian_superieur,x,b,taille_matrice);
    printf("\n");
    printf("-------------------------------------------------------------------------\n");
    printf("Le resultat de  resolution d'un systeme  triangulaire superieur.\n");
     printf("-------------------------------------------------------------------------\n");
    affichage_vecteur(x,taille_matrice);
    break;
     case 3:
       printf("-------------------------------------------------------------------------\n");

         taille_matrice=Dimension_matrice();
         printf("-------------------------------------------------------------------------\n");
        matrice_trian_superieur=(float**)malloc(taille_matrice*sizeof(int*));
for(i=0;i<taille_matrice;i++){
matrice_trian_superieur[i]=(float*)calloc(taille_matrice,sizeof(int));}
Lire_matriceTriang_Sup_Diagonale_unitaire(matrice_trian_superieur, taille_matrice);
 printf("-------------------------------------------------------------------------\n");
  ECRIRE_MATRICE(matrice_trian_superieur,taille_matrice);
  printf("-------------------------------------------------------------------------\n");
   b=(float*)calloc(taille_matrice,sizeof(int));
    x=(float*)calloc(taille_matrice,sizeof(int));
     saisir_Vecteur(b,taille_matrice);
      printf("-------------------------------------------------------------------------\n");
      affichage_vecteur(b,taille_matrice);
       printf("\n-------------------------------------------------------------------------\n");
    resolution_systeme_triangulaire_supe_dia_unit(matrice_trian_superieur,x,b,taille_matrice);
    printf("-------------------------------------------------------------------------\n");
    printf("Le resultat de  resolution d'un systeme triangulaire superieur a diagonale unitaire est\n");
     printf("-------------------------------------------------------------------------\n");
    affichage_vecteur(x,taille_matrice);
    break;
    case 5:
        printf("-------------------------------------------------------------------------\n");

         taille_matrice=Dimension_matrice();
         printf("-------------------------------------------------------------------------\n");

        matrice_demi_bande_superieur=(float**)malloc(taille_matrice*sizeof(int*));
for(i=0;i<taille_matrice;i++){
matrice_demi_bande_superieur[i]=(float*)calloc(taille_matrice,sizeof(int));}
 printf("donner la largeur de la matrice demi bande inferieur:");
  scanf("%d",&m);
      printf("-------------------------------------------------------------------------\n");

LIRE_MATRICE_demi_bande_superieur(matrice_demi_bande_superieur,m, taille_matrice);
 printf("-------------------------------------------------------------------------\n");
  ECRIRE_MATRICE(matrice_demi_bande_superieur,taille_matrice);
  printf("-------------------------------------------------------------------------\n");
   b=(float*)calloc(taille_matrice,sizeof(int));
    x=(float*)calloc(taille_matrice,sizeof(int));
     saisir_Vecteur(b,taille_matrice);
      printf("-------------------------------------------------------------------------\n");
      affichage_vecteur(b,taille_matrice);
       printf("\n-------------------------------------------------------------------------\n");
    resolution_systeme_triangulaire_demi_bande_superieur(matrice_demi_bande_superieur,m,x,b,taille_matrice);
    printf("-------------------------------------------------------------------------\n");
    printf("Le resultat de  resolution d'un systeme triangulaire demi bande superieur est.\n");
     printf("-------------------------------------------------------------------------\n");
    affichage_vecteur(x,taille_matrice);
    break;
    case 4:
   printf("-------------------------------------------------------------------------\n");

         taille_matrice=Dimension_matrice();
         printf("-------------------------------------------------------------------------\n");
        matrice_trian_inferieur=(float**)malloc(taille_matrice*sizeof(int*));
for(i=0;i<taille_matrice;i++){
matrice_trian_inferieur[i]=(float*)calloc(taille_matrice,sizeof(int));}
Lire_matriceTriang_inf_Diagonale_unitaire(matrice_trian_inferieur, taille_matrice);
 printf("-------------------------------------------------------------------------\n");
  ECRIRE_MATRICE(matrice_trian_inferieur,taille_matrice);
  printf("-------------------------------------------------------------------------\n");
   b=(float*)calloc(taille_matrice,sizeof(int));
    x=(float*)calloc(taille_matrice,sizeof(int));
     saisir_Vecteur(b,taille_matrice);
      printf("\n-------------------------------------------------------------------------\n");
       affichage_vecteur(b,taille_matrice);
             printf("\n-------------------------------------------------------------------------\n");

    resolution_systeme_triangulaire_inf_dia_unit(matrice_trian_inferieur,x,b,taille_matrice);
    printf("\n");
    printf("----------------------------------------------------------------------------------------\n");
    printf("Le resultat de  resolution d'un systeme triangulaire inferieur a diagonale unitaire est.\n");
     printf("----------------------------------------------------------------------------------------\n");
    affichage_vecteur(x,taille_matrice);
    break;
      case 6:
        printf("-------------------------------------------------------------------------\n");

         taille_matrice=Dimension_matrice();
         printf("-------------------------------------------------------------------------\n");

        matrice_demi_bande_inferieur=(float**)malloc(taille_matrice*sizeof(int*));
for(i=0;i<taille_matrice;i++){
matrice_demi_bande_inferieur[i]=(float*)calloc(taille_matrice,sizeof(int));}
 printf("donner la largeur de la matrice demi bande inferieur:");
  scanf("%d",&m);
      printf("-------------------------------------------------------------------------\n");

LIRE_MATRICE_demi_bande_inferieur(matrice_demi_bande_inferieur,m, taille_matrice);
 printf("-------------------------------------------------------------------------\n");
  ECRIRE_MATRICE(matrice_demi_bande_inferieur,taille_matrice);
  printf("-------------------------------------------------------------------------\n");
   b=(float*)calloc(taille_matrice,sizeof(int));
    x=(float*)calloc(taille_matrice,sizeof(int));
     saisir_Vecteur(b,taille_matrice);
      printf("-------------------------------------------------------------------------\n");
      affichage_vecteur(b,taille_matrice);
       printf("\n-------------------------------------------------------------------------\n");
   resolution_systeme_triangulaire_demi_bande_inferieur(matrice_demi_bande_inferieur,m,x,b,taille_matrice);
    printf("-------------------------------------------------------------------------\n");
    printf("Le resultat de  resolution d'un systeme triangulaire demi bande inferieur est.\n");
     printf("-------------------------------------------------------------------------\n");
    affichage_vecteur(x,taille_matrice);
    break;
    case 7:
   printf("-------------------------------------------------------------------------\n");

         taille_matrice=Dimension_matrice();
        matrice_dense=(float**)malloc(taille_matrice*sizeof(int*));
for(i=0;i<taille_matrice;i++){
matrice_dense[i]=(float*)calloc(taille_matrice,sizeof(int));}
   b=(float*)calloc(taille_matrice,sizeof(int));
    x=(float*)calloc(taille_matrice,sizeof(int));
    printf("-------------------------------------------------------------------------\n");
LIRE_MATRICE(matrice_dense, taille_matrice);
 printf("-------------------------------------------------------------------------\n");
printf("Matrice dense:\n");
printf("-------------------------------------------------------------------------\n");
ECRIRE_MATRICE(matrice_dense,taille_matrice);
printf("-------------------------------------------------------------------------\n");
saisir_Vecteur(b,taille_matrice);
      printf("-------------------------------------------------------------------------\n");
       affichage_vecteur(b,taille_matrice);
       printf("\n");
        printf("-------------------------------------------------------------------------\n");
     Gauss(matrice_dense,b,x,taille_matrice);
      printf("\n");
    printf("-------------------------------------------------------------------------\n");
    printf("apres la resolution d'un systeme avec la methode de gauss resultat est:\n");
     printf("-------------------------------------------------------------------------\n");
    affichage_vecteur(x,taille_matrice);
    break;
     case 8:
   printf("-------------------------------------------------------------------------\n");
         taille_matrice=Dimension_matrice();
        matrice_dense=(float**)malloc(taille_matrice*sizeof(int*));
for(i=0;i<taille_matrice;i++){
matrice_dense[i]=(float*)calloc(taille_matrice,sizeof(int));}
   b=(float*)calloc(taille_matrice,sizeof(int));
    x=(float*)calloc(taille_matrice,sizeof(int));
LIRE_MATRICE(matrice_dense, taille_matrice);
 printf("-------------------------------------------------------------------------\n");
printf("Matrice dense:\n");
        printf("-------------------------------------------------------------------------\n");

   ECRIRE_MATRICE(matrice_dense,taille_matrice);
printf("-------------------------------------------------------------------------\n");
     saisir_Vecteur(b,taille_matrice);
      printf("-------------------------------------------------------------------------\n");
       affichage_vecteur(b,taille_matrice);
       printf("\n");
       printf("-------------------------------------------------------------------------\n");
   Gauss_Jordan(matrice_dense,b,x,taille_matrice);
      printf("\n");
    printf("-------------------------------------------------------------------------\n");
    printf("apres la resolution d'un systeme avec la methode de gauss Jordan resultat est:\n");
     printf("-------------------------------------------------------------------------\n");
    affichage_vecteur(x,taille_matrice);
    break;
      case 9:
printf("-------------------------------------------------------------------------\n");
taille_matrice=Dimension_matrice();
printf("-------------------------------------------------------------------------\n");
matrice_dense=(float**)malloc(taille_matrice*sizeof(int*));
for(i=0;i<taille_matrice;i++){
matrice_dense[i]=(float*)calloc(taille_matrice,sizeof(int));}
   b=(float*)calloc(taille_matrice,sizeof(int));
    x=(float*)calloc(taille_matrice,sizeof(int));
    y=(float*)calloc(taille_matrice,sizeof(int));
       L=(float**)malloc(taille_matrice*sizeof(int*));
for(i=0;i<taille_matrice;i++){
L[i]=(float**)calloc(taille_matrice,sizeof(int));}
   U=(float**)malloc(taille_matrice*sizeof(int*));
for(i=0;i<taille_matrice;i++){
U[i]=(float*)calloc(taille_matrice,sizeof(int));}

LIRE_MATRICE(matrice_dense, taille_matrice);
 printf("-------------------------------------------------------------------------\n");
printf("Matrice dense:\n");
        printf("-------------------------------------------------------------------------\n");

   ECRIRE_MATRICE(matrice_dense,taille_matrice);
printf("-------------------------------------------------------------------------\n");
     saisir_Vecteur(b,taille_matrice);
      printf("-------------------------------------------------------------------------\n");
       affichage_vecteur(b,taille_matrice);
        printf("\n-------------------------------------------------------------------------\n");
     LU(matrice_dense,L,U,x,y,b,taille_matrice);
      printf("\n");
    printf("-------------------------------------------------------------------------\n");
    printf("apres la resolution d'un systeme avec la methode de decomposition LU resultat est:\n");
     printf("-------------------------------------------------------------------------\n");
    affichage_vecteur(x,taille_matrice);
    free(L);
    free(U);
    free(b);
    free(x);
    free(y);
    free(matrice_dense);
    break;
          case 10:
printf("-------------------------------------------------------------------------\n");
taille_matrice=Dimension_matrice();
printf("-------------------------------------------------------------------------\n");
matrice_dense=(float**)malloc(taille_matrice*sizeof(int*));
for(i=0;i<taille_matrice;i++){
matrice_dense[i]=(float*)calloc(taille_matrice,sizeof(int));}
   b=(float*)calloc(taille_matrice,sizeof(int));
    x=(float*)calloc(taille_matrice,sizeof(int));
    y=(float*)calloc(taille_matrice,sizeof(int));
       L=(float**)malloc(taille_matrice*sizeof(int*));
for(i=0;i<taille_matrice;i++){
L[i]=(float**)calloc(taille_matrice,sizeof(int));}
LIRE_MATRICE(matrice_dense, taille_matrice);
 printf("-------------------------------------------------------------------------\n");
printf("Matrice dense:\n");
        printf("-------------------------------------------------------------------------\n");

   ECRIRE_MATRICE(matrice_dense,taille_matrice);
printf("-------------------------------------------------------------------------\n");
     saisir_Vecteur(b,taille_matrice);
      printf("-------------------------------------------------------------------------\n");
       affichage_vecteur(b,taille_matrice);
        printf("\n-------------------------------------------------------------------------\n");
     Cholesky(matrice_dense,L,x,y,b,taille_matrice);
      printf("\n");
    printf("-------------------------------------------------------------------------\n");
    printf("apres la resolution d'un systeme avec la methode de cholesky resultat est:\n");
      ECRIRE_MATRICE(L,taille_matrice);
     printf("-------------------------------------------------------------------------\n");
    printf("x=(");
    for(i=0;i<taille_matrice;i++){
    printf(" %f",x[i]);
    }
    printf(")");
    break;
      default:
   printf("error");}}
    return 0;

}





