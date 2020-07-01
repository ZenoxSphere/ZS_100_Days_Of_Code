# Day 8 (30/06/2020) - Reference Variables, Iterators and std::vector.
Today I finished the rest of the learncpp.com chapter that I have been working through over the last few days. Todays topics included:

* Const Pointers
* Reference Variables
* Member Selection
* For-each Loops
* Void Pointers
* `std::array` and `std::vector`
* Iterators
* Standard Library Algorithms

I am very happy to finally be through this chapter, nearly all of it was new to me and it has been difficult to work through. I am also glad that I have learncpp.com as a reference for these topics as it is a lot of information to take on. 

The most difficult thing for me today was reference variables as it took me a while to work out when to use them, I will definitely have to look back at this in the future.

I found `std::array` and `std::vector` rather straightforward to use as they are similar to parts of the standard Java library, I was also already familiar with for-each loops.

I have also used iterators before in Java but I have found the C++ Iterators are not so straight forward to use and I will probably have to look at the references for the next few times I need ro use them.

I will also need to dig further into the references for the standard algorithm's library as the learncpp.com tutorial doesn't cover everything in there and I know there are some more functions in there that can be useful to me.

After finishing the learncpp.com chapter today I made some updates to the Character Generator program. 

Firstly, I swapped out the Inventory array for a vector so that the inventory can be resized. I then changed the setting of the items in the inventory to a for each loop so that it scales to the size of the inventory, after this I added a randomiser to set the size of the characters inventory to between 1 and 5.

Next, I separated the generation of the characters inventory from the generation characters base stats to make the program more modular and allowing randomisation of the characters stats to happen without changing the characters inventory and vice-versa.

Lastly, I used `std::getline` to fix the input of the characters name. Before this edit the user could only input a single name as spaces would end the input and break the program. I have also made this edit to the class input to prevent this issue happening in later iterations of the program.

Tomorrow I will start working on the next chapter on learncpp.com which involves Functions and Lambdas, after that I might start working on some simple text-based games and learning some more git commands/functionality.
### Files edited today
* [Character Generator V3](https://github.com/ZenoxSphere/ZS_100_Days_Of_Code/blob/master/Code/Character_Generator_V3/Character_Generator/Character_Generator.cpp)
### Time spent
Today - 1 hour 48 minutes

Today's Logs - 42 minutes

In Total - 20 hours 29 minutes
### Music Listened to
[Metallica - Metallica (AKA The Black Album)](https://open.spotify.com/album/2Kh43m04B1UkVcpcRa1Zug?si=3obWC7eAR-Cd-_10idnN1Q)

[Trivium - In Waves(Special Edition)](https://open.spotify.com/album/2p1voQHdNSdy596VRDtdji?si=LbUuJz4NTOOvS_ljnZihQQ)