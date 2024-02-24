#include <stdio.h>
#include <string.h>

// Define structures for each media type
typedef struct {
    char title[100];
    char author[100];
    int year;
} Book;

typedef struct {
    char title[100];
    char artist[100];
    int year;
} MusicAlbum;

typedef struct {
    char title[100];
    char director[100];
    int year;
} Movie;

// Define an enumeration for media types
typedef enum {
    BOOK,
    MUSIC,
    MOVIE
} MediaType;


// Define a union for media item data
typedef union {
    Book book;
    MusicAlbum album;
    Movie movie;
} MediaData;

// Define a structure to hold a media item
typedef struct {
    MediaType type;
    MediaData data;
} MediaItem;

// Function to display media item information
void displayMediaItem(const MediaItem* item) {
    switch (item->type) {
        case BOOK:
            printf("Book: %s by %s, %d\n", item->data.book.title, item->data.book.author, item->data.book.year);
            break;
        case MUSIC:
            printf("Music Album: %s by %s, %d\n", item->data.album.title, item->data.album.artist, item->data.album.year);
            break;
        case MOVIE:
            printf("Movie: %s directed by %s, %d\n", item->data.movie.title, item->data.movie.director, item->data.movie.year);
            break;
    }
}

int main() {
    // Create and initialize a book
    MediaItem bookItem = {BOOK, .data.book = {"The C Programming Language", "Kernighan and Ritchie", 1978}};
    
    // Create and initialize a music album
    MediaItem musicItem = {MUSIC, .data.album = {"Thriller", "Michael Jackson", 1982}};
    
    // Create and initialize a movie
    MediaItem movieItem = {MOVIE, .data.movie = {"Inception", "Christopher Nolan", 2010}};

    // Display information about each media item
    displayMediaItem(&bookItem);
    displayMediaItem(&musicItem);
    displayMediaItem(&movieItem);

    return 0;
}
