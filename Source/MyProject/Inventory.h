// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/**
 * 
 */
class MYPROJECT_API Inventory
{

public:
	Inventory();
	~Inventory();

	// checks to see if one inventory is a superset of another
	bool operator<(Inventory const& other) const;

	// removes the set of things from one inventory from another
	Inventory & operator-(Inventory const& other);

	int gold = 0;
	int metal = 0;

};
