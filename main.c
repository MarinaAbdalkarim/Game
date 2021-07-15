#include <allegro.h>
// Final Project - Sam & Max
// Marina Abdalkarim
#include <string>
#include <iostream>
#include <cstdlib>
#include <cmath>
#include <time.h>
#include <stdio.h>
using namespace std;
void init();
void deinit();

int main() 
{
	init();
	MIDI *open = load_midi("C:\\Users\\US\\Desktop\\Game\\Midi\\Opening.mid");
    // MIDI *open = load_midi("C:\\Users\\US\\Desktop\\Game\\Midi\\Opening.mid");
    MIDI *offices = load_midi("C:\\Users\\US\\Desktop\\Game\\Midi\\Office Theme.mid");
    MIDI *beep = load_midi("C:\\Users\\US\\Desktop\\Game\\Midi\\beep.mid");
    MIDI *alley = load_midi("C:\\Users\\US\\Desktop\\Game\\Midi\\Alley.mid");
    MIDI *mart = load_midi("C:\\Users\\US\\Desktop\\Game\\Midi\\Doom Mart.mid");
    MIDI *bar = load_midi("C:\\Users\\US\\Desktop\\Game\\Midi\\Drinkey's.mid");
    MIDI *ending = load_midi("C:\\Users\\US\\Desktop\\Game\\Midi\\ending.mid");
    MIDI *meal = load_midi("C:\\Users\\US\\Desktop\\Game\\Midi\\Le Crepe.mid");
    MIDI *mus = load_midi("C:\\Users\\US\\Desktop\\Game\\Midi\\Museum.mid");
    MIDI *room = load_midi("C:\\Users\\US\\Desktop\\Game\\Midi\\Storage.mid");
    MIDI *out = load_midi("C:\\Users\\US\\Desktop\\Game\\Midi\\Street.mid");
    set_volume(255, 255);
    BITMAP *cursor = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Objects 2\\cursor.bmp", NULL);
	BITMAP *buffer;
    const char* offic = "C:\\Users\\US\\Desktop\\Game\\Locations2\\office3.bmp";
    const char* opening = "C:\\Users\\US\\Desktop\\Game\\Locations2\\TitleCard.bmp";
    BITMAP *title = load_bitmap(opening, NULL);
    BITMAP *office = load_bitmap(offic, NULL);
    BITMAP *end = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Locations2\\Ending Card.bmp", NULL);
    BITMAP *sam = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Characters 2\\Sam2.bmp", NULL);
    BITMAP *max = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Characters 2\\maxr.bmp", NULL);
    BITMAP *phone = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Locations2\\phone desk1.bmp", NULL);
    BITMAP *outside = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Locations2\\streetview1.bmp", NULL);
    BITMAP *warehouse = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Locations2\\Back Alley1.bmp", NULL);
    BITMAP *warehouse2 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Locations2\\Back Alley2.bmp", NULL);
    BITMAP *drinkey = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Locations2\\bar1.bmp", NULL);
    BITMAP *lacrepe = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Locations2\\la crepe2.bmp", NULL);
    BITMAP *lacrepe2 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Locations2\\restaurant in1.bmp", NULL);
    BITMAP *museum = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Locations2\\museum1.bmp", NULL);
    BITMAP *store = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Locations2\\store1.bmp", NULL);
    BITMAP *storage = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Locations2\\storage1.bmp", NULL);
    BITMAP *storage2 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Locations2\\storage2.bmp", NULL);
    BITMAP *keypad = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Locations2\\keypad1.bmp", NULL);
	BITMAP *next = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Objects 2\\next.bmp", NULL);
    BITMAP *sam_begin1 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\Sam_begin1.bmp", NULL);
    BITMAP *max_begin1 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\Max_begin1.bmp", NULL);
    BITMAP *sam_begin2 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\Sam_begin2.bmp", NULL);
    BITMAP *phone_begin1 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\Phone_begin1.bmp", NULL);
    BITMAP *max_begin2 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\Max_begin2.bmp", NULL);
    BITMAP *chuck_0 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\chuck_0.bmp", NULL);
    BITMAP *chuck_11 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\chuck_1.1.bmp", NULL);
    BITMAP *chuck_12 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\chuck_1.2.bmp", NULL);
    BITMAP *chuck_21 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\chuck_2.1.bmp", NULL);
    BITMAP *chuck_22 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\chuck_2.2.bmp", NULL);
    BITMAP *chuck_23 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\chuck_2.3.bmp", NULL);
    BITMAP *chuck_24 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\chuck_2.4.bmp", NULL);
    BITMAP *chuck_cupcake1 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\chuck_cupcake1.bmp", NULL);
    BITMAP *chuck_cupcake2 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\chuck_cupcake2.bmp", NULL);
    BITMAP *chuck_drink = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\chuck_drink.bmp", NULL);
    BITMAP *dave_0 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\dave_0.bmp", NULL);
    BITMAP *dave_11 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\dave_1.1.bmp", NULL);
    BITMAP *dave_12 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\dave_1.2.bmp", NULL);
    BITMAP *dave_21 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\dave_2.1.bmp", NULL);
    BITMAP *dave_22 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\dave_2.2.bmp", NULL);
    BITMAP *dave_23 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\dave_2.3.bmp", NULL);
    BITMAP *dave_24 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\dave_2.4.bmp", NULL);
    BITMAP *dave_25 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\dave_2.5.bmp", NULL);
    BITMAP *dave_26 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\dave_2.6.bmp", NULL);
    BITMAP *dave_card = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\dave_card.bmp", NULL);
    BITMAP *janice_0 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\janice_0.bmp", NULL);
    BITMAP *janice_11 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\janice_1.1.bmp", NULL);
    BITMAP *janice_12 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\janice_1.2.bmp", NULL);
    BITMAP *janice_13 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\janice_1.3.bmp", NULL);
    BITMAP *janice_21 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\janice_2.1.bmp", NULL);
    BITMAP *janice_22 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\janice_2.2.bmp", NULL);
    BITMAP *janice_23 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\janice_2.3.bmp", NULL);
    BITMAP *janice_24 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\janice_2.4.bmp", NULL);
    BITMAP *janice_25 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\janice_2.5.bmp", NULL);
    BITMAP *janice_31 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\janice_3.1.bmp", NULL);
    BITMAP *janice_32 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\janice_3.2.bmp", NULL);
    BITMAP *janice_end1 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\janice_end1.bmp", NULL);
    BITMAP *janice_end2 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\janice_end2.bmp", NULL);
    BITMAP *jeff_0 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\Jeff_0.bmp", NULL);
    BITMAP *jeff_11 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\Jeff_1.1.bmp", NULL);
    BITMAP *jeff_12 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\Jeff_1.2.bmp", NULL);
    BITMAP *jeff_21 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\Jeff_2.1.bmp", NULL);
    BITMAP *jeff_22 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\Jeff_2.2.bmp", NULL);
    BITMAP *jeff_23 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\Jeff_2.3.bmp", NULL);
    BITMAP *jeff_24 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\Jeff_2.4.bmp", NULL);
    BITMAP *jeff_25 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\Jeff_2.5.bmp", NULL);
    BITMAP *jeff_call1 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\Jeff_call1.bmp", NULL);
    BITMAP *jeff_call2 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\Jeff_call2.bmp", NULL);
    BITMAP *jeff_call3 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\Jeff_call3.bmp", NULL);
    BITMAP *jimmy_01 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\jimmy_0.1.bmp", NULL);
    BITMAP *jimmy_02 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\jimmy_0.2.bmp", NULL);
    BITMAP *jimmy_11 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\jimmy_1.1.bmp", NULL);
    BITMAP *jimmy_12 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\jimmy_1.2.bmp", NULL);
    BITMAP *jimmy_21 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\jimmy_2.1.bmp", NULL);
    BITMAP *jimmy_22 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\jimmy_2.2.bmp", NULL);
    BITMAP *jimmy_23 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\jimmy_2.3.bmp", NULL);
    BITMAP *jimmy_31 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\jimmy_3.1.bmp", NULL);
    BITMAP *jimmy_drink1 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\jimmy_drink1.bmp", NULL);
    BITMAP *jimmy_drink2 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\jimmy_drink2.bmp", NULL);
    BITMAP *jimmy_drink3 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\jimmy_drink3.bmp", NULL);
    BITMAP *jimmy_drink4 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\jimmy_drink4.bmp", NULL);
    BITMAP *max_ants = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\Max_ants.bmp", NULL);
    BITMAP *max_begin3 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\Max_begin3.bmp", NULL);
    BITMAP *max_cardoor = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\Max_cardoor.bmp", NULL);
    BITMAP *max_cash = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\Max_cash.bmp", NULL);
    BITMAP *max_chuck11 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\Max_chuck1.1.bmp", NULL);
    BITMAP *max_chuck12 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\Max_chuck1.2.bmp", NULL);
    BITMAP *max_chuck21 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\Max_chuck2.1.bmp", NULL);
    BITMAP *max_chuck22 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\Max_chuck2.2.bmp", NULL);
    BITMAP *max_cup = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\Max_cup.bmp", NULL);
    BITMAP *max_darts = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\Max_darts.bmp", NULL);
    BITMAP *max_dave0 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\Max_dave0.bmp", NULL);
    BITMAP *max_dave11 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\Max_dave1.1.bmp", NULL);
    BITMAP *max_dave21 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\Max_dave2.1.bmp", NULL);
    BITMAP *max_dave22 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\Max_dave2.2.bmp", NULL);
    BITMAP *max_doom = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\Max_doom.bmp", NULL);
    BITMAP *max_dump = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\Max_dump.bmp", NULL);
    BITMAP *max_end1 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\Max_end1.bmp", NULL);
    BITMAP *max_end2 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\Max_end2.bmp", NULL);
    BITMAP *max_graffiti = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\Max_graffiti.bmp", NULL);
    BITMAP *max_gumball = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\Max_gumball.bmp", NULL);
    BITMAP *max_janice0 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\Max_janice0.bmp", NULL);
    BITMAP *max_janice11 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\Max_janice1.1.bmp", NULL);
    BITMAP *max_janice21 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\Max_janice2.1.bmp", NULL);
    BITMAP *max_janice22 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\Max_janice2.2.bmp", NULL);
    BITMAP *max_janice31 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\Max_janice3.1.bmp", NULL);
    BITMAP *max_jeff0 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\Max_jeff0.bmp", NULL);
    BITMAP *max_jeff11 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\Max_jeff1.1.bmp", NULL);
    BITMAP *max_jeff12 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\Max_jeff1.2.bmp", NULL);
    BITMAP *max_jeff21 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\Max_jeff2.1.bmp", NULL);
    BITMAP *max_jeff22 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\Max_jeff2.2.bmp", NULL);
    BITMAP *max_jewel = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\Max_jewel.bmp", NULL);
    BITMAP *max_jimmy01 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\Max_jimmy0.1.bmp", NULL);
    BITMAP *max_jimmy02 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\Max_jimmy0.2.bmp", NULL);
    BITMAP *max_jimmy11 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\Max_jimmy1.1.bmp", NULL);
    BITMAP *max_jimmy21 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\Max_jimmy2.1.bmp", NULL);
    BITMAP *max_jimmy22 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\Max_jimmy2.2.bmp", NULL);
    BITMAP *max_jimmy31 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\Max_jimmy3.1.bmp", NULL);
    BITMAP *max_jimmydrink1 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\Max_jimmydrink1.bmp", NULL);
    BITMAP *max_junk = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\Max_junk.bmp", NULL);
    BITMAP *max_meter = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\Max_meter.bmp", NULL);
    BITMAP *max_muffin = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\Max_muffin.bmp", NULL);
    BITMAP *max_murray11 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\Max_murray1.1.bmp", NULL);
    BITMAP *max_murray21 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\Max_murray2.1.bmp", NULL);
    BITMAP *max_murray31 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\Max_murray3.1.bmp", NULL);
    BITMAP *max_plant = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\Max_plant.bmp", NULL);
    BITMAP *max_puzzle = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\Max_puzzle.bmp", NULL);
    BITMAP *max_rathole = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\Max_rathole.bmp", NULL);
    BITMAP *max_rose = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\Max_rose.bmp", NULL);
    BITMAP *max_rose2 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\Max_rose2.bmp", NULL);
    BITMAP *max_sandwich = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\Max_sandwich.bmp", NULL);
    BITMAP *max_skull = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\Max_skull.bmp", NULL);
    BITMAP *max_trash = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\Max_trash.bmp", NULL);
    BITMAP *max_tv = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\Max_tv.bmp", NULL);
    BITMAP *max_zeldron11 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\Max_zeldron1.1.bmp", NULL);
    BITMAP *max_zeldron12 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\Max_zeldron1.2.bmp", NULL);
    BITMAP *max_zeldron21 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\Max_zeldron2.1.bmp", NULL);
    BITMAP *max_zeldron31 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\Max_zeldron3.1.bmp", NULL);
    BITMAP *murray01 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\murray_0.1.bmp", NULL);
    BITMAP *murray02 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\murray_0.2.bmp", NULL);
    BITMAP *murray11 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\murray_1.1.bmp", NULL);
    BITMAP *murray12 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\murray_1.2.bmp", NULL);
    BITMAP *murray21 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\murray_2.1.bmp", NULL);
    BITMAP *murray22 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\murray_2.2.bmp", NULL);
    BITMAP *murray23 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\murray_2.3.bmp", NULL);
    BITMAP *murray24 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\murray_2.4.bmp", NULL);
    BITMAP *murray25 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\murray_2.5.bmp", NULL);
    BITMAP *murray31 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\murray_3.1.bmp", NULL);
    BITMAP *murray32 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\murray_3.2.bmp", NULL);
    BITMAP *murray33 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\murray_3.3.bmp", NULL);
    BITMAP *phone_begin2 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\Phone_begin2.bmp", NULL);
    BITMAP *sam_ants = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\Sam_ants.bmp", NULL);
    BITMAP *sam_ants2 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\Sam_ants2.bmp", NULL);
    BITMAP *sam_begin3 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\Sam_begin3.bmp", NULL);
    BITMAP *sam_begin4 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\Sam_begin4.bmp", NULL);
    BITMAP *sam_begin5 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\Sam_begin5.bmp", NULL);
    BITMAP *sam_cash = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\Sam_cash.bmp", NULL);
    BITMAP *sam_chuck11 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\Sam_chuck1.1.bmp", NULL);
    BITMAP *sam_chuck12 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\Sam_chuck1.2.bmp", NULL);
    BITMAP *sam_chuck13 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\Sam_chuck1.3.bmp", NULL);
    BITMAP *sam_chuck21 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\Sam_chuck2.1.bmp", NULL);
    BITMAP *sam_chuck22 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\Sam_chuck2.2.bmp", NULL);
    BITMAP *sam_chuck23 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\Sam_chuck2.3.bmp", NULL);
    BITMAP *sam_cup = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\Sam_cup.bmp", NULL);
    BITMAP *sam_dairy = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\Sam_dairy.bmp", NULL);
    BITMAP *sam_darts = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\Sam_darts.bmp", NULL);
    BITMAP *sam_dave11 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\Sam_dave1.1.bmp", NULL);
    BITMAP *sam_dave12 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\Sam_dave1.2.bmp", NULL);
    BITMAP *sam_dave13 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\Sam_dave1.3.bmp", NULL);
    BITMAP *sam_dave21 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\Sam_dave2.1.bmp", NULL);
    BITMAP *sam_dave22 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\Sam_dave2.2.bmp", NULL);
    BITMAP *sam_dave23 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\Sam_dave2.3.bmp", NULL);
    BITMAP *sam_dave24 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\Sam_dave2.4.bmp", NULL);
    BITMAP *sam_doom = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\Sam_doom.bmp", NULL);
    BITMAP *sam_dump = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\Sam_dump.bmp", NULL);
    BITMAP *sam_end1 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\Sam_end1.bmp", NULL);
    BITMAP *sam_end2 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\Sam_end2.bmp", NULL);
    BITMAP *sam_end3 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\Sam_end3.bmp", NULL);
    BITMAP *sam_graffiti = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\Sam_graffiti.bmp", NULL);
    BITMAP *sam_graffiti2 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\Sam_graffiti2.bmp", NULL);
    BITMAP *sam_grain = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\Sam_grain.bmp", NULL);
    BITMAP *sam_grain2 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\Sam_grain2.bmp", NULL);
    BITMAP *sam_gumball = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\Sam_gumball.bmp", NULL);
    BITMAP *sam_janice0 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\Sam_janice0.bmp", NULL);
    BITMAP *sam_janice11 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\Sam_janice1.1.bmp", NULL);
    BITMAP *sam_janice12 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\Sam_janice1.2.bmp", NULL);
    BITMAP *sam_janice13 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\Sam_janice1.3.bmp", NULL);
    BITMAP *sam_janice21 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\Sam_janice2.1.bmp", NULL);
    BITMAP *sam_janice22 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\Sam_janice2.2.bmp", NULL);
    BITMAP *sam_janice31 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\Sam_janice3.1.bmp", NULL);
    BITMAP *sam_janice32 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\Sam_janice3.2.bmp", NULL);
    BITMAP *sam_jeff0 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\Sam_jeff0.bmp", NULL);
    BITMAP *sam_jeff11 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\Sam_jeff1.1.bmp", NULL);
    BITMAP *sam_jeff12 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\Sam_jeff1.2.bmp", NULL);
    BITMAP *sam_jeff21 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\Sam_jeff2.1.bmp", NULL);
    BITMAP *sam_jeff22 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\Sam_jeff2.2.bmp", NULL);
    BITMAP *sam_jeff23 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\Sam_jeff2.3.bmp", NULL);
    BITMAP *sam_jeffcall1 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\Sam_jeffcall1.bmp", NULL);
    BITMAP *sam_jeffcall2 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\Sam_jeffcall2.bmp", NULL);
    BITMAP *sam_jewel = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\Sam_jewel.bmp", NULL);
    BITMAP *sam_jimmy0 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\Sam_jimmy0.bmp", NULL);
    BITMAP *sam_jimmy11 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\Sam_jimmy1.1.bmp", NULL);
    BITMAP *sam_jimmy21 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\Sam_jimmy2.1.bmp", NULL);
    BITMAP *sam_jimmy22 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\Sam_jimmy2.2.bmp", NULL);
    BITMAP *sam_jimmy23 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\Sam_jimmy2.3.bmp", NULL);
    BITMAP *sam_jimmy31 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\Sam_jimmy3.1.bmp", NULL);
    BITMAP *sam_jimmydrink1 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\Sam_jimmydrink1.bmp", NULL);
    BITMAP *sam_jimmydrink2 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\Sam_jimmydrink2.bmp", NULL);
    BITMAP *sam_junk = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\Sam_junk.bmp", NULL);
    BITMAP *sam_meter = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\Sam_meter.bmp", NULL);
    BITMAP *sam_muffin = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\Sam_muffin.bmp", NULL);
    BITMAP *sam_muffin2 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\Sam_muffin2.bmp", NULL);
    BITMAP *sam_murray0 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\Sam_murray0.bmp", NULL);
    BITMAP *sam_murray11 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\Sam_murray1.1.bmp", NULL);
    BITMAP *sam_murray12 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\Sam_murray1.2.bmp", NULL);
    BITMAP *sam_murray21 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\Sam_murray2.1.bmp", NULL);
    BITMAP *sam_murray31 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\Sam_murray3.1.bmp", NULL);
    BITMAP *sam_murray32 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\Sam_murray3.2.bmp", NULL);
    BITMAP *sam_murray33 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\Sam_murray3.3.bmp", NULL);
    BITMAP *sam_note = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\Sam_note.bmp", NULL);
    BITMAP *sam_pedestal = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\Sam_pedestal.bmp", NULL);
    BITMAP *sam_plant = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\Sam_plant.bmp", NULL);
    BITMAP *sam_plant2 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\Sam_plant2.bmp", NULL);
    BITMAP *sam_puzzle = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\Sam_puzzle.bmp", NULL);
    BITMAP *sam_rathole = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\Sam_rathole.bmp", NULL);
    BITMAP *sam_rose = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\Sam_rose.bmp", NULL);
    BITMAP *sam_rose2 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\Sam_rose2.bmp", NULL);
    BITMAP *sam_sandwich = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\Sam_sandwich.bmp", NULL);
    BITMAP *sam_sandwich2 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\Sam_sandwich2.bmp", NULL);
    BITMAP *sam_skull = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\Sam_skull.bmp", NULL);
    BITMAP *sam_trash = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\Sam_trash.bmp", NULL);
    BITMAP *sam_tv = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\Sam_tv.bmp", NULL);
    BITMAP *sam_textbox = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\Sam_textbox.bmp", NULL);
    BITMAP *sam_textbox2 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\Sam_textbox2.bmp", NULL);
    BITMAP *sam_textbox3 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\Sam_textbox.bmp", NULL);
    BITMAP *sam_textbox4 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\Sam_textbox.bmp", NULL);
    BITMAP *sam_textbox5 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\Sam_textbox.bmp", NULL);
    BITMAP *sam_textbox6 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\Sam_textbox.bmp", NULL);
    BITMAP *sam_textbox7 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\Sam_textbox.bmp", NULL);
    BITMAP *sam_textbox8 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\Sam_textbox.bmp", NULL);
    BITMAP *sam_zeldron11 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\Sam_zeldron1.1.bmp", NULL);
    BITMAP *sam_zeldron12 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\Sam_zeldron1.2.bmp", NULL);
    BITMAP *sam_zeldron13 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\Sam_zeldron1.3.bmp", NULL);
    BITMAP *sam_zeldron21 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\Sam_zeldron2.1.bmp", NULL);
    BITMAP *sam_zeldron22 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\Sam_zeldron2.2.bmp", NULL);
    BITMAP *sam_zeldron23 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\Sam_zeldron2.3.bmp", NULL);
    BITMAP *sam_zeldron24 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\Sam_zeldron2.4.bmp", NULL);
    BITMAP *sam_zeldron31 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\Sam_zeldron3.1.bmp", NULL);
    BITMAP *sam_zeldron32 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\Sam_zeldron3.2.bmp", NULL);
    BITMAP *sam_vodka = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\Sam_vodka.bmp", NULL);
    BITMAP *zeldron0 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\Zeldron_0.bmp", NULL);
    BITMAP *zeldron11 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\Zeldron_1.1.bmp", NULL);
    BITMAP *zeldron12 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\Zeldron_1.2.bmp", NULL);
    BITMAP *zeldron13 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\Zeldron_1.3.bmp", NULL);
    BITMAP *zeldron14 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\Zeldron_1.4.bmp", NULL);
    BITMAP *zeldron21 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\Zeldron_2.1.bmp", NULL);
    BITMAP *zeldron22 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\Zeldron_2.2.bmp", NULL);
    BITMAP *zeldron23 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\Zeldron_2.3.bmp", NULL);
    BITMAP *zeldron24 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\Zeldron_2.4.bmp", NULL);
    BITMAP *zeldron31 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\Zeldron_3.1.bmp", NULL);
    BITMAP *zeldron32 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\Zeldron_3.2.bmp", NULL);
    BITMAP *zeldron33 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\Zeldron_3.3.bmp", NULL);
    BITMAP *zeldronmuffin = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\Zeldron_muffin.bmp", NULL);
    BITMAP *zeldronvodka1 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\Zeldron_vodka1.bmp", NULL);
    BITMAP *zeldronvodka2 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Dialogue2\\Zeldron_vodka2.bmp", NULL);
    BITMAP *trashclosed = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Objects 2\\Trashcan(closed).bmp", NULL);
    BITMAP *trashopen = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Objects 2\\Trashcan(open).bmp", NULL);
    BITMAP *money = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Objects 2\\money1.bmp", NULL);
    BITMAP *cup = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Objects 2\\cup1.bmp", NULL);
    BITMAP *money2 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Objects 2\\money2.bmp", NULL);
    BITMAP *cup2 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Objects 2\\cup2.bmp", NULL);
    BITMAP *money3 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Objects 2\\money.bmp", NULL);
    BITMAP *cup3 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Objects 2\\cup.bmp", NULL);
    BITMAP *muffin = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Objects 2\\muffin.bmp", NULL);
    BITMAP *muffin1 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Objects 2\\muffin1.bmp", NULL);
    BITMAP *muffin2 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Objects 2\\muffin2.bmp", NULL);
    BITMAP *note1 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Objects 2\\note1.bmp", NULL);
    BITMAP *note2 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Objects 2\\note2.bmp", NULL);
    BITMAP *bottle1 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Objects 2\\bottle1.bmp", NULL);
    BITMAP *bottle2 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Objects 2\\bottle.bmp", NULL);
    BITMAP *jewel = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Objects 2\\Jewel.bmp", NULL);
    BITMAP *jewel1 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Objects 2\\jewel1.bmp", NULL);
    BITMAP *jewel2 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Objects 2\\Jewel2.bmp", NULL);
    BITMAP *card1 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Objects 2\\Card.bmp", NULL);
    BITMAP *card2 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Objects 2\\Card2.bmp", NULL);
    BITMAP *jeff2 = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Characters 2\\jeff2.bmp", NULL);
    BITMAP *fiven = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Objects 2\\5.bmp", NULL);
    BITMAP *backer = load_bitmap("C:\\Users\\US\\Desktop\\Game\\Objects 2\\back.bmp", NULL);
    int timeStart;
    int red;
    timeStart = clock();
    BITMAP **area = &title;
    BITMAP **ware = &warehouse;
	buffer = create_bitmap(SCREEN_W, SCREEN_H);
	BITMAP **primary_buffer = &buffer;
	draw_sprite(screen, title, 900, 600);
	// BITMAP **trythis = &back;
	int h = title->h;
	int w = title->w;
	int h1 = office->h;
	int w1 = office->w;
	int h2 = phone->h;
	int w2 = phone->w;
	int h3 = outside->h;
	int w3 = outside->w;
	int h4 = museum->h;
	int w4 = museum->w;
	int h5 = store->h;
	int w5 = store->w;
	int h6 = drinkey->h;
	int w6 = drinkey->w;
	int h7 = lacrepe->h;
	int w7 = lacrepe->w;
	int h8 = lacrepe2->h;
	int w8 = lacrepe2->w;
	int h9 = warehouse->h;
	int w9 = warehouse->w;
	int h10 = storage->h;
	int w10 = storage->w;
	int h102 = storage2->h;
	int w102 = storage2->w;
	int h12 = end->h;
	int w12 = end->w;
	red = makecol(255, 0, 0);
	int invis;
	invis = makecol(255, 0, 255);
	int blue = makecol(0, 163, 232);
	int scr = 0;
	// stretch_blit(title,buffer,0,0,w,h,0,0,SCREEN_W,SCREEN_H);
	int yellow;
	yellow = makecol(255, 255, 0);
	int p = yellow;
	// stretch_blit(*area,buffer,0,0,w,h,0,0,SCREEN_W,SCREEN_H);
	int gamew = SCREEN_H;
	int black = makecol(0, 0, 0);
	int p1 = 0;
	int dia = 0;
	int b = 0;
	int cm = yellow;
	int locations = 2;
	int num = 0;
	int one = 0, two = 0, three = 0, four = 0, five = 0, six = 0, seven = 0, eight = 0, nine = 0, zero = 0;
	int jeff = 0;
	int trash = 0;
	int cash = 0, drink = 0;
	int item = 0;
	int paper = 0, sweet = 0, vodka = 0;
	int gem = 0, card = 0, bottle = 0;
	bool cashx = false, drinkx = false, paperx = false, sweetx = false, vodkax = false, gemx = false, cardx = false, bottlex = false;
	int rat = 0;
	int janice = 0, murray = 0;
	int place = 0, ask = 0;
	int grant = 0;
	int lock = 0;
	int win = 0;
	int code = 0;
	int travel = 0;
	while (!key[KEY_ESC]) 
    {
          // rectfill(screen, 0, 0, 900, 600, black);
          if (item == 0)
          {
              draw_sprite(screen, cursor, mouse_x, mouse_y);
              blit(screen, screen, 0, 0, 0, 0, cursor->w, cursor->h);
              cashx = false; 
              drinkx = false; 
              paperx = false; 
              sweetx = false; 
              vodkax = false; 
              gemx = false; 
              cardx = false; 
              bottlex = false;
          }
          
		  stretch_blit(*area,screen,0,0,w,h,0,0,SCREEN_W,gamew);
		  // play_sample(open, 128, 128, 1000, 0);
		  // play_midi(open, 0);
		  // rectfill(screen, 0, 0, 200, 200, red);
		  if (mouse_x >= 20 && mouse_x <= 470 && mouse_y >= 340 && mouse_y <= 520 && scr == 0)
		  {
                      rect(screen, 20, 470, 340, 520, red);
                      if (mouse_b)
                      {
                                  area = &office;
                                  h = h1;
                                  w = w1;
                                  scr = 1;
                                  gamew = 400;
                                  draw_sprite(screen, backer, 0, 400);
                                  dia = 1;
                      }
          }
          
          // textprintf(screen, font, 300, 560, yellow, "Mouse X:%i", mouse_x);
          // textprintf(screen, font, 300, 580, yellow, "Mouse Y:%i", mouse_y);
          // textprintf(screen, font, 392, 580, red, "->", mouse_y);
          // textprintf(screen, font, 470, 580, red, "<-", mouse_y);
          if (scr == 0)
          {
          	play_midi(open, 0);
		  }
          if (scr == 1)
          {
                // office
                // stop_sample(open);
                // play_sample(offices, 128, 128, 1000, 0);
                play_midi(offices, 0);
                if (dia == 1)
                {
                        draw_sprite(screen, sam_begin1, 0, 400);
                        textprintf(sam_begin1, font, 410, 180, cm, "Next ->", mouse_y);
                }
                if (dia == 0)
                {
                        // draw_sprite(screen, sam_begin1, 0, 400);
                        // textprintf(screen, font, 410, 580, cm, "Next ->", mouse_y);
                        // rectfill(screen, 0, 400, 900, 600, black);
                        draw_sprite(screen, backer, 0, 400);
                }
                if (mouse_x >= 379 && mouse_x <= 448 && mouse_y >= 570 && mouse_y <= 600)
                {
                            // Sam box
                            cm = red;
                            if (mouse_b && dia == 1)
                            {
                                dia = 2;  
                            }
                            if (mouse_b && dia == 3)
                            {
                                dia = 4;  
                            }
                            if (mouse_b && dia == 6)
                            {
                                dia = 7;  
                            }
                            if (mouse_b && dia == 8)
                            {
                                dia = 9;  
                            }
                            if (mouse_b && dia == 10)
                            {
                                dia = 11;   
                            }
                            if (mouse_b && dia == 20)
                            {
                                dia = 21;   
                            }
                            if (mouse_b && dia == 30)
                            {
                                dia = 31;   
                            }
                            if (mouse_b && dia == 32)
                            {
                                dia = 0;   
                            }
                            if (mouse_b && dia == 40)
                            {
                                dia = 41;   
                            }
                            if (mouse_b && dia == 42)
                            {
                                dia = 0;   
                            }
                            if (mouse_b && dia == 50)
                            {
                                dia = 51;   
                            }
                }
                if (mouse_x >= 484 && mouse_x <= 550 && mouse_y >= 570 && mouse_y <= 600)
                {
                            // Max Box
                            cm = red;
                            if (mouse_b && dia == 2)
                            {
                                dia = 3;   
                            }
                            if (mouse_b && dia == 5)
                            {
                                dia = 6;   
                            }
                            if (mouse_b && dia == 9)
                            {
                                dia = 0;   
                            }
                            if (mouse_b && dia == 11)
                            {
                                dia = 0;   
                            }
                            if (mouse_b && dia == 21)
                            {
                                dia = 0;   
                            }
                            if (mouse_b && dia == 31)
                            {
                                dia = 32;   
                            }
                            if (mouse_b && dia == 41)
                            {
                                dia = 42;   
                            }
                            if (mouse_b && dia == 51)
                            {
                                dia = 0;   
                            }
                            if (mouse_b && dia == 60)
                            {
                                dia = 61;   
                                travel = 1;
                            }
                }
                if (mouse_x >= 430 && mouse_x <= 505 && mouse_y >= 570 && mouse_y <= 600)
                {
                            // Phone box
                            cm = red;
                            if (mouse_b && dia == 4)
                            {
                                dia = 5;  
                            }
                            if (mouse_b && dia == 7)
                            {
                                dia = 8;  
                            }
                }
                if (dia == 2)
                {
                        cm = yellow;
                        draw_sprite(screen, max_begin1, 0, 400);
                        textprintf(max_begin1, font, 510, 180, cm, "Next ->", mouse_y);
                }
                if (dia == 3)
                {
                        cm = yellow;
                        draw_sprite(screen, sam_begin2, 0, 400);
                        textprintf(sam_begin2, font, 410, 180, cm, "Next ->", mouse_y);
                        rectfill(screen, 480, 400, 900, 600, black);
                }
                if (dia == 4)
                {
                        cm = yellow;
                        draw_sprite(screen, phone_begin1, 0, 400);
                        textprintf(phone_begin1, font, 460, 180, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black);
                }
                if (dia == 5)
                {
                        cm = yellow;
                        draw_sprite(screen, max_begin2, 0, 400);
                        textprintf(max_begin2, font, 510, 180, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black);
                }
                if (dia == 6)
                {
                        cm = yellow;
                        draw_sprite(screen, sam_begin3, 0, 400);
                        textprintf(sam_begin3, font, 410, 180, cm, "Next ->", mouse_y);
                        rectfill(screen, 480, 400, 900, 600, black);
                }
                if (dia == 7)
                {
                        cm = yellow;
                        draw_sprite(screen, phone_begin2, 0, 400);
                        textprintf(phone_begin2, font, 460, 180, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black);
                }
                if (dia == 8)
                {
                        cm = yellow;
                        draw_sprite(screen, sam_begin5, 0, 400);
                        textprintf(sam_begin5, font, 410, 180, cm, "Next ->", mouse_y);
                        rectfill(screen, 480, 400, 900, 600, black);
                }
                if (dia == 9)
                {
                        cm = yellow;
                        draw_sprite(screen, max_begin3, 0, 400);
                        textprintf(max_begin3, font, 510, 180, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black);
                }
                if (dia == 10)
                {
                        cm = yellow;
                        draw_sprite(screen, sam_darts, 0, 400);
                        textprintf(sam_darts, font, 410, 180, cm, "Next ->", mouse_y);
                        rectfill(screen, 480, 400, 900, 600, black);
                }
                if (dia == 11)
                {
                        cm = yellow;
                        draw_sprite(screen, max_darts, 0, 400);
                        textprintf(max_darts, font, 510, 180, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black);
                }
                if (dia == 20)
                {
                        cm = yellow;
                        draw_sprite(screen, sam_tv, 0, 400);
                        textprintf(sam_tv, font, 410, 180, cm, "Next ->", mouse_y);
                        rectfill(screen, 480, 400, 900, 600, black);
                }
                if (dia == 21)
                {
                        cm = yellow;
                        draw_sprite(screen, max_tv, 0, 400);
                        textprintf(max_tv, font, 510, 180, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black);
                }
                if (dia == 30)
                {
                        cm = yellow;
                        draw_sprite(screen, sam_ants, 0, 400);
                        textprintf(sam_ants, font, 410, 180, cm, "Next ->", mouse_y);
                        rectfill(screen, 480, 400, 900, 600, black);
                }
                if (dia == 31)
                {
                        cm = yellow;
                        draw_sprite(screen, max_ants, 0, 400);
                        textprintf(max_ants, font, 510, 180, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black);
                }
                if (dia == 32)
                {
                        cm = yellow;
                        draw_sprite(screen, sam_ants2, 0, 400);
                        textprintf(sam_ants2, font, 410, 180, cm, "Next ->", mouse_y);
                        rectfill(screen, 480, 400, 900, 600, black);
                }
                if (dia == 40)
                {
                        cm = yellow;
                        draw_sprite(screen, sam_sandwich, 0, 400);
                        textprintf(sam_sandwich, font, 410, 180, cm, "Next ->", mouse_y);
                        rectfill(screen, 480, 400, 900, 600, black);
                }
                if (dia == 41)
                {
                        cm = yellow;
                        draw_sprite(screen, max_sandwich, 0, 400);
                        textprintf(max_sandwich, font, 510, 180, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black);
                }
                if (dia == 42)
                {
                        cm = yellow;
                        draw_sprite(screen, sam_sandwich2, 0, 400);
                        textprintf(sam_sandwich2, font, 410, 180, cm, "Next ->", mouse_y);
                        rectfill(screen, 480, 400, 900, 600, black);
                }
                if (dia == 50)
                {
                        cm = yellow;
                        draw_sprite(screen, sam_junk, 0, 400);
                        textprintf(sam_junk, font, 410, 180, cm, "Next ->", mouse_y);
                        rectfill(screen, 480, 400, 900, 600, black);
                }
                if (dia == 51)
                {
                        cm = yellow;
                        draw_sprite(screen, max_junk, 0, 400);
                        textprintf(max_junk, font, 510, 180, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black);
                }
                if (dia == 60)
                {
                        cm = yellow;
                        draw_sprite(screen, max_cardoor, 0, 400);
                        textprintf(max_cardoor, font, 510, 180, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black);
                }
                play_midi(offices, 0);
                if (mouse_x >= 0 && mouse_x <= 55 && mouse_y >= 216 && mouse_y <= 276 && dia == 0)
                {
                   textprintf(screen, font, 20, 233, yellow, "Phone", mouse_y);
                   if (mouse_b)
                   {
                                  scr = 2;
                                  gamew = 400;
                                  area = &phone;
                                  h = h2;
                                  w = w2;
                                  dia = 0;
                                  cm = yellow;
                                  item = 0;
                   }
                }
                if (mouse_x >= 320 && mouse_x <= 390 && mouse_y >= 92 && mouse_y <= 171 && dia == 0)
                {
                   textprintf(screen, font, 360, 133, yellow, "Darts", mouse_y);
                   if (mouse_b)
                   {
                       dia = 10;
                       item = 0;                                         
                   }
                }
                if (mouse_x >= 220 && mouse_x <= 330 && mouse_y >= 167 && mouse_y <= 222 && dia == 0)
                {
                   textprintf(screen, font, 280, 201, yellow, "TV", mouse_y);
                   if (mouse_b)
                   {
                       dia = 20;
                       item = 0;                                         
                   }
                }
                if (mouse_x >= 575 && mouse_x <= 652 && mouse_y >= 193 && mouse_y <= 253 && dia == 0)
                {
                   textprintf(screen, font, 611, 218, yellow, "Ant Farm", mouse_y);
                   if (mouse_b)
                   {
                       dia = 30;
                       item = 0;                                         
                   }
                }
                if (mouse_x >= 565 && mouse_x <= 612 && mouse_y >= 276 && mouse_y <= 310 && dia == 0)
                {
                   textprintf(screen, font, 590, 289, yellow, "Sandwich", mouse_y);
                   if (mouse_b)
                   {
                       dia = 40;
                       item = 0;                                         
                   }
                }
                if (mouse_x >= 670 && mouse_x <= 900 && mouse_y >= 0 && mouse_y <= 310 && dia == 0)
                {
                   textprintf(screen, font, 700, 170, yellow, "Random Junk", mouse_y);
                   if (mouse_b)
                   {
                       dia = 50;
                       item = 0;                                         
                   }
                }
                if (mouse_x >= 0 && mouse_x <= 73 && mouse_y >= 100 && mouse_y <= 200 && dia == 0)
                {
                   textprintf(screen, font, 37, 181, yellow, "Door", mouse_y);
                   if (mouse_b)
                   {
                       dia = 60;
                       item = 0;                                         
                   }
                }
                
          }
          if (scr == 2)
          {
                  // Phone
                  // textprintf(screen, font, 460, 36, yellow, "Num:%i", num);
                if (mouse_x >= 379 && mouse_x <= 448 && mouse_y >= 570 && mouse_y <= 600)
                {
                            // Sam box
                            cm = red;
                            if (mouse_b && dia == 2)
                            {
                                dia = 3;  
                            }
                            if (mouse_b && dia == 4)
                            {
                                dia = 5;  
                            }
                }
                if (mouse_x >= 471 && mouse_x <= 533 && mouse_y >= 570 && mouse_y <= 600)
                {
                            // Jeff box
                            cm = red;
                            if (mouse_b && dia == 1)
                            {
                                dia = 2;  
                            }
                            if (mouse_b && dia == 3)
                            {
                                dia = 4;  
                            }
                            if (mouse_b && dia == 5)
                            {
                                dia = 0;  
                            }
                }
                  if (dia == 0)
                  {
                        // rectfill(screen, 0, 400, 900, 600, black);
                        draw_sprite(screen, backer, 0, 400);
                  }
                  if (dia == 1)
                  {
                        // rectfill(*area, 0, 300, 580, 600, black);
                        draw_sprite(screen, jeff_call1, 0, 400);
                        textprintf(jeff_call1, font, 500, 180, cm, "Next ->", mouse_y);
                  }
                  if (dia == 2)
                  {
                        cm = yellow;
                        draw_sprite(screen, sam_jeffcall1, 0, 400);
                        textprintf(sam_jeffcall1, font, 410, 180, cm, "Next ->", mouse_y);
                        rectfill(screen, 480, 400, 900, 600, black);
                  }
                  if (dia == 3)
                  {
                        // rectfill(*area, 0, 300, 580, 600, black);
                        draw_sprite(screen, jeff_call2, 0, 400);
                        textprintf(jeff_call2, font, 500, 180, cm, "Next ->", mouse_y);
                  }
                  if (dia == 4)
                  {
                        cm = yellow;
                        draw_sprite(screen, sam_jeffcall2, 0, 400);
                        textprintf(sam_jeffcall2, font, 410, 180, cm, "Next ->", mouse_y);
                        rectfill(screen, 480, 400, 900, 600, black);
                  }
                  if (dia == 5)
                  {
                        // rectfill(*area, 0, 300, 580, 600, black);
                        draw_sprite(screen, jeff_call3, 0, 400);
                        textprintf(jeff_call3, font, 500, 180, cm, "Next ->", mouse_y);
                  }
                  if (mouse_x >= 0 && mouse_x <= 104 && mouse_y >= 310 && mouse_y <= 394 && dia == 0)
                  {
                              textprintf(screen, font, 48, 345, yellow, "Go Back", mouse_y);
                              if (mouse_b)
                              {
                                  area = &office;
                                  h = h1;
                                  w = w1;
                                  scr = 1;
                                  gamew = 400;
                                  rectfill(screen, 0, 400, 900, 600, black);
                                  zero = 0;
                                  one = 0;
                                  two = 0;
                                  three = 0;
                                  four = 0;
                                  five = 0;
                                  six = 0;
                                  seven = 0;
                                  eight = 0;
                                  nine = 0;
                                  item = 0;
                              }
                  }
                  if (mouse_x >= 530 && mouse_x <= 567 && mouse_y >= 205 && mouse_y <= 230 && dia == 0)
                  {
                              textprintf(screen, font, 560, 210, yellow, "1", mouse_y);
                              if (mouse_b)
                              {
                                   one = 1;
                                   item = 0;
								   play_midi(beep, 0);          
                              }
                  }
                  if (mouse_x >= 506 && mouse_x <= 551 && mouse_y >= 186 && mouse_y <= 212 && dia == 0)
                  {
                              textprintf(screen, font, 540, 193, yellow, "2", mouse_y);
                              if (mouse_b)
                              {
                                   two = 1;
								   item = 0;
								   play_midi(beep, 0);          
                              }
                  }
                  if (mouse_x >= 473 && mouse_x <= 519 && mouse_y >= 172 && mouse_y <= 197 && dia == 0)
                  {
                              textprintf(screen, font, 513, 182, yellow, "3", mouse_y);
                              if (mouse_b)
                              {
                                   three = 1;
                                   item = 0;          
								   play_midi(beep, 0); 
                              }
                  }
                  if (mouse_x >= 436 && mouse_x <= 480 && mouse_y >= 172 && mouse_y <= 196 && dia == 0)
                  {
                              textprintf(screen, font, 476, 182, yellow, "4", mouse_y);
                              if (mouse_b)
                              {
                                   four = 1;
                                   item = 0;          
								   play_midi(beep, 0); 
                              }
                  }
                  if (mouse_x >= 412 && mouse_x <= 448 && mouse_y >= 182 && mouse_y <= 205 && dia == 0)
                  {
                              textprintf(screen, font, 434, 189, yellow, "5", five);
                              if (mouse_b)
                              {
                                   five = 1;
                                   item = 0;          
								   play_midi(beep, 0); 
                              }
                  }
                  if (mouse_x >= 389 && mouse_x <= 425 && mouse_y >= 200 && mouse_y <= 224 && dia == 0)
                  {
                              textprintf(screen, font, 410, 210, yellow, "6", mouse_y);
                              if (mouse_b)
                              {
                                   six = 1; 
                                   item = 0;          
                                   play_midi(beep, 0);
                              }
                  }
                  if (mouse_x >= 379 && mouse_x <= 414 && mouse_y >= 225 && mouse_y <= 250 && dia == 0)
                  {
                              textprintf(screen, font, 398, 231, yellow, "7", mouse_y);
                              if (mouse_b)
                              {
                                   seven = 1;
                                   item = 0;          
								   play_midi(beep, 0); 
                              }
                  }
                  if (mouse_x >= 384 && mouse_x <= 419 && mouse_y >= 248 && mouse_y <= 274 && dia == 0)
                  {
                              textprintf(screen, font, 407, 258, yellow, "8", mouse_y);
                              if (mouse_b)
                              {
                                   eight = 1;
                                   item = 0;          
								   play_midi(beep, 0); 
                              }
                  }
                  if (mouse_x >= 406 && mouse_x <= 444 && mouse_y >= 270 && mouse_y <= 297 && dia == 0)
                  {
                              textprintf(screen, font, 426, 279, yellow, "9", mouse_y);
                              if (mouse_b)
                              {
                                   nine = 1;
                                   item = 0;          
								   play_midi(beep, 0); 
                              }
                  }
                  if (mouse_x >= 439 && mouse_x <= 476 && mouse_y >= 282 && mouse_y <= 311 && dia == 0)
                  {
                              textprintf(screen, font, 462, 290, yellow, "0", mouse_y);
                              if (mouse_b)
                              {
                                   zero = 1;
                                   item = 0;          
								   play_midi(beep, 0); 
                              }
                  }
                  if (mouse_x >= 426 && mouse_x <= 530 && mouse_y >= 205 && mouse_y <= 274 && dia == 0)
                  {
                              textprintf(screen, font, 473, 232, yellow, "Call", mouse_y);
                              if (mouse_b)
                              {
                              	play_midi(beep, 0);
                                     item = 0;
                                     if (five == 1 && one == 1 && nine == 1 && eight == 1 && four == 1 && jeff == 1)
                                     {
                                         dia = 1;
										 lock = 1;         
                                     }  else
                                     {
                                            zero = 0;
                                            one = 0;
                                            two = 0;
                                            three = 0;
                                            four = 0;
                                            five = 0;
                                            six = 0;
                                            seven = 0;
                                            eight = 0;
                                            nine = 0;
                                     }       
                              } 
                  }
          }
          if (scr == 3)
          {
                // Outside
                play_midi(out, 0);
                if (mouse_x >= 379 && mouse_x <= 448 && mouse_y >= 570 && mouse_y <= 600)
                {
                            // Sam box
                            cm = red;
                            if (mouse_b && dia == 10)
                            {
                                dia = 11;  
                            }
                            if (mouse_b && dia == 20)
                            {
                                dia = 21;  
                            }
                            if (mouse_b && dia == 30)
                            {
                                dia = 31;  
                            }
                            if (mouse_b && dia == 40)
                            {
                                dia = 41;  
                            }
                            if (mouse_b && dia == 50)
                            {
                                dia = 51;  
                            }
                            if (mouse_b && dia == 70)
                            {
                                dia = 71;  
                            }
                }
                if (mouse_x >= 484 && mouse_x <= 550 && mouse_y >= 570 && mouse_y <= 600)
                {
                            // Max Box
                            cm = red;
                            if (mouse_b && dia == 11)
                            {
                                dia = 0;   
                            }
                            if (mouse_b && dia == 21)
                            {
                                dia = 0;
                                trash = 1;   
                            }
                            if (mouse_b && dia == 31)
                            {
                                dia = 0;   
                            }
                            if (mouse_b && dia == 41)
                            {
                                dia = 0;   
                            }
                            if (mouse_b && dia == 51)
                            {
                                dia = 0;
                                drink = 1;   
                            }
                            if (mouse_b && dia == 60)
                            {
                                dia = 61;   
                                travel = 1;
                            }
                            if (mouse_b && dia == 71)
                            {
                                dia = 0;
                                cash = 1;   
                            }
                }
                // draw_sprite(*area, trashclosed, 372, 352);
                if (trash == 0)
                {
                        draw_sprite(*area, trashclosed, 372, 352);    
                }
                if (dia == 0)
                {
                        // draw_sprite(screen, sam_begin1, 0, 400);
                        // textprintf(screen, font, 410, 580, cm, "Next ->", mouse_y);
                        // rectfill(screen, 0, 400, 900, 600, black);
                        draw_sprite(screen, backer, 0, 400);
                }
                if (trash == 1)
                {
                        draw_sprite(*area, trashopen, 372, 342);    
                }
                if (dia == 10)
                {
                        cm = yellow;
                        draw_sprite(screen, sam_gumball, 0, 400);
                        textprintf(sam_gumball, font, 410, 180, cm, "Next ->", mouse_y);
                        rectfill(screen, 480, 400, 900, 600, black);
                }
                if (dia == 11)
                {
                        cm = yellow;
                        draw_sprite(screen, max_gumball, 0, 400);
                        textprintf(max_gumball, font, 510, 180, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black);
                }
                if (dia == 20)
                {
                        cm = yellow;
                        draw_sprite(screen, sam_trash, 0, 400);
                        textprintf(sam_trash, font, 410, 180, cm, "Next ->", mouse_y);
                        rectfill(screen, 480, 400, 900, 600, black);
                }
                if (dia == 21)
                {
                        cm = yellow;
                        draw_sprite(screen, max_trash, 0, 400);
                        textprintf(max_trash, font, 510, 180, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black);
                }
                if (dia == 30)
                {
                        cm = yellow;
                        draw_sprite(screen, sam_meter, 0, 400);
                        textprintf(sam_meter, font, 410, 180, cm, "Next ->", mouse_y);
                        rectfill(screen, 480, 400, 900, 600, black);
                }
                if (dia == 31)
                {
                        cm = yellow;
                        draw_sprite(screen, max_meter, 0, 400);
                        textprintf(max_meter, font, 510, 180, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black);
                }
                if (dia == 40)
                {
                        cm = yellow;
                        draw_sprite(screen, sam_doom, 0, 400);
                        textprintf(sam_doom, font, 410, 180, cm, "Next ->", mouse_y);
                        rectfill(screen, 480, 400, 900, 600, black);
                }
                if (dia == 41)
                {
                        cm = yellow;
                        draw_sprite(screen, max_doom, 0, 400);
                        textprintf(max_doom, font, 510, 180, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black);
                }
                if (dia == 50)
                {
                        cm = yellow;
                        draw_sprite(screen, sam_cup, 0, 400);
                        textprintf(sam_cup, font, 410, 180, cm, "Next ->", mouse_y);
                        rectfill(screen, 480, 400, 900, 600, black);
                }
                if (dia == 51)
                {
                        cm = yellow;
                        draw_sprite(screen, max_cup, 0, 400);
                        textprintf(max_cup, font, 510, 180, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black);
                }
                if (dia == 60)
                {
                        cm = yellow;
                        draw_sprite(screen, max_cardoor, 0, 400);
                        textprintf(max_cardoor, font, 510, 180, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black);
                }
                
                if (dia == 70)
                {
                        cm = yellow;
                        draw_sprite(screen, sam_cash, 0, 400);
                        textprintf(sam_cash, font, 410, 180, cm, "Next ->", mouse_y);
                        rectfill(screen, 480, 400, 900, 600, black);
                }
                if (dia == 71)
                {
                        cm = yellow;
                        draw_sprite(screen, max_cash, 0, 400);
                        textprintf(max_cash, font, 510, 180, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black);
                }
                if (mouse_x >= 281 && mouse_x <= 344 && mouse_y >= 145 && mouse_y <= 243 && dia == 0)
                {
                   textprintf(screen, font, 296, 172, yellow, "Gumball Machine", mouse_y);
                   if (mouse_b)
                   {
                       dia = 10;
                       item = 0;            
                   }                    
                }
                if (mouse_x >= 331 && mouse_x <= 426 && mouse_y >= 252 && mouse_y <= 397 && trash == 0 && dia == 0)
                {
                   textprintf(screen, font, 378, 325, yellow, "Trashcan", mouse_y);
                   if (mouse_b)
                   {
                       dia = 20;
                       item = 0;            
                   }
                }
                if (mouse_x >= 400 && mouse_x <= 486 && mouse_y >= 178 && mouse_y <= 243 && dia == 0)
                {
                   textprintf(screen, font, 429, 205, yellow, "Parking Meter", mouse_y);
                   if (mouse_b)
                   {
                       dia = 30;
                       item = 0;            
                   }
                }
                if (mouse_x >= 550 && mouse_x <= 900 && mouse_y >= 240 && mouse_y <= 374 && dia == 0)
                {
                   textprintf(screen, font, 800, 290, yellow, "Car", mouse_y);
                   if (mouse_b)
                   {
                       dia = 60;
                       item = 0;            
                   }
                }
                if (mouse_x >= 220 && mouse_x <= 640 && mouse_y >= 0 && mouse_y <= 60 && dia == 0)
                {
                   textprintf(screen, font, 430, 30, yellow, "Doom Mart", mouse_y);
                   if (mouse_b)
                   {
                       dia = 40;
                       item = 0;            
                   }
                }
                if (mouse_x >= 0 && mouse_x <= 260 && mouse_y >= 100 && mouse_y <= 333 && dia == 0)
                {
                   textprintf(screen, font, 110, 200, yellow, "Door", mouse_y);
                   if (mouse_b)
                   {
                       scr = 5;
                       gamew = 400;
                       area = &store;
                       h = h5;
                       w = w5;
                       dia = 0;
                       cm = yellow;
                       item = 0;            
                   }
                }
                if (trash == 1)
                {
                   if (cash == 0)
                   {
                            draw_sprite(*area, money, 442, 344);
                   }       
                   if (drink == 0)
                   {
                            draw_sprite(*area, cup, 382, 342);
                   }
                   if (mouse_x >= 308 && mouse_x <= 360 && mouse_y >= 236 && mouse_y <= 256 && drink == 0 && dia == 0)
                   {
                          textprintf(screen, font, 337, 246, yellow, "Cup", mouse_y);
                          if (mouse_b)
                          {
                                   dia = 50;   
                          }     
                   }
                   if (mouse_x >= 369 && mouse_x <= 399 && mouse_y >= 237 && mouse_y <= 257 && cash == 0 && dia == 0)
                   {
                          textprintf(screen, font, 384, 242, yellow, "Cash", mouse_y);
                          if (mouse_b)
                          {
                                   dia = 70;   
                          }     
                   }
                }  
          }
          if (scr == 5)
          {
                // Doom Mart
                play_midi(mart, 0);
                if (mouse_x >= 379 && mouse_x <= 448 && mouse_y >= 570 && mouse_y <= 600)
                {
                            // Sam box
                            cm = red;
                            if (mouse_b && dia == 30)
                            {
                                dia = 31;  
                            }
                            if (mouse_b && dia == 50)
                            {
                                dia = 0;  
                            }
                            if (mouse_b && dia == 33)
                            {
                                dia = 0;
                                sweet = 1;  
                            }
                            if (mouse_b && dia == 40)
                            {
                                dia = 0;
                                paper = 1;  
                            }
                            if (mouse_b && dia == 2)
                            {
                                dia = 3;  
                            }
                            if (mouse_b && dia == 6)
                            {
                                dia = 7;  
                            }
                            if (mouse_b && dia == 8)
                            {
                                dia = 9;  
                            }
                            if (mouse_b && dia == 11)
                            {
                                dia = 12;  
                            }
                            if (mouse_b && dia == 15)
                            {
                                dia = 16;  
                            }
                            if (mouse_b && dia == 17)
                            {
                                dia = 18;  
                            }
                            if (mouse_b && dia == 19)
                            {
                                dia = 70;  
                            }
                            if (mouse_b && dia == 20)
                            {
                                dia = 21;  
                            }
                            if (mouse_b && dia == 22)
                            {
                                dia = 23;  
                            }
                            if (mouse_b && dia == 80)
                            {
                                dia = 81;  
                            }
                            if (mouse_b && dia == 90)
                            {
                                dia = 0;  
                            }
                            if (mouse_b && dia == 27)
                            {
                                dia = 28;  
                            }
                }
                if (mouse_x >= 484 && mouse_x <= 550 && mouse_y >= 570 && mouse_y <= 600)
                {
                            // Max Box
                            cm = red;
                            if (mouse_b && dia == 60)
                            {
                                dia = 61; 
								travel = 1;  
                            }
                            if (mouse_b && dia == 32)
                            {
                                dia = 33;   
                            }
                            if (mouse_b && dia == 4)
                            {
                                dia = 5;  
                            }
                            if (mouse_b && dia == 9)
                            {
                                dia = 10;  
                            }
                            if (mouse_b && dia == 13)
                            {
                                dia = 14;  
                            }
                            if (mouse_b && dia == 24)
                            {
                                dia = 25;  
                            }
                }
                if (mouse_x >= 472 && mouse_x <= 550 && mouse_y >= 533 && mouse_y <= 547)
                {
                            // Zeldron box
                            cm = red;
                            if (mouse_b && dia == 31)
                            {
                                dia = 32;  
                            }
                            if (mouse_b && dia == 1)
                            {
                                dia = 70;  
                            }
                            if (mouse_b && dia == 3)
                            {
                                dia = 4;  
                            }
                            if (mouse_b && dia == 5)
                            {
                                dia = 6;  
                            }
                            if (mouse_b && dia == 7)
                            {
                                dia = 8;  
                            }
                            if (mouse_b && dia == 10)
                            {
                                dia = 70;  
                            }
                            if (mouse_b && dia == 12)
                            {
                                dia = 13;  
                            }
                            if (mouse_b && dia == 14)
                            {
                                dia = 15;  
                            }
                            if (mouse_b && dia == 16)
                            {
                                dia = 17;  
                            }
                            if (mouse_b && dia == 18)
                            {
                                dia = 19;  
                            }
                            if (mouse_b && dia == 21)
                            {
                                dia = 22;  
                            }
                            if (mouse_b && dia == 23)
                            {
                                dia = 24;  
                            }
                            if (mouse_b && dia == 25)
                            {
                                dia = 70;
								locations = 3;  
                            }
                            if (mouse_b && dia == 26)
                            {
                                dia = 27;  
                            }
                            if (mouse_b && dia == 28)
                            {
                                dia = 0;  
                            }
                }     
                if (paper == 0)
                {
                        draw_sprite(*area, note1, 106, 602);
                }
                if (dia == 0)
                {
                        // draw_sprite(screen, sam_begin1, 0, 400);
                        // textprintf(screen, font, 410, 580, cm, "Next ->", mouse_y);
                        // rectfill(screen, 0, 400, 900, 600, black);
                        draw_sprite(screen, backer, 0, 400);
                }
                if (dia == 60)
                {
                        cm = yellow;
                        draw_sprite(screen, max_cardoor, 0, 400);
                        textprintf(max_cardoor, font, 510, 180, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black);
                }
                if (dia == 30)
                {
                        cm = yellow;
                        draw_sprite(screen, sam_muffin, 0, 400);
                        textprintf(sam_muffin, font, 410, 180, cm, "Next ->", mouse_y);
                        rectfill(screen, 480, 400, 900, 600, black);
                }
                if (dia == 31)
                {
                        cm = yellow;
                        draw_sprite(screen, zeldronmuffin, 0, 400);
                        textprintf(zeldronmuffin, font, 500, 140, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black);
                }
                if (dia == 32)
                {
                        cm = yellow;
                        draw_sprite(screen, max_muffin, 0, 400);
                        textprintf(max_muffin, font, 510, 180, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black);
                }
                if (dia == 33)
                {
                        cm = yellow;
                        draw_sprite(screen, sam_muffin2, 0, 400);
                        textprintf(sam_muffin2, font, 410, 180, cm, "Next ->", mouse_y);
                        rectfill(screen, 480, 400, 900, 600, black);
                }
                if (dia == 40)
                {
                        cm = yellow;
                        draw_sprite(screen, sam_note, 0, 400);
                        textprintf(sam_note, font, 410, 180, cm, "Next ->", mouse_y);
                        rectfill(screen, 480, 400, 900, 600, black);
                }
                if (dia == 50)
                {
                        cm = yellow;
                        draw_sprite(screen, sam_dairy, 0, 400);
                        textprintf(sam_dairy, font, 410, 180, cm, "Next ->", mouse_y);
                        rectfill(screen, 480, 400, 900, 600, black);
                }
                if (dia == 70)
                {
                        cm = yellow;
                        draw_sprite(screen, sam_textbox, 0, 400);
                        // textprintf(screen, font, 410, 580, cm, "Next ->", mouse_y);
                        rectfill(screen, 480, 400, 900, 600, black);
                        textprintf(sam_textbox, font, 183, 60, cm, "What do you sell here?", mouse_y);
                        if (mouse_x >= 153 && mouse_x <= 334 && mouse_y >= 450 && mouse_y <= 467)
                        {
                               if (mouse_b)
                               {
                                  dia = 2;
                                  item = 0;
                               }     
                        }
                        textprintf(sam_textbox, font, 183, 80, cm, "What is the new item?", mouse_y);
                        if (mouse_x >= 153 && mouse_x <= 334 && mouse_y >= 470 && mouse_y <= 487)
                        {
                               if (mouse_b)
                               {
                                   dia = 11;
                                   item = 0;  
                               }   
                        }
                        textprintf(sam_textbox, font, 183, 140, cm, "Nevermind", mouse_y);
                        if (mouse_x >= 153 && mouse_x <= 334 && mouse_y >= 530 && mouse_y <= 547)
                        {
                               if (mouse_b)
                               {
                                  dia = 0; 
                                  item = 0;
                               }    
                        }
                        if (rat == 1)
                        {
                                textprintf(sam_textbox, font, 183, 100, cm, "Do you know Jimmy Two Teeth?", mouse_y);
                                if (mouse_x >= 153 && mouse_x <= 350 && mouse_y >= 490 && mouse_y <= 507)
                                {
                                       if (mouse_b)
                                       {
                                          dia = 20;
                                          item = 0;
                                       }     
                                }       
                        }
                }
                if (dia == 1)
                {
                        cm = yellow;
                        draw_sprite(screen, zeldron0, 0, 400);
                        textprintf(zeldron0, font, 500, 140, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black);        
                }
                if (dia == 2)
                {
                        cm = yellow;
                        draw_sprite(screen, sam_zeldron11, 0, 400);
                        textprintf(sam_zeldron11, font, 410, 180, cm, "Next ->", mouse_y);
                        rectfill(screen, 480, 400, 900, 600, black);       
                }
                if (dia == 3)
                {
                        cm = yellow;
                        draw_sprite(screen, zeldron11, 0, 400);
                        textprintf(zeldron11, font, 500, 140, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black);        
                }
                if (dia == 4)
                {
                        cm = yellow;
                        draw_sprite(screen, max_zeldron11, 0, 400);
                        textprintf(max_zeldron11, font, 510, 180, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black);
                }
                if (dia == 5)
                {
                        cm = yellow;
                        draw_sprite(screen, zeldron12, 0, 400);
                        textprintf(zeldron12, font, 500, 140, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black);        
                }
                if (dia == 6)
                {
                        cm = yellow;
                        draw_sprite(screen, sam_zeldron12, 0, 400);
                        textprintf(sam_zeldron12, font, 410, 180, cm, "Next ->", mouse_y);
                        rectfill(screen, 480, 400, 900, 600, black);       
                }
                if (dia == 7)
                {
                        cm = yellow;
                        draw_sprite(screen, zeldron13, 0, 400);
                        textprintf(zeldron13, font, 500, 140, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black);        
                }
                if (dia == 8)
                {
                        cm = yellow;
                        draw_sprite(screen, sam_zeldron13, 0, 400);
                        textprintf(sam_zeldron13, font, 410, 180, cm, "Next ->", mouse_y);
                        rectfill(screen, 480, 400, 900, 600, black);       
                }
                if (dia == 9)
                {
                        cm = yellow;
                        draw_sprite(screen, max_zeldron12, 0, 400);
                        textprintf(max_zeldron12, font, 510, 180, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black);
                }
                if (dia == 10)
                {
                        cm = yellow;
                        draw_sprite(screen, zeldron14, 0, 400);
                        textprintf(zeldron14, font, 500, 140, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black);        
                }
                if (dia == 11)
                {
                        cm = yellow;
                        draw_sprite(screen, sam_zeldron21, 0, 400);
                        textprintf(sam_zeldron21, font, 410, 180, cm, "Next ->", mouse_y);
                        rectfill(screen, 480, 400, 900, 600, black);       
                }
                if (dia == 12)
                {
                        cm = yellow;
                        draw_sprite(screen, zeldron21, 0, 400);
                        textprintf(zeldron21, font, 500, 140, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black);        
                }
                if (dia == 13)
                {
                        cm = yellow;
                        draw_sprite(screen, max_zeldron21, 0, 400);
                        textprintf(max_zeldron21, font, 510, 180, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black);
                }
                if (dia == 14)
                {
                        cm = yellow;
                        draw_sprite(screen, zeldron22, 0, 400);
                        textprintf(zeldron22, font, 500, 140, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black);        
                }
                if (dia == 15)
                {
                        cm = yellow;
                        draw_sprite(screen, sam_zeldron22, 0, 400);
                        textprintf(sam_zeldron22, font, 410, 180, cm, "Next ->", mouse_y);
                        rectfill(screen, 480, 400, 900, 600, black);       
                }
                if (dia == 16)
                {
                        cm = yellow;
                        draw_sprite(screen, zeldron23, 0, 400);
                        textprintf(zeldron23, font, 500, 140, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black);        
                }
                if (dia == 17)
                {
                        cm = yellow;
                        draw_sprite(screen, sam_zeldron23, 0, 400);
                        textprintf(sam_zeldron23, font, 410, 180, cm, "Next ->", mouse_y);
                        rectfill(screen, 480, 400, 900, 600, black);       
                }
                if (dia == 18)
                {
                        cm = yellow;
                        draw_sprite(screen, zeldron24, 0, 400);
                        textprintf(zeldron24, font, 500, 140, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black);        
                }
                if (dia == 19)
                {
                        cm = yellow;
                        draw_sprite(screen, sam_zeldron24, 0, 400);
                        textprintf(sam_zeldron24, font, 410, 180, cm, "Next ->", mouse_y);
                        rectfill(screen, 480, 400, 900, 600, black);       
                }
                if (dia == 20)
                {
                        cm = yellow;
                        draw_sprite(screen, sam_zeldron31, 0, 400);
                        textprintf(sam_zeldron31, font, 410, 180, cm, "Next ->", mouse_y);
                        rectfill(screen, 480, 400, 900, 600, black);       
                }
                if (dia == 21)
                {
                        cm = yellow;
                        draw_sprite(screen, zeldron31, 0, 400);
                        textprintf(zeldron31, font, 500, 140, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black);       
                }
                if (dia == 22)
                {
                        cm = yellow;
                        draw_sprite(screen, sam_zeldron32, 0, 400);
                        textprintf(sam_zeldron32, font, 410, 180, cm, "Next ->", mouse_y);
                        rectfill(screen, 480, 400, 900, 600, black);       
                }
                if (dia == 23)
                {
                        cm = yellow;
                        draw_sprite(screen, zeldron32, 0, 400);
                        textprintf(zeldron32, font, 500, 140, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black);       
                }
                if (dia == 24)
                {
                        cm = yellow;
                        draw_sprite(screen, max_zeldron31, 0, 400);
                        textprintf(max_zeldron31, font, 510, 180, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black);
                }
                if (dia == 25)
                {
                        cm = yellow;
                        draw_sprite(screen, zeldron33, 0, 400);
                        textprintf(zeldron33, font, 500, 140, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black);       
                }
                if (dia == 26)
                {
                        cm = yellow;
                        draw_sprite(screen, zeldronvodka1, 0, 400);
                        textprintf(zeldronvodka1, font, 500, 140, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black);       
                }
                if (dia == 27)
                {
                        cm = yellow;
                        draw_sprite(screen, sam_vodka, 0, 400);
                        textprintf(sam_vodka, font, 410, 180, cm, "Next ->", mouse_y);
                        rectfill(screen, 480, 400, 900, 600, black);       
                }
                if (dia == 28)
                {
                        cm = yellow;
                        draw_sprite(screen, zeldronvodka2, 0, 400);
                        textprintf(zeldronvodka2, font, 500, 140, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black);       
                }
                if (mouse_x >= 44 && mouse_x <= 110 && mouse_y >= 335 && mouse_y <= 368 && paper == 0 && dia == 0)
                {
                        textprintf(screen, font, 78, 346, yellow, "Note", mouse_y);
                        if (mouse_b)
                        {
                                   dia = 40;
                                   item = 0;   
                        }    
                }
                if (mouse_x >= 282 && mouse_x <= 321 && mouse_y >= 130 && mouse_y <= 155 && sweet == 0 && dia == 0)
                {
                        textprintf(screen, font, 300, 150, yellow, "Muffin", mouse_y);
                        if (mouse_b)
                        {
                                   dia = 30;
                                   item = 0;   
                        }   
                }
                if (mouse_x >= 765 && mouse_x <= 900 && mouse_y >= 0 && mouse_y <= 400 && dia == 0)
                {
                        textprintf(screen, font, 800, 66, yellow, "Leave Store", mouse_y);
                        if (mouse_b)
                        {
                              scr = 3;
                              gamew = 400;
                              area = &outside;
                              h = h3;
                              w = w3;
                              dia = 0;
                              cm = yellow;
                              item = 0;        
                        }   
                }
                if (mouse_x >= 0 && mouse_x <= 265 && mouse_y >= 104 && mouse_y <= 319 && dia == 0)
                {
                        textprintf(screen, font, 109, 200, yellow, "Dairy Products", mouse_y);
                        if (mouse_b)
                        {
                              dia = 50;
                              item = 0;        
                        }   
                }
                if (mouse_x >= 600 && mouse_x <= 704 && mouse_y >= 189 && mouse_y <= 274 && dia == 0)
                {
                        textprintf(screen, font, 663, 219, yellow, "Zeldron", mouse_y);
                        if (mouse_b)
                        {
                              if (cashx == false)
                              {
								  dia = 1;
	                              item = 0; 
						      }
						      if (cashx == true)
                              {
								  bottle = 1;
                                  item = 0;
                                  dia = 26;
                                  cash = -1;
						      }
                        } 
                }          
          }
          if (scr == 4)
          {
                // Museum
                play_midi(mus, 0);
                if (mouse_x >= 379 && mouse_x <= 448 && mouse_y >= 570 && mouse_y <= 600)
                {
                            // Sam box
                            cm = red;
                            if (mouse_b && dia == 1)
                            {
                                dia = 2;  
                            }
                            if (mouse_b && dia == 4)
                            {
                                dia = 5;  
                            }
                            if (mouse_b && dia == 6)
                            {
                                dia = 7;  
                            }
                            if (mouse_b && dia == 8)
                            {
                                dia = 9;  
                            }
                            if (mouse_b && dia == 11)
                            {
                                dia = 12;  
                            }
                            if (mouse_b && dia == 18)
                            {
                                dia = 19;  
                            }
                            if (mouse_b && dia == 20)
                            {
                                dia = 21;  
                            }
                            if (mouse_b && dia == 24)
                            {
                                dia = 70;  
                            }
                            if (mouse_b && dia == 50)
                            {
                                dia = 51;  
                            }
                            if (mouse_b && dia == 25)
                            {
                                dia = 26;  
                            }
                            if (mouse_b && dia == 27)
                            {
                                dia = 28;  
                            }
                            if (mouse_b && dia == 29)
                            {
                                dia = 30;  
                            }
                            if (mouse_b && dia == 32)
                            {
                                dia = 33;  
                            }
                            if (mouse_b && dia == 40)
                            {
                                dia = 41;  
                            }
                            if (mouse_b && dia == 43)
                            {
                                dia = 44;  
                            }
                            if (mouse_b && dia == 45)
                            {
                                dia = 46;  
                            }
                            if (mouse_b && dia == 80)
                            {
                                dia = 81;  
                            }
                            if (mouse_b && dia == 90)
                            {
                                dia = 0;  
                            }
                            if (mouse_b && dia == 101)
                            {
                                dia = 102;  
                            }
                            if (mouse_b && dia == 104)
                            {
                                dia = 105;  
                            }
                            if (mouse_b && dia == 106)
                            {
                                dia = 0;
								scr = 12;
                                  gamew = SCREEN_H;
                                  area = &end;
                                  h = h12;
                                  w = w12;
                                  // dia = 0;
                                  cm = yellow;  
                            }
                }
                if (mouse_x >= 484 && mouse_x <= 550 && mouse_y >= 570 && mouse_y <= 600)
                {
                            // Max Box
                            cm = red;
                            if (mouse_b && dia == 60)
                            {
                                dia = 61;   
                                travel = 1;
                            }
                            if (mouse_b && dia == 2)
                            {
                                dia = 3;   
                            }
                            if (mouse_b && dia == 10)
                            {
                                dia = 70;  
                            }
                            if (mouse_b && dia == 15)
                            {
                                dia = 16;  
                            }
                            if (mouse_b && dia == 17)
                            {
                                dia = 18;  
                            }
                            if (mouse_b && dia == 22)
                            {
                                dia = 23;  
                            }
                            if (mouse_b && dia == 51)
                            {
                                dia = 0;  
                            }
                            if (mouse_b && dia == 30)
                            {
                                dia = 31;  
                            }
                            if (mouse_b && dia == 35)
                            {
                                dia = 36;  
                            }
                            if (mouse_b && dia == 38)
                            {
                                dia = 39;  
                            }
                            if (mouse_b && dia == 44)
                            {
                                dia = 45;  
                            }
                            if (mouse_b && dia == 81)
                            {
                                dia = 0;  
                            }
                            if (mouse_b && dia == 102)
                            {
                                dia = 103;  
                            }
                            if (mouse_b && dia == 105)
                            {
                                dia = 106;  
                            }
                }
                if (mouse_x >= 495 && mouse_x <= 561 && mouse_y >= 543 && mouse_y <= 557)
                {
                            // Janice box
                            cm = red;
                            if (mouse_b && dia == 3)
                            {
                                dia = 70;  
                            }
                            if (mouse_b && dia == 5)
                            {
                                dia = 6;  
                            }
                            if (mouse_b && dia == 7)
                            {
                                dia = 8;  
                            }
                            if (mouse_b && dia == 9)
                            {
                                dia = 10;  
                            }
                            if (mouse_b && dia == 12)
                            {
                                dia = 13;  
                            }
                            if (mouse_b && dia == 13)
                            {
                                dia = 14;  
                            }
                            if (mouse_b && dia == 14)
                            {
                                dia = 15;  
                            }
                            if (mouse_b && dia == 16)
                            {
                                dia = 17;  
                            }
                            if (mouse_b && dia == 19)
                            {
                                dia = 70;  
                            }
                            if (mouse_b && dia == 21)
                            {
                                dia = 22;  
                            }
                            if (mouse_b && dia == 23)
                            {
                                dia = 24;  
                            }
                            if (mouse_b && dia == 36)
                            {
                                dia = 37;  
                            }
                            if (mouse_b && dia == 37)
                            {
                                dia = 38;  
                            }
                            if (mouse_b && dia == 100)
                            {
                                dia = 101;  
                            }
                            if (mouse_b && dia == 103)
                            {
                                dia = 104;  
                            }
                }
				if (mouse_x >= 495 && mouse_x <= 561 && mouse_y >= 543 && mouse_y <= 557)
                {
                            // Murray box
                            cm = red;
                            if (mouse_b && dia == 26)
                            {
                                dia = 70;  
                            }
                            if (mouse_b && dia == 28)
                            {
                                dia = 29;  
                            }
                            if (mouse_b && dia == 31)
                            {
                                dia = 70;  
                            }
                            if (mouse_b && dia == 33)
                            {
                                dia = 34;  
                            }
                            if (mouse_b && dia == 34)
                            {
                                dia = 35;  
                            }
                            if (mouse_b && dia == 39)
                            {
                                dia = 70;  
                            }
                            if (mouse_b && dia == 41)
                            {
                                dia = 42;  
                            }
                            if (mouse_b && dia == 42)
                            {
                                dia = 43;  
                            }
                            if (mouse_b && dia == 46)
                            {
                                dia = 70;
								rat = 1;  
                            }
                }     
                // rest(100);
                if (mouse_x >= 325 && mouse_x <= 530 && mouse_y >= 0 && mouse_y <= 200 && dia == 0)
                {
                        textprintf(screen, font, 404, 70, yellow, "Millenium Puzzle", mouse_y);
                        if (mouse_b)
                        {
                              dia = 80;
                              item = 0;        
                        }   
                }
                if (mouse_x >= 683 && mouse_x <= 806 && mouse_y >= 187 && mouse_y <= 387 && dia == 0)
                {
                        textprintf(screen, font, 706, 282, yellow, "Pedestal", mouse_y);
                        if (mouse_b)
                        {
                            if (gemx == false)
                            {
                              dia = 90;
                              item = 0;
							}
							if (gemx == true)
                            {
                              dia = 100;
                              item = 0;
                              gem = 0;
							}        
                        }   
                }
                if (mouse_x >= 14 && mouse_x <= 221 && mouse_y >= 0 && mouse_y <= 162 && dia == 0)
                {
                        textprintf(screen, font, 126, 69, yellow, "Skull", mouse_y);
                        if (mouse_b)
                        {
                              dia = 50;
                              item = 0;        
                        }   
                }
                if (mouse_x >= 59 && mouse_x <= 154 && mouse_y >= 125 && mouse_y <= 200 && dia == 0)
                {
                        textprintf(screen, font, 115, 161, yellow, "Murray", mouse_y);
                        if (mouse_b)
                        {
                              dia = 25;
                              item = 0;
							  murray = 1;        
                        }   
                }
                if (mouse_x >= 822 && mouse_x <= 900 && mouse_y >= 0 && mouse_y <= 400 && dia == 0)
                {
                        textprintf(screen, font, 840, 118, yellow, "Leave", mouse_y);
                        if (mouse_b)
                        {
                              dia = 60;
                              item = 0;        
                        }   
                }
                if (dia == 0)
                {
                        // draw_sprite(screen, sam_begin1, 0, 400);
                        // textprintf(screen, font, 410, 580, cm, "Next ->", mouse_y);
                        // rectfill(screen, 0, 400, 900, 600, black);
                        draw_sprite(screen, backer, 0, 400);
                }
                if (dia == 60)
                {
                        cm = yellow;
                        draw_sprite(screen, max_cardoor, 0, 400);
                        textprintf(max_cardoor, font, 510, 180, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black);
                }
                if (dia == 50)
                {
                        cm = yellow;
                        draw_sprite(screen, sam_skull, 0, 400);
                        textprintf(sam_skull, font, 410, 180, cm, "Next ->", mouse_y);
                        rectfill(screen, 480, 400, 900, 600, black);       
                }
                if (dia == 51)
                {
                        cm = yellow;
                        draw_sprite(screen, max_skull, 0, 400);
                        textprintf(max_skull, font, 510, 180, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black);
                }
                if (mouse_x >= 229 && mouse_x <= 322 && mouse_y >= 0 && mouse_y <= 400 && dia == 0)
                {
                        textprintf(screen, font, 283, 168, yellow, "Janice", mouse_y);
                        if (mouse_b)
                        {
                              dia = 1;
                              item = 0;
							  janice = 1;        
                        }   
                }
                if (dia == 70 && janice == 1)
                {
                        cm = yellow;
                        draw_sprite(screen, sam_textbox3, 0, 400);
                        // textprintf(screen, font, 410, 580, cm, "Next ->", mouse_y);
                        rectfill(screen, 480, 400, 900, 600, black);
                        textprintf(sam_textbox3, font, 183, 60, cm, "What was stolen?", mouse_y);
                        if (mouse_x >= 153 && mouse_x <= 334 && mouse_y >= 450 && mouse_y <= 467)
                        {
                               if (mouse_b)
                               {
                                  dia = 4;
                                  item = 0;
                               }     
                        }
                        textprintf(sam_textbox3, font, 183, 80, cm, "Do you have any suspects?", mouse_y);
                        if (mouse_x >= 153 && mouse_x <= 334 && mouse_y >= 470 && mouse_y <= 487)
                        {
                               if (mouse_b)
                               {
                                   dia = 11;
                                   item = 0;  
                               }   
                        }
                        textprintf(sam_textbox3, font, 183, 140, cm, "Nevermind", mouse_y);
                        if (mouse_x >= 153 && mouse_x <= 334 && mouse_y >= 530 && mouse_y <= 547)
                        {
                               if (mouse_b)
                               {
                                  dia = 0; 
                                  item = 0;
                                  janice = 0;
                               }    
                        }
                        if (rat == 1)
                        {
                                textprintf(sam_textbox3, font, 183, 100, cm, "Do you know Jimmy Two Teeth?", mouse_y);
                                if (mouse_x >= 153 && mouse_x <= 350 && mouse_y >= 490 && mouse_y <= 507)
                                {
                                       if (mouse_b)
                                       {
                                          dia = 20;
                                          item = 0;
                                       }     
                                }       
                        }
                }
                if (dia == 70 && murray == 1)
                {
                        cm = yellow;
                        draw_sprite(screen, sam_textbox4, 0, 400);
                        // textprintf(screen, font, 410, 580, cm, "Next ->", mouse_y);
                        rectfill(screen, 480, 400, 900, 600, black);
                        textprintf(sam_textbox4, font, 183, 60, cm, "You talk?!", mouse_y);
                        if (mouse_x >= 153 && mouse_x <= 334 && mouse_y >= 450 && mouse_y <= 467)
                        {
                               if (mouse_b)
                               {
                                  dia = 27;
                                  item = 0;
                               }     
                        }
                        textprintf(sam_textbox4, font, 183, 80, cm, "How did you get here?", mouse_y);
                        if (mouse_x >= 153 && mouse_x <= 334 && mouse_y >= 470 && mouse_y <= 487)
                        {
                               if (mouse_b)
                               {
                                   dia = 32;
                                   item = 0;  
                               }   
                        }
                        textprintf(sam_textbox4, font, 183, 140, cm, "Nevermind", mouse_y);
                        if (mouse_x >= 153 && mouse_x <= 334 && mouse_y >= 530 && mouse_y <= 547)
                        {
                               if (mouse_b)
                               {
                                  dia = 0; 
                                  item = 0;
                                  murray = 0;
                               }    
                        }
                        
                        textprintf(sam_textbox4, font, 183, 100, cm, "Who took the diamond?", mouse_y);
                        if (mouse_x >= 153 && mouse_x <= 350 && mouse_y >= 490 && mouse_y <= 507)
                        {
                                if (mouse_b)
                                {
                                    dia = 40;
                                    item = 0;
                                }     
                        }       
                        
                }
                if (dia == 1)
                {
                        cm = yellow;
                        draw_sprite(screen, sam_janice0, 0, 400);
                        textprintf(sam_janice0, font, 410, 180, cm, "Next ->", mouse_y);
                        rectfill(screen, 480, 400, 900, 600, black);       
                }
                if (dia == 2)
                {
                        cm = yellow;
                        draw_sprite(screen, max_janice0, 0, 400);
                        textprintf(max_janice0, font, 510, 180, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black);
                }
                if (dia == 3)
                {
                        cm = yellow;
                        draw_sprite(screen, janice_0, 0, 400);
                        textprintf(janice_0, font, 523, 151, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black);
                }
				if (dia == 4)
                {
                        cm = yellow;
                        draw_sprite(screen, sam_janice11, 0, 400);
                        textprintf(sam_janice11, font, 410, 180, cm, "Next ->", mouse_y);
                        rectfill(screen, 480, 400, 900, 600, black);       
                }
				if (dia == 5)
                {
                        cm = yellow;
                        draw_sprite(screen, janice_11, 0, 400);
                        textprintf(janice_11, font, 523, 151, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black);
                }
				if (dia == 6)
                {
                        cm = yellow;
                        draw_sprite(screen, sam_janice12, 0, 400);
                        textprintf(sam_janice12, font, 410, 180, cm, "Next ->", mouse_y);
                        rectfill(screen, 480, 400, 900, 600, black);       
                }
				if (dia == 7)
                {
                        cm = yellow;
                        draw_sprite(screen, janice_12, 0, 400);
                        textprintf(janice_12, font, 523, 151, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black);
                }
				if (dia == 8)
                {
                        cm = yellow;
                        draw_sprite(screen, sam_janice13, 0, 400);
                        textprintf(sam_janice13, font, 410, 180, cm, "Next ->", mouse_y);
                        rectfill(screen, 480, 400, 900, 600, black);       
                }
				if (dia == 9)
                {
                        cm = yellow;
                        draw_sprite(screen, janice_13, 0, 400);
                        textprintf(janice_13, font, 523, 151, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black);
                }
				if (dia == 10)
                {
                        cm = yellow;
                        draw_sprite(screen, max_janice11, 0, 400);
                        textprintf(max_janice11, font, 510, 180, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black);
                }
				if (dia == 11)
                {
                        cm = yellow;
                        draw_sprite(screen, sam_janice21, 0, 400);
                        textprintf(sam_janice21, font, 410, 180, cm, "Next ->", mouse_y);
                        rectfill(screen, 480, 400, 900, 600, black);       
                }
				if (dia == 12)
                {
                        cm = yellow;
                        draw_sprite(screen, janice_21, 0, 400);
                        textprintf(janice_21, font, 523, 151, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black);
                }
				if (dia == 13)
                {
                        cm = yellow;
                        draw_sprite(screen, janice_22, 0, 400);
                        textprintf(janice_22, font, 523, 151, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black);
                }
				if (dia == 14)
                {
                        cm = yellow;
                        draw_sprite(screen, janice_23, 0, 400);
                        textprintf(janice_23, font, 523, 151, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black);
                }
				if (dia == 15)
                {
                        cm = yellow;
                        draw_sprite(screen, max_janice21, 0, 400);
                        textprintf(max_janice21, font, 510, 180, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black);
                }
                if (dia == 16)
                {
                        cm = yellow;
                        draw_sprite(screen, janice_24, 0, 400);
                        textprintf(janice_24, font, 523, 151, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black);
                }
                if (dia == 17)
                {
                        cm = yellow;
                        draw_sprite(screen, max_janice22, 0, 400);
                        textprintf(max_janice22, font, 510, 180, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black);
                }
				if (dia == 18)
                {
                        cm = yellow;
                        draw_sprite(screen, sam_janice22, 0, 400);
                        textprintf(sam_janice22, font, 410, 180, cm, "Next ->", mouse_y);
                        rectfill(screen, 480, 400, 900, 600, black);       
                }
				if (dia == 19)
                {
                        cm = yellow;
                        draw_sprite(screen, janice_25, 0, 400);
                        textprintf(janice_25, font, 523, 151, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black);
                }
				if (dia == 20)
                {
                        cm = yellow;
                        draw_sprite(screen, sam_janice31, 0, 400);
                        textprintf(sam_janice31, font, 410, 180, cm, "Next ->", mouse_y);
                        rectfill(screen, 480, 400, 900, 600, black);       
                }
				if (dia == 21)
                {
                        cm = yellow;
                        draw_sprite(screen, janice_31, 0, 400);
                        textprintf(janice_31, font, 523, 151, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black);
                }
				if (dia == 22)
                {
                        cm = yellow;
                        draw_sprite(screen, max_janice31, 0, 400);
                        textprintf(max_janice31, font, 510, 180, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black);
                }
				if (dia == 23)
                {
                        cm = yellow;
                        draw_sprite(screen, janice_32, 0, 400);
                        textprintf(janice_32, font, 523, 151, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black);
                }
				if (dia == 24)
                {
                        cm = yellow;
                        draw_sprite(screen, sam_janice32, 0, 400);
                        textprintf(sam_janice32, font, 410, 180, cm, "Next ->", mouse_y);
                        rectfill(screen, 480, 400, 900, 600, black);       
                }
				if (dia == 25)
                {
                        cm = yellow;
                        draw_sprite(screen, sam_murray0, 0, 400);
                        textprintf(sam_murray0, font, 410, 180, cm, "Next ->", mouse_y);
                        rectfill(screen, 480, 400, 900, 600, black);       
                }
				if (dia == 26)
                {
                        cm = yellow;
                        draw_sprite(screen, murray01, 0, 400);
                        textprintf(murray01, font, 523, 151, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black);
                }
				if (dia == 27)
                {
                        cm = yellow;
                        draw_sprite(screen, sam_murray11, 0, 400);
                        textprintf(sam_murray11, font, 410, 180, cm, "Next ->", mouse_y);
                        rectfill(screen, 480, 400, 900, 600, black);       
                }
				if (dia == 28)
                {
                        cm = yellow;
                        draw_sprite(screen, murray11, 0, 400);
                        textprintf(murray11, font, 523, 151, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black);
                }
                if (dia == 29)
                {
                        cm = yellow;
                        draw_sprite(screen, sam_murray12, 0, 400);
                        textprintf(sam_murray12, font, 410, 180, cm, "Next ->", mouse_y);
                        rectfill(screen, 480, 400, 900, 600, black);       
                }
				if (dia == 30)
                {
                        cm = yellow;
                        draw_sprite(screen, max_murray11, 0, 400);
                        textprintf(max_murray11, font, 510, 180, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black);
                }
				if (dia == 31)
                {
                        cm = yellow;
                        draw_sprite(screen, murray12, 0, 400);
                        textprintf(murray12, font, 523, 151, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black);
                }
				if (dia == 32)
                {
                        cm = yellow;
                        draw_sprite(screen, sam_murray21, 0, 400);
                        textprintf(sam_murray21, font, 410, 180, cm, "Next ->", mouse_y);
                        rectfill(screen, 480, 400, 900, 600, black);       
                }
				if (dia == 33)
                {
                        cm = yellow;
                        draw_sprite(screen, murray21, 0, 400);
                        textprintf(murray21, font, 523, 151, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black);
                }
				if (dia == 34)
                {
                        cm = yellow;
                        draw_sprite(screen, murray22, 0, 400);
                        textprintf(murray22, font, 523, 151, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black);
                }
                if (dia == 35)
                {
                        cm = yellow;
                        draw_sprite(screen, max_janice11, 0, 400);
                        textprintf(max_janice11, font, 510, 180, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black);
                }
				if (dia == 36)
                {
                        cm = yellow;
                        draw_sprite(screen, murray23, 0, 400);
                        textprintf(murray23, font, 523, 151, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black);
                }
                if (dia == 37)
                {
                        cm = yellow;
                        draw_sprite(screen, murray23, 0, 400);
                        textprintf(murray23, font, 523, 151, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black);
                }
                if (dia == 38)
                {
                        cm = yellow;
                        draw_sprite(screen, max_murray21, 0, 400);
                        textprintf(max_murray21, font, 510, 180, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black);
                }
                if (dia == 39)
                {
                        cm = yellow;
                        draw_sprite(screen, murray25, 0, 400);
                        textprintf(murray25, font, 523, 151, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black);
                }
				if (dia == 40)
                {
                        cm = yellow;
                        draw_sprite(screen, sam_murray31, 0, 400);
                        textprintf(sam_murray31, font, 410, 180, cm, "Next ->", mouse_y);
                        rectfill(screen, 480, 400, 900, 600, black);       
                }
				if (dia == 41)
                {
                        cm = yellow;
                        draw_sprite(screen, murray31, 0, 400);
                        textprintf(murray31, font, 523, 151, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black);
                } 
				if (dia == 42)
                {
                        cm = yellow;
                        draw_sprite(screen, murray32, 0, 400);
                        textprintf(murray32, font, 523, 151, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black);
                }
				if (dia == 43)
                {
                        cm = yellow;
                        draw_sprite(screen, sam_murray32, 0, 400);
                        textprintf(sam_murray32, font, 410, 180, cm, "Next ->", mouse_y);
                        rectfill(screen, 480, 400, 900, 600, black);       
                }
				if (dia == 44)
                {
                        cm = yellow;
                        draw_sprite(screen, max_murray31, 0, 400);
                        textprintf(max_murray31, font, 510, 180, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black);
                }
				if (dia == 45)
                {
                        cm = yellow;
                        draw_sprite(screen, sam_murray33, 0, 400);
                        textprintf(sam_murray33, font, 410, 180, cm, "Next ->", mouse_y);
                        rectfill(screen, 480, 400, 900, 600, black);       
                }
				if (dia == 46)
                {
                        cm = yellow;
                        draw_sprite(screen, murray33, 0, 400);
                        textprintf(murray33, font, 523, 151, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black);
                }
				if (dia == 80)
                {
                        cm = yellow;
                        draw_sprite(screen, sam_puzzle, 0, 400);
                        textprintf(sam_puzzle, font, 410, 180, cm, "Next ->", mouse_y);
                        rectfill(screen, 480, 400, 900, 600, black);  
                }
				if (dia == 81)
                {
                        cm = yellow;
                        draw_sprite(screen, max_puzzle, 0, 400);
                        textprintf(max_puzzle, font, 510, 180, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black);  
                }
				if (dia == 90)
                {
                        cm = yellow;
                        draw_sprite(screen, sam_pedestal, 0, 400);
                        textprintf(sam_pedestal, font, 410, 180, cm, "Next ->", mouse_y);
                        rectfill(screen, 480, 400, 900, 600, black);  
                }
				if (dia == 100)
                {
                        cm = yellow;
                        draw_sprite(screen, janice_end1, 0, 400);
                        textprintf(janice_end1, font, 523, 151, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black);
                } 
				if (dia == 101)
                {
                        cm = yellow;
                        draw_sprite(screen, sam_end1, 0, 400);
                        textprintf(sam_end1, font, 410, 180, cm, "Next ->", mouse_y);
                        rectfill(screen, 480, 400, 900, 600, black);  
                }
				if (dia == 102)
                {
                        cm = yellow;
                        draw_sprite(screen, max_end1, 0, 400);
                        textprintf(max_end1, font, 510, 180, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black);  
                }
				if (dia == 103)
                {
                        cm = yellow;
                        draw_sprite(screen, janice_end2, 0, 400);
                        textprintf(janice_end2, font, 523, 151, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black);
                } 
				if (dia == 104)
                {
                        cm = yellow;
                        draw_sprite(screen, sam_end2, 0, 400);
                        textprintf(sam_end2, font, 410, 180, cm, "Next ->", mouse_y);
                        rectfill(screen, 480, 400, 900, 600, black);  
                }
				if (dia == 105)
                {
                        cm = yellow;
                        draw_sprite(screen, max_end2, 0, 400);
                        textprintf(max_end2, font, 510, 180, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black);  
                }
				if (dia == 106)
                {
                        cm = yellow;
                        draw_sprite(screen, sam_end3, 0, 400);
                        textprintf(sam_end3, font, 410, 180, cm, "Next ->", mouse_y);
                        rectfill(screen, 480, 400, 900, 600, black);  
                }                 
          }
          if (scr == 6)
          {
          	// Drinkey's
          	play_midi(bar, 0);
                if (mouse_x >= 379 && mouse_x <= 448 && mouse_y >= 570 && mouse_y <= 600)
                {
                            // Sam box
                            cm = red;
                            if (mouse_b && dia == 2)
                            {
                                dia = 3;  
                            }
                            if (mouse_b && dia == 5)
                            {
                                dia = 6;   
                            }
                            if (mouse_b && dia == 7)
                            {
                                dia = 8;   
                            }
                            if (mouse_b && dia == 9)
                            {
                                dia = 10;   
                            }
                            if (mouse_b && dia == 13)
                            {
                                dia = 14;   
                            }
                            if (mouse_b && dia == 30)
                            {
                                dia = 31;   
                            }
                            if (mouse_b && dia == 32)
                            {
                                dia = 0;   
                            }
                }
                if (mouse_x >= 484 && mouse_x <= 550 && mouse_y >= 570 && mouse_y <= 600)
                {
                            // Max Box
                            cm = red;
                            if (mouse_b && dia == 60)
                            {
                                dia = 61;   
                                travel = 1;
                            }
                            if (mouse_b && dia == 3)
                            {
                                dia = 4;   
                            }
                            if (mouse_b && dia == 6)
                            {
                                dia = 70;   
                                locations = 4;
                            }
                            if (mouse_b && dia == 11)
                            {
                                dia = 12;   
                            }
                            if (mouse_b && dia == 15)
                            {
                                dia = 70;
								ask = 1;   
                            }
                            if (mouse_b && dia == 31)
                            {
                                dia = 32;   
                            }
                }
                if (mouse_x >= 495 && mouse_x <= 561 && mouse_y >= 543 && mouse_y <= 557)
                {
                            // Chuck box
                            cm = red;
                            if (mouse_b && dia == 1)
                            {
                                dia = 70;  
                            }
                            if (mouse_b && dia == 4)
                            {
                                dia = 5;   
                            }
                            if (mouse_b && dia == 8)
                            {
                                dia = 9;   
                            }
                            if (mouse_b && dia == 10)
                            {
                                dia = 11;   
                            }
							if (mouse_b && dia == 12)
                            {
                                dia = 13;   
                            }
                            if (mouse_b && dia == 14)
                            {
                                dia = 15;   
                            }
                            if (mouse_b && dia == 16)
                            {
                                dia = 0;
								card = 1;   
                            }
                }
                if (dia == 70)
                {
                        cm = yellow;
                        draw_sprite(screen, sam_textbox5, 0, 400);
                        // textprintf(screen, font, 410, 580, cm, "Next ->", mouse_y);
                        rectfill(screen, 480, 400, 900, 600, black);
                        textprintf(sam_textbox5, font, 183, 60, cm, "Do you know Jimmy and Jeff?", mouse_y);
                        if (mouse_x >= 153 && mouse_x <= 334 && mouse_y >= 450 && mouse_y <= 467)
                        {
                               if (mouse_b)
                               {
                                  dia = 2;
                                  item = 0;
                               }     
                        }
                        textprintf(sam_textbox5, font, 183, 140, cm, "Nevermind", mouse_y);
                        if (mouse_x >= 153 && mouse_x <= 334 && mouse_y >= 530 && mouse_y <= 547)
                        {
                               if (mouse_b)
                               {
                                  dia = 0; 
                                  item = 0;
                                  
                               }    
                        }
                        if (place == 1)
                        {
						
	                        textprintf(sam_textbox5, font, 183, 100, cm, "We need your reservation card", mouse_y);
	                        if (mouse_x >= 153 && mouse_x <= 350 && mouse_y >= 490 && mouse_y <= 507)
	                        {
	                                if (mouse_b)
	                                {
	                                    dia = 7;
	                                    item = 0;
	                                }     
	                        
						    }
					    }
                        
                }
                if (dia == 0)
                {
                        // draw_sprite(screen, sam_begin1, 0, 400);
                        // textprintf(screen, font, 410, 580, cm, "Next ->", mouse_y);
                        // rectfill(screen, 0, 400, 900, 600, black);
                        draw_sprite(screen, backer, 0, 400);
                }
                if (dia == 60)
                {
                        cm = yellow;
                        draw_sprite(screen, max_cardoor, 0, 400);
                        textprintf(max_cardoor, font, 510, 180, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black);
                }
                if (mouse_x >= 750 && mouse_x <= 900 && mouse_y >= 148 && mouse_y <= 366 && dia == 0)
                {
                        textprintf(screen, font, 800, 244, yellow, "Ficous", mouse_y);
                        if (mouse_b)
                        {
                        	dia = 30;
                        	item = 0;
						}
                }
                if (mouse_x >= 0 && mouse_x <= 112 && mouse_y >= 0 && mouse_y <= 400 && dia == 0)
                {
                        textprintf(screen, font, 56, 339, yellow, "Leave Bar", mouse_y);
                        if (mouse_b)
                        {
                        	dia = 60;
                        	item = 0;
						}
                }
                if (mouse_x >= 579 && mouse_x <= 704 && mouse_y >= 70 && mouse_y <= 233 && dia == 0)
                {
                        textprintf(screen, font, 635, 157, yellow, "Chuck", mouse_y);
                        if (mouse_b)
                        {
                        	if (sweetx == false)
							{
								dia = 1;
								item = 0;
						    }
						    if (sweetx == true && ask == 1)
							{
								dia = 16;
								item = 0;
								sweet = 0;
						    }
						}
                }
                if (dia == 1)
                {
                        cm = yellow;
                        draw_sprite(screen, chuck_0, 0, 400);
                        textprintf(chuck_0, font, 523, 151, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black);
                }
                if (dia == 2)
                {
                        cm = yellow;
                        draw_sprite(screen, sam_chuck11, 0, 400);
                        textprintf(sam_chuck11, font, 410, 180, cm, "Next ->", mouse_y);
                        rectfill(screen, 480, 400, 900, 600, black);  
                }
				if (dia == 3)
                {
                        cm = yellow;
                        draw_sprite(screen, max_chuck11, 0, 400);
                        textprintf(max_chuck11, font, 510, 180, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black);  
                }
                if (dia == 4)
                {
                        cm = yellow;
                        draw_sprite(screen, chuck_12, 0, 400);
                        textprintf(chuck_12, font, 523, 151, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black); 
                }
                if (dia == 5)
                {
                        cm = yellow;
                        draw_sprite(screen, sam_chuck13, 0, 400);
                        textprintf(sam_chuck13, font, 410, 180, cm, "Next ->", mouse_y);
                        rectfill(screen, 480, 400, 900, 600, black);  
                }
                if (dia == 6)
                {
                        cm = yellow;
                        draw_sprite(screen, max_chuck12, 0, 400);
                        textprintf(max_chuck12, font, 510, 180, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black);  
                }
                if (dia == 7)
                {
                        cm = yellow;
                        draw_sprite(screen, sam_chuck21, 0, 400);
                        textprintf(sam_chuck21, font, 410, 180, cm, "Next ->", mouse_y);
                        rectfill(screen, 480, 400, 900, 600, black);  
                }
                if (dia == 8)
                {
                        cm = yellow;
                        draw_sprite(screen, chuck_21, 0, 400);
                        textprintf(chuck_21, font, 523, 151, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black); 
                }
                if (dia == 9)
                {
                        cm = yellow;
                        draw_sprite(screen, sam_chuck22, 0, 400);
                        textprintf(sam_chuck22, font, 410, 180, cm, "Next ->", mouse_y);
                        rectfill(screen, 480, 400, 900, 600, black);  
                }
                if (dia == 10)
                {
                        cm = yellow;
                        draw_sprite(screen, chuck_22, 0, 400);
                        textprintf(chuck_22, font, 523, 151, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black); 
                }
                if (dia == 11)
                {
                        cm = yellow;
                        draw_sprite(screen, max_chuck21, 0, 400);
                        textprintf(max_chuck21, font, 510, 180, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black);  
                }
                if (dia == 12)
                {
                        cm = yellow;
                        draw_sprite(screen, chuck_23, 0, 400);
                        textprintf(chuck_23, font, 523, 151, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black); 
                }
                if (dia == 13)
                {
                        cm = yellow;
                        draw_sprite(screen, sam_chuck23, 0, 400);
                        textprintf(sam_chuck23, font, 410, 180, cm, "Next ->", mouse_y);
                        rectfill(screen, 480, 400, 900, 600, black);  
                }
                if (dia == 14)
                {
                        cm = yellow;
                        draw_sprite(screen, chuck_24, 0, 400);
                        textprintf(chuck_24, font, 523, 151, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black); 
                }
                if (dia == 15)
                {
                        cm = yellow;
                        draw_sprite(screen, max_chuck22, 0, 400);
                        textprintf(max_chuck22, font, 510, 180, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black);  
                }
                if (dia == 30)
                {
                        cm = yellow;
                        draw_sprite(screen, sam_plant, 0, 400);
                        textprintf(sam_plant, font, 410, 180, cm, "Next ->", mouse_y);
                        rectfill(screen, 480, 400, 900, 600, black);  
                }
                if (dia == 31)
                {
                        cm = yellow;
                        draw_sprite(screen, max_plant, 0, 400);
                        textprintf(max_plant, font, 510, 180, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black);  
                }
                if (dia == 32)
                {
                        cm = yellow;
                        draw_sprite(screen, sam_plant2, 0, 400);
                        textprintf(sam_plant2, font, 410, 180, cm, "Next ->", mouse_y);
                        rectfill(screen, 480, 400, 900, 600, black);  
                }
                if (dia == 16)
                {
                        cm = yellow;
                        draw_sprite(screen, chuck_cupcake1, 0, 400);
                        textprintf(chuck_cupcake1, font, 523, 151, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black); 
                }
		  }
		  if (scr == 7)
		  {
		  	// La Crepe (Outside)
		  	play_midi(meal, 0);
                if (mouse_x >= 379 && mouse_x <= 448 && mouse_y >= 570 && mouse_y <= 600)
                {
                            // Sam box
                            cm = red;
                            if (mouse_b && dia == 3)
                            {
                                dia = 4;  
                            }
                            if (mouse_b && dia == 5)
                            {
                                dia = 6;  
                            }
                            if (mouse_b && dia == 7)
                            {
                                dia = 8;  
                            }
                            if (mouse_b && dia == 9)
                            {
                                dia = 10;  
                            }
                            if (mouse_b && dia == 14)
                            {
                                dia = 15;  
                            }
                            if (mouse_b && dia == 17)
                            {
                                dia = 18;  
                            }
                            if (mouse_b && dia == 19)
                            {
                                dia = 20;  
                            }
                }
                if (mouse_x >= 484 && mouse_x <= 550 && mouse_y >= 570 && mouse_y <= 600)
                {
                            // Max Box
                            cm = red;
                            if (mouse_b && dia == 60)
                            {
                                dia = 61;   
                                travel = 1;
                            }
                            if (mouse_b && dia == 2)
                            {
                                dia = 70;   
                            }
                            if (mouse_b && dia == 6)
                            {
                                dia = 7;  
                            }
                            if (mouse_b && dia == 11)
                            {
                                dia = 12;  
                            }
                            if (mouse_b && dia == 13)
                            {
                                dia = 14;  
                            }
                }
                if (mouse_x >= 435 && mouse_x <= 561 && mouse_y >= 543 && mouse_y <= 557)
                {
                            // Dave box
                            cm = red;
                            if (mouse_b && dia == 1)
                            {
                                dia = 2;  
                            }
                            if (mouse_b && dia == 4)
                            {
                                dia = 5;  
                            }
                            if (mouse_b && dia == 8)
                            {
                                dia = 70;  
                            }
                            if (mouse_b && dia == 10)
                            {
                                dia = 11;  
                            }
                            if (mouse_b && dia == 12)
                            {
                                dia = 13;  
                            }
                            if (mouse_b && dia == 15)
                            {
                                dia = 16;  
                            }
                            if (mouse_b && dia == 16)
                            {
                                dia = 17;  
                            }
                            if (mouse_b && dia == 18)
                            {
                                dia = 19;  
                            }
                            if (mouse_b && dia == 20)
                            {
                                dia = 70;
								place = 1;  
                            }
                            if (mouse_b && dia == 21)
                            {
                                dia = 0;
								grant = 1;
								card = 0;  
                            }
                }
                if (mouse_x >= 0 && mouse_x <= 900 && mouse_y >= 345 && mouse_y <= 400 && dia == 0)
                {
                	textprintf(screen, font, 410, 372, yellow, "Leave Place", mouse_y);
                    if (mouse_b)
                    {
                        dia = 60;
                        item = 0;
					}
                }
                if (grant == 1)
                {
                	if (mouse_x >= 322 && mouse_x <= 543 && mouse_y >= 40 && mouse_y <= 310 && dia == 0)
                    {
                    	textprintf(screen, font, 432, 177, cm, "Enter La Crepe", mouse_y);
                    	if (mouse_b)
                    	{
                    		  scr = 8;
                              gamew = 400;
                              area = &lacrepe2;
                              h = h8;
                              w = w8;
                              dia = 0;
                              cm = yellow;
                              item = 0;
						}
                    }
				}
				if (mouse_x >= 110 && mouse_x <= 233 && mouse_y >= 82 && mouse_y <= 170 && dia == 0)
                {
                	textprintf(screen, font, 168, 138, cm, "Dave", mouse_y);
                    if (mouse_b)
                    {
                    	if (cardx == false)
                    	{
							dia = 1;
							item = 0;		  
					    }
					    if (cardx == true)
                    	{
							dia = 21;
							item = 0;		  
					    }
					}
                }
                if (dia == 70)
                {
                        cm = yellow;
                        draw_sprite(screen, sam_textbox6, 0, 400);
                        // textprintf(screen, font, 410, 580, cm, "Next ->", mouse_y);
                        rectfill(screen, 480, 400, 900, 600, black);
                        textprintf(sam_textbox6, font, 183, 60, cm, "Let us in", mouse_y);
                        if (mouse_x >= 153 && mouse_x <= 334 && mouse_y >= 450 && mouse_y <= 467)
                        {
                               if (mouse_b)
                               {
                                  dia = 3;
                                  item = 0;
                               }     
                        }
                        textprintf(sam_textbox6, font, 183, 140, cm, "Nevermind", mouse_y);
                        if (mouse_x >= 153 && mouse_x <= 334 && mouse_y >= 530 && mouse_y <= 547)
                        {
                               if (mouse_b)
                               {
                                  dia = 0; 
                                  item = 0;   
                               }    
                        }
	                    textprintf(sam_textbox6, font, 183, 100, cm, "How do we get in?", mouse_y);
	                    if (mouse_x >= 153 && mouse_x <= 350 && mouse_y >= 490 && mouse_y <= 507)
	                    {
	                        if (mouse_b)
	                        {
	                            dia = 9;
	                            item = 0;
	                        }
						}
                }
                if (dia == 0)
                {
                        // draw_sprite(screen, sam_begin1, 0, 400);
                        // textprintf(screen, font, 410, 580, cm, "Next ->", mouse_y);
                        // rectfill(screen, 0, 400, 900, 600, black);
                        draw_sprite(screen, backer, 0, 400);
                }
                if (dia == 60)
                {
                        cm = yellow;
                        draw_sprite(screen, max_cardoor, 0, 400);
                        textprintf(max_cardoor, font, 510, 180, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black);
                }
                if (dia == 1)
                {
                        cm = yellow;
                        draw_sprite(screen, dave_0, 0, 400);
                        textprintf(dave_0, font, 463, 151, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black);
                }
                if (dia == 2)
                {
                        cm = yellow;
                        draw_sprite(screen, max_dave0, 0, 400);
                        textprintf(max_dave0, font, 510, 180, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black);
                }
                if (dia == 3)
                {
                        cm = yellow;
                        draw_sprite(screen, sam_dave11, 0, 400);
                        textprintf(sam_dave11, font, 410, 180, cm, "Next ->", mouse_y);
                        rectfill(screen, 480, 400, 900, 600, black);  
                }
                if (dia == 4)
                {
                        cm = yellow;
                        draw_sprite(screen, dave_11, 0, 400);
                        textprintf(dave_11, font, 463, 151, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black);
                }
                if (dia == 5)
                {
                        cm = yellow;
                        draw_sprite(screen, sam_dave12, 0, 400);
                        textprintf(sam_dave12, font, 410, 180, cm, "Next ->", mouse_y);
                        rectfill(screen, 480, 400, 900, 600, black);  
                }
                if (dia == 6)
                {
                        cm = yellow;
                        draw_sprite(screen, max_dave11, 0, 400);
                        textprintf(max_dave11, font, 510, 180, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black);
                }
                if (dia == 7)
                {
                        cm = yellow;
                        draw_sprite(screen, sam_dave13, 0, 400);
                        textprintf(sam_dave13, font, 410, 180, cm, "Next ->", mouse_y);
                        rectfill(screen, 480, 400, 900, 600, black);  
                }
                if (dia == 8)
                {
                        cm = yellow;
                        draw_sprite(screen, dave_12, 0, 400);
                        textprintf(dave_12, font, 463, 151, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black);
                }
                if (dia == 9)
                {
                        cm = yellow;
                        draw_sprite(screen, sam_dave21, 0, 400);
                        textprintf(sam_dave21, font, 410, 180, cm, "Next ->", mouse_y);
                        rectfill(screen, 480, 400, 900, 600, black);  
                }
                if (dia == 10)
                {
                        cm = yellow;
                        draw_sprite(screen, dave_21, 0, 400);
                        textprintf(dave_21, font, 463, 151, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black);
                }
                if (dia == 11)
                {
                        cm = yellow;
                        draw_sprite(screen, max_dave21, 0, 400);
                        textprintf(max_dave21, font, 510, 180, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black);
                }
                if (dia == 12)
                {
                        cm = yellow;
                        draw_sprite(screen, dave_22, 0, 400);
                        textprintf(dave_22, font, 463, 151, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black);
                }
                if (dia == 13)
                {
                        cm = yellow;
                        draw_sprite(screen, max_dave22, 0, 400);
                        textprintf(max_dave22, font, 510, 180, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black);
                }
                if (dia == 14)
                {
                        cm = yellow;
                        draw_sprite(screen, sam_dave22, 0, 400);
                        textprintf(sam_dave22, font, 410, 180, cm, "Next ->", mouse_y);
                        rectfill(screen, 480, 400, 900, 600, black);  
                }
                if (dia == 15)
                {
                        cm = yellow;
                        draw_sprite(screen, dave_23, 0, 400);
                        textprintf(dave_23, font, 463, 151, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black);
                }
                if (dia == 16)
                {
                        cm = yellow;
                        draw_sprite(screen, dave_24, 0, 400);
                        textprintf(dave_24, font, 463, 151, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black);
                }
                if (dia == 17)
                {
                        cm = yellow;
                        draw_sprite(screen, sam_dave23, 0, 400);
                        textprintf(sam_dave23, font, 410, 180, cm, "Next ->", mouse_y);
                        rectfill(screen, 480, 400, 900, 600, black);  
                }
                if (dia == 18)
                {
                        cm = yellow;
                        draw_sprite(screen, dave_25, 0, 400);
                        textprintf(dave_25, font, 463, 151, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black);
                }
                if (dia == 19)
                {
                        cm = yellow;
                        draw_sprite(screen, sam_dave24, 0, 400);
                        textprintf(sam_dave24, font, 410, 180, cm, "Next ->", mouse_y);
                        rectfill(screen, 480, 400, 900, 600, black);  
                }
                if (dia == 20)
                {
                        cm = yellow;
                        draw_sprite(screen, dave_26, 0, 400);
                        textprintf(dave_26, font, 463, 151, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black);
                }
                if (dia == 21)
                {
                        cm = yellow;
                        draw_sprite(screen, dave_card, 0, 400);
                        textprintf(dave_card, font, 463, 151, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black);
                }
		  }
		  if (scr == 8)
		  {
		  	// La Crepe (Inside)
			  play_midi(meal, 0);
                if (mouse_x >= 379 && mouse_x <= 448 && mouse_y >= 570 && mouse_y <= 600)
                {
                            // Sam box
                            cm = red;
                            if (mouse_b && dia == 30)
                            {
                                dia = 31;  
                            }
                            if (mouse_b && dia == 32)
                            {
                                dia = 33;  
                            }
                            if (mouse_b && dia == 1)
                            {
                                dia = 2;  
                            }
                            if (mouse_b && dia == 6)
                            {
                                dia = 7;  
                            }
                            if (mouse_b && dia == 10)
                            {
                                dia = 11;  
                            }
                            if (mouse_b && dia == 14)
                            {
                                dia = 15;  
                            }
                            if (mouse_b && dia == 16)
                            {
                                dia = 17;  
                            }
                            if (mouse_b && dia == 18)
                            {
                                dia = 19;  
                            }
                            if (mouse_b && dia == 23)
                            {
                                dia = 24;  
                            }
                            if (mouse_b && dia == 27)
                            {
                                dia = 0;
								locations = 5;  
                            }
                }
                if (mouse_x >= 484 && mouse_x <= 550 && mouse_y >= 570 && mouse_y <= 600)
                {
                            // Max Box
                            cm = red;
                            if (mouse_b && dia == 60)
                            {
                                dia = 61;   
                                travel = 1;
                            }
                            if (mouse_b && dia == 31)
                            {
                                dia = 32;  
                            }
                            if (mouse_b && dia == 33)
                            {
                                dia = 0;  
                            }
                            if (mouse_b && dia == 2)
                            {
                                dia = 3;  
                            }
                            if (mouse_b && dia == 4)
                            {
                                dia = 5;  
                            }
                            if (mouse_b && dia == 7)
                            {
                                dia = 8;  
                            }
                            if (mouse_b && dia == 12)
                            {
                                dia = 13;  
                            }
                            if (mouse_b && dia == 15)
                            {
                                dia = 16;  
                            }
                            if (mouse_b && dia == 20)
                            {
                                dia = 70;  
                            }
                            if (mouse_b && dia == 26)
                            {
                                dia = 27;  
                            }
                }
                if (mouse_x >= 495 && mouse_x <= 561 && mouse_y >= 543 && mouse_y <= 557)
                {
                            // Jimmy box
                            cm = red;
                            if (mouse_b && dia == 3)
                            {
                                dia = 4;  
                            }
                            if (mouse_b && dia == 5)
                            {
                                dia = 70;  
                            }
                            if (mouse_b && dia == 8)
                            {
                                dia = 9;  
                            }
                            if (mouse_b && dia == 9)
                            {
                                dia = 70;  
                            }
                            if (mouse_b && dia == 11)
                            {
                                dia = 12;  
                            }
                            if (mouse_b && dia == 13)
                            {
                                dia = 14;  
                            }
                            if (mouse_b && dia == 17)
                            {
                                dia = 70;  
                            }
                            if (mouse_b && dia == 19)
                            {
                                dia = 20;  
                            }
                            if (mouse_b && dia == 21)
                            {
                                dia = 22;  
                            }
                            if (mouse_b && dia == 22)
                            {
                                dia = 23;  
                            }
                            if (mouse_b && dia == 24)
                            {
                                dia = 25;  
                            }
                            if (mouse_b && dia == 25)
                            {
                                dia = 26;  
                            }
                }
                if (mouse_x >= 621 && mouse_x <= 675 && mouse_y >= 159 && mouse_y <= 243 && dia == 0)
                {
                	textprintf(screen, font, 644, 174, yellow, "Rose", mouse_y);
                    if (mouse_b)
                    {
                        dia = 30; 
                        item = 0;
                                  
                    }    
                }
                if (mouse_x >= 759 && mouse_x <= 900 && mouse_y >= 0 && mouse_y <= 400)
                {
                	textprintf(screen, font, 783, 119, yellow, "Leave", mouse_y);
                    if (mouse_b)
                    {
                       scr = 7;
                       gamew = 400;
                       area = &lacrepe;
                       h = h7;
                       w = w7;
                       dia = 0;
                       cm = yellow;
                       item = 0;         
                    }    
                }
                if (mouse_x >= 202 && mouse_x <= 286 && mouse_y >= 158 && mouse_y <= 240 && dia == 0)
                {
                	textprintf(screen, font, 227, 204, yellow, "Jimmy", mouse_y);
                    if (mouse_b)
                    {
                    	item = 0;
                    	if (drinkx == false)
                    	{
	                        dia = 1;
	                    }
	                    if (bottle == -1)
                        {
                        	dia = 21;
	                        drink = -1;
	                        // bottle = 0;
						}
                    }    
                }
                if (bottlex == true)
                {
	                if (mouse_x >= 127 && mouse_x <= 197 && mouse_y >= 442 && mouse_y <= 580 && drink == 1 && dia == 0)
	                {
	                   // textprintf(screen, font, 161, 531, yellow, "Cup", mouse_y);
	                   if (mouse_b)
	                   {
	                               // item = 0;
	                               // drink = 3;
	                               bottle = -1;
	                               bottlex = false;
	                   }   
	                }
                }
                if (dia == 70)
                {
                        cm = yellow;
                        draw_sprite(screen, sam_textbox7, 0, 400);
                        // textprintf(screen, font, 410, 580, cm, "Next ->", mouse_y);
                        rectfill(screen, 480, 400, 900, 600, black);
                        textprintf(sam_textbox7, font, 183, 60, cm, "Where is the Jewel?", mouse_y);
                        if (mouse_x >= 153 && mouse_x <= 334 && mouse_y >= 450 && mouse_y <= 467)
                        {
                               if (mouse_b)
                               {
                                  dia = 6;
                                  item = 0;
                               }     
                        }
                        textprintf(sam_textbox7, font, 183, 80, cm, "What are you doing here?", mouse_y);
                        if (mouse_x >= 153 && mouse_x <= 334 && mouse_y >= 470 && mouse_y <= 487)
                        {
                               if (mouse_b)
                               {
                                   dia = 10;
                                   item = 0;  
                               }   
                        }
                        textprintf(sam_textbox7, font, 183, 140, cm, "Nevermind", mouse_y);
                        if (mouse_x >= 153 && mouse_x <= 334 && mouse_y >= 530 && mouse_y <= 547)
                        {
                               if (mouse_b)
                               {
                                  dia = 0; 
                                  item = 0;
                                  
                               }    
                        }
                        
	                    textprintf(sam_textbox7, font, 183, 100, cm, "What have you been up to Jimmy?", mouse_y);
	                    if (mouse_x >= 153 && mouse_x <= 350 && mouse_y >= 490 && mouse_y <= 507)
	                    {
	                            if (mouse_b)
	                            {
	                                dia = 18;
	                                item = 0;
	                            }     
	                        
						}
					    
                        
                }
                if (dia == 0)
                {
                        // draw_sprite(screen, sam_begin1, 0, 400);
                        // textprintf(screen, font, 410, 580, cm, "Next ->", mouse_y);
                        // rectfill(screen, 0, 400, 900, 600, black);
                        draw_sprite(screen, backer, 0, 400);
                }
                if (dia == 60)
                {
                        cm = yellow;
                        draw_sprite(screen, max_cardoor, 0, 400);
                        textprintf(max_cardoor, font, 510, 180, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black);
                }
                if (dia == 30)
                {
                        cm = yellow;
                        draw_sprite(screen, sam_rose, 0, 400);
                        textprintf(sam_rose, font, 410, 180, cm, "Next ->", mouse_y);
                        rectfill(screen, 480, 400, 900, 600, black);  
                }
                if (dia == 31)
                {
                        cm = yellow;
                        draw_sprite(screen, max_rose, 0, 400);
                        textprintf(max_rose, font, 510, 180, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black);
                }
                if (dia == 32)
                {
                        cm = yellow;
                        draw_sprite(screen, sam_rose2, 0, 400);
                        textprintf(sam_rose2, font, 410, 180, cm, "Next ->", mouse_y);
                        rectfill(screen, 480, 400, 900, 600, black);  
                }
                if (dia == 33)
                {
                        cm = yellow;
                        draw_sprite(screen, max_rose2, 0, 400);
                        textprintf(max_rose2, font, 510, 180, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black);
                }
                if (dia == 1)
                {
                        cm = yellow;
                        draw_sprite(screen, sam_jimmy0, 0, 400);
                        textprintf(sam_jimmy0, font, 410, 180, cm, "Next ->", mouse_y);
                        rectfill(screen, 480, 400, 900, 600, black);  
                }
                if (dia == 2)
                {
                        cm = yellow;
                        draw_sprite(screen, max_jimmy01, 0, 400);
                        textprintf(max_jimmy01, font, 510, 180, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black);
                }
                if (dia == 3)
                {
                        cm = yellow;
                        draw_sprite(screen, jimmy_01, 0, 400);
                        textprintf(jimmy_01, font, 523, 151, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black); 
                }
                if (dia == 4)
                {
                        cm = yellow;
                        draw_sprite(screen, max_jimmy02, 0, 400);
                        textprintf(max_jimmy02, font, 510, 180, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black);
                }
                if (dia == 5)
                {
                        cm = yellow;
                        draw_sprite(screen, jimmy_02, 0, 400);
                        textprintf(jimmy_02, font, 523, 151, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black); 
                }
                if (dia == 6)
                {
                        cm = yellow;
                        draw_sprite(screen, sam_jimmy11, 0, 400);
                        textprintf(sam_jimmy11, font, 410, 180, cm, "Next ->", mouse_y);
                        rectfill(screen, 480, 400, 900, 600, black);  
                }
                if (dia == 7)
                {
                        cm = yellow;
                        draw_sprite(screen, max_jimmy11, 0, 400);
                        textprintf(max_jimmy11, font, 510, 180, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black);
                }
                if (dia == 8)
                {
                        cm = yellow;
                        draw_sprite(screen, jimmy_11, 0, 400);
                        textprintf(jimmy_11, font, 523, 151, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black); 
                }
                if (dia == 9)
                {
                        cm = yellow;
                        draw_sprite(screen, jimmy_12, 0, 400);
                        textprintf(jimmy_12, font, 523, 151, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black); 
                }
                if (dia == 10)
                {
                        cm = yellow;
                        draw_sprite(screen, sam_jimmy21, 0, 400);
                        textprintf(sam_jimmy21, font, 410, 180, cm, "Next ->", mouse_y);
                        rectfill(screen, 480, 400, 900, 600, black);  
                }
                if (dia == 11)
                {
                        cm = yellow;
                        draw_sprite(screen, jimmy_21, 0, 400);
                        textprintf(jimmy_21, font, 523, 151, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black); 
                }
                if (dia == 12)
                {
                        cm = yellow;
                        draw_sprite(screen, max_jimmy21, 0, 400);
                        textprintf(max_jimmy21, font, 510, 180, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black);
                }
                if (dia == 13)
                {
                        cm = yellow;
                        draw_sprite(screen, jimmy_22, 0, 400);
                        textprintf(jimmy_22, font, 523, 151, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black); 
                }
                if (dia == 14)
                {
                        cm = yellow;
                        draw_sprite(screen, sam_jimmy22, 0, 400);
                        textprintf(sam_jimmy22, font, 410, 180, cm, "Next ->", mouse_y);
                        rectfill(screen, 480, 400, 900, 600, black);  
                }
                if (dia == 15)
                {
                        cm = yellow;
                        draw_sprite(screen, max_jimmy22, 0, 400);
                        textprintf(max_jimmy22, font, 510, 180, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black);
                }
                if (dia == 16)
                {
                        cm = yellow;
                        draw_sprite(screen, sam_jimmy23, 0, 400);
                        textprintf(sam_jimmy23, font, 410, 180, cm, "Next ->", mouse_y);
                        rectfill(screen, 480, 400, 900, 600, black);  
                }
                if (dia == 17)
                {
                        cm = yellow;
                        draw_sprite(screen, jimmy_23, 0, 400);
                        textprintf(jimmy_23, font, 523, 151, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black); 
                }
                if (dia == 18)
                {
                        cm = yellow;
                        draw_sprite(screen, sam_jimmy31, 0, 400);
                        textprintf(sam_jimmy31, font, 410, 180, cm, "Next ->", mouse_y);
                        rectfill(screen, 480, 400, 900, 600, black);  
                }
                if (dia == 19)
                {
                        cm = yellow;
                        draw_sprite(screen, jimmy_31, 0, 400);
                        textprintf(jimmy_31, font, 523, 151, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black); 
                }
                if (dia == 20)
                {
                        cm = yellow;
                        draw_sprite(screen, max_jimmy31, 0, 400);
                        textprintf(max_jimmy31, font, 510, 180, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black);
                }
                if (dia == 21)
                {
                        cm = yellow;
                        draw_sprite(screen, jimmy_drink1, 0, 400);
                        textprintf(jimmy_drink1, font, 523, 151, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black); 
                }
                if (dia == 22)
                {
                        cm = yellow;
                        draw_sprite(screen, jimmy_drink2, 0, 400);
                        textprintf(jimmy_drink2, font, 523, 151, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black); 
                }
                if (dia == 23)
                {
                        cm = yellow;
                        draw_sprite(screen, sam_jimmydrink1, 0, 400);
                        textprintf(sam_jimmydrink1, font, 410, 180, cm, "Next ->", mouse_y);
                        rectfill(screen, 480, 400, 900, 600, black);  
                }
                if (dia == 24)
                {
                        cm = yellow;
                        draw_sprite(screen, jimmy_drink3, 0, 400);
                        textprintf(jimmy_drink3, font, 523, 151, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black); 
                }
                if (dia == 25)
                {
                        cm = yellow;
                        draw_sprite(screen, jimmy_drink4, 0, 400);
                        textprintf(jimmy_drink4, font, 523, 151, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black); 
                }
                if (dia == 26)
                {
                        cm = yellow;
                        draw_sprite(screen, max_jimmydrink1, 0, 400);
                        textprintf(max_jimmydrink1, font, 510, 180, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black);
                }
                if (dia == 27)
                {
                        cm = yellow;
                        draw_sprite(screen, sam_jimmydrink2, 0, 400);
                        textprintf(sam_jimmydrink2, font, 410, 180, cm, "Next ->", mouse_y);
                        rectfill(screen, 480, 400, 900, 600, black);  
                }
		  }
		  if (scr == 9)
		  {
		  	// Warehouse
		  	play_midi(alley, 0);
		  	    if (mouse_x >= 379 && mouse_x <= 448 && mouse_y >= 570 && mouse_y <= 600)
                {
                            // Sam box
                            cm = red;
                            if (mouse_b && dia == 30)
                            {
                                dia = 31;  
                            }
                            if (mouse_b && dia == 40)
                            {
                                dia = 41;  
                            }
                            if (mouse_b && dia == 42)
                            {
                                dia = 0;  
                            }
                            if (mouse_b && dia == 1)
                            {
                                dia = 2;  
                            }
                            if (mouse_b && dia == 4)
                            {
                                dia = 5;  
                            }
                            if (mouse_b && dia == 8)
                            {
                                dia = 9;  
                            }
                            if (mouse_b && dia == 10)
                            {
                                dia = 11;  
                            }
                            if (mouse_b && dia == 12)
                            {
                                dia = 13;  
                            }
                            if (mouse_b && dia == 15)
                            {
                                dia = 16;  
                            }
                            if (mouse_b && dia == 18)
                            {
                                dia = 19;  
                            }
                }
                if (mouse_x >= 484 && mouse_x <= 550 && mouse_y >= 570 && mouse_y <= 600)
                {
                            // Max Box
                            cm = red;
                            if (mouse_b && dia == 60)
                            {
                                dia = 61;   
                                travel = 1;
                            }
                            if (mouse_b && dia == 31)
                            {
                                dia = 0;  
                            }
                            if (mouse_b && dia == 41)
                            {
                                dia = 42;  
                            }
                            if (mouse_b && dia == 2)
                            {
                                dia = 3;  
                            }
                            if (mouse_b && dia == 5)
                            {
                                dia = 6;  
                            }
                            if (mouse_b && dia == 9)
                            {
                                dia = 70;  
                            }
                            if (mouse_b && dia == 12)
                            {
                                dia = 13;  
                            }
                            if (mouse_b && dia == 13)
                            {
                                dia = 14;  
                            }
                            if (mouse_b && dia == 16)
                            {
                                dia = 17;  
                            }
                }
                if (mouse_x >= 495 && mouse_x <= 561 && mouse_y >= 543 && mouse_y <= 557)
                {
                            // Jeff box
                            cm = red;
                            if (mouse_b && dia == 3)
                            {
                                dia = 70;  
                            }
                            if (mouse_b && dia == 6)
                            {
                                dia = 7;  
                            }
                            if (mouse_b && dia == 7)
                            {
                                dia = 8;  
                            }
                            if (mouse_b && dia == 11)
                            {
                                dia = 12;  
                            }
                            if (mouse_b && dia == 13)
                            {
                                dia = 14;  
                            }
                            if (mouse_b && dia == 14)
                            {
                                dia = 15;  
                            }
                            if (mouse_b && dia == 17)
                            {
                                dia = 18;  
                            }
                            if (mouse_b && dia == 19)
                            {
                                dia = 70;  
                                jeff = 1;
                            }
                }
                if (mouse_x >= 454 && mouse_x <= 552 && mouse_y >= 202 && mouse_y <= 293 && dia == 0)
                {
                	textprintf(screen, font, 477, 238, yellow, "Dumpster", mouse_y);
                	if (mouse_b)
                	{
                		dia = 30;
                		item = 0;
					}
                }
                if (mouse_x >= 0 && mouse_x <= 176 && mouse_y >= 141 && mouse_y <= 307 && dia == 0)
                {
                	textprintf(screen, font, 57, 195, yellow, "Graffiti", mouse_y);
                	if (mouse_b)
                	{
                		dia = 40;
                		item = 0;
					}
                }
                if (mouse_x >= 197 && mouse_x <= 424 && mouse_y >= 0 && mouse_y <= 248 && dia == 0)
                {
                	textprintf(screen, font, 273, 120, yellow, "Leave Alley", mouse_y);
                	if (mouse_b)
                	{
                		dia = 60;
                		item = 0;
					}
                }
                if (lock == 0)
                {
                	// draw_sprite(*area, jeff2, 560, 230);
                	if (mouse_x >= 555 && mouse_x <= 647 && mouse_y >= 155 && mouse_y <= 299 && dia == 0)
                    {
                    	textprintf(screen, font, 576, 238, yellow, "Jeff", mouse_y);
                    	if (mouse_b)
                    	{
                    		item = 0;
                    		dia = 1;
						}
                    }
				}
				if (lock == 1)
				{
					// draw_sprite(*area, warehouse, 0, 0);
					
					if (mouse_x >= 646 && mouse_x <= 728 && mouse_y >= 147 && mouse_y <= 319 && dia == 0)
                    {
                    	textprintf(screen, font, 663, 224, yellow, "Enter Storage Room", mouse_y);
                    	if (mouse_b)
                    	{
                    		if (win == 0)
                    		{
	                    		scr = 10;
	                            gamew = 400;
	                            area = &storage;
	                            h = h10;
	                            w = w10;
	                            dia = 0;
	                            cm = yellow;
	                            item = 0;
                            }
                            if (win == 1)
                            {
                            	scr = 10;
	                            gamew = 400;
	                            area = &storage2;
	                            h = h102;
	                            w = w102;
	                            dia = 0;
	                            cm = yellow;
	                            item = 0;
							}
						}
                    }
				}
                if (dia == 70)
                {
                        cm = yellow;
                        draw_sprite(screen, sam_textbox8, 0, 400);
                        // textprintf(screen, font, 410, 580, cm, "Next ->", mouse_y);
                        rectfill(screen, 480, 400, 900, 600, black);
                        textprintf(sam_textbox8, font, 183, 60, cm, "You are a crook", mouse_y);
                        if (mouse_x >= 153 && mouse_x <= 334 && mouse_y >= 450 && mouse_y <= 467)
                        {
                               if (mouse_b)
                               {
                                  dia = 4;
                                  item = 0;
                               }     
                        }
                        textprintf(sam_textbox8, font, 183, 80, cm, "Let us in", mouse_y);
                        if (mouse_x >= 153 && mouse_x <= 334 && mouse_y >= 470 && mouse_y <= 487)
                        {
                               if (mouse_b)
                               {
                                   dia = 10;
                                   item = 0;  
                               }   
                        }
                        textprintf(sam_textbox8, font, 183, 140, cm, "Nevermind", mouse_y);
                        if (mouse_x >= 153 && mouse_x <= 334 && mouse_y >= 530 && mouse_y <= 547)
                        {
                               if (mouse_b)
                               {
                                  dia = 0; 
                                  item = 0;
                                  
                               }    
                        }
                }
                if (dia == 0)
                {
                        // draw_sprite(screen, sam_begin1, 0, 400);
                        // textprintf(screen, font, 410, 580, cm, "Next ->", mouse_y);
                        // rectfill(screen, 0, 400, 900, 600, black);
                        draw_sprite(screen, backer, 0, 400);
                }
                if (dia == 60)
                {
                        cm = yellow;
                        draw_sprite(screen, max_cardoor, 0, 400);
                        textprintf(max_cardoor, font, 510, 180, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black);
                }
                if (dia == 30)
                {
                        cm = yellow;
                        draw_sprite(screen, sam_dump, 0, 400);
                        textprintf(sam_dump, font, 410, 180, cm, "Next ->", mouse_y);
                        rectfill(screen, 480, 400, 900, 600, black);  
                }
                if (dia == 31)
                {
                        cm = yellow;
                        draw_sprite(screen, max_dump, 0, 400);
                        textprintf(max_dump, font, 510, 180, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black);
                }
                if (dia == 40)
                {
                        cm = yellow;
                        draw_sprite(screen, sam_graffiti, 0, 400);
                        textprintf(sam_graffiti, font, 410, 180, cm, "Next ->", mouse_y);
                        rectfill(screen, 480, 400, 900, 600, black);  
                }
                if (dia == 41)
                {
                        cm = yellow;
                        draw_sprite(screen, max_graffiti, 0, 400);
                        textprintf(max_graffiti, font, 510, 180, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black);
                }
                if (dia == 42)
                {
                        cm = yellow;
                        draw_sprite(screen, sam_graffiti2, 0, 400);
                        textprintf(sam_graffiti2, font, 410, 180, cm, "Next ->", mouse_y);
                        rectfill(screen, 480, 400, 900, 600, black);  
                }
                if (dia == 1)
                {
                        cm = yellow;
                        draw_sprite(screen, sam_jeff0, 0, 400);
                        textprintf(sam_jeff0, font, 410, 180, cm, "Next ->", mouse_y);
                        rectfill(screen, 480, 400, 900, 600, black);  
                }
                if (dia == 2)
                {
                        cm = yellow;
                        draw_sprite(screen, max_jeff0, 0, 400);
                        textprintf(max_jeff0, font, 510, 180, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black);
                }
                if (dia == 3)
                {
                        // rectfill(*area, 0, 300, 580, 600, black);
                        draw_sprite(screen, jeff_0, 0, 400);
                        textprintf(jeff_0, font, 523, 151, cm, "Next ->", mouse_y);
                }
				if (dia == 4)
                {
                        cm = yellow;
                        draw_sprite(screen, sam_jeff11, 0, 400);
                        textprintf(sam_jeff11, font, 410, 180, cm, "Next ->", mouse_y);
                        rectfill(screen, 480, 400, 900, 600, black);  
                }
                if (dia == 5)
                {
                        cm = yellow;
                        draw_sprite(screen, max_jeff11, 0, 400);
                        textprintf(max_jeff11, font, 510, 180, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black);
                }
                if (dia == 6)
                {
                        // rectfill(*area, 0, 300, 580, 600, black);
                        draw_sprite(screen, jeff_11, 0, 400);
                        textprintf(jeff_11, font, 523, 151, cm, "Next ->", mouse_y);
                }
                if (dia == 7)
                {
                        // rectfill(*area, 0, 300, 580, 600, black);
                        draw_sprite(screen, jeff_12, 0, 400);
                        textprintf(jeff_12, font, 523, 151, cm, "Next ->", mouse_y);
                }
                if (dia == 8)
                {
                        cm = yellow;
                        draw_sprite(screen, sam_jeff12, 0, 400);
                        textprintf(sam_jeff12, font, 410, 180, cm, "Next ->", mouse_y);
                        rectfill(screen, 480, 400, 900, 600, black);  
                }
                if (dia == 9)
                {
                        cm = yellow;
                        draw_sprite(screen, max_jeff12, 0, 400);
                        textprintf(max_jeff12, font, 510, 180, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black);
                }
                if (dia == 10)
                {
                        cm = yellow;
                        draw_sprite(screen, sam_jeff21, 0, 400);
                        textprintf(sam_jeff21, font, 410, 180, cm, "Next ->", mouse_y);
                        rectfill(screen, 480, 400, 900, 600, black);  
                }
                if (dia == 11)
                {
                        // rectfill(*area, 0, 300, 580, 600, black);
                        draw_sprite(screen, jeff_21, 0, 400);
                        textprintf(jeff_21, font, 523, 151, cm, "Next ->", mouse_y);
                }
                if (dia == 12)
                {
                        cm = yellow;
                        draw_sprite(screen, max_jeff21, 0, 400);
                        textprintf(max_jeff21, font, 510, 180, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black);
                }
                if (dia == 13)
                {
                        // rectfill(*area, 0, 300, 580, 600, black);
                        draw_sprite(screen, jeff_22, 0, 400);
                        textprintf(jeff_22, font, 523, 151, cm, "Next ->", mouse_y);
                }
                if (dia == 14)
                {
                        // rectfill(*area, 0, 300, 580, 600, black);
                        draw_sprite(screen, jeff_22, 0, 400);
                        textprintf(jeff_22, font, 523, 151, cm, "Next ->", mouse_y);
                }
                if (dia == 15)
                {
                        cm = yellow;
                        draw_sprite(screen, sam_jeff22, 0, 400);
                        textprintf(sam_jeff22, font, 410, 180, cm, "Next ->", mouse_y);
                        rectfill(screen, 480, 400, 900, 600, black);  
                }
                if (dia == 16)
                {
                        cm = yellow;
                        draw_sprite(screen, max_jeff22, 0, 400);
                        textprintf(max_jeff22, font, 510, 180, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black);
                }
                if (dia == 17)
                {
                        // rectfill(*area, 0, 300, 580, 600, black);
                        draw_sprite(screen, jeff_24, 0, 400);
                        textprintf(jeff_24, font, 523, 151, cm, "Next ->", mouse_y);
                }
                if (dia == 18)
                {
                        cm = yellow;
                        draw_sprite(screen, sam_jeff23, 0, 400);
                        textprintf(sam_jeff23, font, 410, 180, cm, "Next ->", mouse_y);
                        rectfill(screen, 480, 400, 900, 600, black);  
                }
                if (dia == 19)
                {
                        // rectfill(*area, 0, 300, 580, 600, black);
                        draw_sprite(screen, jeff_25, 0, 400);
                        textprintf(jeff_25, font, 523, 151, cm, "Next ->", mouse_y);
                }
		  }
          if (scr == 10)
          {
          	// Storage Room
          	play_midi(room, 0);
          	if (mouse_x >= 379 && mouse_x <= 448 && mouse_y >= 570 && mouse_y <= 600)
                {
                            // Sam box
                            cm = red;
                            if (mouse_b && dia == 1)
                            {
                                dia = 2;  
                            }
                            
                }
                if (mouse_x >= 484 && mouse_x <= 550 && mouse_y >= 570 && mouse_y <= 600)
                {
                            // Max Box
                            cm = red;
                            if (mouse_b && dia == 60)
                            {
                                dia = 61;
								travel = 1;   
                            }
                            if (mouse_b && dia == 2)
                            {
                                dia = 0;
								gem = 1;   
                            }
                }
                if (mouse_x >= 0 && mouse_x <= 150 && mouse_y >= 0 && mouse_y <= 400 && dia == 0)
                {
                	textprintf(screen, font, 10, 174, yellow, "Leave Room", mouse_y);
                	if (mouse_b)
                	{
						scr = 9;
						gamew = 400;
						area = &warehouse2;
						h = warehouse2->h;
						w = warehouse2->w;
						dia = 0;
						cm = yellow;
						item = 0;
				    }
                }
                if (mouse_x >= 651 && mouse_x <= 751 && mouse_y >= 174 && mouse_y <= 204 && dia == 0 && win == 0)
                {
                	textprintf(screen, font, 681, 189, yellow, "Keypad", mouse_y);
                	if (mouse_b)
                	{
						scr = 11;
						gamew = 400;
						area = &keypad;
						h = keypad->h;
						w = keypad->w;
						dia = 0;
						cm = yellow;
						item = 0;
				    }
                }
                if (dia == 0)
                {
                        // draw_sprite(screen, sam_begin1, 0, 400);
                        // textprintf(screen, font, 410, 580, cm, "Next ->", mouse_y);
                        // rectfill(screen, 0, 400, 900, 600, black);
                        draw_sprite(screen, backer, 0, 400);
                }
                if (dia == 60)
                {
                        cm = yellow;
                        draw_sprite(screen, max_cardoor, 0, 400);
                        textprintf(max_cardoor, font, 510, 180, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black);
                }
                if (dia == 1)
                {
                        cm = yellow;
                        draw_sprite(screen, sam_jewel, 0, 400);
                        textprintf(sam_jewel, font, 410, 180, cm, "Next ->", mouse_y);
                        rectfill(screen, 480, 400, 900, 600, black);  
                }
                if (dia == 2)
                {
                        cm = yellow;
                        draw_sprite(screen, max_jewel, 0, 400);
                        textprintf(max_jewel, font, 510, 180, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black);
                }
		  }
		  if (scr == 11)
		  {
		  	// Keypad
		  	play_midi(room, 0);
		  	if (dia == 0)
            {
                        // draw_sprite(screen, sam_begin1, 0, 400);
                        // textprintf(screen, font, 410, 580, cm, "Next ->", mouse_y);
                        // rectfill(screen, 0, 400, 900, 600, black);
                        draw_sprite(screen, backer, 0, 400);
            }
            if (mouse_x >= 100 && mouse_x <= 570 && mouse_y >= 87 && mouse_y <= 282 && dia == 0)
            {
                	textprintf(screen, font, 312, 167, yellow, "Keypad", mouse_y);
                	if (mouse_b)
                	{
                		if (paperx == true)
                		{
                			draw_sprite(*area, fiven, 173, 250);
                			draw_sprite(*area, fiven, 343, 247);
                			code = 1;
                			item = 0;
						}
					}
            }
            if (mouse_x >= 0 && mouse_x <= 150 && mouse_y >= 360 && mouse_y <= 400 && dia == 0)
            {
            	textprintf(screen, font, 53, 373, yellow, "Return", mouse_y);
            	if (mouse_b)
            	{
            		scr = 10;
	                gamew = 400;
	                area = &storage;
	                h = h10;
	                w = w10;
	                dia = 0;
	                cm = yellow;
	                item = 0;
				}
            }
            if (mouse_x >= 640 && mouse_x <= 780 && mouse_y >= 133 && mouse_y <= 239 && dia == 0)
            {
            	textprintf(screen, font, 690, 178, yellow, "Try", mouse_y);
            	if (mouse_b)
            	{
            		if (code == 1)
            		{
            			scr = 10;
		                gamew = 400;
		                area = &storage2;
		                h = h102;
		                w = w102;
		                dia = 1;
		                cm = yellow;
		                item = 0;
		                win = 1;
		                paper = 0;
					}
				}
            }
		  }
          
          
          
          
          
          
          
          
          
          
          
          
          
          
          
          
          
          
          
          if (cash >= 1 && dia == 0)
          {
                   // rectfill(screen, 0, 400, 900, 600, black);
                   draw_sprite(backer, money2, 10, 40);
          }     
		  if (cash < 1 && dia == 0)
          {
          	rectfill(backer, 0, 0, 124, 200, black);
		  }  
          if (drink >= 1 && dia == 0)
          {
                            // rectfill(screen, 0, 400, 900, 600, black);
                   draw_sprite(backer, cup2, 140, 40);
          }
          if (drink < 1 && dia == 0)
          {
          	rectfill(backer, 117, 0, 225, 200, black);
		  } 
          if (sweet >= 1 && dia == 0)
          {
                            // rectfill(screen, 0, 400, 900, 600, black);
                   draw_sprite(backer, muffin2, 240, 40);
          }
          if (sweet < 1 && dia == 0)
          {
          	rectfill(backer, 220, 0, 339, 200, black);
		  } 
          if (paper >= 1 && dia == 0)
          {
                            // rectfill(screen, 0, 400, 900, 600, black);
                   draw_sprite(backer, note2, 350, 40);
          }
          if (paper < 1 && dia == 0)
          {
          	rectfill(backer, 333, 0, 451, 200, black);
		  }
          if (bottle >= 1 && dia == 0)
          {
                            // rectfill(screen, 0, 400, 900, 600, black);
                   draw_sprite(backer, bottle1, 480, 10);
          }
          if (bottle < 1 && dia == 0)
          {
          	rectfill(backer, 450, 0, 535, 200, black);
		  } 
          if (card >= 1 && dia == 0)
          {
                            // rectfill(screen, 0, 400, 900, 600, black);
                   draw_sprite(backer, card2, 540, 10);
          }
          if (card < 1 && dia == 0)
          {
          	rectfill(backer, 535, 0, 674, 200, black);
		  } 
          if (gem >= 1 && dia == 0)
          {
                            // rectfill(screen, 0, 400, 900, 600, black);
                   draw_sprite(backer, jewel, 600, 10);
          }
          
          if (mouse_x >= 0 && mouse_x <= 100 && mouse_y >= 460 && mouse_y <= 540 && cash == 1 && dia == 0)
          {
                   textprintf(screen, font, 45, 490, yellow, "Cash", mouse_y);
                   if (mouse_b)
                   {
                               item = 1;
                               // cash = 2;
                               cashx = true;
                   }   
          }
          if (mouse_x >= 127 && mouse_x <= 197 && mouse_y >= 442 && mouse_y <= 580 && drink == 1 && dia == 0)
          {
                   textprintf(screen, font, 161, 531, yellow, "Cup", mouse_y);
                   if (mouse_b)
                   {
                               item = 1;
                               // drink = 2;
                               drinkx = true;
                   }   
          }
          if (mouse_x >= 208 && mouse_x <= 319 && mouse_y >= 435 && mouse_y <= 532 && sweet == 1 && dia == 0)
          {
                   textprintf(screen, font, 260, 476, yellow, "Muffin", mouse_y);
                   if (mouse_b)
                   {
                               item = 1;
                               // drink = 2;
                               sweetx = true;
                   }   
          }
          if (mouse_x >= 325 && mouse_x <= 445 && mouse_y >= 438 && mouse_y <= 518 && paper == 1 && dia == 0)
          {
                   textprintf(screen, font, 388, 474, yellow, "Note", mouse_y);
                   if (mouse_b)
                   {
                               item = 1;
                               // drink = 2;
                               paperx = true;
                   }   
          }
          if (mouse_x >= 453 && mouse_x <= 522 && mouse_y >= 512 && mouse_y <= 584 && bottle == 1 && dia == 0)
          {
                   textprintf(screen, font, 486, 514, yellow, "Vodka", mouse_y);
                   if (mouse_b)
                   {
                               item = 1;
                               // drink = 2;
                               bottlex = true;
                   }   
          }
          if (mouse_x >= 574 && mouse_x <= 729 && mouse_y >= 430 && mouse_y <= 550 && gem == 1 && dia == 0)
          {
                   textprintf(screen, font, 620, 475, yellow, "Jewel", mouse_y);
                   if (mouse_b)
                   {
                               item = 1;
                               // drink = 2;
                               gemx = true;
                   }   
          }
          if (mouse_x >= 535 && mouse_x <= 649 && mouse_y >= 426 && mouse_y <= 496 && card == 1 && dia == 0)
          {
                   textprintf(screen, font, 627, 458, yellow, "Card", mouse_y);
                   if (mouse_b)
                   {
                               item = 1;
                               // drink = 2;
                               cardx = true;
                   }   
          }
          if (item == 1 && cashx == true)
          {
                   draw_sprite(screen, money3, mouse_x, mouse_y);
                   blit(screen, screen, 0, 0, 0, 0, money3->w, money3->h);   
          }
          if (item == 1 && drinkx == true)
          {
                   draw_sprite(screen, cup3, mouse_x, mouse_y);
                   blit(screen, screen, 0, 0, 0, 0, cup3->w, cup3->h);   
          }
          if (item == 1 && sweetx == true)
          {
                   draw_sprite(screen, muffin, mouse_x, mouse_y);
                   blit(screen, screen, 0, 0, 0, 0, muffin->w, muffin->h);   
          }
          if (item == 1 && paperx == true)
          {
                   draw_sprite(screen, note2, mouse_x, mouse_y);
                   blit(screen, screen, 0, 0, 0, 0, note2->w, note2->h);   
          }
          if (item == 1 && bottlex == true)
          {
                   draw_sprite(screen, bottle2, mouse_x, mouse_y);
                   blit(screen, screen, 0, 0, 0, 0, bottle2->w, bottle2->h);   
          }
          if (item == 1 && cardx == true)
          {
                   draw_sprite(screen, card1, mouse_x, mouse_y);
                   blit(screen, screen, 0, 0, 0, 0, card1->w, card1->h);   
          }
          if (item == 1 && gemx == true)
          {
                   draw_sprite(screen, jewel2, mouse_x, mouse_y);
                   blit(screen, screen, 0, 0, 0, 0, jewel2->w, jewel2->h);   
          }
        
          
          
          
          
          
          
          
          
          
          
          
          
          
          
          
          if (dia == 61)
                {
                        cm = yellow;
                        draw_sprite(screen, sam_textbox2, 0, 400);
                        // textprintf(screen, font, 410, 580, cm, "Next ->", mouse_y);
                        rectfill(screen, 480, 400, 900, 600, black);
                }
                if (dia == 61)
                {
                   if (scr != 3)
                   {
                       textprintf(sam_textbox2, font, 183, 74, yellow, "Outside", mouse_y);
                       if (mouse_x >= 152 && mouse_x <= 218 && mouse_y >= 467 && mouse_y <= 483)
                       {
                           cm = red;
                           if (mouse_b)
                           {
                              scr = 3;
                              gamew = 400;
                              area = &outside;
                              h = h3;
                              w = w3;
                              dia = 0;
                              cm = yellow; 
							             
                           }           
                       }
                   }  
                   if (scr != 4)
                   {
                       textprintf(sam_textbox2, font, 278, 74, yellow, "Museum", mouse_y);  
                       if (mouse_x >= 248 && mouse_x <= 310 && mouse_y >= 467 && mouse_y <= 483)
                       {
                           cm = red;
                           if (mouse_b)
                           {
                              scr = 4;
                              gamew = 400;
                              area = &museum;
                              h = h4;
                              w = w4;
                              dia = 0;
                              cm = yellow;            
                           }           
                       }
                   }
                   textprintf(sam_textbox2, font, 165, 168, yellow, "Nevermind", mouse_y);
                   if (mouse_x >= 134 && mouse_x <= 220 && mouse_y >= 558 && mouse_y <= 581)
                   {
                       cm = red;
                       if (mouse_b)
                       {
                          dia = 0;            
                       }           
                   }
                   if (scr != 1)
                   {
                       textprintf(sam_textbox2, font, 183, 116, yellow, "Office", mouse_y);
                       if (mouse_x >= 152 && mouse_x <= 218 && mouse_y >= 500 && mouse_y <= 530)
                       {
                           cm = red;
                           if (mouse_b)
                           {
                              scr = 1;
                              gamew = 400;
                              area = &office;
                              h = h1;
                              w = w1;
                              dia = 0;
                              cm = yellow;            
                           }           
                       }
                   }
                   if (locations > 2)
                   {
                       if (scr != 6)
                       {
                           textprintf(sam_textbox2, font, 368, 74, yellow, "Drinkey's", mouse_y); 
                           if (mouse_x >= 330 && mouse_x <= 400 && mouse_y >= 467 && mouse_y <= 483)
                           {
                               cm = red;
                               if (mouse_b)
                               {
                                  scr = 6;
                                  gamew = 400;
                                  area = &drinkey;
                                  h = h6;
                                  w = w6;
                                  dia = 0;
                                  cm = yellow;            
                               }           
                           }
                       }   
                   }
                   if (locations > 3)
                   {
                       if (scr != 7)
                       {
                           textprintf(sam_textbox2, font, 278, 116, yellow, "La Crepe", mouse_y); 
                           if (mouse_x >= 248 && mouse_x <= 310 && mouse_y >= 500 && mouse_y <= 530)
                           {
                               cm = red;
                               if (mouse_b)
                               {
                                  scr = 7;
                                  gamew = 400;
                                  area = &lacrepe;
                                  h = h7;
                                  w = w7;
                                  dia = 0;
                                  cm = yellow;            
                               }           
                           }
                       }   
                   }
                   if (locations > 4)
                   {
                       if (scr != 9)
                       {
                           textprintf(sam_textbox2, font, 368, 116, yellow, "Warehouse", mouse_y); 
                           if (mouse_x >= 330 && mouse_x <= 400 && mouse_y >= 500 && mouse_y <= 530)
                           {
                               cm = red;
                               if (mouse_b)
                               {
                               	if (lock == 0)
                               	{
                                  scr = 9;
                                  gamew = 400;
                                  area = &warehouse;
                                  h = h9;
                                  w = w9;
                                  dia = 0;
                                  cm = yellow; 
                                }
								  if (lock == 1)
						          {
						          	scr = 9;
						            gamew = 400;
						            area = &warehouse2;
						            h = warehouse2->h;
						            w = warehouse2->w;
						            dia = 0;
						            cm = yellow;
						            item = 0;
								  }           
                               }           
                           }
                       }   
                   } 
                }
	}

	deinit();
	return 0;
}
END_OF_MAIN()

void init() 
{
	int depth, res;

	allegro_init();
	depth = desktop_color_depth();
	if (depth == 0) depth = 32;
	set_color_depth(depth);
	res = set_gfx_mode(GFX_AUTODETECT_WINDOWED, 900, 600, 0, 0);
	if (res != 0) 
    {
		allegro_message(allegro_error);
		exit(-1);
	}

	install_timer();
	install_keyboard();
	install_mouse();
	/* add other initializations here */
}

void deinit() 
{
	clear_keybuf();
	/* add other deinitializations here */
}
