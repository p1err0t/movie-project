#include <stdio.h>
/*
*	Sorry for the poor documentation
*	Thus is just a simple program and not that complicated so find your own way >//< 
*/

// declaring sub menu to return after making a choice;
int menu();
int movie();
int tv_series();
int anime();
int kdrama();
int about();

int main(int argc, char* argv[]) {
	/* TO DO LIST:
	*	a
	*	Add k-drama and anime on the lists
	* 	Add magnet link for torrent download
	*/
	menu();
	return 0;
}
int menu() {
	int choice; // Declare values for input as it is not inside main() and can't have a global value
	
		system("cls");
		// first menu
		printf("___________________________________\n");
		printf("| (1)Movies\t  (2)TV Series     |\n");
		printf("| (3)Anime\t  (4)K-drama	   |\n");
		printf("| (5)Banner\t  (6)About\t   |\n| (7)Exit\t\t\t   |");
		printf("\n|__________________________________|\n");
		printf("Choice: ");
		scanf("%d", &choice);
		if( choice == 1 ) {
			movie();
		}
		else if( choice == 2 ) {
			tv_series();
		}
		else if( choice == 3 ) {
			anime();
		}
		else if( choice == 4 ) {
			kdrama();
		}
		else if( choice == 5 ) {
			// Fuck the big corporations that exploit what little they can do to media content! we do what we fucking want!
			// Also support small content creators if you like there works, remember pirates have standards!
			system("color a");
			system("cls");
			printf("\t\t   |    |    |\n");                 
            printf("\t\t  )_)  )_)  )_)\n");             
           	printf("\t\t )___))___))___)\\ \n");           
           	printf("\t\t)____)____)_____)\\\\ \n");
         	printf("\t      _____|____|____|____\\\\\\__\n");
			printf("     ---------\\                   /---------\n");
  			printf("\t^^^^^ ^^^^^^^^^^^^^^^^^^^^^ ^^^^\n");
    		printf("\t   ^^^^      ^^^^     ^^^    ^^\n");
         	printf("\t\t^^^^      ^^^\n");
         	printf("      Onboard to the ship where we fight cencorship!\n");
         	printf("	  \tFuck the government!\n\n");
         	printf("Press any key to return...");
         	getch();
         	system("color 7");
         	menu();
		}
		else if( choice == 6 ) {
			about();
		}
		else if( choice == 7) {
			return 0;
		}
		else {
			printf("\nInvalid input!");
			sleep(3);
			menu();
		}
}
int movie() {
	int listChoice;
		system("cls");
		printf("-------------------------------------------------------------------"); 
		printf("\n| (1)Spider-Man.Homecoming.2017\t\t\t\t\t  | \n| (2)AssassinsCreed.2016\t\t\t\t\t  |\n| (3)Citizenfour.2014\t\t\t\t\t\t  |\
				\n| (4)Deadpool.2.2018\t\t\t\t\t\t  |\n| (5)Anna.2019\t\t\t\t\t\t\t  |\n| (6)Happy.Death.Day.2U.2019\t\t\t\t\t  |\n| (7)James.Bond.Quantum.of.Solace.2008\t\t\t\t  |\
				\n| (8)John Wick Chapter 3 - Parabellum (2019)\t\t\t  |\n| (9)John.Wick.Chapter.2.2017\t\t\t\t\t  |\n| (10)John.Wick.2014\t\t\t\t\t\t  |\
				\n| (11)Pirates.Of.The.Caribbean.Dead.Men.Tell.No.Tales.2017\t  |\n| (12)Red Sparrow 2018\t\t\t\t\t\t  |\n| (13)Snowden.2016\t\t\t\t\t\t  |\
				\n| (14)Spectre.2015\t\t\t\t\t\t  |\n| (15)The Art of Self-Defense.2019\t\t\t\t  |\n| (16)The.Irishman.2019\t\t\t\t\t\t  |\n| (17)Come.and.See.1985\t\t\t\t\t\t  |\
				\n| (18)Jacobs.Ladder.1990\t\t\t\t\t  |\n| (19)The.Blair.Witch.Project.1999\t\t\t\t  |\n| (20)Predestination.2014\t\t\t\t\t  |\
				\n| (21)Inception.2010\t\t\t\t\t\t  |\n| (22)Tenet.2020\t\t\t\t\t\t  |\n| (23)Interstellar.2014\t\t\t\t\t\t  |\n| (24)The.Matrix.1999\t\t\t\t\t\t  |\
				\n| (25)The.Matrix.Revolutions.2003\t\t\t\t  |\n| (26)The.Matrix.Reloaded.2003\t\t\t\t\t  |\n| (27)V.For.Vendetta.2006\t\t\t\t\t  |\n| (28)The.Godfather.1972\t\t\t\t\t  |\
				\n| (29)Pulp.Fiction.1994\t\t\t\t\t\t  |\n| (30)Pans.Labyrinth.2006\t\t\t\t\t  |\n| (31)Irreversible.2002\t\t\t\t\t\t  |\n| (32)Fantastic.Beasts.and.Where.to.Find.Them.2016\t\t  |\
				\n| (33)Fantastic.Beasts.The.Crimes.Of.Grindelwald.2018\t\t  |\n| (34)21.Jump.Street.2012\t\t\t\t\t  |\n| (35)22.Jump.Street.2014\t\t\t\t\t  |\
				\n| (36)Hardcore.Henry.2015\t\t\t\t\t  |\n| (37)Blade.Runner.1984\t\t\t\t\t\t  |\n| (38)Blade.Runner.2049.2017\t\t\t\t\t  |\n| (39)Nightcrawler.2014\t\t\t\t\t\t  |\
				\n| (40)Donnie.Darko.2001\t\t\t\t\t\t  |\n| (41)Return\t\t\t\t\t\t\t  |");
			printf("\n-------------------------------------------------------------------\n");
			printf("Choice: "); 
			scanf("%d", &listChoice);
			if(listChoice == 1)
			{	
				system("cls");
				printf("Spiderman: Homecoming (2017)\n\n"); 
				printf("\tThrilled by his experience with the Avengers, young Peter Parker returns home to live\
				\n\twith his Aunt May. Under the watchful eye of mentor Tony Stark, Parker starts to embrace his \n\tnewfound identity as Spider-Man. He also tries to return to his normal");
				printf(" daily routine -- distracted \n\tby thoughts of proving himself to be more than just a friendly neighborhood superhero.");
				printf("\n\tPeter must soon put his powers to the test when the evil Vulture emerges to threaten everything \n\tthat he holds dear.\n\n");
				printf("\t\tIMDb ratig: 7.4/10\n\n");
				system("pause");
				movie();
				
			}
			else if (listChoice == 2)
			{
				system("cls");
				printf("Assassin's Creed (2016)\n\n");
				printf("\tCal Lynch travels back in time to 15th-century Spain through a revolutionary technology that \n\tunlocks the genetic");
				printf(" memories contained in his DNA. There, he lives out the experiences of \n\tAguilar de Nerha, a distant relative whos also a member of the Assassins");
				printf(", a secret society that \n\tfights to protect free will from the power-hungry Templar Order. Transformed by the past,");
				printf(" Cal \n\tbegins to gain the knowledge and physical skills necessary to battle the oppressive \n\torganization in the present.\n\n");
				printf("\t\tIMDb rating: 5.7/10\n\n");
				system("pause");
				movie();
			}
			else if(listChoice == 3)
			{
				system("cls");
				printf("Citizenfour (2014)\n\n");
				printf("\tAfter Laura Poitras received encrypted emails from someone with information on the government's \n\tmassive covert-surveillance ");
				printf("programs, she and reporter Glenn Greenwald flew to Hong Kong to meet \n\tthe sender, who turned out to be Edward Snowden.\n\n");
				printf("\t\tIMDb rating: 8.0/10\n\n");
				system("pause");
				movie();
			}
			else if (listChoice == 4)
			{
				system("cls");
				printf("Deadpool 2 (2016)\n\n");
				printf("\tWisecracking mercenary Deadpool meets Russell, an angry teenage mutant who lives at an orphanage. \n\tWhen Russell becomes the"); 
				printf("target of Cable -- a genetically enhanced soldier from the future -- Deadpool \n\trealizes that he'll need some help saving the boy"); 
				printf("from such a superior enemy. He soon joins forces with \n\tBedlam, Shatterstar, Domino and other powerful mutants to protect young Russell");
				printf("from Cable and his \n\tadvanced weaponry.\n\n");
				printf("\t\tIMDb rating: 7.7/10\n\n");
				system("pause");
				movie();
			}
			else if(listChoice == 5)
			{
				system("cls");
				printf("Anna (2019)\n\n");
				printf("\tBeneath a woman's striking beauty lies a secret that will unleash her indelible strength and \n\tskill to become one of the most feared assassins on the planet.\n\n");
				printf("\t\tIMDb rating: 6.6/10\n\n"); 
				printf("\n\n");
				system("pause");
				movie();
			}
			else if(listChoice == 6)
			{
				system("cls");
				printf("Happy Death Day 2U (2019)\n\n");
				printf("\tCollegian Tree Gelbman wakes up in horror to learn that she's stuck in a parallel universe. \n\tHer boyfriend Carter is now with someone else, and her friends");
				printf(" and fellow students seem to be \n\tcompletely different versions of themselves. When Tree discovers that Carter's roommate has been \n\taltering time, she finds"); 
				printf("herself once again the target of a masked killer. When the psychopath \n\tstarts to go after her inner circle, Tree soon realizes that she must die over and"); 
				printf("over again \n\tto save everyone.\n\n");
				printf("\t\tIMDb rating: 6.2/10\n\n");
				system("pause");
				movie();
			}
			else if(listChoice == 7)
			{
				system("cls");
				printf("James Bond: Quantum of Solace (2008)\n\n");
				printf("\tSummaries. James Bond descends into mystery as he tries to stop a mysterious organisation from \n\teliminating a country's most valuable resource. Is there"); 
				printf("solace in revenge? James Bond (Daniel Craig) and \n\tM (Dame Judi Dench) sniff a shadowy international network of power and corruption reaping billions.\n\n");
				printf("\t\tIMDb rating: 6.6/10\n\n");
				system("pause");
				movie();
			}
			else if(listChoice == 8)
			{
				system("cls");
				printf("John Wick: Chapter 3 - Parabellum (2019)\n\n");
				printf("\tAfter gunning down a member of the High Table -- the shadowy international \n\tassassin's guild -- legendary hit man John Wick finds himself stripped of"); 
				printf(" the organization's \n\tprotective services. Now stuck with a $14 million bounty on his head, Wick must fight his way \n\tthrough the streets of New York as he becomes"); 
				printf("the target of the world's most ruthless killers.\n\n");
				printf("\t\tIMDb rating: 7.4/10\n\n");
				system("pause");
				movie();
			}
			else if(listChoice == 9) 
			{
				system("cls");
				printf("John Wick: Chapter 2 (2017)\n\n");
				printf("\tRetired super-assassin John Wick's plans to resume a quiet civilian life are cut short when Italian \n\tgangster Santino D'Antonio shows up on his doorstep with a gold marker");
				printf(", compelling him to repay past favours. \n\tOrdered by Winston, the kingpin of secret assassin society The Continental, to respect the organisation's \n\tancient code, Wick reluctantly"); 
				printf("accepts the assignment to travel to Rome to take out D'Antonio's sister, \n\tthe ruthless capo atop the Italian Camorra crime syndicate.\n\n");
				printf("\t\tIMDb rating: 7.5/10\n\n");
				system("pause");
				movie();
			}
			else if(listChoice == 10)
			{
				system("cls");
				printf("John Wick (2014)\n\n");
				printf("\tLegendary assassin John Wick (Keanu Reeves) retired from his violent career after marrying the \n\tlove of his life. Her sudden death leaves John in deep mourning. \n\tWhen sadistic");
				printf(" mobster Iosef Tarasov (Alfie Allen) and his thugs steal John's prized car and \n\tkill the puppy that was a last gift from his wife, John unleashes the remorseless killing \n\tmachine");
				printf(" within and seeks vengeance. \n\tMeanwhile, Iosef's father (Michael Nyqvist) -- John's former colleague -- puts a huge bounty on \n\tJohn's head.\n\n");
				printf("\t\tIMDb rating: 7.4/10\n\n");
				system("pause");
				movie();
			}
			else if(listChoice == 11)
			{
				system("cls");
				printf("Pirates of the Carribean: Dead Men Tell No Tales (2017)\n\n");
				printf("\tThrust into an all-new adventure, a down-on-his-luck Capt. Jack Sparrow feels the winds of \n\till-fortune blowing even more strongly when deadly ghost sailors led by his old nemesis,");
				printf("\n\tthe evil Capt. Salazar, escape from the Devil's Triangle. Jack's only hope of survival lies \n\tin seeking out the legendary Trident of Poseidon, but to find it, he must forge an uneasy"); 
				printf("\n\talliance with a brilliant and beautiful astronomer and a headstrong young man in the British navy.\n\n");
				printf("\t\tIMDb rating: 6.5/10\n\n");
				system("pause");
				movie();
			}
			else if(listChoice == 12)
			{
				system("cls");
				printf("Red Sparrow (2018)\n\n");
				printf("\tPrima ballerina Dominika Egorova faces a bleak and uncertain future after she suffers an injury \n\tthat ends her career. She soon turns to Sparrow School, a secret intelligence service");
				printf(" that trains \n\texceptional young people to use their minds and bodies as weapons. Egorova emerges as the most \n\tdangerous Sparrow after completing the sadistic training process. As she");
				printf(" comes to terms with her \n\tnew abilities, Dominika meets a CIA agent who tries to convince her that he is the only person \n\tshe can trust.\n\n");
				printf("\t\tIMDb rating: 6.6\10\n\n");
				system("pause");
				movie();
			}
			else if(listChoice == 13)
			{
				system("cls");
				printf("Snowden (2016)\n\n");
				printf("\tDisillusioned with the intelligence community, top contractor Edward Snowden (Joseph Gordon-Levitt)\n\tleaves his job at the National Security Agency. He now knows that a virtual"); 
				printf("mountain of data is being\n\tassembled to track all forms of digital communication -- not just from foreign governments and\n\tterrorist groups, but from ordinary Americans. When Snowden");
				printf(" decides to leak this classified information,\n\the becomes a traitor to some, a hero to others and a fugitive from the law.\n\n");
				printf("\t\tIMDb rating: 7.3/10\n\n");
				system("pause");
				movie();
			}
			else if(listChoice == 14)
			{
				system("cls");
				printf("Spectre (2016)\n\n");
				printf("\tA cryptic message from the past leads James Bond (Daniel Craig) to Mexico City and Rome,\n\twhere he meets the beautiful widow (Monica Bellucci) of an infamous criminal.");
				printf(" After infiltrating\n\ta secret meeting, 007 uncovers the existence of the sinister organization SPECTRE. Needing the\n\thelp of the daughter of an old nemesis, he embarks on a mission");
				printf(" to find her.\n\tAs Bond ventures toward the heart of SPECTRE, he discovers a chilling connection between\n\thimself and the enemy (Christoph Waltz) he seeks.\n\n");
				printf("\t\tIMDb rating: 6.8/10\n\n");
				system("pause");
				movie();
			}
			else if(listChoice == 15)
			{
				system("cls");
				printf("The Art of Self Defense (2019)\n\n");
				printf("\tAfter getting attacked on the street, Casey enlists in a local dojo led by a\n\tcharismatic and mysterious sensei. He soon uncovers a sinister fraternity\n\tof violence and masculinity");
				printf("while learning how to defend himself from future attacks.\n\tCasey must now embark on a dark and frightening journey that places him squarely in the sights \n\tof his enigmatic new mentor.\n\n");
				printf("\t\tIMDb rating: 6.7/10\n\n");
				system("pause");
				movie();
			}
			else if(listChoice == 16)
			{
				system("cls");
				printf("The Irishman (2019)\n\n");
				printf("\tIn the 1950s, truck driver Frank Sheeran gets involved with Russell Bufalino and his\
				\n\tPennsylvania crime family. As Sheeran climbs the ranks to become a top hit man, he also\
				\n\tgoes to work for Jimmy Hoffa -- a powerful Teamster tied to organized crime.\n\n");
				printf("\t\tIMDb rating: 7.9/10\n\n");
				system("pause");
				movie();
			}
			else if (listChoice == 17)
			{
				system("cls");
				printf("Come and See (1985)\n\n");
				printf("\tAfter finding an old rifle, a young boy joins the Soviet resistance movement against\
				\n\truthless German forces and experiences the horrors of World War II.\n\n");
				printf("\t\tIMDb rating: 8.3/10\n\n");
				system("pause");
				movie();
			}
			else if (listChoice == 18)
			{
				system("cls");
				printf("Jacob's Ladder (1990)\n\n");
				printf("\tMourning his dead child, a haunted Vietnam War veteran attempts to uncover his past\
				\n\twhile suffering from a severe case of dissociation. To do so, he must decipher reality and life\
				\tfrom his own dreams, delusions, and perceptions of death.\n\n");
				printf("\t\tIMDb rating: 7.5/10\n\n");
				system("pause");
				movie();
			}
			else if (listChoice == 19)
			{
				system("v");
				printf("The Blair Witch Project (1999)\n\n");
				printf("\tThree film students vanish after traveling into a Maryland forest to film a documentary\
				\n\ton the local Blair Witch legend, leaving only their footage behind.\n\n");
				printf("\t\tIMDb rating: 6.5/10\n\n");
				system("pause");
				movie();
			}
			else if(listChoice==20)
			{
				system("cls");
				printf("Predestination (2014)\n\n");
				printf("\tFor his final assignment, a top temporal agent must pursue the one criminal that has eluded\
				\thim throughout time. The chase turns into a unique, surprising and mind-bending exploration of \
				\tlove, fate, identity and time travel taboos.\n\n");
				printf("\t\tIMDb rating: 7.5/10\n\n");
				system("pause");
				movie();
			}
			else if(listChoice==21)
			{
				system("cls");
				printf("Inception (2010)\n\n");
				printf("\tA thief who steals corporate secrets through the use of dream-sharing technology is\
				\n\tgiven the inverse task of planting an idea into the mind of a C.E.O.\n\n");
				printf("\t\tIMDb rating: 8.8/10\n\n");
				system("pause");
				movie();
			}
			else if(listChoice==22)
			{
				system("cls");
				printf("Tenet (2020)\n\n");
				printf("\tArmed with only one word, Tenet, and fighting for the survival of the entire world,\
				\n\ta Protagonist journeys through a twilight world of international espionage on a mission\
				\n\tthat will unfold in something beyond real time.\n\n");
				printf("\t\tIMDb rating: 7.5/10\n\n");
				system("pause");
				movie();
			}
			else if(listChoice==23)
			{
				system("cls");
				printf("Interstellar (2014)\n\n");
				printf("\tA team of explorers travel through a wormhole in space in an attempt to\
				\n\tensure humanity's survival.\n\n");
				printf("\t\tIMDb rating: 8.6/10\n\n");
				system("pause");
				movie();
			}
			else if(listChoice==24)
			{
				system("cls");
				printf("The Matrix (1999)\n\n");
				printf("\tWhen a beautiful stranger leads computer hacker Neo to a forbidding underworld,\
				\n\the discovers the shocking truth--the life he knows is the elaborate deception of an evil\
				\tcyber-intelligence.\n\n");
				printf("\t\tIMDb rating: 8.7/10\n\n");
				system("pause");
				movie();
			}
			else if(listChoice==25)
			{
				system("cls");
				printf("The Matrix Revolutions (2003)\n\n");
				printf("\tThe human city of Zion defends itself against the massive invasion of the machines as Neo\
				\tfights to end the war at another front while also opposing the rogue Agent Smith.\n\n");
				printf("\t\tIMDb rating: 6.8/10\n\n");
				system("pause");
				movie();
			}
			else if(listChoice==26)
			{
				system("cls");
				printf("The Matrix Reloaded (2003)\n\n");
				printf("\tFreedom fighters Neo, Trinity and Morpheus continue to lead the revolt against the Machine Army,\
				unleashing their arsenal of extraordinary skills and weaponry against the systematic forces of\
				\trepression and exploitation.\n\n");
				printf("\t\tIMDb rating: 7.2/10\n\n");
				system("pause");
				movie();
			}
			else if(listChoice==27)
			{
				system("cls");
				printf("V for Vendetta (2006)\n\n");
				printf("\tIn a futuristic, totalitarian Britain, a freedom fighter known simply as V, uses terrorist tactics\
				to fight the oppressive society. Evey aids him in his mission to bring down the government.\n\n");
				printf("\t\tIMDb rating: 8.2/10\n\n");
				system("pause");
				movie();
				
			}
			else if(listChoice==28)
			{
				system("cls");
				printf("The Godfather (1972)\n\n");
				printf("\tDon Vito Corleone, head of a mafia family, decides to hand over his empire to his youngest son Michael.\
				However, his decision unintentionally puts the lives of his loved ones in grave danger.\n\n");
				printf("\t\tIMDb rating: 9.2/10\n\n");
				system("pause");
				movie();
			}
			else if(listChoice==29)
			{
				system("cls");
				printf("Pulp Fiction (1994)\n\n");
				printf("\tIn the realm of underworld, a series of incidents intertwines the lives of two Los Angeles mobsters,\
				a gangster's wife, a boxer and two small-time criminals.\n\n");
				printf("\t\tIMDb rating: 8.9/10\n\n");
				system("pause");
				movie();
			}
			else if(listChoice==30)
			{
				system("cls");
				printf("Pan's Labyrinth (2006)\n\n");
				printf("\tOfelia moves with her mother to her stepfather's house. At night, a fairy leads her to a faun who informs\n\ther that she is a princess and she needs to participate in three tasks to prove her royalty.\n\n");
				printf("\t\tIMDb rating: 8.2/10\n\n");
				system("pause");
				movie();
			}
			else if(listChoice==31)
			{
				system("cls");
				printf("Irreversible (2002)\n\n");
				printf("\tA woman's (Monica Bellucci) lover (Vincent Cassel) and her former boyfriend (Albert Dupontel) take justice \n\tinto their own hands after she becomes the victim of a rapist.\n\n");
				printf("\t\tIMDb rating: 7.4/10\n\n");
				system("pause");
				movie();
			}
			else if(listChoice==32)
			{
				system("cls");
				printf("Fantastic Beasts and Where to Find Them (2016)\n\n");
				printf("\tWhile a strange dark force terrorises New York City, British magizoologist Newt Scamander enlists a \n\tnon-magical Jacob's help to round up some escaped magical creatures.\n\n");
				printf("\t\tIMDb rating: 7.3/10\n\n");
				system("pause");
				movie();
			}
			else if(listChoice==33)
			{
				system("cls");
				printf("Fantastic Beasts: The Crimes of Grindelwald (2018)\n\n");
				printf("\tGellert Grindelwald plans to raise an army of wizards to rule over non-magical beings. In response, \n\tNewt Scamander's former professor, Albus Dumbledore, seeks his help to stop him.\n\n");
				printf("\t\tIMDb rating: 6.6/10\n\n");
				system("pause");
				movie();
			}
			else if(listChoice==34)
			{
				system("cls");
				printf("21 Jump Street (2012)\n\n");
				printf("\tSchmidt and Jenko are high school friends who go on to become police officers. The two friends go \n\tundercover as students in order to bust a drug ring and find the source of a synthetic drug.\n\n");
				printf("\t\tIMDb rating: 7.2/10\n\n");
				system("pause");
				movie();
			}
			else if(listChoice==35)
			{
				system("cls");
				printf("22 Jump Street (2014)\n\n");
				printf("\tSchmidt and Jenko, two undercover cops, are sent on a mission to a college to investigate the use of a \n\trecreational drug known as WHYPHY. Their bond is tested when Schmidt befriends a girl, Maya.\n\n");
				printf("\t\tIMDb rating: 7/10\n\n");
				system("pause");
				movie();
			}
			else if(listChoice==36)
			{
				system("cls");
				printf("Hardcore Henry (2015)\n\n");
				printf("\tA man wakes up in a Moscow laboratory to learn that he's been brought back from the dead as \n\ta half-human, half-robotic hybrid.");
				printf("With no memory of his former life, a woman who claims to be \n\this wife tells him that his name is Henry. Before she can activate");
				printf(" his voice, armed thugs storm \n\tin and kidnap her. As Henry starts to understand his new abilities, he embarks on a bloody rampage");
				printf("\n\tthrough the city to save his spouse from a psychopath who plans to destroy the world.\n\n");
				printf("\t\tIMDb rating: 6.7/10\n\n");
				system("pause");
				movie();
			}
			else if(listChoice==37)
			{
				system("cls");
				printf("Blade Runner (1984)\n\n");
				printf("\tRick Deckard, an ex-policeman, becomes a special agent with a mission to exterminate a group of violent \n\tandroids. As he starts getting deeper into his mission, he questions his own identity.\n\n");
				printf("\t\tIMDb rating: 8.1/10\n\n");
				system("pause");
				movie();
			}
			else if(listChoice==38)
			{
				system("cls");
				printf("Blade Runner 2049 (2017)\n\n");
				printf("\tK, an officer with the Los Angeles Police Department, unearths a secret that could cause chaos. \n\tHe goes in search of a former blade runner who has been missing for three decades.\n\n");
				printf("\t\tIMDb rating: 8/10\n\n");
				system("pause");
				movie();
			}
			else if(listChoice==39)
			{
				system("cls");
				printf("Nightcrawler (2014)\n\n");
				printf("\tLouis Bloom, a petty thief, realises that he can make money by capturing photographs of crime \n\tscenes and starts resorting to extreme tactics to get them.\n\n");
				printf("\t\tIMDb rating: 7.9/10\n\n");
				system("pause");
				movie();
			}
			else if(listChoice==40)
			{
				system("cls");
				printf("Donnie Darko (2001)\n\n");
				printf("\tDonnie Darko, an awkward teenager, befriends Frank, a figure in a bunny costume only he can see, \n\twho informs Donnie that the world will end in 28 days, 6 hours, 42 minutes, and 12 seconds.\n\n");
				printf("\t\tIMDb rating: 8/10\n\n");
				system("pause");
				movie();
			}
			else if(listChoice == 41) 
			{
				menu();
			}
			else {
				printf("Invalid input chief, might wanna type it up again");
				sleep(3);
				movie();
			}
		}
		

