// Fill out your copyright notice in the Description page of Project Settings.
#include "BullCowCartridge.h"

void UBullCowCartridge::BeginPlay() // When the game starts
{
    Super::BeginPlay();
	PrintLine(TEXT("Welcome to Bull Cows!\nGuess the 4 letter word!"));
	PrintLine(TEXT("Press enter to continue...")); 
	//separate lines because they're stating two different kind of things: A welcome, and in instruction
	HiddenWord = TEXT("word");

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
		PrintLine("YOU LOSE! HAHA");
}