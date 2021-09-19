// Fill out your copyright notice in the Description page of Project Settings.
#include "BullCowCartridge.h"

void UBullCowCartridge::BeginPlay() // When the game starts
{
	Super::BeginPlay();
	PrintLine(TEXT("Welcome to Bull & Cows!"));
	PrintLine(TEXT("Guess the 4 letter word!")); //TODO: Magic Number Remove!
	PrintLine(TEXT("Press Enter to continue..."));

	SetupGame();

	// Prompt Player for Guess
}

void UBullCowCartridge::OnInput(const FString& Input) // When the player hits enter
{
	ClearScreen();

	if (Input == HiddenWord) {
		PrintLine(TEXT("You have Won!"));
	}
	else {
		PrintLine(TEXT("You have Lost!"));
		P_Lives--;
	}

	if (P_Lives > 0) {
		// Ask for a guess
	}
	else {
		PrintLine(TEXT("You have 0 Lives Left. YOU LOST."));
		// Prompt to play again
		// Show Hidden word
	}
}

void UBullCowCartridge::SetupGame() {
	HiddenWord = TEXT("cake");
	P_Lives = P_LivesMax;
}