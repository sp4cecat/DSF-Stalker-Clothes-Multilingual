# Instructions for Use

This is a drop-in patch for the DayZ mod "DSF Stalker Clothes" ([https://steamcommunity.com/sharedfiles/filedetails/?id=3013751191](https://steamcommunity.com/sharedfiles/filedetails/?id=3013751191))

It is not a stand-alone mod. You must first unpack the original "DSF Stalker Clothes" mod and then copy the contents of this repository over the top.

## Step 1

Unpack the "DSF Stalker Clothes" mod. If you don't know how \- Google or Chat GPT are your friend.

## Step 2

Delete all config.\* files (config.bin, config.cpp, config.bin.cpp)

## Step 3

Copy the contents of this repo over the top of the unpacked files.

## Step 4

Repack your own tidy .pbos files

# What This Code Does

DayZ uses a 'stringtable' to provide language translations for most of the text you see in the game. You'll see the stringtable.csv file at the root of the SFM and SFM\_2 directories.

To implement that, it uses 'tokens' where the text should be. For example:

 displayName="$STR\_CfgVehicles\_SFM\_CS3AHelmet10";

.. instead of ..

displayName="ChN3-A Helmet";

I've used a script to:

 a) Scan through the files looking for the original Russian, 

b) Swapped out the text for the language token,

c) Create an entry in the stringtable.csv file with the original static text.

d) Used another script to go through that file and translate entries for the other language columns
