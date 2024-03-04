#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
    printf("请选择你的服务: 1：FTP服务 \t 2：web服务 \n");
    char select[128],run2[128];
    run2[0]='\0';
    scanf("%s", select);
    if (argc == 2&&strlen(select)==1) {
        char com = select[0];
        switch (com) {
            case '1':
                strcat(run2, "./client_ftp dim-ensxcn2.uqac.ca ");
                strcat(run2, argv[1]);
                system(run2);
                break;
            case '2':
                strcat(run2, "./server_web ");
                strcat(run2, argv[1]);
                system(run2);
                break;
            default:
                printf("错误\n");
                break;
        }
    } else {
        printf("命令错误\n");
    }
    return 0;
}


