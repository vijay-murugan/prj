#include "header.h"

int main()
{
    FILE *fptr = fopen("adjacencylist.txt","r");
    char line[1024],*source_chr,line_cpy[1024],*token;
    const char ch[2] = " ";
    fgets(line,1024,fptr);
    int n = atoi(line);
    int s,d,w;
    printf("%d\n",n);
    graph* graph_var = create_Graph(n);
    while(fgets(line,1024,fptr))
    {
        strcpy(line_cpy,line);
        source_chr = strtok(line_cpy," ");
        s = atoi(source_chr);
        printf("%d\n",s);
        printf("%s\n",line);
        token = strtok(line, " ");
        token = strtok(NULL," ");//source
        while( token != NULL ) 
        {
            d = atoi(token);//destination
            printf( "dest %d\n", d );
            token = strtok(NULL," ");
            w = atoi(token);//weight
            printf("wei %d\n",w);
            token = strtok(NULL," ");
            
        }
    
    }
    
    
}