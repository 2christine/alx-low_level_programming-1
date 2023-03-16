#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char source_code[] = "#include <stdio.h>\n\nint main() {\n    printf(\"Hello, World!\\n\");\n    return 0;\n}";

    FILE *fp;
    fp = fopen("program.c", "w");
    fprintf(fp, "%s", source_code);
    fclose(fp);

    char command[100];
    sprintf(command, "gcc -o myprogram program.c");

    system(command);

    system("./myprogram");

    return 0;
}
