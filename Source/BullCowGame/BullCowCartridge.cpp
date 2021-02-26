// Fill out your copyright notice in the Description page of Project Settings.
#include "BullCowCartridge.h"

void UBullCowCartridge::BeginPlay() // When the game starts
{
    Super::BeginPlay();
	PrintLine(TEXT("Welcome to Bull Cows!\nGuess the 4 letter word!"));
	PrintLine(TEXT("Press enter to continue...")); 
	
	InitGame();
	
	//Prompt Player for guess

}

void UBullCowCartridge::OnInput(const FString& Input) // When the player hits enter
{
	ClearScreen();

	PrintLine(TEXT("You entered: " + Input));

	if (Input == HiddenWord)
	{
		PrintLine("YOU WIN! How did you guess that?");
	}
	else
	{
		PrintLine("YOU LOSE! HAHA");
		Lives--;
		PrintLine("Lives = " + FString::FromInt(Lives));
	}

	//Check if Isogram

	//Check Right Number of Characters

	//Remove Life

	//Check if lives > 0
	//if yes, guess again
	//show remaining lives
	//if no, game over and show hidden word
	//prompt to play again
	//yes restart
	//no quit
}

void UBullCowCartridge::InitGame()
{
	//setting up game
	HiddenWord = TEXT("word");

	//set lives
	Lives = 10;
}