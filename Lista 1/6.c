#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num, cn, dz, un;

    scanf("%d", &num);

    cn = (num/100)%10;
    dz = (num/10)%10;
    un = num%10;

    if(num ==  100){
        printf("Cem");
        return 0;
    }
    
    else{
        switch(cn){
           case 1: printf("Cento "); break;
           case 2: printf("Duzentos "); break;
           case 3: printf("Trezentos "); break;
           case 4: printf("Quatrocentos "); break;
           case 5: printf("Quinhentos "); break;
           case 6: printf("Seiscentos "); break;
           case 7: printf("Setecentos "); break;
           case 8: printf("Oitocentos "); break;
           case 9: printf("Novecentos "); break;
        }

        if (cn != 0 && dz != 0)
        {
            printf("e ");
        }
        

        if (dz == 1){
            switch (un){
                case 1: printf("Onze "); break;
                case 2: printf("Doze "); break;
                case 3: printf("Treze "); break;
                case 4: printf("Quatorze "); break;
                case 5: printf("Quinze "); break;
                case 6: printf("Dezesseis "); break;
                case 7: printf("Dezessete "); break;
                case 8: printf("Dezoito "); break;
                case 9: printf("Dezenove "); break;
            }
        }
        
        else{
            switch(dz){
                case 2: printf("Vinte "); break;
                case 3: printf("Trinta "); break;
                case 4: printf("Quarenta "); break;
                case 5: printf("Cinquenta "); break;
                case 6: printf("Sessenta "); break;
                case 7: printf("Setenta "); break;
                case 8: printf("Oitenta "); break;
                case 9: printf("Noventa "); break;
            }

            if ((dz != 0 && un != 0) || (cn != 0 && un != 0))
            {
                printf("e ");
            }
            

            switch(un){
                case 1: printf("Um "); break;
                case 2: printf("Dois "); break;
                case 3: printf("Tres "); break;
                case 4: printf("Quatro "); break;
                case 5: printf("Cinco "); break;
                case 6: printf("Seis "); break;
                case 7: printf("Sete "); break;
                case 8: printf("Oito "); break;
                case 9: printf("Nove "); break;
            }
        }
    }
    return 0;
}