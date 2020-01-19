#include <iostream>
#include <string>


const int maxSongNumber = 100;
const int maxAlbumNumber = 100;
static int songCounter = 0;
static int albumCounter = 0;

struct Playlist
{
	std::string playlistName;
	int songNumber;
};

struct Song
{
	std::string songTitle;
	std::string songDuration;
	std::string artistName;
	std::string albumName;
} songs[maxSongNumber];

struct Album
{
	std::string albumName;
	std::string albumDate;
} albums[maxAlbumNumber];

void menu()
{
	std::cout << "-----Playlist Maker-----\n"
		<< "\n\t1. Enter Song\n"
		<< "\n\t2. Display Song\n"
		<< "\n\t3. Create Playlist\n"
		<< "\n\t4. Display Playlist\n"
		<< "\n\t5. Remove song from Playlist\n"
		<< "\n\t6. Exit\n";
}

void enterSong()
{	
	
	system("cls");

	std::cout << "-----CREATING SONG-----";

	std::cin.ignore(32767, '\n');
	
	std::cout << "\n\nEnter song title: ";
	std::getline(std::cin, songs[songCounter].songTitle);

	std::cout << "Enter song duration: ";
	std::getline(std::cin, songs[songCounter].songDuration);

	std::cout << "Enter song artist: ";
	std::getline(std::cin, songs[songCounter].artistName);

	std::cout << "Enter album name: ";
	std::getline(std::cin, albums[albumCounter].albumName);

	std::cout << "Enter album release date: ";
	std::getline(std::cin, albums[albumCounter].albumDate);

	++songCounter;
	++albumCounter;

	std::cout << "\n-----Song created succesfully! Press any key to go back to menu-----";
	system("pause > 0");

}

void displaySong()
{

	system("cls");

	std::cout << "-----DISPLAYING ALL SONGS-----";
	for (int counter = 0; counter < songCounter; ++counter)
	{
		std::cout << "\n\n\tTitle: " << songs[counter].songTitle;

		std::cout << "\n\tDuration: "	<< songs[counter].songDuration;

		std::cout << "\n\tArtist: " << songs[counter].artistName;

		std::cout << "\n\tAlbum: "
					<< "\n\t\t Name: " << albums[counter].albumName
					<< "\n\t\t Released date: " << albums[counter].albumDate;

	}

	std::cout << "\n\n-----Press any key to go back to menu-----";

	system("pause > 0");
}

int main()
{
	int choice;

	while(true)
	{

		//menu prompt
		menu();
		
		std::cout << "\nEnter your choice: ";
		std::cin >> choice;

		//condition
		switch (choice)
		{
		case 1: 
			enterSong();
			break;
		case 2:
			displaySong();
			break;
		case 6:
			std::cout << "\n-----Thank you!-----\n";
			exit(1);
			break;
		default:
			std::cout << "\nInvalid input! Please try again.\n";
			system("pause > 0");
		}

		
		system("cls");
	} 


}