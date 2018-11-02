#include <stdio.h>
#include <string.h>
#include <unistd.h>

char bongocat[] = "bongocat";
char moth[] = "moth";
char memegang[] = "memegang";
char input[40];

void rememe() {
	printf("Browse some more memes! [bongocat | moth | memegang]\n");
	scanf("%s", input);
	if(strcmp(input, bongocat) == 0) {
		printf("Bongo cat is a cat that uses his tiny little hands to bang on bongos. Edits have been made to make it look like bongo cat is playing another instrument and sometimes not a instrument at all.\n");
		rememe();
	} else if(strcmp(input, moth) == 0) {
		printf("The moth meme details a love story of the lamp and the moth, as they strive to meet eachother, but never make it. The moth desires the lamp, and will do anything to keep it.\n");
		rememe();	
	} else if(strcmp(input, memegang) == 0) {
		printf("The memegang meme shows the hatred between gangs of memery. Gangs make memes on how bad the opponent is and brand the meme with the crest that symbolizes them.\n");
		rememe();
	} else {
		printf("That's not an option!\n");
		rememe();
	}
}

int main() {
	printf("Hi! Welcome to the C meme library!\n");
	sleep(1);
	printf("Let's browse some memes. [bongocat | moth | memegang]\n");
	scanf("%s", input);
	if(strcmp(input, bongocat) == 0) {
		printf("Bongo cat is a cat that uses his tiny little hands to bang on bongos. Edits have been made to make it look like bongo cat is playing another instrument and sometimes not a instrument at all.\n");
		rememe();
	} else if(strcmp(input, moth) == 0) {
		printf("The moth meme details a love story of the lamp and the moth, as they strive to meet eachother, but never make it. The moth desires the lamp, and will do anything to keep it.\n");
		rememe();	
	} else if(strcmp(input, memegang) == 0) {
		printf("The memegang meme shows the hatred between gangs of memery. Gangs make memes on how bad the opponent is and brand the meme with the crest that symbolizes them.\n");
		rememe();
	} else {
		printf("That's not an option!\n");
		rememe();
	}
}