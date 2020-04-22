// Fill out your copyright notice in the Description page of Project Settings.


#include "Inventory.h"

Inventory::Inventory()
{
}

Inventory::~Inventory()
{
}

bool Inventory::operator<(Inventory const& other) const {
	return false;
}

Inventory& Inventory::operator-(Inventory const & other) {
	return *this;
}