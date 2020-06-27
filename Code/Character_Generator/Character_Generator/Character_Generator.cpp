// Character_Generator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "random.hpp"

using Random = effolkronium::random_static;

struct CharacterClass { // The ability modifiers for each class.
    int agilityMod{};
    int strengthMod{};
    int intelligenceMod{};
    int charismaMod{};
};

enum class Item // Items the character can carry.
{
    ITEM_STAFF,
    ITEM_SWORD,
    ITEM_AXE,
    ITEM_DAGGAR,
    ITEM_SHIELD,
    ITEM_TRIDENT,
    ITEM_TORCH,
    ITEM_ROPE
};

struct Character { // The Character struct.
    std::string classType {};
    std::string name{};
    int agility {};
    int strength {};
    int intelligence {};
    int charisma {};
    Item item1{};
    Item item2{};
};

void printItem(Item item) // Convert the Item from int to text and print it to the console.
{
    switch (item)
    {
    case Item::ITEM_STAFF :
        std::cout << "Staff";
        break;
    case Item::ITEM_SWORD:
        std::cout << "Sword";
        break;
    case Item::ITEM_AXE:
        std::cout << "Axe";
        break;
    case Item::ITEM_DAGGAR:
        std::cout << "Daggar";
        break;
    case Item::ITEM_SHIELD:
        std::cout << "Shield";
        break;
    case Item::ITEM_TRIDENT:
        std::cout << "Trident";
        break;
    case Item::ITEM_TORCH:
        std::cout << "Torch";
        break;
    case Item::ITEM_ROPE:
        std::cout << "Rope";
        break;
    }
}

CharacterClass classSelect(Character character) // set up and select the class selected by the user. (Agility, Strength, Intelligence, Charisma)
{
    CharacterClass Tank{2,10,4,6};
    CharacterClass Mage{6,2,10,4};
    CharacterClass Assassin{10,4,6,2};
    CharacterClass Soldier{6,6,6,6};

     if (character.classType == "Tank" || character.classType == "tank") { // take string input from user, convert to classType.
         return Tank;
     }
     else if (character.classType == "Mage" || character.classType == "mage") {
         return Mage;
     }
     else if (character.classType == "Assassin" || character.classType == "assassin") {
         return Assassin;
     }
     else  {
         return Soldier;
     }
}

void displayCharacter(Character character) // print the characters stats to the user.
{
    std::cout << ("Here is your character\n");
    std::cout << "\n";
    std::cout << (character.name + "\n");
    std::cout << ("Class: " + character.classType + "\n");
    std::cout << "Stats:\n";
    std::cout << "\n";
    std::cout << "Agility: " << + character.agility << "\n";
    std::cout << "Strength: " << character.strength << "\n";
    std::cout << "Intelligence: " << character.intelligence << "\n";
    std::cout << "Charisma: " << character.charisma << "\n";
    std::cout << "Items:\n";
    std::cout << "\n";
    printItem(character.item1);
    std::cout << "\n";
    printItem(character.item2);
}

void generateStats(Character character) // use the random header to generate the statistics.
{
    CharacterClass current = classSelect(character);

    character.agility = Random::get(1, current.agilityMod);
    character.strength = Random::get(1, current.strengthMod);
    character.intelligence = Random::get(1, current.intelligenceMod);
    character.charisma = Random::get(1, current.charismaMod);
    character.item1 = static_cast<Item>(Random::get(0, 7));
    character.item2 = static_cast<Item>(Random::get(0, 7));
    displayCharacter(character);
}

void createCharacter() // enter the desired character name and class.
{
    Character newChar;
    std::cout << ("Please enter your new character's name\n");
    std::cin >>  newChar.name;
    std::cout << ("Please pick a class.\n");
    std::cout << ("Tank\n");
    std::cout << ("Mage\n");
    std::cout << ("Assassin\n");
    std::cout << ("Soldier\n");
    std::cin >> newChar.classType;
    
    generateStats(newChar);
}

int main()
{
    std::cout << ("Welcome to the Character Generator\n");
    createCharacter();
}