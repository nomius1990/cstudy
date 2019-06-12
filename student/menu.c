#include<stdio.h>

void menu()
{
    printf("\n\n\n\n");
    printf("\t\t\t|-------------------------student----------------------|\n");
    printf("\t\t\t| 0.exit                                               |\n");
    printf("\t\t\t| 1.input record                                       |\n");
    printf("\t\t\t| 2.search record                                      |\n");
    printf("\t\t\t| 3.delete record                                      |\n");
    printf("\t\t\t| 4.modify record                                      |\n");
    printf("\t\t\t| 5.insert record                                      |\n");
    printf("\t\t\t| 6.order record                                       |\n");
    printf("\t\t\t| 8.number                                             |\n");
    printf("\t\t\t|------------------------------------------------------|\n");
    printf("\t\t\t choose(0-7):");
}

void in()
{

}

void search()
{

}

void del()
{

}

void modify()
{

}

void insert()
{

}

void order()
{

}

void total()
{

}


void main()
{
    menu();
    int n;
    scanf("%d",&n);
    while(n)
    {
        switch (n)
        {
        case 1:
            in();
            break;
        case 2:
            search();
            break;
        case 3:
            del();
            break;
        case 4:
            modify();
            break;
        case 5:
            insert();
            break;
        case 6:
            order();
            break;
        case 7:
            total();
            break;
        default:
            break;
        }

        // getch()
        menu();
        scanf("%d",&n);
    }

    
}