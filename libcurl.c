#include <stdio.h>
#include <string.h>

int main() {
    FILE* fp = fopen("web.html", "w");
    
    char url[1024];
    printf("Enter url: ");
    scanf("%s", url);
    char req[1024] = "curl -4 "; 
    strcat(req, url); //create request command
    FILE* out = popen(req, "r"); //make request

    char buf[10000];
    while (fread(buf, 1, sizeof(buf), out) > 0) //print everything in "out" to "fp" (web.html)
        {fwrite(buf, 1, sizeof(buf), fp);}
    pclose(out); 
    fclose(fp);
    return 0;
}
