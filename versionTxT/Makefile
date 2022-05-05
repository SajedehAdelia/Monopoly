 output: main.o Carte.o affichageTxt.o Jeu.o Joueur.o Plateau.o JeuDeCarte.o 
		g++ main.o Carte.o affichageTxt.o Jeu.o Joueur.o Plateau.o JeuDeCarte.o -o output
		
		main.o: main.cpp
		g++ -c main.cpp
		
		Carte.o: Carte.cpp Carte.h
		g++ -c Carte.cpp
		
		affichageTxt.o: affichageTxt.cpp affichageTxt.h
		g++ -c affichageTxt.cpp
		
		Jeu.o: Jeu.cpp Jeu.h
		g++ -c Jeu.cpp
		
		Joueur.o: Joueur.cpp Joueur.h
		g++ -c Joueur.cpp
		
		Plateau.o: Plateau.cpp  Plateau.h
		g++ -c IOimage.cpp
		
		JeuDeCarte.o: JeuDeCarte.cpp JeuDeCarte.h
		g++ -c JeuDeCarte.cpp
		
		


		clean:
		    rm *.o output
