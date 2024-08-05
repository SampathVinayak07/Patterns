#include<stdio.h>
#include<string.h>

int col, row;

void space(){
    for(col = 0; col<2; printf(" "), col++);
}

void a(){
    for(col = 0; col<5; col++){
        if((row==0 && col!=0 && col!=4) || ((row==1 || row==3 || row==4) && (col==0 || col==4)) || row==2)
            printf("*");
        else
            printf(" ");
    }
}

void b(){
    for(col = 0; col<5; col++){
        if(((row == 0 || row == 2 || row == 4) && (col != 4)) || ((row == 1 || row == 3) && (col == 0 || col == 4)))
            printf("*");
        else
            printf(" ");
    }
}

void c(){
    for(col = 0; col<5; col++){
        if(((row == 0 || row == 4) && (col != 0 && col != 4)) || ((row == 1 || row == 2 || row == 3) && (col == 0)))
            printf("*");
        else
            printf(" ");
    }
}

void d(){
    for(col = 0; col<5; col++){
        if(col == 0 || ((row == 0 || row == 4) && (col != 4)) || ((row == 1 || row == 2 || row == 3) && (col == 4)))
            printf("*");
        else
            printf(" ");
    }
}

void e(){
    for(col = 0; col<5; col++){
        if(col == 0 || (row == 0 || row == 4) || (row == 2 && (col != 4)))
            printf("*");
        else
            printf(" ");
    }
}

void f(){
    for(col = 0; col<5; col++){
        if(col == 0 || row == 0 || (row == 2 && (col != 4)))
            printf("*");
        else
            printf(" ");
    }
}

void g(){
    for(col = 0; col<5; col++){
        if(((row == 0 || row == 4) && (col != 0 && col != 4)) || (row == 1 && col == 0) || (row == 2 && (col == 0  || col == 3 || col == 4)) || (row == 3 && (col == 0 || col == 4)))
            printf("*");
        else
            printf(" ");
    }
}

void h(){
    for(col = 0; col<5; col++){
        if(col == 0 || col == 4 || row == 2)
            printf("*");
        else
            printf(" ");
    }
}

void i(){
    for(col = 0; col<5; col++){
        if(row == 0 || row == 4 || col == 2)
            printf("*");
        else
            printf(" ");
    }
}

void j(){
    for(col = 0; col<5; col++){
        if(row == 0 || (col == 4 && row != 4) || (row == 4 && col != 0 && col != 4) || (row == 3 && col == 0))
            printf("*");
        else
            printf(" ");
    }
}

void k(){
    for(col = 0; col<5; col++){
        if(col == 0 || ((row == 0 || row == 4) && col == 4) || ((row == 1 || row == 3) && col == 2) || (row == 2 && col == 1))
            printf("*");
        else
            printf(" ");
    }
}

void l(){
    for(col = 0; col<5; col++){
        if(col == 0 || row == 4)
            printf("*");
        else
            printf(" ");
    }
}

void m(){
    for(col = 0; col<5; col++){
        if(col == 0 || col == 4 || (row == 1 && (col == 1 || col == 3)) || (row == 2 && col == 2))
            printf("*");
        else
            printf(" ");
    }
}

void n(){
    for(col = 0; col<5; col++){
        if(col == 0 || col == 4 || (row == col))
            printf("*");
        else
            printf(" ");
    }
}

void o(){
    for(col = 0; col<5; col++){
        if((row == 0 || row == 4 || col == 0 || col == 4) && !((row == 0 && col == 0) || (row == 4 && col == 4) || (row == 0 && col == 4) || (row == 4 && col == 0)))
            printf("*");
        else
            printf(" ");
    }
}

void p(){
    for(col = 0; col<5; col++){
        if((col == 0) || ((row == 0 || row == 2) && (col != 4)) || (row == 1 && (col == 4)))
            printf("*");
        else
            printf(" ");
    }
}

void q(){
    for(col = 0; col<6; col++){
        if((row == 0 && (col == 1 || col == 2 || col == 3)) || (row == 1 && (col == 0 || col == 4)) || (row == 2 && (col == 0 || col == 2 || col == 4)) || (row == 3 && (col == 0 || col == 3 || col == 4)) || (row == 4 && (col == 1 || col == 2 || col == 3 || col == 5)))
            printf("*");
        else
            printf(" ");
    }
}

void r(){
    for(col = 0; col<5; col++){
        if((col == 0) || ((row == 0 || row == 2) && (col != 4)) || (row == 1 && (col == 4)) || (row == 4 && col == 3) || (row == 3 && col == 2))
            printf("*");
        else
            printf(" ");
    }
}

void s(){
    for(col = 0; col<5; col++){
        if(((row == 0 || row == 2 || row == 4) && (col != 0 && col != 4)) || (row == 1 && col == 0) || (row == 3 && col == 4))
            printf("*");
        else
            printf(" ");
    }
}

void t(){
    for(col = 0; col<5; col++){
        if(row == 0 || col == 2)
            printf("*");
        else
            printf(" ");
    }
}

void u(){
    for(col = 0; col<5; col++){
        if((row == 4 || col == 0 || col == 4) && !((row == 4 && col == 0) || (row == 4 && col == 4)))
            printf("*");
        else
            printf(" ");
    }
}

