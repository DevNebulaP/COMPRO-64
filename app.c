#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <conio.h>
#include <unistd.h>
#include <windows.h>

#define RED(string) "\x1b[31m" string "\x1b[0m"

int mainApp(int checkError);
void loremGenerator();
void uuidGenerator();
void base64Generator();
void chooseService();

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
        printf("Selected option -> 2");
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
    printf("+-----+-----------------------+\n");
    printf("| No. | Service name          |\n");
    printf("| [1] | Lorem Ipsum generator |\n");
    printf("| [2] | UUID generator        |\n");
    printf("| [3] | Base64 encoder        |\n");
    printf("+-----+-----------------------+\n");
    if (checkError == 1)
    {
        printf("Please choose the correct option!\n");
    }

    printf("-> ");

    int option;
    scanf("%d", &option);

    if (option > 3 || option < 1)
    {
        mainApp(1);
    }
    else
    {
        system("cls");
        return option;
    }
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
        printf("< Enter [a-z0-9] back to menu.\n\n");
        char backtoMenu[50] = {""};
        scanf("%s", backtoMenu);
        if(backtoMenu){
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

int main()
{
    chooseService();

    // system("cls");
    return 0;
}
