#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
// #include <conio.h>
#include <unistd.h>
// #include <windows.h>
#include <math.h>
#include <string.h>

#define RED(string) "\x1b[31m" string "\x1b[0m"

void binary(int checkError);
void octal(int checkError);
void decimal(int checkError);
void hex(int checkError);
void baseNumberConvert();
int mainApp(int checkError);
void loremGenerator();
void uuidGenerator();
void base64Generator();
void chooseService();
// =================================================================================================
//                                     decimal converter functions
// =================================================================================================
void hex_to_decimal(char* hex){
    long long decimal = 0, base = 1;
    int i = 0, value, length;
    /* Get hexadecimal value from user */
    length = strlen(hex);
    for(i = length--; i >= 0; i--)
    {
        if(hex[i] >= '0' && hex[i] <= '9')
        {
            decimal += (hex[i] - 48) * base;
            base *= 16;
        }
        else if(hex[i] >= 'A' && hex[i] <= 'F')
        {
            decimal += (hex[i] - 55) * base;
            base *= 16;
        }
        else if(hex[i] >= 'a' && hex[i] <= 'f')
        {
            decimal += (hex[i] - 87) * base;
            base *= 16;
        }
    }
    printf("decimal : %lld\n", decimal);
}
void hex_to_octal(char* hex){
    long long octal, bin, place;
    int i = 0, rem, val;
    octal = 0ll;
    bin = 0ll;
    place = 0ll;

    /* Hexadecimal to binary conversion */
    for(i=0; hex[i]!='\0'; i++)
    {
        bin = bin * place;

        switch(hex[i])
        {
            case '0':
                bin += 0;
                break;
            case '1':
                bin += 1;
                break;
            case '2':
                bin += 10;
                break;
            case '3':
                bin += 11;
                break;
            case '4':
                bin += 100;
                break;
            case '5':
                bin += 101;
                break;
            case '6':
                bin += 110;
                break;
            case '7':
                bin += 111;
                break;
            case '8':
                bin += 1000;
                break;
            case '9':
                bin += 1001;
                break;
            case 'a':
            case 'A':
                bin += 1010;
                break;
            case 'b':
            case 'B':
                bin += 1011;
                break;
            case 'c':
            case 'C':
                bin += 1100;
                break;
            case 'd':
            case 'D':
                bin += 1101;
                break;
            case 'e':
            case 'E':
                bin += 1110;
                break;
            case 'f':
            case 'F':
                bin += 1111;
                break;
            default:
                printf("Invalid hexadecimal input.");
        }

        place = 10000;
    }
    place = 1;
    /* Binary to octal conversion */
    while(bin > 0)
    {
        rem = bin % 1000;

        switch(rem)
        {
            case 0:
                val = 0;
                break;
            case 1:
                val = 1;
                break;
            case 10:
                val = 2;
                break;
            case 11:
                val = 3;
                break;
            case 100:
                val = 4;
                break;
            case 101:
                val = 5;
                break;
            case 110:
                val = 6;
                break;
            case 111:
                val = 7;
                break;
        }

        octal = (val * place) + octal;
        bin /= 1000;

        place *= 10;
    }
    printf("octal : %lld\n", octal);
}
void hex_to_binary(char* hex){
	long int i = 0;
    printf("binary : ");
	while (hex[i]) {

		switch (hex[i]) {
		case '0':
			printf("0000");
			break;
		case '1':
			printf("0001");
			break;
		case '2':
			printf("0010");
			break;
		case '3':
			printf("0011");
			break;
		case '4':
			printf("0100");
			break;
		case '5':
			printf("0101");
			break;
		case '6':
			printf("0110");
			break;
		case '7':
			printf("0111");
			break;
		case '8':
			printf("1000");
			break;
		case '9':
			printf("1001");
			break;
		case 'A':
		case 'a':
			printf("1010");
			break;
		case 'B':
		case 'b':
			printf("1011");
			break;
		case 'C':
		case 'c':
			printf("1100");
			break;
		case 'D':
		case 'd':
			printf("1101");
			break;
		case 'E':
		case 'e':
			printf("1110");
			break;
		case 'F':
		case 'f':
			printf("1111");
			break;
		}
		i++;
	}
    printf("\n");
}
// =================================================================================================
//                                     decimal converter functions
// =================================================================================================
void decimal_to_hex(int decimal) {
	long int remainder,quotient;
	int i=1,j,temp;
	char hex[100];
	quotient = decimal;
	while(quotient!=0) {
		temp = quotient % 16;
		//To convert integer into character
		if( temp < 10)
		           temp =temp + 48; else
		         temp = temp + 55;
		hex[i++]= temp;
		quotient = quotient / 16;
	}
	printf("hex : ");
	for (j = i -1 ;j> 0;j--)
	      printf("%c",hex[j]);
    printf("\n");
}
void decimal_to_octal(int decimal)
{
    long remainder, quotient;
    int octalNumber[100], i = 1, j;
    quotient = decimal;
    while (quotient != 0)
    {
        octalNumber[i++] = quotient % 8;
        quotient = quotient / 8;
    }
    printf("octal : ");
    for (j = i - 1; j > 0; j--)
        printf("%d", octalNumber[j]);
}
void decimal_to_binary(int decimal){
    int a[10],i;
    for(i=0;decimal>0;i++){    
        a[i]=decimal%2;    
        decimal=decimal/2;    
    }
    printf("binary :");    
    for(i=i-1;i>=0;i--){    
        printf("%d",a[i]);
    }
    printf("\n");
}
// =================================================================================================
//                                     octal converter functions
// =================================================================================================
void octal_to_hex(int octal){
    int rem,i=0;
    char Hex[100];
    int decimal = 0, sem = 0;
    //Octal to decimal covert
    while(octal!=0){
        decimal=decimal+(octal%10)*pow(8,sem);
        sem++;
        octal=octal/ 10;
    }
    //Decimal to Hexadecimal
    while(decimal!=0){
        rem=decimal%16;
        //Convert Integer to char
        if(rem<10)
            Hex[i++]=rem+48;// 48 Ascii=0
        else
            Hex[i++]=rem+55;//55 Ascii=7
        decimal/=16;
    }
    printf ("hex :");
    for(int j=i-1;j>=0;j--)
        printf("%c",Hex[j]);
}
void octal_to_decimal(int octal){
    int decimal = 0, i = 0;
    long long binary = 0;
    while(octal != 0){
        decimal += (octal%10) * pow(8,i);
        ++i;
        octal/=10;
    }
    printf("decimal : %d",decimal);
}
void octal_to_binary(int octal){
    int decimal = 0, i = 0;
    long long binary = 0;
    //octal to decimal
    while(octal != 0){
        decimal += (octal%10) * pow(8,i);
        ++i;
        octal/=10;
    }
    i = 1;
    //octal to binary
    while (decimal != 0){
        binary += (decimal % 2) * i;
        decimal /= 2;
        i *= 10;
    }
    printf("binary : %lld",binary);
}
// =================================================================================================
//                                     binary converter functions
// =================================================================================================
void binary_to_hex(long int binary){
    long int hex = 0, i = 1, remainder;
    while (binary != 0)
    {
        remainder = binary % 10;
        hex = hex + remainder * i;
        i = i * 2;
        binary = binary / 10;
    }
    printf("hex : %ld",hex);
}
void binary_to_decimal(long int binary){
    int decimal = 0;
    int i = 0;
    while(binary != 0){
        decimal += (binary%10) * pow(2,i);
        ++i;
        binary/=10;
    }
    printf("decimal : %d", decimal);
}
void binary_to_octal(long int binary){
    int octal = 0;
    int decimal = 0;
    int i = 0;
    //binary to decimal
    while(binary != 0){
        decimal += (binary%10) * pow(2,i);
        ++i;
        binary/=10;
    }
    i = 1;
    //binary to decimal
    while (decimal != 0){
        octal += (decimal % 8) * i;
        decimal /= 8;
        i *= 10;
    }
    printf("octa : %d",octal);
}
//=================================================================================================
void binary(int checkError){
    int choice;
    long int binary_convert;
    printf("========================================================================================================================\n\n");
    printf("Selected option : 1 (Binary Convert)\n");
    printf("< Enter [0] back to menu.\n\n");
    printf("========================================================================================================================\n\n");
    printf("please select a convert to topic below.\n");
    printf("\n");
    printf("1.Octal\n");
    printf("2.Decimal\n");
    printf("3.Hexadecimal\n");
    printf("\n");
    if (checkError == 1){
        printf("Please choose the correct option!\n");
    }
    printf("--> ");
    scanf("%d",&choice);
    if (choice >= 1 && choice <= 3){
        switch(choice){
            case 1:
            printf("Type your number : ");
            scanf("%ld",&binary_convert);
            binary_to_octal(binary_convert);
            break;
            case 2:
            printf("Type your number : ");
            scanf("%ld",&binary_convert);
            binary_to_decimal(binary_convert);
            break;
            case 3:
            printf("Type your number : ");
            scanf("%ld",&binary_convert);
            binary_to_hex(binary_convert);
            break;
        }
    }
    else if (choice == 0){
        system("clear");
        baseNumberConvert();
    }
    else{
        system("clear");
        binary(1);
    }
}
void octal(int checkError){
    int choice;
    int octal_convert;
    printf("========================================================================================================================\n\n");
    printf("Selected option : 2 (Octal Convert)\n");
    printf("< Enter [0] back to menu.\n\n");
    printf("========================================================================================================================\n\n");
    printf("please select a convert to topic below.\n");
    printf("\n");
    printf("1.Binary\n");
    printf("2.Decimal\n");
    printf("3.Hexadecimal\n");
    printf("\n");
    if (checkError == 1){
        printf("Please choose the correct option!\n");
    }
    printf("--> ");
    scanf("%d",&choice);
    if (choice >= 1 && choice <= 3){
        switch(choice){
            case 1:
            printf("Type your number : ");
            scanf("%d",&octal_convert);
            octal_to_binary(octal_convert);
            break;
            case 2:
            printf("Type your number : ");
            scanf("%d",&octal_convert);
            octal_to_decimal(octal_convert);
            break;
            case 3:
            printf("Type your number : ");
            scanf("%d",&octal_convert);
            octal_to_hex(octal_convert);
            break;
        }
    }
    else if(choice == 0){
        system("clear");
        baseNumberConvert();
    }
    else{
        system("clear");
        octal(1);
    }
}
void decimal(int checkError){
    int choice;
    int decimal_convert;
    printf("========================================================================================================================\n\n");
    printf("Selected option : 3 (Decimal Convert)\n");
    printf("< Enter [0] back to menu.\n\n");
    printf("========================================================================================================================\n\n");
    printf("please select a convert to topic below.\n");
    printf("\n");
    printf("1.Binary\n");
    printf("2.Octal\n");
    printf("3.Hexadecimal\n");
    printf("\n");
    if (checkError == 1){
        printf("Please choose the correct option!\n");
    }
    printf("--> ");
    scanf("%d",&choice);
    if (choice >= 1 && choice <= 3){
        switch(choice){
            case 1:
            printf("Type your number : ");
            scanf("%d",&decimal_convert);
            decimal_to_binary(decimal_convert);
            break;
            case 2:
            printf("Type your number : ");
            scanf("%d",&decimal_convert);
            decimal_to_octal(decimal_convert);
            break;
            case 3:
            printf("Type your number : ");
            scanf("%d",&decimal_convert);
            decimal_to_hex(decimal_convert);
            break;
        }
    }
    else if (choice == 0){
        system("clear");
        baseNumberConvert();
    }
    else{
        system("clear");
        decimal(1);
    }
}
void hex(int checkError){
    int choice;
    char hex_convert[100];
    printf("========================================================================================================================\n\n");
    printf("Selected option : 4 (Hexadecimal Convert)\n");
    printf("< Enter [0] back to menu.\n\n");
    printf("========================================================================================================================\n\n");
    printf("please select a convert to topic below.\n");
    printf("\n");
    printf("1.Binary\n");
    printf("2.Octacl\n");
    printf("3.Decimal\n");
    printf("\n");
    if (checkError == 1){
        printf("Please choose the correct option!\n");
    }
    printf("--> ");
    scanf("%d",&choice);
    if (choice >= 1 && choice <= 3){
        switch(choice){
            case 1:
            printf("Type your number : ");
            scanf("%s",hex_convert);
            hex_to_binary(hex_convert);
            break;
            case 2:
            printf("Type your number : ");
            scanf("%s",hex_convert);
            hex_to_octal(hex_convert);
            break;
            case 3:
            printf("Type your number : ");
            scanf("%s",hex_convert);
            hex_to_decimal(hex_convert);
            break;
        }
    }
    else if (choice == 0){
        system("clear");
        baseNumberConvert();
    }
    else{
        system("clear");
        hex(1);
    }
}

