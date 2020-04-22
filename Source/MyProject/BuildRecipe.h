// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Inventory.h"
/**
 * 
 */
class MYPROJECT_API BuildRecipe
{
protected:
	// Ingredients needed to perform the build
	Inventory ingredient_list;


public:
	BuildRecipe(Inventory ingredient_list);
	~BuildRecipe();

	bool check_build(Inventory const & inventory);
	bool perform_build(Inventory & inventory);

};
