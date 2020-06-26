# Day 5 (25/06/2020) - The Character Generator.
Today was the first day that I decided to jump straight in to programming and avoiding tutorials which I enjoyed since I feel that I am more of a "Hands-on" learner. I am glad I made the decision to jump straight in as I learned a lot about what I could and couldn't do in C++.

This program is a basic character generator for an RPG type game, it takes a name and the class type of the character from the user and generates statistics based on the class type of the character, the program also assigns the character 2 random items from an enum of items.

Modifier/ Class type table

|             | Tank | Mage| Assassin | Soldier |
|:-----------:|:----:|:----:|:--------:|:-------:| 
| Agility     |2     |10    |4         |6        |
| Strength    |6     |2     |10        |4        |
| Intelligence|10    |4     |6         |4        |
| Charisma    |6     |6     |6         |6        |

The statistics are randomly generated from 1 to the modifier as lower and higher values.

Before I started I noted down the basic structure of what I thought I would need and jumped straight in to throwing code together, this made me immediately run into a problem, as I was completely new to structs I didn't know how to use them for my purpose correctly, this took a lot of trial and error to work out. I also made the basic error of starting too big and not focusing on the base of the program. I started by making the program modular and trying to make all of the feature work at once, which ended with a huge mess after one hour.

If I was to start this project again I would try and get it all to work step by step starting with the basics in the main method, then spending some time to try to make it modular. The main methods in the program still are not fully modular as they call each other but that can easily be edited if I require them to be changed.

As usual with these logs, I like to compare my findings in C++ with what I already know with Java, here are some things I noted today:

#### Passing parameters
Passing parameters to different methods works exactly the same in both languages, it did take me some time to work out how structs were passed, it turns out that they work similar in this respect to arrays in Java, another thing I found out was that using floats was tricky and should be avoided in favour of integers.

#### String comparison
I was surprised earlier when I went to compare strings using a switch and Visual Studio throwing an error, after a quick search I found out that strings cannot be used in switch statements like they can in java. Another thing that makes string comparison in C++ awkward is the lack of a case insensitive function like java, this makes it harder to check if strings are the same regardless of their case.

#### Finding out how many items are in an enum
Another thing that is super simple in Java compared to C++ is finding out how many items there are in an enum, Java has an easy function you can use to find the answer to this, C++ does not seem to have a tool like this at all.

#### Taking String input
In Java, Scanner takes the input from a whole line in regards to strings, in C++ cin will cut a string with a space or a line break and leave the rest of the string in the input buffer, so special measures have to be put in place to capture all the desired material and remove the unwanted material from the input buffer.

#### Forward Declaration
Having to forward declare every method that could be used somewhere before it is placed in the file is super annoying. In Java, a method can be accessed no matter where it is in the file. In C++ if you need to use a method and it is below where the current operation is taking place and it hasnt been forward declared it will throw an error.

#### String Concatenation
In Java you can concatenate any type together in a string with "+", in C++ you can concatenate strings together with "+" but to concatenate with other types you have to use "<<". 

To create the random generator part of the program, I used a third-party random library made by Effolkronium, the link to this can be found on the resources page of this repo. This was suggested by the learncpp.com tutorial I have been following. I am glad that I chose to use this tutorial over any of the popular books for learning C++ as many of them are out of date and this tutorial has taught me useful features up until C++17. Learning how to use Cmake will be important for me as it will make using 3rd party libraries easier, today I just copied in the library which is a bad way to do it.

While writing todays log I noticed an improvement that could be made to my code, In the original version I was initialising the class structs over 4 lines, whilst looking over my code to write about it in the log, I remembered that I could initialise all of the values in one line. This removed 16 lines of redundant code. My code can definitely be improved on with the use of Arrays and maps, there are also a few new features I would like to add that use these concepts. The next chapter in the learncpp tutorial covers Arrays, pointers, and memory management among a few other important features of C++, so I will probably update this program after I have made my way through that.

Some features I would like to add are:

* Ability to have more than one character
* Ability to re-roll character stats
* Ability to add user created classes and items
* Ability to add specific items to a character
* Allow more than just a characters first name

### Files edited today
* [Character Generator](https://github.com/ZenoxSphere/ZS_100_Days_Of_Code/blob/master/Code/Character_Generator/Character_Generator/Character_Generator.cpp)
### Time spent
Today - 3 hour 10 minutes

Today's Logs - 1 hour 41 minutes

In Total - 14 hours 55 minutes
### Music Listened to
[Unleash The Archers - Apex](https://open.spotify.com/album/505PSAdJ9BVuKUZLuhXVFc?si=B1KcGbCRTZGY20UlQ7NVWw) (Again)

[Avenged Sevenfold - Waking the Fallen : Resurrected](https://open.spotify.com/album/6V3hjAUhRZU5aLeNNxTOUo?si=3LXWwvJERFu3pPV-oxyleg)