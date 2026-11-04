#include <stdio.h>
int main() {
    int estudantes;
    estudantes=25;
    float media = 7.5;
    int dia=1, mes=9, ano=2026;
    estudantes=29;
    //arredondamento 01234 56789
    printf("Na sala tem %d estudantes\n",estudantes);
    printf("Numa sala com %d estudantes a media foi %.1f\n",media,estudantes);
    // Data: 01/09/2026
    printf("Data: %02d/%02d/%d \n",dia+7,mes,ano);
    printf("Media: %.0f\n",media);
    return 0;
}