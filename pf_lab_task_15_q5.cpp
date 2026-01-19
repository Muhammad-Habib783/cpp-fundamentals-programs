#include <iostream>
#include <string>
using namespace std;
struct Movie
 {
    string name;
    string director;
    int releaseYear;
    float rating;
};
void inputMovieDetails(Movie movies[],int size)
 {
    for(int i=0;i<size;i++) 
    {
        cout<<"\n enter detail of movie "<<i+1;
        cout<<"\n enter  movie name ";
        cin.ignore();
        getline(cin,movies[i].name);
        cout<<"\n enter movie  director ";
        getline(cin,movies[i].director);
        cout<<"\n enter the release year of movie ";
        cin>>movies[i].releaseYear;
        cout<<"\n enter the rating of movie ";
        cin>>movies[i].rating;
    }
}
void displayMovies(Movie movies[],int size)
 {
    for (int i=0;i<size;i++)
     {
        cout<<"\n movie Name is  "<<movies[i].name;
        cout<<"\n diirector is "<<movies[i].director;
        cout<<"\n release year is "<<movies[i].releaseYear;
        cout<<"\n rating is "<<movies[i].rating;
    }
}
void sortMoviesByRating(Movie movies[],int size)
 {
    for(int i=0;i<size-1;i++) 
    {
        for(int j=i+1;j<size;j++)
         {
            if(movies[i].rating<movies[j].rating)
             {
                Movie temp=movies[i];
                movies[i]=movies[j];
                movies[j]=temp;
            }
        }
    }
}
int main()
 {
     int size=3;
    Movie movies[size];
    inputMovieDetails(movies,size);
    cout<<"\n all movie details ";
    displayMovies(movies,size);
    sortMoviesByRating(movies,size);
    cout<<"\n movies sort by rating is";
    displayMovies(movies, size);
    return 0;
}
