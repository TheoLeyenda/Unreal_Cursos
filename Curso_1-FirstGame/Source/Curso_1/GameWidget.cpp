// Fill out your copyright notice in the Description page of Project Settings.


#include "GameWidget.h"

void UGameWidget::Load()
{
	const FName TextBlockName = FName(TEXT("GameTextBlock"));
	
	if(TextBlock == nullptr)
	{
		UTextBlock* NewTextBlock = Cast<UTextBlock>(WidgetTree->FindWidget(TextBlockName));
		TextBlock = NewTextBlock;
	}
}
void UGameWidget::SetScore_Implementation(int Score)
{
	SetScore(Score);
	if(TextBlock != nullptr)
	{
		TextBlock->SetText(FText::FromString(FString(TEXT("Score: ")) + FString::FromInt(Score)));
	}
}

void UGameWidget::OnGameOver_Implementation(int Score)
{
	OnGameOver(Score);
	if(TextBlock != nullptr)
	{
		TextBlock->SetText(FText::FromString(FString(TEXT("Score: ")) + FString::FromInt(Score) + TEXT("\n Pulsta R para volver a jugar")));
	}
}
