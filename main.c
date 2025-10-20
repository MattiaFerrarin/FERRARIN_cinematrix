#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char *Title;
    char *Director;
    int ReleaseYear; // int because it's easier than char * even if it's inefficient
    float Length;
}Film;

Film *LoadDatabase();
void AddFilm(Film *film);
Film *SearchFilmsInDatabase(char *string, Film *database);
Film *OrderDatabase(Film *database);
// save and others

int main(void) {
    Film *database = (Film *)malloc(sizeof(Film));


    return 0;
}