int tv_series() {
	int listChoice_tv;
	system("cls");
	printf("__________________________________________________________");
	printf("\n| (1)Altered Carbon\t\t\t\t\t |\n| (2)Blindspot\t\t\t\t\t\t |\n| (3)Chernobyl\t\t\t\t\t\t |\n| (4)Chilling Adventures of Sabrina\t\t\t |\n| (5)La Casa de Papel[Money Heist]\t\t\t |\n");
	printf("| (6)Lethal Weapon\t\t\t\t\t |\n| (7)Lucifer\t\t\t\t\t\t |\n| (8)Mindhunter\t\t\t\t\t\t |\n| (9)Mr. Robot\t\t\t\t\t\t |\n| (10)Rick and Morty\t\t\t\t\t |\n");
	printf("| (11)Sex Education\t\t\t\t\t |\n| (12)Stranger Things\t\t\t\t\t |\n| (13)Supernatural\t\t\t\t\t |\n| (14)The Boys\t\t\t\t\t\t |\n");
	printf("| (15)End of the Fucking World\t\t\t\t |\n| (16)The Mandalorian\t\t\t\t\t |\n| (17)The Witcher\t\t\t\t\t |\n| (18)You\t\t\t\t\t\t |\n| (19)Return\t\t\t\t\t\t |");
	printf("\n|________________________________________________________|\n");
	printf("Choice: ");
	scanf("%d", &listChoice_tv);
	switch (listChoice_tv) {
		case 1:
		system("cls");
		printf("\nAltered Carbon (2018-2020)");
		printf("\nGenre: Cyberpunk, Science Fiction, Drama");
		printf("\n\n\tMore than 300 years in the future, society has been transformed by new technology, leading to\n\thuman bodies being interchangeable and death"); 
		printf("no longer being permanent. Takeshi Kovacs is the only\n\t2 surviving soldier of a group of elite interstellar warriors who were defeated in an uprising "); 
		printf("against\n\tthe new world order. His mind was imprisoned for centuries until impossibly wealthy businessman Laurens \t\t\tBancroft offers him the chance to live again.");
		printf("Kovacs will have to do something for Bancroft, \n\tthough, if he wants to be resurrected. Bancroft\'s request of Kovacs is to solve a murder -- Bancroft\'s. ");
		printf("\t\t\t\"Altered Carbon\" is based on Richard K. Morgan's cyberpunk noir novel of the same name.\n\n");
		printf("\tIMDB rating: 8/10");
		printf("\n\tSeason 1: 10 Episodes\n\tSeason 2: 8 Episodes\n\n");
		system("pause");
		tv_series();
		break;
	
		case 2:
		system("cls");
		printf("\nBlindspot (2015-2020)\n");
		printf("Genre: Crime drama, Action, Thriller, Mystery\n");
		printf("\n\tThe FBI finds a strange woman in a bag, in Times Square. With absolutely no memory of her past and \n\tmysterious tattoos all over her body, she embarks on");
		printf(" a journey to determine her identity.\n\n");
		printf("\tIMDB rating: 7.4/10");
		printf("\n\tSeason 1: 23 Episodes\n\tSeason 2: 22 Episodes\n\tSeason 3: 22 Episodes\n\tSeason 4: 22 Episodes\n\tSeason 5: 11 Episodes\n\n");
		system("pause");
		tv_series();
		break;
	
		case 3:
		system("cls");
		printf("\nChernobyl (2019 Miniseries)\n");
		printf("Genre: History drama, Tragedy\n");
		printf("\n\tIn April 1986, the city of Chernobyl in the Soviet Union suffers one of the worst nuclear disasters \n\tin the history of mankind. Consequently,");
		printf(" many heroes put their lives on the line to save Europe.\n\n");
		printf("\tIMDB rating: 9.4/10");
		printf("\n\tSeason 1: 5 Episodes\n\n");
		system("pause");
		tv_series();
		break;
	
		case 4:
		system("cls");
		printf("\nChilling Adventures of Sabrina (2018- )\n");
		printf("Genre: Drama, Mystery, Horror fiction, Dark fantasy, Supernatural, Occult Fiction\n\n");
		printf("\tThis adaptation of the \"Sabrina the Teenage Witch\" tale is a dark coming-of-age story that traffics in horror \n\tand the occult. In the reimagined origin");
		printf(" story, Sabrina Spellman wrestles to reconcile her dual nature -- \n\thalf-witch, half-mortal -- while standing against the evil forces that threaten her, her");
		printf(" family -- including \n\taunts Hilda and Zelda -- and the daylight world humans inhabit. Kiernan Shipka (\"Mad Men\") leads the cast in the \ttitular role of the");
		printf(" show that is based on a comic series of the same name.\n\n");
		printf("\tIMDB rating: 7.5/10");
		printf("\n\tSeason 1(Part 1): 11 Episodes\n\tSeason 1(Part 2): 9 Episodes\n\tSeason 2(Part 3): 8 Episodes\n\tSeason 2(Part 4): 8 Episodes\n\n");
		system("pause");
		tv_series();
		break;
		
		case 5:
		system("cls");
		printf("\nLa Casa De Papel(Money Heist) (2017- )\n");
		printf("Genre: Crime drama, Heist, Thriller, Mystery, Suspense\n\n");
		printf("\tA criminal mastermind who goes by \"The Professor\" has a plan to pull off the biggest heist in recorded history\n\t -- to print billions of euros in the Royal Mint");
		printf(" of Spain. To help him carry out the ambitious plan, he recruits \teight people with certain abilities and who have nothing to lose. The group of thieves take");
		printf(" hostages to aid in \n\ttheir negotiations with the authorities, who strategize to come up with a way to capture The Professor. As more \t\ttime elapses, the robbers");
		printf(" prepare for a showdown with the police.\n\n");
		printf("\tIMDB rating: 8.3/10");
		printf("\n\tSeason 1(Part 1): 9 Episodes\n\tSeason 1(Part 2): 6 Episodes\n\tSeason 2(Part 3): 8 Episodes\n\tSeason 2(Part 4): 8 Episodes\n\n");
		system("pause");
		tv_series();
		break;
		
		case 6:
		system("cls");
		printf("\nLethal Weapon (2016-2019)\n");
		printf("Genre: Comedy-drama, Buddy cop, Action,Police procedural\n\n");
		printf("\tEx-Navy SEAL Martin Riggs moves to California and starts working at the LAPD. He is paired with \n\tDetective Roger Murtaugh and together, they fight some"); 
		printf(" of the most dangerous criminals in the city.\n\n");
		printf("\tIMDB rating: 7.9/10");
		printf("\n\tSeason 1: 18 Episodes\n\tSeason 2: 22 Episodes\n\tSeason 3: 15 Episodes\n\n");
		system("pause");
		tv_series();
		break;
		
		case 7:
		system("cls");
		printf("\nLucifer (2016- )\n");
		printf("Genre: Urban fantasy, Police procedural, Comedy-drama\n\n");
		printf("\tLucifer, a demon, returns from hell to reside in Los Angeles and runs a club. He soon gets involved with the"); 
		printf("\n\tlocal police and assists them in solving tricky criminal cases.\n\n");
		printf("\tIMDB rating: 8.1/10");
		printf("\n\tSeason 1: 13 Episodes\n\tSeason 2: 18 Episodes\n\tSeason 3: 26 Episodes\n\tSeason 4: 10 Episodes\n\tSeason 5(Part 1): 6 Episodes\n\t");
		printf("Season 5(Part 2): 8 Episodes(TBA)\n\tSeason 6: 10 Episodes(TBA)\n\n");
		system("pause");
		tv_series();
		break;
	
		case 8:
		system("cls");
		printf("\nMindhunter (2017-2019)\n");
		printf("Genre: Crime Drama, Psychological thriller\n\n");
		printf("\tCatching a criminal often requires the authorities to get inside the villain's mind to figure out how he thinks. \tThat\'s the job of FBI");
		printf(" agents Holden Ford and Bill Tench. They attempt to understand and catch serial killers by \t\tstudying their damaged psyches. Along the way,");
		printf(" the agents pioneer the development of modern serial-killer \n\tprofiling. The crime drama has a strong pedigree behind the camera, with Oscar-nominated");
		printf(" director David Fincher \n\tand Oscar-winning actress Charlize Theron among the show's executive producers.\n\n");
		printf("\tIMDB rating: 8.1/10");
		printf("\n\tSeason 1: 10 Episodes\n\tSeason 2: 9 Episodes\n\n");
		system("pause");
		tv_series();
		break;
		
		case 9:
		system("cls");
		printf("\nMr. Robot (2015-2019)\n");
		printf("Genre: Drama, Techno Trailer, Psychological thriller\n\n");
		printf("\tElliot, a cyber-security engineer suffering from anxiety, works for a corporation and hacks felons by night. \n\tPanic strikes him after Mr Robot,");
		printf(" a cryptic anarchist, recruits him to ruin his company.\n\n");
		printf("\tIMDB rating: 8.6/10");
		printf("\n\tSeason 1: 10 Episodes\n\tSeason 2: 12 Episodes\n\tSeason 3: 10 Episodes\n\tSeason 4: 13 Episodes\n\n");
		system("pause");
		tv_series();
		break;
		
		case 10:
		system("cls");
		printf("\nRick and Morty (2013- )\n");
		printf("Genre: Adult animation, Animated sitcom, Science fiction\n\n");
		printf("\tAfter having been missing for nearly 20 years, Rick Sanchez suddenly arrives at daughter Beth's doorstep to move \tin with her and her family. Although");
		printf(" Beth welcomes Rick into her home, her husband, Jerry, isn\'t as happy about \t\tthe family reunion. Jerry is concerned about Rick, a sociopathic scientist,");
		printf(" using the garage as his personal \n\tlaboratory. In the lab, Rick works on a number of sci-fi gadgets, some of which could be considered dangerous. \n\tBut that\'s");
		printf(" not all Rick does that concerns Jerry. He also goes on adventures across the universe that often \n\tinvolve his grandchildren, Morty and Summer.\n\n");
		printf("\tIMDB rating: 9.2/10");
		printf("\n\tSeason 1: 11 Episodes\n\tSeason 2: 10 Episodes\n\tSeason 3: 10 Episodes\n\tSeason 4: 10 Episodes\n\tSeason 5: 10 Episodes(TBA)\n\n");
		system("pause");
		tv_series();
		break;
		
		case 11:
			
		system("cls");
		printf("\nSex Education (2019- )\n");
		printf("Genre: Drama, Comedy-drama, Sex comedy, Coming-of-age story, Comedy\n\n");
		printf("\tSocially awkward high school student Otis may not have much experience in the lovemaking department, but he gets \tgood guidance on the topic in his personal");
		printf(" sex ed course -- living with mom Jean, who is a sex therapist. Being \t\tsurrounded by manuals, videos and tediously open conversations about sex, Otis has become");
		printf(" a reluctant expert on \t\tthe subject. When his classmates learn about his home life, Otis decides to use his insider knowledge to improve \this status at school,");
		printf(" so he teams with whip-smart bad girl Maeve to set up an underground sex therapy clinic to \t\tdeal with their classmates\' problems. But through his analysis");
		printf(" of teenage sexuality, Otis realizes that he may \n\tneed some therapy of his own.\n\n");
		printf("\tIMDB rating: 8.3/10");
		printf("\n\tSeason 1: 8 Episodes\n\tSeason 2: 8 Episodes\n\n");
		system("pause");
		tv_series();		
		break;
		
		case 12:
		system("cls");
		printf("\nStranger Things (2019- )\n");
		printf("Genre: Horror, Science Fiction, Thriller, Horror fiction, Supernatural, Historical drama\n\n");
		printf("\tIn 1980s Indiana, a group of young friends witness supernatural forces and secret government exploits. As they \n\tsearch for answers, the children");
		printf(" unravel a series of extraordinary mysteries.\n\n");
		printf("\tIMDB rating: 8.7/10");
		printf("\n\tSeason 1: 8 Episodes\n\tSeason 2: 9 Episodes\n\tSeason 3: 8 Episodes\n\tSeason 4: 8 Episodes(TBA)\n\n");
		system("pause");
		tv_series();
		break;
		
		case 13:
		system("cls");
		printf("\nSupernatural (2005-2020)\n");
		printf("Genre: Action, Adventure, Drama, Fantasy, Horror, Mystery\n\n");
		printf("\tBrothers Dean and Sam follow in their father\'s footsteps and set out to eliminate monsters, demons and other \n\tsupernatural entities that exist on Earth.\n\n");
		printf("\tIMDB rating: 8.4/10");
		printf("\n\tSeason 1: 22 Episodes\n\tSeason 2: 22 Episodes\n\tSeason 3: 16 Episodes\n\tSeason 4: 2 Episodes\n\tSeason 5: 22 Episodes\n\tSeason 6: 22 Episodes\n\t");
		printf("Season 7: 23 Episodes\n\tSeason 8: 23 Episodes\n\tSeason 9: 23 Episodes\n\tSeason 10: 23 Episodes\n\tSeason 11: 23 Episodes\n\tSeason 12: 23 Episodes\n\t");
		printf("Season 13: 23 Episodes\n\tSeason 14: 20 Episodes\n\n");
		system("pause");
		tv_series();
		break;
		
		case 14:
		system("cls");
		printf("\nThe Boys (2019- )\n");
		printf("Genre: Superhero, Action, Thriller, Drama. Dark comedy\n\n");
		printf("\tSuperheroes are often as popular as celebrities, as influential as politicians, and sometimes even as revered as \tgods. But that\'s when they\'re using");
		printf(" their powers for good. What happens when the heroes go rogue and start \n\tabusing their powers? When it's the powerless against the super powerful, the Boys");
		printf(" head out on a heroic quest to \texpose the truth about the Seven and Vought, the multibillion-dollar conglomerate that manages \n\tthe superheroes and covers up");
		printf(" their dirty secrets. Based on the comic book series of the same name.\n\n");
		printf("\tIMDB rating: 8.7/10");
		printf("\n\tSeason 1: 8 Episodes\n\tSeason 2: 8 Episodes\n\tSeason 3: TBA Episodes\n\n");
		system("pause");
		tv_series();
		break;
		
		case 15:
		system("cls");
		printf("\nEnd of the Fucking World (2017-2019)\n");
		printf("Genre: Drama, Dark comedy, Comedy-drama\n\n");
		printf("\tBased on the award-winning comic book series by Charles Forsman, \'The End of the F...ing World\' sees two \n\t17-year-old outsiders, James and Alyssa,");
		printf(" embark on a road trip to find Alyssa's estranged father, who left home \t\twhen she was just a child. James, who's pretty convinced he\'s a psychopath,");
		printf(" has decided it\'s time to \n\tgraduate from killing animals to something bigger, and he\'s already got a target in mind. Alyssa, the embodiment \tof");
		printf(" existential angst, feels like she doesn\'t fit in at her new school despite being quite popular. Together, \n\tthey get caught up on a trail of violent");
		printf(" events that grow increasingly more ominous as their quest progresses.\n\n");
		printf("\tIMDB rating: 8.1/10");
		printf("\n\tSeason 1: 8 Episodes\n\tSeason 2: 8 Episodes\n\n");
		system("pause");
		tv_series();
		break;
		
		case 16:
		system("cls");
		printf("\nThe Mandalorian (2019- )\n");
		printf("Genre: Action-adventure, Drama, Space Western\n\n");
		printf("\tAfter the defeat of the Empire at the hands of Rebel forces, a lone bounty hunter operating in the Outer Rim, \n\taway from the dominion of the New Republic,");
		printf(" goes on many surprising and risky adventures.\n\n");
		printf("\tIMDB rating: 8.8/10");
		printf("\n\tSeason 1: 8 Episodes\n\tSeason 2: 8 Episodes\n\n");
		system("pause");
		tv_series();
		break;
		
		case 17:
		system("cls");
		printf("\nThe Witcher (2019- )");
		printf("\nGenre: Fantasy, Serial Drama, Adventure, Action\n\n");
		printf("\tThe witcher Geralt, a mutated monster hunter, struggles to find his place in a world in which people often prove \tmore wicked than beasts.\n\n");
		printf("\tIMDB rating: 8.2/10");
		printf("\n\tSeason 1: 8 Episodes\n\n");
		system("pause");
		tv_series();
		break;
		
		case 18:
		system("cls");
		printf("\nYou (2018- )");
		printf("\nGenre: Thriller, Psychological thriller, Crime novel, Crime TV genre\n\n");
		printf("\tWhat would you do for love? For a brilliant male bookstore manager who crosses paths with an aspiring female \n\twriter, this question is put to the test.");
		printf(" A charming yet awkward crush becomes something even more sinister when \tthe writer becomes the manager's obsession. Using social media and the internet,");
		printf(" he uses every tool at his \n\tdisposal to become close to her, even going so far as to remove any obstacle --including people -- that stands \n\tin his way of");
		printf(" getting to her.\n\n");
		printf("\tIMDB rating: 7.7/10");
		printf("\n\tSeason 1: 10 Episodes\n\tSeason 2: 10 Episodes\n\tSeason 3: 10 Episodes\n\n");
		system("pause");
		tv_series();
		break;
		
		case 19:
			menu();
		break;
		
		default:
			printf("Invalid input!");
			sleep(3);
			tv_series();
	}
}
	
int anime() {
	printf("\n\nStill Ongoing!");
	sleep(3);
	menu();
}
int kdrama() {
	printf("\n\nStill Ongoing!");
	sleep(3);
	menu();
}
int about() {
	system("cls");
	printf("\nAn autist with semi-knowledge on coding writes a simple program that list movies, tv series, anime, k-drama.");
	printf("\nIf you wanna contribute dont hesitate to contact me \nContact info: facebook.com/p1err0t, richiesumohid@yahoo.com");
	printf("\n\nAlso special thanks to @cspnfry for contributing in the list!");
}


