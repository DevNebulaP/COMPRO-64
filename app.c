#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <conio.h>

int mainApp(int checkError);
void loremGenerator();
void uuidGenerator();
void base64Generator();

int mainApp(int checkError)
{
    printf("\n\n\n\n");
    printf("========================================================================================================================\n");
    printf("  _   _ _   ____  ___ ___________ _____ _   _ _____        _____ ________  _______________ _____  ____    ___ \n");
    printf(" | \\ | | | | |  \\/  ||  ___| ___ \\  _  | | | /  ___|      /  __ \\  _  |  \\/  || ___ \\ ___ \\  _  |/ ___|  /   |\n");
    printf(" |  \\| | | | | .  . || |__ | |_/ / | | | | | \\ `--. ______| /  \\/ | | | .  . || |_/ / |_/ / | | / /___  / /| |\n");
    printf(" | . ` | | | | |\\/| ||  __||    /| | | | | | |`--. \\______| |   | | | | |\\/| ||  __/|    /| | | | ___ \\/ /_| |\n");
    printf(" | |\\  | |_| | |  | || |___| |\\ \\\\ \\_/ / |_| /\\__/ /      | \\__/\\ \\_/ / |  | || |   | |\\ \\\\ \\_/ / \\_/ |\\___  |\n");
    printf(" \\_| \\_/\\___/\\_|  |_/\\____/\\_| \\_|\\___/ \\___/\\____/        \\____/\\___/\\_|  |_/\\_|   \\_| \\_|\\___/\\_____/    |_/\n");
    printf("========================================================================================================================\n\n");
    printf("👉      This is universal functional program.\n");
    printf("👉      Light weight for using with only 12kb file.\n");
    printf("👉      Features : Lorem Ipsum generator\n");
    printf("👉               : Password encryption\n");
    printf("👉               : UUID generator\n\n");
    printf("========================================================================================================================\n\n");
    printf("   Please choose a service\n");
    printf("+-----+-----------------------+\n");
    printf("| No. | Service name          |\n");
    printf("| 1   | Lorem Ipsum generator |\n");
    printf("| 2   | UUID generator        |\n");
    printf("| 3   | Base64 encoder        |\n");
    printf("+-----+-----------------------+\n");
    if(checkError == 1){
        printf("Please choose the correct option!\n");
    }

    int option;
    scanf("%d", &option);

    if(option > 3 || option < 1){
        mainApp(1);
    }else{
        system("cls");
        return option;
    }
}

void loremGenerator()
{
    printf("Selected option -> 1\n");
    printf("Lorem Ipsum generator\n\n");
    printf("=====================\n\n");
    //ใส่จำนวน sentence ที่ต้องการ
}

int main()
{
    int selectedOption = mainApp(0);

    if(selectedOption == 1){
        loremGenerator();
    }else if(selectedOption == 2){
        printf("Selected option -> 2");
    }else if(selectedOption == 3){
        printf("Selected option -> 3");
    }

    // system("cls");
    return 0;
}