void v(){
    for(col = 0; col<5; col++){
        if((row == 0 || row == 1 || row == 2) && (col == 0 || col == 4) || (row == 3 && (col == 1 || col == 3)) || (row == 4 && col == 2))
            printf("*");
        else
            printf(" ");
    }
}

void w(){
    for(col = 0; col<5; col++){
        if(col == 0 || col == 4 || (row == 2 && col == 2) || (row == 3 && (col == 1 || col == 3)))
            printf("*");
        else
            printf(" ");
    }
}

void x(){
    for(col = 0; col<5; col++){
        if((row == col) || (row + col == 4))
            printf("*");
        else
            printf(" ");
    }
}

void y(){
    for(col = 0; col<5; col++){
        if((row < 3 && (row == col || row + col == 4)) || (row == 3 && col == 2) || (row == 4 && col == 2))
            printf("*");
        else
            printf(" ");
    }
}

void z(){
    for(col = 0; col<5; col++){
        if((row == 0 || row == 4) || (row + col == 4))
            printf("*");
        else
            printf(" ");
    }
}

void dig0(){
    for(col = 0; col<5; col++){
        if((row == 0 || row == 4 || col == 0 || col == 4 || (row + col == 4)) && !((row == 0 && col == 0) || (row == 4 && col == 4) || (row == 0 && col == 4) || (row == 4 && col == 0)))
            printf("*");
        else
            printf(" ");
    }
}

void dig1(){
    for(col = 0; col<5; col++){
        if(col == 2 || row == 4 || (row == 1 && col == 1) || (row == 2 && col == 0))
            printf("*");
        else
            printf(" ");
    }
}

void dig2(){
    for(col = 0; col<5; col++){
        if((row == 0 && (col != 0 && col != 4)) || (row == 1 && (col == 0 || col == 4)) || (row == 2 && col == 3) || (row == 3 && col == 2) || row == 4)
            printf("*");
        else
            printf(" ");
    }
}

void dig3(){
    for(col = 0; col<5; col++){
        if(((row == 0 || row == 4) && (col != 0 && col != 4)) || ((row == 1 || row == 3) && (col == 0 || col == 4)) || (row == 2 && (col == 2 || col == 3)))
            printf("*");
        else
            printf(" ");
    }
}

void dig4(){
    for(col = 0; col<5; col++){
        if((row < 3 && col == 0) || row == 2 || col == 4)
            printf("*");
        else
            printf(" ");
    }
}

void dig5(){
    for(col = 0; col<5; col++){
        if(row == 0 || ((row == 2 || row == 4) && col != 4) || (row == 1 && col == 0) || (row == 3 && col == 4))
            printf("*");
        else
            printf(" ");
    }
}

void dig6(){
    for(col = 0; col<5; col++){
        if(((row == 0 || row == 2 || row == 4) && (col != 0 && col != 4)) || (row == 1 && col == 0) || (row == 3 && (col == 0 || col == 4)) || (row == 2 && col == 0))
            printf("*");
        else
            printf(" ");
    }
}

void dig7(){
    for(col = 0; col<5; col++){
        if(row == 0 || row + col == 4)
            printf("*");
        else
            printf(" ");
    }
}

void dig8(){
    for(col = 0; col<5; col++){
        if(((row == 0 || row == 2 || row == 4) && (col != 0 && col != 4)) || ((row == 1 || row == 3) && (col == 0 || col == 4)))
            printf("*");
        else
            printf(" ");
    }
}

void dig9(){
    for(col = 0; col<5; col++){
        if(col == 4 || ((row == 0 || row == 2) && col != 0) || (row == 1 && col == 0))
            printf("*");
        else
            printf(" ");
    }
}

int main() {
    char str[100];
    int len, spoint;
    printf("Enter a string (Max 28 Characters in Full Screen): ");
    scanf("%s", str);
    len = strlen(str);
    printf("\n");
    for(row = 0; row<5; row++){
        for(spoint = 0; spoint<len; spoint++){
            switch(str[spoint]){
                case 'a': a(); break;
                case 'b': b(); break;
                case 'c': c(); break;
                case 'd': d(); break;
                case 'e': e(); break;
                case 'f': f(); break;
                case 'g': g(); break;
                case 'h': h(); break;
                case 'i': i(); break;
                case 'j': j(); break;
                case 'k': k(); break;
                case 'l': l(); break;
                case 'm': m(); break;
                case 'n': n(); break;
                case 'o': o(); break;
                case 'p': p(); break;
                case 'q': q(); break;
                case 'r': r(); break;
                case 's': s(); break;
                case 't': t(); break;
                case 'u': u(); break;
                case 'v': v(); break;
                case 'w': w(); break;
                case 'x': x(); break;
                case 'y': y(); break;
                case 'z': z(); break;
                case '0': dig0(); break;
                case '1': dig1(); break;
                case '2': dig2(); break;
                case '3': dig3(); break;
                case '4': dig4(); break;
                case '5': dig5(); break;
                case '6': dig6(); break;
                case '7': dig7(); break;
                case '8': dig8(); break;
                case '9': dig9(); break;
                default: space(); break;
            }
            space();
        }
        printf("\n");
    }
    return 0;
}
