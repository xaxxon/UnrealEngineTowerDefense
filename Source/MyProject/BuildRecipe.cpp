// Fill out your copyright notice in the Description page of Project Settings.

#include "BuildRecipe.h"

BuildRecipe::BuildRecipe(Inventory ingredient_list_)
{
	this->ingredient_list = ingredient_list;
}

BuildRecipe::~BuildRecipe()
{
}

bool BuildRecipe::check_build(Inventory const& inventory_to_check) {
	return true;
}

bool BuildRecipe::perform_build(Inventory& inventory_to_use) {
	return true;
}