// Choose services interface
void chooseService()
{
    int selectedOption = mainApp(0);

    if (selectedOption == 1)
    {
        loremGenerator();
    }
    else if (selectedOption == 2)
    {
        baseNumberConvert();
    }
    else if (selectedOption == 3)
    {
        printf("Selected option -> 3");
    }
}

int mainApp(int checkError)
{
    system("color a");
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
    printf("+-----+-------------------------+\n");
    printf("| No. | Service name           |\n");
    printf("| [1] | Lorem Ipsum generator  |\n");
    printf("| [2] | Base Number Converter  |\n");
    printf("| [3] | Base64 encoder         |\n");
    printf("| [0] | Exit Program           |\n");
    printf("+-----+------------------------+\n");
    if (checkError == 1)
    {
        printf("Please choose the correct option!\n");
    }

    printf("-> ");

    int option;
    scanf("%d", &option);

    if (option > 3 || option < 0)
    {
        mainApp(1);
    }
    else if(option == 0){
        exit(0);
    }
    else
    {
        system("clear");
        return option;
    }
    return 0;
}

void loremGenerator()
{
    printf("========================================================================================================================\n\n");
    printf("Selected option : 1 (Lorem Ipsum generator)\n");
    printf("< Enter [0] back to menu.\n\n");
    printf("========================================================================================================================\n\n");
    //ใส่จำนวน sentence ที่ต้องการ
    printf("please inserts sentence amounts for generating\n");
    printf("-> ");
    int amount;
    scanf("%d", &amount);
    if (amount == 0)
    {
        chooseService();
    }
    else
    {
        char dictionary[][20] = {"Lorem", "ipsum", "dolor", "sit", "amet,", "consectetur", "adipiscing", "elit,", "sed", "do", "eiusmod", "tempor", "incididunt", "ut", "labore", "et", "dolore", "magna", "aliqua.", "Suspendisse", "ultrices", "gravida", "dictum", "fusce", "ut", "placerat", "orci.", "Nisl", "purus", "in", "mollis", "nunc", "sed", "id.", "Elit", "sed", "vulputate", "mi", "sit", "amet", "mauris", "commodo", "quis.", "Ultrices", "gravida", "dictum", "fusce", "ut", "placerat.", "Auctor", "eu", "augue", "ut", "lectus.", "Feugiat", "pretium", "nibh", "ipsum", "consequat", "nisl", "vel", "pretium.", "Vestibulum", "lectus", "mauris", "ultrices", "eros", "in", "cursus", "turpis.", "Nec", "sagittis", "aliquam", "malesuada", "bibendum", "arcu", "vitae.", "Auctor", "neque", "vitae", "tempus", "quam", "pellentesque", "nec", "nam.", "Tincidunt", "arcu", "non", "sodales", "neque.", "Nulla", "posuere", "sollicitudin", "aliquam", "ultrices", "sagittis", "orci.", "Eget", "est", "lorem", "ipsum", "dolor", "sit", "amet", "consectetur.", "Dolor", "sit", "amet", "consectetur", "adipiscing", "elit.", "Duis", "ultricies", "lacus", "sed", "turpis.", "Quam", "quisque", "id", "diam", "vel", "quam", "elementum", "pulvinar.", "Fermentum", "et", "sollicitudin", "ac", "orci", "phasellus", "egestas", "tellus", "rutrum", "tellus.", "Nunc", "non", "blandit", "massa", "enim", "nec", "dui", "nunc", "mattis.", "Ac", "auctor", "augue", "mauris", "augue", "neque.", "Enim", "ut", "tellus", "elementum", "sagittis", "vitae.", "Fringilla", "est", "ullamcorper", "eget", "nulla", "facilisi", "etiam", "dignissim", "diam", "quis.", "Amet", "justo", "donec", "enim", "diam", "vulputate", "ut.", "Urna", "neque", "viverra", "justo", "nec", "ultrices", "dui", "sapien.", "Egestas", "maecenas", "pharetra", "convallis", "posuere", "morbi.", "Commodo", "nulla", "facilisi", "nullam", "vehicula", "ipsum", "a", "arcu", "cursus.", "Ut", "aliquam", "purus", "sit", "amet", "luctus", "venenatis", "lectus", "magna", "fringilla.", "Blandit", "volutpat", "maecenas", "volutpat", "blandit", "aliquam", "etiam", "erat.", "Netus", "et", "malesuada", "fames", "ac", "turpis", "egestas", "integer", "eget.", "Ut", "etiam", "sit", "amet", "nisl", "purus.", "Id", "diam", "maecenas", "ultricies", "mi", "eget", "mauris", "pharetra.", "Posuere", "urna", "nec", "tincidunt", "praesent.", "Mi", "quis", "hendrerit", "dolor", "magna", "eget", "est", "lorem", "ipsum", "dolor.", "Non", "nisi", "est", "sit", "amet.", "Ornare", "arcu", "dui", "vivamus", "arcu", "felis.", "Sit", "amet", "consectetur", "adipiscing", "elit.", "Imperdiet", "dui", "accumsan", "sit", "amet", "nulla", "facilisi", "morbi.", "Est", "ultricies", "integer", "quis", "auctor", "elit", "sed."};
        int paragraphAmount = amount / 100;              // จำนวน paragraph โดย 1 paragraph มี 25 words
        int fraction = amount - (paragraphAmount * 100); // คำที่เหลือ

        // printf("%d %d", paragraphAmount, fraction);

        for (int i = 0; i < paragraphAmount; i++)
        {
            printf("\t");
            for (int j = 0; j < sizeof(dictionary) / sizeof(dictionary[0]); j++)
            {
                printf("%s ", dictionary[rand() % 280]);
                if (j % 20 == 0 && j != 0) printf("\n");
            }
            printf("\n\n");
        }

        if (fraction > 0)
        {
            printf("\t");
            for (int i = 0; i < fraction; i++)
            {
                printf("%s ", dictionary[rand() % 280]);
                if (i % 20 == 0 && i != 0) printf("\n");
            }
            printf("\n\n");
        }

        printf("\n-- Total : %d paragraph with %d words -- \n", paragraphAmount, fraction);
        printf("========================================================================================================================\n\n");
        printf("< Enter [0] back to menu.\n\n");
        int backtoMenu;
        scanf("%d", &backtoMenu);
        if(backtoMenu == 0){
            chooseService();
        }

        // for (int i = 0; i < sizeof(dictionary)/sizeof(dictionary[0]); i++)
        // {
        //     for (int j = 0; j < sizeof(dictionary[i])/sizeof('x'); j++)
        //     {
        //         printf("%c", dictionary[i][j]);
        //         Sleep(100);
        //     }

        //     if(i%20 == 0 && i != 0)
        //     {
        //         printf("\n");
        //     }
        //     printf(" ");
        // }
    };
}

void baseNumberConvert(int checkError){
    int option;
    printf("========================================================================================================================\n\n");
    printf("Selected option : 1 (Base Number Converter)\n");
    printf("< Enter [0] back to menu.\n\n");
    printf("========================================================================================================================\n\n");
    printf("please select a conversion topic below.\n");
    printf("\n");
    printf("1.Binary Convert\n");
    printf("2.Octal Convert\n");
    printf("3.Decimal Convert\n");
    printf("4.Hex Convert\n");
    printf("\n");
    if(checkError == 1){
        printf("Please choose the correct option!\n");
    }
    printf("--> ");
    scanf("%d",&option);

    if(option >= 1 && option <= 4){
        switch(option){
            case 1:
            system("clear");
            binary(0);
            break;
            case 2:
            system("clear");
            octal(0);
            break;
            case 3:
            system("clear");
            decimal(0);
            break;
            case 4:
            system("clear");
            hex(0);
            break;
        }
    }
    else if (option == 0){
        system("clear");
        chooseService();
    }
    else{
        system("clear");
        baseNumberConvert(1);
    }
}

int main()
{
    chooseService();

    // system("cls");
    return 0;
}
