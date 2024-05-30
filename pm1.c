#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

typedef struct tnode {
    char *word;
    int count;
    struct tnode *left;
    struct tnode *right;
} Tree;


Tree *talloc(void) {
    return (Tree*)malloc(sizeof(Tree));
}

Tree *addtree(Tree *p, char *w) {
    int cond;
    if (!p) {
        p = talloc();
        p->word = strdup(w);
        p->count = 1;
        p->left = p->right = NULL;
    }
    else if ((cond = strcmp(w, p->word)) == 0)
        p->count++;
    else if (cond < 0)
        p->left = addtree(p->left, w);
    else
        p->right = addtree(p->right, w);
    return p;
}


void treeprint(Tree *p) {
    static int i = 1;
    if (p) {
        treeprint(p->left);
        printf("%-4d %-12s\t\t", p->count, p->word);
        if (i % 6 == 0){
            printf("\n");
        }
        i++;
        treeprint(p->right);
    }
}

void freetree(Tree *p) {
    if (p) {
        freetree(p->left);
        freetree(p->right);
        free(p->word);
        free(p);
    }
}

int getword(FILE *fp, char *word) {
    char c;
    int len = 0;
    while((c = fgetc(fp)) != EOF){
            if (isalpha(c)) {
                word[len++] = c;
            }
            else {
                if (len > 0) {
                    break;
                }
            }
    }
    word[len] = '\0';
    if(len > 0)
        return 1;
    else
        return 0;
}

int main(){
    FILE *fp = fopen("alice.txt", "r");

    if (fp == NULL){
        printf("Error\n");
        return 1;
    }
    
    Tree *root = NULL;
    char word[100];

    while (getword(fp, word)) {
        root = addtree(root, word);
    }
    treeprint(root);
    freetree(root);
    fclose(fp);
    return 0;
}