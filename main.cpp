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
	// SAMPLE *open = load_sample("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Midi\\Opening.mid");
    MIDI *open = load_midi("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Midi\\Opening.mid");
    MIDI *offices = load_midi("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Midi\\Office Theme.mid");
    MIDI *beep = load_midi("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Midi\\beep.mid");
    set_volume(255, 255);
    BITMAP *cursor = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Objects 2\\cursor.bmp", NULL);
	BITMAP *buffer;
    const char* offic = "C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Locations2\\office3.bmp";
    const char* opening = "C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Locations2\\TitleCard.bmp";
    BITMAP *title = load_bitmap(opening, NULL);
    BITMAP *office = load_bitmap(offic, NULL);
    BITMAP *end = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Locations2\\Ending Card.bmp", NULL);
    BITMAP *sam = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Characters 2\\Sam2.bmp", NULL);
    BITMAP *max = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Characters 2\\maxr.bmp", NULL);
    BITMAP *phone = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Locations2\\phone desk1.bmp", NULL);
    BITMAP *outside = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Locations2\\streetview1.bmp", NULL);
    BITMAP *warehouse = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Locations2\\Back Alley.bmp", NULL);
    BITMAP *drinkey = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Locations2\\bar.bmp", NULL);
    BITMAP *lacrepe = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Locations2\\la crepe.bmp", NULL);
    BITMAP *museum = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Locations2\\museum1.bmp", NULL);
    BITMAP *store = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Locations2\\store1.bmp", NULL);
    BITMAP *next = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Objects 2\\next.bmp", NULL);
    BITMAP *sam_begin1 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\Sam_begin1.bmp", NULL);
    BITMAP *max_begin1 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\Max_begin1.bmp", NULL);
    BITMAP *sam_begin2 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\Sam_begin2.bmp", NULL);
    BITMAP *phone_begin1 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\Phone_begin1.bmp", NULL);
    BITMAP *max_begin2 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\Max_begin2.bmp", NULL);
    BITMAP *chuck_0 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\chuck_0.bmp", NULL);
    BITMAP *chuck_11 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\chuck_1.1.bmp", NULL);
    BITMAP *chuck_12 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\chuck_1.2.bmp", NULL);
    BITMAP *chuck_21 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\chuck_2.1.bmp", NULL);
    BITMAP *chuck_22 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\chuck_2.2.bmp", NULL);
    BITMAP *chuck_23 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\chuck_2.3.bmp", NULL);
    BITMAP *chuck_24 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\chuck_2.4.bmp", NULL);
    BITMAP *chuck_cupcake1 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\chuck_cupcake1.bmp", NULL);
    BITMAP *chuck_cupcake2 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\chuck_cupcake2.bmp", NULL);
    BITMAP *chuck_drink = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\chuck_drink.bmp", NULL);
    BITMAP *dave_0 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\dave_0.bmp", NULL);
    BITMAP *dave_11 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\dave_1.1.bmp", NULL);
    BITMAP *dave_12 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\dave_1.2.bmp", NULL);
    BITMAP *dave_21 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\dave_2.1.bmp", NULL);
    BITMAP *dave_22 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\dave_2.2.bmp", NULL);
    BITMAP *dave_23 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\dave_2.3.bmp", NULL);
    BITMAP *dave_24 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\dave_2.4.bmp", NULL);
    BITMAP *dave_25 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\dave_2.5.bmp", NULL);
    BITMAP *dave_26 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\dave_2.6.bmp", NULL);
    BITMAP *dave_card = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\dave_card.bmp", NULL);
    BITMAP *janice_0 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\janice_0.bmp", NULL);
    BITMAP *janice_11 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\janice_1.1.bmp", NULL);
    BITMAP *janice_12 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\janice_1.2.bmp", NULL);
    BITMAP *janice_13 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\janice_1.3.bmp", NULL);
    BITMAP *janice_21 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\janice_2.1.bmp", NULL);
    BITMAP *janice_22 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\janice_2.2.bmp", NULL);
    BITMAP *janice_23 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\janice_2.3.bmp", NULL);
    BITMAP *janice_24 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\janice_2.4.bmp", NULL);
    BITMAP *janice_25 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\janice_2.5.bmp", NULL);
    BITMAP *janice_31 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\janice_3.1.bmp", NULL);
    BITMAP *janice_32 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\janice_3.2.bmp", NULL);
    BITMAP *janice_end1 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\janice_end1.bmp", NULL);
    BITMAP *janice_end2 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\janice_end2.bmp", NULL);
    BITMAP *jeff_0 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\Jeff_0.bmp", NULL);
    BITMAP *jeff_11 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\Jeff_1.1.bmp", NULL);
    BITMAP *jeff_12 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\Jeff_1.2.bmp", NULL);
    BITMAP *jeff_21 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\Jeff_2.1.bmp", NULL);
    BITMAP *jeff_22 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\Jeff_2.2.bmp", NULL);
    BITMAP *jeff_23 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\Jeff_2.3.bmp", NULL);
    BITMAP *jeff_24 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\Jeff_2.4.bmp", NULL);
    BITMAP *jeff_25 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\Jeff_2.5.bmp", NULL);
    BITMAP *jeff_call1 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\Jeff_call1.bmp", NULL);
    BITMAP *jeff_call2 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\Jeff_call2.bmp", NULL);
    BITMAP *jeff_call3 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\Jeff_call3.bmp", NULL);
    BITMAP *jimmy_01 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\jimmy_0.1.bmp", NULL);
    BITMAP *jimmy_02 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\jimmy_0.2.bmp", NULL);
    BITMAP *jimmy_11 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\jimmy_1.1.bmp", NULL);
    BITMAP *jimmy_12 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\jimmy_1.2.bmp", NULL);
    BITMAP *jimmy_21 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\jimmy_2.1.bmp", NULL);
    BITMAP *jimmy_22 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\jimmy_2.2.bmp", NULL);
    BITMAP *jimmy_23 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\jimmy_2.3.bmp", NULL);
    BITMAP *jimmy_31 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\jimmy_3.1.bmp", NULL);
    BITMAP *jimmy_drink1 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\jimmy_drink1.bmp", NULL);
    BITMAP *jimmy_drink2 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\jimmy_drink2.bmp", NULL);
    BITMAP *jimmy_drink3 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\jimmy_drink3.bmp", NULL);
    BITMAP *jimmy_drink4 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\jimmy_drink4.bmp", NULL);
    BITMAP *max_ants = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\Max_ants.bmp", NULL);
    BITMAP *max_begin3 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\Max_begin3.bmp", NULL);
    BITMAP *max_cardoor = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\Max_cardoor.bmp", NULL);
    BITMAP *max_cash = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\Max_cash.bmp", NULL);
    BITMAP *max_chuck11 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\Max_chuck1.1.bmp", NULL);
    BITMAP *max_chuck12 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\Max_chuck1.2.bmp", NULL);
    BITMAP *max_chuck21 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\Max_chuck2.1.bmp", NULL);
    BITMAP *max_chuck22 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\Max_chuck2.2.bmp", NULL);
    BITMAP *max_cup = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\Max_cup.bmp", NULL);
    BITMAP *max_darts = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\Max_darts.bmp", NULL);
    BITMAP *max_dave0 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\Max_dave0.bmp", NULL);
    BITMAP *max_dave11 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\Max_dave1.1.bmp", NULL);
    BITMAP *max_dave21 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\Max_dave2.1.bmp", NULL);
    BITMAP *max_dave22 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\Max_dave2.1.bmp", NULL);
    BITMAP *max_doom = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\Max_doom.bmp", NULL);
    BITMAP *max_dump = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\Max_dump.bmp", NULL);
    BITMAP *max_end1 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\Max_end1.bmp", NULL);
    BITMAP *max_end2 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\Max_end2.bmp", NULL);
    BITMAP *max_graffiti = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\Max_graffiti.bmp", NULL);
    BITMAP *max_gumball = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\Max_gumball.bmp", NULL);
    BITMAP *max_janice0 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\Max_janice0.bmp", NULL);
    BITMAP *max_janice11 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\Max_janice1.1.bmp", NULL);
    BITMAP *max_janice21 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\Max_janice2.1.bmp", NULL);
    BITMAP *max_janice22 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\Max_janice2.2.bmp", NULL);
    BITMAP *max_janice31 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\Max_janice3.1.bmp", NULL);
    BITMAP *max_jeff0 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\Max_jeff0.bmp", NULL);
    BITMAP *max_jeff11 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\Max_jeff1.1.bmp", NULL);
    BITMAP *max_jeff12 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\Max_jeff1.2.bmp", NULL);
    BITMAP *max_jeff21 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\Max_jeff2.1.bmp", NULL);
    BITMAP *max_jeff22 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\Max_jeff2.2.bmp", NULL);
    BITMAP *max_jewel = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\Max_jewel.bmp", NULL);
    BITMAP *max_jimmy01 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\Max_jimmy0.1.bmp", NULL);
    BITMAP *max_jimmy02 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\Max_jimmy0.2.bmp", NULL);
    BITMAP *max_jimmy11 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\Max_jimmy1.1.bmp", NULL);
    BITMAP *max_jimmy21 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\Max_jimmy2.1.bmp", NULL);
    BITMAP *max_jimmy22 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\Max_jimmy2.2.bmp", NULL);
    BITMAP *max_jimmy31 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\Max_jimmy3.1.bmp", NULL);
    BITMAP *max_jimmydrink1 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\Max_jimmydrink1.bmp", NULL);
    BITMAP *max_junk = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\Max_junk.bmp", NULL);
    BITMAP *max_meter = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\Max_meter.bmp", NULL);
    BITMAP *max_muffin = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\Max_muffin.bmp", NULL);
    BITMAP *max_murray11 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\Max_murray1.1.bmp", NULL);
    BITMAP *max_murray21 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\Max_murray2.1.bmp", NULL);
    BITMAP *max_murray31 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\Max_murray3.1.bmp", NULL);
    BITMAP *max_plant = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\Max_plant.bmp", NULL);
    BITMAP *max_puzzle = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\Max_puzzle.bmp", NULL);
    BITMAP *max_rathole = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\Max_rathole.bmp", NULL);
    BITMAP *max_rose = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\Max_rose.bmp", NULL);
    BITMAP *max_rose2 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\Max_rose2.bmp", NULL);
    BITMAP *max_sandwich = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\Max_sandwich.bmp", NULL);
    BITMAP *max_skull = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\Max_skull.bmp", NULL);
    BITMAP *max_trash = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\Max_trash.bmp", NULL);
    BITMAP *max_tv = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\Max_tv.bmp", NULL);
    BITMAP *max_zeldron11 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\Max_zeldron1.1.bmp", NULL);
    BITMAP *max_zeldron12 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\Max_zeldron1.2.bmp", NULL);
    BITMAP *max_zeldron21 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\Max_zeldron2.1.bmp", NULL);
    BITMAP *max_zeldron31 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\Max_zeldron3.1.bmp", NULL);
    BITMAP *murray01 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\murray_0.1.bmp", NULL);
    BITMAP *murray02 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\murray_0.2.bmp", NULL);
    BITMAP *murray11 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\murray_1.1.bmp", NULL);
    BITMAP *murray12 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\murray_1.2.bmp", NULL);
    BITMAP *murray21 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\murray_2.1.bmp", NULL);
    BITMAP *murray22 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\murray_2.2.bmp", NULL);
    BITMAP *murray23 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\murray_2.3.bmp", NULL);
    BITMAP *murray24 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\murray_2.4.bmp", NULL);
    BITMAP *murray25 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\murray_2.5.bmp", NULL);
    BITMAP *murray31 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\murray_3.1.bmp", NULL);
    BITMAP *murray32 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\murray_3.2.bmp", NULL);
    BITMAP *murray33 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\murray_3.3.bmp", NULL);
    BITMAP *phone_begin2 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\Phone_begin2.bmp", NULL);
    BITMAP *sam_ants = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\Sam_ants.bmp", NULL);
    BITMAP *sam_ants2 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\Sam_ants2.bmp", NULL);
    BITMAP *sam_begin3 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\Sam_begin3.bmp", NULL);
    BITMAP *sam_begin4 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\Sam_begin4.bmp", NULL);
    BITMAP *sam_begin5 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\Sam_begin5.bmp", NULL);
    BITMAP *sam_cash = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\Sam_cash.bmp", NULL);
    BITMAP *sam_chuck11 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\Sam_chuck1.1.bmp", NULL);
    BITMAP *sam_chuck12 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\Sam_chuck1.2.bmp", NULL);
    BITMAP *sam_chuck13 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\Sam_chuck1.3.bmp", NULL);
    BITMAP *sam_chuck21 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\Sam_chuck2.1.bmp", NULL);
    BITMAP *sam_chuck22 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\Sam_chuck2.2.bmp", NULL);
    BITMAP *sam_chuck23 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\Sam_chuck2.3.bmp", NULL);
    BITMAP *sam_cup = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\Sam_cup.bmp", NULL);
    BITMAP *sam_dairy = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\Sam_dairy.bmp", NULL);
    BITMAP *sam_darts = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\Sam_darts.bmp", NULL);
    BITMAP *sam_dave11 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\Sam_dave1.1.bmp", NULL);
    BITMAP *sam_dave12 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\Sam_dave1.2.bmp", NULL);
    BITMAP *sam_dave13 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\Sam_dave1.3.bmp", NULL);
    BITMAP *sam_dave21 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\Sam_dave2.1.bmp", NULL);
    BITMAP *sam_dave22 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\Sam_dave2.2.bmp", NULL);
    BITMAP *sam_dave23 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\Sam_dave2.3.bmp", NULL);
    BITMAP *sam_dave24 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\Sam_dave2.4.bmp", NULL);
    BITMAP *sam_doom = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\Sam_doom.bmp", NULL);
    BITMAP *sam_dump = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\Sam_dump.bmp", NULL);
    BITMAP *sam_end1 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\Sam_end1.bmp", NULL);
    BITMAP *sam_end2 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\Sam_end2.bmp", NULL);
    BITMAP *sam_end3 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\Sam_end3.bmp", NULL);
    BITMAP *sam_graffiti = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\Sam_graffiti.bmp", NULL);
    BITMAP *sam_graffiti2 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\Sam_graffiti2.bmp", NULL);
    BITMAP *sam_grain = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\Sam_grain.bmp", NULL);
    BITMAP *sam_grain2 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\Sam_grain2.bmp", NULL);
    BITMAP *sam_gumball = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\Sam_gumball.bmp", NULL);
    BITMAP *sam_janice0 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\Sam_janice0.bmp", NULL);
    BITMAP *sam_janice11 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\Sam_janice1.1.bmp", NULL);
    BITMAP *sam_janice12 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\Sam_janice1.2.bmp", NULL);
    BITMAP *sam_janice13 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\Sam_janice1.3.bmp", NULL);
    BITMAP *sam_janice21 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\Sam_janice2.1.bmp", NULL);
    BITMAP *sam_janice22 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\Sam_janice2.2.bmp", NULL);
    BITMAP *sam_janice31 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\Sam_janice3.1.bmp", NULL);
    BITMAP *sam_janice32 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\Sam_janice3.2.bmp", NULL);
    BITMAP *sam_jeff0 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\Sam_jeff0.bmp", NULL);
    BITMAP *sam_jeff11 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\Sam_jeff1.1.bmp", NULL);
    BITMAP *sam_jeff12 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\Sam_jeff1.2.bmp", NULL);
    BITMAP *sam_jeff21 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\Sam_jeff2.1.bmp", NULL);
    BITMAP *sam_jeff22 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\Sam_jeff2.2.bmp", NULL);
    BITMAP *sam_jeff23 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\Sam_jeff2.3.bmp", NULL);
    BITMAP *sam_jeffcall1 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\Sam_jeffcall1.bmp", NULL);
    BITMAP *sam_jeffcall2 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\Sam_jeffcall2.bmp", NULL);
    BITMAP *sam_jewel = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\Sam_jewel.bmp", NULL);
    BITMAP *sam_jimmy0 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\Sam_jimmy0.bmp", NULL);
    BITMAP *sam_jimmy11 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\Sam_jimmy1.1.bmp", NULL);
    BITMAP *sam_jimmy21 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\Sam_jimmy2.1.bmp", NULL);
    BITMAP *sam_jimmy22 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\Sam_jimmy2.2.bmp", NULL);
    BITMAP *sam_jimmy23 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\Sam_jimmy2.3.bmp", NULL);
    BITMAP *sam_jimmy31 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\Sam_jimmy3.1.bmp", NULL);
    BITMAP *sam_jimmydrink1 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\Sam_jimmydrink1.bmp", NULL);
    BITMAP *sam_jimmydrink2 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\Sam_jimmydrink2.bmp", NULL);
    BITMAP *sam_junk = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\Sam_junk.bmp", NULL);
    BITMAP *sam_meter = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\Sam_meter.bmp", NULL);
    BITMAP *sam_muffin = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\Sam_muffin.bmp", NULL);
    BITMAP *sam_muffin2 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\Sam_muffin2.bmp", NULL);
    BITMAP *sam_murray0 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\Sam_murray0.bmp", NULL);
    BITMAP *sam_murray11 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\Sam_murray1.1.bmp", NULL);
    BITMAP *sam_murray12 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\Sam_murray1.2.bmp", NULL);
    BITMAP *sam_murray21 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\Sam_murray2.1.bmp", NULL);
    BITMAP *sam_murray31 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\Sam_murray3.1.bmp", NULL);
    BITMAP *sam_murray32 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\Sam_murray3.2.bmp", NULL);
    BITMAP *sam_murray33 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\Sam_murray3.3.bmp", NULL);
    BITMAP *sam_note = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\Sam_note.bmp", NULL);
    BITMAP *sam_pedestal = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\Sam_pedestal.bmp", NULL);
    BITMAP *sam_plant = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\Sam_plant.bmp", NULL);
    BITMAP *sam_plant2 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\Sam_plant2.bmp", NULL);
    BITMAP *sam_puzzle = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\Sam_puzzle.bmp", NULL);
    BITMAP *sam_rathole = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\Sam_rathole.bmp", NULL);
    BITMAP *sam_rose = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\Sam_rose.bmp", NULL);
    BITMAP *sam_rose2 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\Sam_rose2.bmp", NULL);
    BITMAP *sam_sandwich = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\Sam_sandwich.bmp", NULL);
    BITMAP *sam_sandwich2 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\Sam_sandwich2.bmp", NULL);
    BITMAP *sam_skull = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\Sam_skull.bmp", NULL);
    BITMAP *sam_trash = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\Sam_trash.bmp", NULL);
    BITMAP *sam_tv = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\Sam_tv.bmp", NULL);
    BITMAP *sam_textbox = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\Sam_textbox.bmp", NULL);
    BITMAP *sam_zeldron11 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\Sam_zeldron1.1.bmp", NULL);
    BITMAP *sam_zeldron12 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\Sam_zeldron1.2.bmp", NULL);
    BITMAP *sam_zeldron13 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\Sam_zeldron1.3.bmp", NULL);
    BITMAP *sam_zeldron21 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\Sam_zeldron2.1.bmp", NULL);
    BITMAP *sam_zeldron22 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\Sam_zeldron2.2.bmp", NULL);
    BITMAP *sam_zeldron23 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\Sam_zeldron2.3.bmp", NULL);
    BITMAP *sam_zeldron24 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\Sam_zeldron2.4.bmp", NULL);
    BITMAP *sam_zeldron31 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\Sam_zeldron3.1.bmp", NULL);
    BITMAP *sam_zeldron32 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\Sam_zeldron3.2.bmp", NULL);
    BITMAP *zeldron0 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\Zeldron_0.bmp", NULL);
    BITMAP *zeldron11 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\Zeldron_1.1.bmp", NULL);
    BITMAP *zeldron12 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\Zeldron_1.2.bmp", NULL);
    BITMAP *zeldron13 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\Zeldron_1.3.bmp", NULL);
    BITMAP *zeldron14 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\Zeldron_1.4.bmp", NULL);
    BITMAP *zeldron21 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\Zeldron_2.1.bmp", NULL);
    BITMAP *zeldron22 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\Zeldron_2.2.bmp", NULL);
    BITMAP *zeldron23 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\Zeldron_2.3.bmp", NULL);
    BITMAP *zeldron24 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\Zeldron_2.4.bmp", NULL);
    BITMAP *zeldron31 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\Zeldron_3.1.bmp", NULL);
    BITMAP *zeldron32 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\Zeldron_3.2.bmp", NULL);
    BITMAP *zeldron33 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\Zeldron_3.3.bmp", NULL);
    BITMAP *zeldronmuffin = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Dialogue2\\Zeldron_muffin.bmp", NULL);
    BITMAP *trashclosed = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Objects 2\\Trashcan(closed).bmp", NULL);
    BITMAP *trashopen = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Objects 2\\Trashcan(open).bmp", NULL);
    BITMAP *money = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Objects 2\\money1.bmp", NULL);
    BITMAP *cup = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Objects 2\\cup1.bmp", NULL);
    BITMAP *money2 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Objects 2\\money2.bmp", NULL);
    BITMAP *cup2 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Objects 2\\cup2.bmp", NULL);
    BITMAP *money3 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Objects 2\\money.bmp", NULL);
    BITMAP *cup3 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Objects 2\\cup.bmp", NULL);
    BITMAP *muffin = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Objects 2\\muffin.bmp", NULL);
    BITMAP *muffin1 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Objects 2\\muffin1.bmp", NULL);
    BITMAP *muffin2 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Objects 2\\muffin2.bmp", NULL);
    BITMAP *note1 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Objects 2\\note1.bmp", NULL);
    BITMAP *note2 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Objects 2\\note2.bmp", NULL);
    BITMAP *bottle1 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Objects 2\\bottle1.bmp", NULL);
    BITMAP *bottle2 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Objects 2\\bottle.bmp", NULL);
    // BITMAP *jewel = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Objects 2\\jewel.bmp", NULL);
    BITMAP *jewel1 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Objects 2\\jewel1.bmp", NULL);
    BITMAP *jewel2 = load_bitmap("C:\\Users\\US\\Desktop\\MARINA\\Classes\\Computer Seminar\\Game\\Objects 2\\Jewel2.bmp", NULL);
    int timeStart;
    int red;
    timeStart = clock();
    BITMAP **area = &title;
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
	int h9 = warehouse->h;
	int w9 = warehouse->w;
	int h12 = end->h;
	int w12 = end->w;
	red = makecol(255, 0, 0);
	int invis;
	invis = makecol(255, 0, 255);
	int scr = 0;
	// stretch_blit(title,buffer,0,0,w,h,0,0,SCREEN_W,SCREEN_H);
	int yellow;
	yellow = makecol(255, 255, 0);
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
                                  rectfill(screen, 0, 400, 900, 600, black);
                                  dia = 1;
                      }
          }
          
          textprintf(screen, font, 300, 560, yellow, "Mouse X:%i", mouse_x);
          textprintf(screen, font, 300, 580, yellow, "Mouse Y:%i", mouse_y);
          
          if (scr == 1)
          {
                // office
                // stop_sample(open);
                // play_sample(offices, 128, 128, 1000, 0);
                if (dia == 1)
                {
                        draw_sprite(screen, sam_begin1, 0, 400);
                        textprintf(screen, font, 410, 580, cm, "Next ->", mouse_y);
                }
                if (dia == 0)
                {
                        // draw_sprite(screen, sam_begin1, 0, 400);
                        // textprintf(screen, font, 410, 580, cm, "Next ->", mouse_y);
                        rectfill(screen, 0, 400, 900, 600, black);
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
                        textprintf(screen, font, 510, 580, cm, "Next ->", mouse_y);
                }
                if (dia == 3)
                {
                        cm = yellow;
                        draw_sprite(screen, sam_begin2, 0, 400);
                        textprintf(screen, font, 410, 580, cm, "Next ->", mouse_y);
                        rectfill(screen, 480, 400, 900, 600, black);
                }
                if (dia == 4)
                {
                        cm = yellow;
                        draw_sprite(screen, phone_begin1, 0, 400);
                        textprintf(screen, font, 460, 580, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black);
                }
                if (dia == 5)
                {
                        cm = yellow;
                        draw_sprite(screen, max_begin2, 0, 400);
                        textprintf(screen, font, 510, 580, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black);
                }
                if (dia == 6)
                {
                        cm = yellow;
                        draw_sprite(screen, sam_begin3, 0, 400);
                        textprintf(screen, font, 410, 580, cm, "Next ->", mouse_y);
                        rectfill(screen, 480, 400, 900, 600, black);
                }
                if (dia == 7)
                {
                        cm = yellow;
                        draw_sprite(screen, phone_begin2, 0, 400);
                        textprintf(screen, font, 460, 580, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black);
                }
                if (dia == 8)
                {
                        cm = yellow;
                        draw_sprite(screen, sam_begin5, 0, 400);
                        textprintf(screen, font, 410, 580, cm, "Next ->", mouse_y);
                        rectfill(screen, 480, 400, 900, 600, black);
                }
                if (dia == 9)
                {
                        cm = yellow;
                        draw_sprite(screen, max_begin3, 0, 400);
                        textprintf(screen, font, 510, 580, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black);
                }
                if (dia == 10)
                {
                        cm = yellow;
                        draw_sprite(screen, sam_darts, 0, 400);
                        textprintf(screen, font, 410, 580, cm, "Next ->", mouse_y);
                        rectfill(screen, 480, 400, 900, 600, black);
                }
                if (dia == 11)
                {
                        cm = yellow;
                        draw_sprite(screen, max_darts, 0, 400);
                        textprintf(screen, font, 510, 580, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black);
                }
                if (dia == 20)
                {
                        cm = yellow;
                        draw_sprite(screen, sam_tv, 0, 400);
                        textprintf(screen, font, 410, 580, cm, "Next ->", mouse_y);
                        rectfill(screen, 480, 400, 900, 600, black);
                }
                if (dia == 21)
                {
                        cm = yellow;
                        draw_sprite(screen, max_tv, 0, 400);
                        textprintf(screen, font, 510, 580, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black);
                }
                if (dia == 30)
                {
                        cm = yellow;
                        draw_sprite(screen, sam_ants, 0, 400);
                        textprintf(screen, font, 410, 580, cm, "Next ->", mouse_y);
                        rectfill(screen, 480, 400, 900, 600, black);
                }
                if (dia == 31)
                {
                        cm = yellow;
                        draw_sprite(screen, max_ants, 0, 400);
                        textprintf(screen, font, 510, 580, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black);
                }
                if (dia == 32)
                {
                        cm = yellow;
                        draw_sprite(screen, sam_ants2, 0, 400);
                        textprintf(screen, font, 410, 580, cm, "Next ->", mouse_y);
                        rectfill(screen, 480, 400, 900, 600, black);
                }
                if (dia == 40)
                {
                        cm = yellow;
                        draw_sprite(screen, sam_sandwich, 0, 400);
                        textprintf(screen, font, 410, 580, cm, "Next ->", mouse_y);
                        rectfill(screen, 480, 400, 900, 600, black);
                }
                if (dia == 41)
                {
                        cm = yellow;
                        draw_sprite(screen, max_sandwich, 0, 400);
                        textprintf(screen, font, 510, 580, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black);
                }
                if (dia == 42)
                {
                        cm = yellow;
                        draw_sprite(screen, sam_sandwich2, 0, 400);
                        textprintf(screen, font, 410, 580, cm, "Next ->", mouse_y);
                        rectfill(screen, 480, 400, 900, 600, black);
                }
                if (dia == 50)
                {
                        cm = yellow;
                        draw_sprite(screen, sam_junk, 0, 400);
                        textprintf(screen, font, 410, 580, cm, "Next ->", mouse_y);
                        rectfill(screen, 480, 400, 900, 600, black);
                }
                if (dia == 51)
                {
                        cm = yellow;
                        draw_sprite(screen, max_junk, 0, 400);
                        textprintf(screen, font, 510, 580, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black);
                }
                if (dia == 60)
                {
                        cm = yellow;
                        draw_sprite(screen, max_cardoor, 0, 400);
                        textprintf(screen, font, 510, 580, cm, "Next ->", mouse_y);
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
                        rectfill(screen, 0, 400, 900, 600, black);
                  }
                  if (dia == 1)
                  {
                        // rectfill(*area, 0, 300, 580, 600, black);
                        draw_sprite(screen, jeff_call1, 0, 400);
                        textprintf(screen, font, 500, 580, cm, "Next ->", mouse_y);
                  }
                  if (dia == 2)
                  {
                        cm = yellow;
                        draw_sprite(screen, sam_jeffcall1, 0, 400);
                        textprintf(screen, font, 410, 580, cm, "Next ->", mouse_y);
                        rectfill(screen, 480, 400, 900, 600, black);
                  }
                  if (dia == 3)
                  {
                        // rectfill(*area, 0, 300, 580, 600, black);
                        draw_sprite(screen, jeff_call2, 0, 400);
                        textprintf(screen, font, 500, 580, cm, "Next ->", mouse_y);
                  }
                  if (dia == 4)
                  {
                        cm = yellow;
                        draw_sprite(screen, sam_jeffcall2, 0, 400);
                        textprintf(screen, font, 410, 580, cm, "Next ->", mouse_y);
                        rectfill(screen, 480, 400, 900, 600, black);
                  }
                  if (dia == 5)
                  {
                        // rectfill(*area, 0, 300, 580, 600, black);
                        draw_sprite(screen, jeff_call3, 0, 400);
                        textprintf(screen, font, 500, 580, cm, "Next ->", mouse_y);
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
                              }
                  }
                  if (mouse_x >= 506 && mouse_x <= 551 && mouse_y >= 186 && mouse_y <= 212 && dia == 0)
                  {
                              textprintf(screen, font, 540, 193, yellow, "2", mouse_y);
                              if (mouse_b)
                              {
                                   two = 1; 
                                   item = 0;          
                              }
                  }
                  if (mouse_x >= 473 && mouse_x <= 519 && mouse_y >= 172 && mouse_y <= 197 && dia == 0)
                  {
                              textprintf(screen, font, 513, 182, yellow, "3", mouse_y);
                              if (mouse_b)
                              {
                                   three = 1;
                                   item = 0;           
                              }
                  }
                  if (mouse_x >= 436 && mouse_x <= 480 && mouse_y >= 172 && mouse_y <= 196 && dia == 0)
                  {
                              textprintf(screen, font, 476, 182, yellow, "4", mouse_y);
                              if (mouse_b)
                              {
                                   four = 1;
                                   item = 0;           
                              }
                  }
                  if (mouse_x >= 412 && mouse_x <= 448 && mouse_y >= 182 && mouse_y <= 205 && dia == 0)
                  {
                              textprintf(screen, font, 434, 189, yellow, "5", five);
                              if (mouse_b)
                              {
                                   five = 1;
                                   item = 0;           
                              }
                  }
                  if (mouse_x >= 389 && mouse_x <= 425 && mouse_y >= 200 && mouse_y <= 224 && dia == 0)
                  {
                              textprintf(screen, font, 410, 210, yellow, "6", mouse_y);
                              if (mouse_b)
                              {
                                   six = 1; 
                                   item = 0;          
                              }
                  }
                  if (mouse_x >= 379 && mouse_x <= 414 && mouse_y >= 225 && mouse_y <= 250 && dia == 0)
                  {
                              textprintf(screen, font, 398, 231, yellow, "7", mouse_y);
                              if (mouse_b)
                              {
                                   seven = 1;
                                   item = 0;           
                              }
                  }
                  if (mouse_x >= 384 && mouse_x <= 419 && mouse_y >= 248 && mouse_y <= 274 && dia == 0)
                  {
                              textprintf(screen, font, 407, 258, yellow, "8", mouse_y);
                              if (mouse_b)
                              {
                                   eight = 1;
                                   item = 0;           
                              }
                  }
                  if (mouse_x >= 406 && mouse_x <= 444 && mouse_y >= 270 && mouse_y <= 297 && dia == 0)
                  {
                              textprintf(screen, font, 426, 279, yellow, "9", mouse_y);
                              if (mouse_b)
                              {
                                   nine = 1;
                                   item = 0;           
                              }
                  }
                  if (mouse_x >= 439 && mouse_x <= 476 && mouse_y >= 282 && mouse_y <= 311 && dia == 0)
                  {
                              textprintf(screen, font, 462, 290, yellow, "0", mouse_y);
                              if (mouse_b)
                              {
                                   zero = 1;
                                   item = 0;           
                              }
                  }
                  if (mouse_x >= 426 && mouse_x <= 530 && mouse_y >= 205 && mouse_y <= 274 && dia == 0)
                  {
                              textprintf(screen, font, 473, 232, yellow, "Call", mouse_y);
                              if (mouse_b)
                              {
                                     item = 0;
                                     if (five == 1 && one == 1 && nine == 1 && eight == 1 && four == 1 && jeff == 1)
                                     {
                                         dia = 1;         
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
                        rectfill(screen, 0, 400, 900, 600, black);
                }
                if (trash == 1)
                {
                        draw_sprite(*area, trashopen, 372, 342);    
                }
                if (dia == 10)
                {
                        cm = yellow;
                        draw_sprite(screen, sam_gumball, 0, 400);
                        textprintf(screen, font, 410, 580, cm, "Next ->", mouse_y);
                        rectfill(screen, 480, 400, 900, 600, black);
                }
                if (dia == 11)
                {
                        cm = yellow;
                        draw_sprite(screen, max_gumball, 0, 400);
                        textprintf(screen, font, 510, 580, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black);
                }
                if (dia == 20)
                {
                        cm = yellow;
                        draw_sprite(screen, sam_trash, 0, 400);
                        textprintf(screen, font, 410, 580, cm, "Next ->", mouse_y);
                        rectfill(screen, 480, 400, 900, 600, black);
                }
                if (dia == 21)
                {
                        cm = yellow;
                        draw_sprite(screen, max_trash, 0, 400);
                        textprintf(screen, font, 510, 580, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black);
                }
                if (dia == 30)
                {
                        cm = yellow;
                        draw_sprite(screen, sam_meter, 0, 400);
                        textprintf(screen, font, 410, 580, cm, "Next ->", mouse_y);
                        rectfill(screen, 480, 400, 900, 600, black);
                }
                if (dia == 31)
                {
                        cm = yellow;
                        draw_sprite(screen, max_meter, 0, 400);
                        textprintf(screen, font, 510, 580, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black);
                }
                if (dia == 40)
                {
                        cm = yellow;
                        draw_sprite(screen, sam_doom, 0, 400);
                        textprintf(screen, font, 410, 580, cm, "Next ->", mouse_y);
                        rectfill(screen, 480, 400, 900, 600, black);
                }
                if (dia == 41)
                {
                        cm = yellow;
                        draw_sprite(screen, max_doom, 0, 400);
                        textprintf(screen, font, 510, 580, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black);
                }
                if (dia == 50)
                {
                        cm = yellow;
                        draw_sprite(screen, sam_cup, 0, 400);
                        textprintf(screen, font, 410, 580, cm, "Next ->", mouse_y);
                        rectfill(screen, 480, 400, 900, 600, black);
                }
                if (dia == 51)
                {
                        cm = yellow;
                        draw_sprite(screen, max_cup, 0, 400);
                        textprintf(screen, font, 510, 580, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black);
                }
                if (dia == 60)
                {
                        cm = yellow;
                        draw_sprite(screen, max_cardoor, 0, 400);
                        textprintf(screen, font, 510, 580, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black);
                }
                
                if (dia == 70)
                {
                        cm = yellow;
                        draw_sprite(screen, sam_cash, 0, 400);
                        textprintf(screen, font, 410, 580, cm, "Next ->", mouse_y);
                        rectfill(screen, 480, 400, 900, 600, black);
                }
                if (dia == 71)
                {
                        cm = yellow;
                        draw_sprite(screen, max_cash, 0, 400);
                        textprintf(screen, font, 510, 580, cm, "Next ->", mouse_y);
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
                }
                if (mouse_x >= 484 && mouse_x <= 550 && mouse_y >= 570 && mouse_y <= 600)
                {
                            // Max Box
                            cm = red;
                            if (mouse_b && dia == 60)
                            {
                                dia = 61;   
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
                }     
                if (paper == 0)
                {
                        draw_sprite(*area, note1, 106, 602);
                }
                if (dia == 0)
                {
                        // draw_sprite(screen, sam_begin1, 0, 400);
                        // textprintf(screen, font, 410, 580, cm, "Next ->", mouse_y);
                        rectfill(screen, 0, 400, 900, 600, black);
                }
                if (dia == 60)
                {
                        cm = yellow;
                        draw_sprite(screen, max_cardoor, 0, 400);
                        textprintf(screen, font, 510, 580, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black);
                }
                if (dia == 30)
                {
                        cm = yellow;
                        draw_sprite(screen, sam_muffin, 0, 400);
                        textprintf(screen, font, 410, 580, cm, "Next ->", mouse_y);
                        rectfill(screen, 480, 400, 900, 600, black);
                }
                if (dia == 31)
                {
                        cm = yellow;
                        draw_sprite(screen, zeldronmuffin, 0, 400);
                        textprintf(screen, font, 500, 540, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black);
                }
                if (dia == 32)
                {
                        cm = yellow;
                        draw_sprite(screen, max_muffin, 0, 400);
                        textprintf(screen, font, 510, 580, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black);
                }
                if (dia == 33)
                {
                        cm = yellow;
                        draw_sprite(screen, sam_muffin2, 0, 400);
                        textprintf(screen, font, 410, 580, cm, "Next ->", mouse_y);
                        rectfill(screen, 480, 400, 900, 600, black);
                }
                if (dia == 40)
                {
                        cm = yellow;
                        draw_sprite(screen, sam_note, 0, 400);
                        textprintf(screen, font, 410, 580, cm, "Next ->", mouse_y);
                        rectfill(screen, 480, 400, 900, 600, black);
                }
                if (dia == 50)
                {
                        cm = yellow;
                        draw_sprite(screen, sam_dairy, 0, 400);
                        textprintf(screen, font, 410, 580, cm, "Next ->", mouse_y);
                        rectfill(screen, 480, 400, 900, 600, black);
                }
                if (dia == 70)
                {
                        cm = yellow;
                        draw_sprite(screen, sam_textbox, 0, 400);
                        // textprintf(screen, font, 410, 580, cm, "Next ->", mouse_y);
                        rectfill(screen, 480, 400, 900, 600, black);
                        textprintf(screen, font, 183, 460, cm, "What do you sell here?", mouse_y);
                        if (mouse_x >= 153 && mouse_x <= 334 && mouse_y >= 450 && mouse_y <= 467)
                        {
                               if (mouse_b)
                               {
                                  dia = 2;
                                  item = 0;
                               }     
                        }
                        textprintf(screen, font, 183, 480, cm, "What is the new item?", mouse_y);
                        if (mouse_x >= 153 && mouse_x <= 334 && mouse_y >= 470 && mouse_y <= 487)
                        {
                               if (mouse_b)
                               {
                                   dia = 11;
                                   item = 0;  
                               }   
                        }
                        textprintf(screen, font, 183, 540, cm, "Nevermind", mouse_y);
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
                                textprintf(screen, font, 183, 500, cm, "Do you know Jimmy Two Teeth?", mouse_y);
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
                        textprintf(screen, font, 500, 540, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black);        
                }
                if (dia == 2)
                {
                        cm = yellow;
                        draw_sprite(screen, sam_zeldron11, 0, 400);
                        textprintf(screen, font, 410, 580, cm, "Next ->", mouse_y);
                        rectfill(screen, 480, 400, 900, 600, black);       
                }
                if (dia == 3)
                {
                        cm = yellow;
                        draw_sprite(screen, zeldron11, 0, 400);
                        textprintf(screen, font, 500, 540, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black);        
                }
                if (dia == 4)
                {
                        cm = yellow;
                        draw_sprite(screen, max_zeldron11, 0, 400);
                        textprintf(screen, font, 510, 580, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black);
                }
                if (dia == 5)
                {
                        cm = yellow;
                        draw_sprite(screen, zeldron12, 0, 400);
                        textprintf(screen, font, 500, 540, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black);        
                }
                if (dia == 6)
                {
                        cm = yellow;
                        draw_sprite(screen, sam_zeldron12, 0, 400);
                        textprintf(screen, font, 410, 580, cm, "Next ->", mouse_y);
                        rectfill(screen, 480, 400, 900, 600, black);       
                }
                if (dia == 7)
                {
                        cm = yellow;
                        draw_sprite(screen, zeldron13, 0, 400);
                        textprintf(screen, font, 500, 540, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black);        
                }
                if (dia == 8)
                {
                        cm = yellow;
                        draw_sprite(screen, sam_zeldron13, 0, 400);
                        textprintf(screen, font, 410, 580, cm, "Next ->", mouse_y);
                        rectfill(screen, 480, 400, 900, 600, black);       
                }
                if (dia == 9)
                {
                        cm = yellow;
                        draw_sprite(screen, max_zeldron12, 0, 400);
                        textprintf(screen, font, 510, 580, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black);
                }
                if (dia == 10)
                {
                        cm = yellow;
                        draw_sprite(screen, zeldron14, 0, 400);
                        textprintf(screen, font, 500, 540, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black);        
                }
                if (dia == 11)
                {
                        cm = yellow;
                        draw_sprite(screen, sam_zeldron21, 0, 400);
                        textprintf(screen, font, 410, 580, cm, "Next ->", mouse_y);
                        rectfill(screen, 480, 400, 900, 600, black);       
                }
                if (dia == 12)
                {
                        cm = yellow;
                        draw_sprite(screen, zeldron21, 0, 400);
                        textprintf(screen, font, 500, 540, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black);        
                }
                if (dia == 13)
                {
                        cm = yellow;
                        draw_sprite(screen, max_zeldron21, 0, 400);
                        textprintf(screen, font, 510, 580, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black);
                }
                if (dia == 14)
                {
                        cm = yellow;
                        draw_sprite(screen, zeldron22, 0, 400);
                        textprintf(screen, font, 500, 540, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black);        
                }
                if (dia == 15)
                {
                        cm = yellow;
                        draw_sprite(screen, sam_zeldron22, 0, 400);
                        textprintf(screen, font, 410, 580, cm, "Next ->", mouse_y);
                        rectfill(screen, 480, 400, 900, 600, black);       
                }
                if (dia == 16)
                {
                        cm = yellow;
                        draw_sprite(screen, zeldron23, 0, 400);
                        textprintf(screen, font, 500, 540, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black);        
                }
                if (dia == 17)
                {
                        cm = yellow;
                        draw_sprite(screen, sam_zeldron23, 0, 400);
                        textprintf(screen, font, 410, 580, cm, "Next ->", mouse_y);
                        rectfill(screen, 480, 400, 900, 600, black);       
                }
                if (dia == 18)
                {
                        cm = yellow;
                        draw_sprite(screen, zeldron24, 0, 400);
                        textprintf(screen, font, 500, 540, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black);        
                }
                if (dia == 19)
                {
                        cm = yellow;
                        draw_sprite(screen, sam_zeldron24, 0, 400);
                        textprintf(screen, font, 410, 580, cm, "Next ->", mouse_y);
                        rectfill(screen, 480, 400, 900, 600, black);       
                }
                if (dia == 20)
                {
                        cm = yellow;
                        draw_sprite(screen, sam_zeldron31, 0, 400);
                        textprintf(screen, font, 410, 580, cm, "Next ->", mouse_y);
                        rectfill(screen, 480, 400, 900, 600, black);       
                }
                if (dia == 21)
                {
                        cm = yellow;
                        draw_sprite(screen, zeldron31, 0, 400);
                        textprintf(screen, font, 500, 540, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black);       
                }
                if (dia == 22)
                {
                        cm = yellow;
                        draw_sprite(screen, sam_zeldron32, 0, 400);
                        textprintf(screen, font, 410, 580, cm, "Next ->", mouse_y);
                        rectfill(screen, 480, 400, 900, 600, black);       
                }
                if (dia == 23)
                {
                        cm = yellow;
                        draw_sprite(screen, zeldron32, 0, 400);
                        textprintf(screen, font, 500, 540, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black);       
                }
                if (dia == 24)
                {
                        cm = yellow;
                        draw_sprite(screen, max_zeldron31, 0, 400);
                        textprintf(screen, font, 510, 580, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black);
                }
                if (dia == 25)
                {
                        cm = yellow;
                        draw_sprite(screen, zeldron33, 0, 400);
                        textprintf(screen, font, 500, 540, cm, "Next ->", mouse_y);
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
						      }
                        } 
                }          
          }
          if (scr == 4)
          {
                // Museum
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
                        rectfill(screen, 0, 400, 900, 600, black);
                }
                if (dia == 60)
                {
                        cm = yellow;
                        draw_sprite(screen, max_cardoor, 0, 400);
                        textprintf(screen, font, 510, 580, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black);
                }
                if (dia == 50)
                {
                        cm = yellow;
                        draw_sprite(screen, sam_skull, 0, 400);
                        textprintf(screen, font, 410, 580, cm, "Next ->", mouse_y);
                        rectfill(screen, 480, 400, 900, 600, black);       
                }
                if (dia == 51)
                {
                        cm = yellow;
                        draw_sprite(screen, max_skull, 0, 400);
                        textprintf(screen, font, 510, 580, cm, "Next ->", mouse_y);
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
                        draw_sprite(screen, sam_textbox, 0, 400);
                        // textprintf(screen, font, 410, 580, cm, "Next ->", mouse_y);
                        rectfill(screen, 480, 400, 900, 600, black);
                        textprintf(screen, font, 183, 460, cm, "What was stolen?", mouse_y);
                        if (mouse_x >= 153 && mouse_x <= 334 && mouse_y >= 450 && mouse_y <= 467)
                        {
                               if (mouse_b)
                               {
                                  dia = 4;
                                  item = 0;
                               }     
                        }
                        textprintf(screen, font, 183, 480, cm, "Do you have any suspects?", mouse_y);
                        if (mouse_x >= 153 && mouse_x <= 334 && mouse_y >= 470 && mouse_y <= 487)
                        {
                               if (mouse_b)
                               {
                                   dia = 11;
                                   item = 0;  
                               }   
                        }
                        textprintf(screen, font, 183, 540, cm, "Nevermind", mouse_y);
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
                                textprintf(screen, font, 183, 500, cm, "Do you know Jimmy Two Teeth?", mouse_y);
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
                        draw_sprite(screen, sam_textbox, 0, 400);
                        // textprintf(screen, font, 410, 580, cm, "Next ->", mouse_y);
                        rectfill(screen, 480, 400, 900, 600, black);
                        textprintf(screen, font, 183, 460, cm, "You talk?!", mouse_y);
                        if (mouse_x >= 153 && mouse_x <= 334 && mouse_y >= 450 && mouse_y <= 467)
                        {
                               if (mouse_b)
                               {
                                  dia = 27;
                                  item = 0;
                               }     
                        }
                        textprintf(screen, font, 183, 480, cm, "How did you get here?", mouse_y);
                        if (mouse_x >= 153 && mouse_x <= 334 && mouse_y >= 470 && mouse_y <= 487)
                        {
                               if (mouse_b)
                               {
                                   dia = 32;
                                   item = 0;  
                               }   
                        }
                        textprintf(screen, font, 183, 540, cm, "Nevermind", mouse_y);
                        if (mouse_x >= 153 && mouse_x <= 334 && mouse_y >= 530 && mouse_y <= 547)
                        {
                               if (mouse_b)
                               {
                                  dia = 0; 
                                  item = 0;
                                  murray = 0;
                               }    
                        }
                        
                        textprintf(screen, font, 183, 500, cm, "Who took the diamond?", mouse_y);
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
                        textprintf(screen, font, 410, 580, cm, "Next ->", mouse_y);
                        rectfill(screen, 480, 400, 900, 600, black);       
                }
                if (dia == 2)
                {
                        cm = yellow;
                        draw_sprite(screen, max_janice0, 0, 400);
                        textprintf(screen, font, 510, 580, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black);
                }
                if (dia == 3)
                {
                        cm = yellow;
                        draw_sprite(screen, janice_0, 0, 400);
                        textprintf(screen, font, 523, 551, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black);
                }
				if (dia == 4)
                {
                        cm = yellow;
                        draw_sprite(screen, sam_janice11, 0, 400);
                        textprintf(screen, font, 410, 580, cm, "Next ->", mouse_y);
                        rectfill(screen, 480, 400, 900, 600, black);       
                }
				if (dia == 5)
                {
                        cm = yellow;
                        draw_sprite(screen, janice_11, 0, 400);
                        textprintf(screen, font, 523, 551, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black);
                }
				if (dia == 6)
                {
                        cm = yellow;
                        draw_sprite(screen, sam_janice12, 0, 400);
                        textprintf(screen, font, 410, 580, cm, "Next ->", mouse_y);
                        rectfill(screen, 480, 400, 900, 600, black);       
                }
				if (dia == 7)
                {
                        cm = yellow;
                        draw_sprite(screen, janice_12, 0, 400);
                        textprintf(screen, font, 523, 551, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black);
                }
				if (dia == 8)
                {
                        cm = yellow;
                        draw_sprite(screen, sam_janice13, 0, 400);
                        textprintf(screen, font, 410, 580, cm, "Next ->", mouse_y);
                        rectfill(screen, 480, 400, 900, 600, black);       
                }
				if (dia == 9)
                {
                        cm = yellow;
                        draw_sprite(screen, janice_13, 0, 400);
                        textprintf(screen, font, 523, 551, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black);
                }
				if (dia == 10)
                {
                        cm = yellow;
                        draw_sprite(screen, max_janice11, 0, 400);
                        textprintf(screen, font, 510, 580, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black);
                }
				if (dia == 11)
                {
                        cm = yellow;
                        draw_sprite(screen, sam_janice21, 0, 400);
                        textprintf(screen, font, 410, 580, cm, "Next ->", mouse_y);
                        rectfill(screen, 480, 400, 900, 600, black);       
                }
				if (dia == 12)
                {
                        cm = yellow;
                        draw_sprite(screen, janice_21, 0, 400);
                        textprintf(screen, font, 523, 551, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black);
                }
				if (dia == 13)
                {
                        cm = yellow;
                        draw_sprite(screen, janice_22, 0, 400);
                        textprintf(screen, font, 523, 551, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black);
                }
				if (dia == 14)
                {
                        cm = yellow;
                        draw_sprite(screen, janice_23, 0, 400);
                        textprintf(screen, font, 523, 551, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black);
                }
				if (dia == 15)
                {
                        cm = yellow;
                        draw_sprite(screen, max_janice21, 0, 400);
                        textprintf(screen, font, 510, 580, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black);
                }
                if (dia == 16)
                {
                        cm = yellow;
                        draw_sprite(screen, janice_24, 0, 400);
                        textprintf(screen, font, 523, 551, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black);
                }
                if (dia == 17)
                {
                        cm = yellow;
                        draw_sprite(screen, max_janice22, 0, 400);
                        textprintf(screen, font, 510, 580, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black);
                }
				if (dia == 18)
                {
                        cm = yellow;
                        draw_sprite(screen, sam_janice22, 0, 400);
                        textprintf(screen, font, 410, 580, cm, "Next ->", mouse_y);
                        rectfill(screen, 480, 400, 900, 600, black);       
                }
				if (dia == 19)
                {
                        cm = yellow;
                        draw_sprite(screen, janice_25, 0, 400);
                        textprintf(screen, font, 523, 551, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black);
                }
				if (dia == 20)
                {
                        cm = yellow;
                        draw_sprite(screen, sam_janice31, 0, 400);
                        textprintf(screen, font, 410, 580, cm, "Next ->", mouse_y);
                        rectfill(screen, 480, 400, 900, 600, black);       
                }
				if (dia == 21)
                {
                        cm = yellow;
                        draw_sprite(screen, janice_31, 0, 400);
                        textprintf(screen, font, 523, 551, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black);
                }
				if (dia == 22)
                {
                        cm = yellow;
                        draw_sprite(screen, max_janice31, 0, 400);
                        textprintf(screen, font, 510, 580, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black);
                }
				if (dia == 23)
                {
                        cm = yellow;
                        draw_sprite(screen, janice_32, 0, 400);
                        textprintf(screen, font, 523, 551, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black);
                }
				if (dia == 24)
                {
                        cm = yellow;
                        draw_sprite(screen, sam_janice32, 0, 400);
                        textprintf(screen, font, 410, 580, cm, "Next ->", mouse_y);
                        rectfill(screen, 480, 400, 900, 600, black);       
                }
				if (dia == 25)
                {
                        cm = yellow;
                        draw_sprite(screen, sam_murray0, 0, 400);
                        textprintf(screen, font, 410, 580, cm, "Next ->", mouse_y);
                        rectfill(screen, 480, 400, 900, 600, black);       
                }
				if (dia == 26)
                {
                        cm = yellow;
                        draw_sprite(screen, murray01, 0, 400);
                        textprintf(screen, font, 523, 551, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black);
                }
				if (dia == 27)
                {
                        cm = yellow;
                        draw_sprite(screen, sam_murray11, 0, 400);
                        textprintf(screen, font, 410, 580, cm, "Next ->", mouse_y);
                        rectfill(screen, 480, 400, 900, 600, black);       
                }
				if (dia == 28)
                {
                        cm = yellow;
                        draw_sprite(screen, murray11, 0, 400);
                        textprintf(screen, font, 523, 551, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black);
                }
                if (dia == 29)
                {
                        cm = yellow;
                        draw_sprite(screen, sam_murray12, 0, 400);
                        textprintf(screen, font, 410, 580, cm, "Next ->", mouse_y);
                        rectfill(screen, 480, 400, 900, 600, black);       
                }
				if (dia == 30)
                {
                        cm = yellow;
                        draw_sprite(screen, max_murray11, 0, 400);
                        textprintf(screen, font, 510, 580, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black);
                }
				if (dia == 31)
                {
                        cm = yellow;
                        draw_sprite(screen, murray12, 0, 400);
                        textprintf(screen, font, 523, 551, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black);
                }
				if (dia == 32)
                {
                        cm = yellow;
                        draw_sprite(screen, sam_murray21, 0, 400);
                        textprintf(screen, font, 410, 580, cm, "Next ->", mouse_y);
                        rectfill(screen, 480, 400, 900, 600, black);       
                }
				if (dia == 33)
                {
                        cm = yellow;
                        draw_sprite(screen, murray21, 0, 400);
                        textprintf(screen, font, 523, 551, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black);
                }
				if (dia == 34)
                {
                        cm = yellow;
                        draw_sprite(screen, murray22, 0, 400);
                        textprintf(screen, font, 523, 551, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black);
                }
                if (dia == 35)
                {
                        cm = yellow;
                        draw_sprite(screen, max_janice11, 0, 400);
                        textprintf(screen, font, 510, 580, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black);
                }
				if (dia == 36)
                {
                        cm = yellow;
                        draw_sprite(screen, murray23, 0, 400);
                        textprintf(screen, font, 523, 551, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black);
                }
                if (dia == 37)
                {
                        cm = yellow;
                        draw_sprite(screen, murray23, 0, 400);
                        textprintf(screen, font, 523, 551, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black);
                }
                if (dia == 38)
                {
                        cm = yellow;
                        draw_sprite(screen, max_murray21, 0, 400);
                        textprintf(screen, font, 510, 580, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black);
                }
                if (dia == 39)
                {
                        cm = yellow;
                        draw_sprite(screen, murray25, 0, 400);
                        textprintf(screen, font, 523, 551, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black);
                }
				if (dia == 40)
                {
                        cm = yellow;
                        draw_sprite(screen, sam_murray31, 0, 400);
                        textprintf(screen, font, 410, 580, cm, "Next ->", mouse_y);
                        rectfill(screen, 480, 400, 900, 600, black);       
                }
				if (dia == 41)
                {
                        cm = yellow;
                        draw_sprite(screen, murray31, 0, 400);
                        textprintf(screen, font, 523, 551, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black);
                } 
				if (dia == 42)
                {
                        cm = yellow;
                        draw_sprite(screen, murray32, 0, 400);
                        textprintf(screen, font, 523, 551, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black);
                }
				if (dia == 43)
                {
                        cm = yellow;
                        draw_sprite(screen, sam_murray32, 0, 400);
                        textprintf(screen, font, 410, 580, cm, "Next ->", mouse_y);
                        rectfill(screen, 480, 400, 900, 600, black);       
                }
				if (dia == 44)
                {
                        cm = yellow;
                        draw_sprite(screen, max_murray31, 0, 400);
                        textprintf(screen, font, 510, 580, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black);
                }
				if (dia == 45)
                {
                        cm = yellow;
                        draw_sprite(screen, sam_murray33, 0, 400);
                        textprintf(screen, font, 410, 580, cm, "Next ->", mouse_y);
                        rectfill(screen, 480, 400, 900, 600, black);       
                }
				if (dia == 46)
                {
                        cm = yellow;
                        draw_sprite(screen, murray33, 0, 400);
                        textprintf(screen, font, 523, 551, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black);
                }
				if (dia == 80)
                {
                        cm = yellow;
                        draw_sprite(screen, sam_puzzle, 0, 400);
                        textprintf(screen, font, 410, 580, cm, "Next ->", mouse_y);
                        rectfill(screen, 480, 400, 900, 600, black);  
                }
				if (dia == 81)
                {
                        cm = yellow;
                        draw_sprite(screen, max_puzzle, 0, 400);
                        textprintf(screen, font, 510, 580, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black);  
                }
				if (dia == 90)
                {
                        cm = yellow;
                        draw_sprite(screen, sam_pedestal, 0, 400);
                        textprintf(screen, font, 410, 580, cm, "Next ->", mouse_y);
                        rectfill(screen, 480, 400, 900, 600, black);  
                }
				if (dia == 100)
                {
                        cm = yellow;
                        draw_sprite(screen, janice_end1, 0, 400);
                        textprintf(screen, font, 523, 551, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black);
                } 
				if (dia == 101)
                {
                        cm = yellow;
                        draw_sprite(screen, sam_end1, 0, 400);
                        textprintf(screen, font, 410, 580, cm, "Next ->", mouse_y);
                        rectfill(screen, 480, 400, 900, 600, black);  
                }
				if (dia == 102)
                {
                        cm = yellow;
                        draw_sprite(screen, max_end1, 0, 400);
                        textprintf(screen, font, 510, 580, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black);  
                }
				if (dia == 103)
                {
                        cm = yellow;
                        draw_sprite(screen, janice_end2, 0, 400);
                        textprintf(screen, font, 523, 551, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black);
                } 
				if (dia == 104)
                {
                        cm = yellow;
                        draw_sprite(screen, sam_end2, 0, 400);
                        textprintf(screen, font, 410, 580, cm, "Next ->", mouse_y);
                        rectfill(screen, 480, 400, 900, 600, black);  
                }
				if (dia == 105)
                {
                        cm = yellow;
                        draw_sprite(screen, max_end2, 0, 400);
                        textprintf(screen, font, 510, 580, cm, "Next ->", mouse_y);
                        // rectfill(screen, 480, 400, 900, 600, black);  
                }
				if (dia == 106)
                {
                        cm = yellow;
                        draw_sprite(screen, sam_end3, 0, 400);
                        textprintf(screen, font, 410, 580, cm, "Next ->", mouse_y);
                        rectfill(screen, 480, 400, 900, 600, black);  
                }                 
          }
          
          
          
          
          
          
          
          
          
          
          
          
          
          
          
          
          
          
          
          
          if (cash >= 1 && dia == 0)
          {
                   // rectfill(screen, 0, 400, 900, 600, black);
                   draw_sprite(screen, money2, 10, 440);
          }       
          if (drink >= 1 && dia == 0)
          {
                            // rectfill(screen, 0, 400, 900, 600, black);
                   draw_sprite(screen, cup2, 140, 440);
          }
          if (sweet >= 1 && dia == 0)
          {
                            // rectfill(screen, 0, 400, 900, 600, black);
                   draw_sprite(screen, muffin2, 240, 440);
          }
          if (paper >= 1 && dia == 0)
          {
                            // rectfill(screen, 0, 400, 900, 600, black);
                   draw_sprite(screen, note2, 350, 440);
          }
          if (bottle >= 1 && dia == 0)
          {
                            // rectfill(screen, 0, 400, 900, 600, black);
                   draw_sprite(screen, bottle1, 480, 410);
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
          
          
          
          
          
          
          
          
          if (dia == 61)
                {
                        cm = yellow;
                        draw_sprite(screen, sam_textbox, 0, 400);
                        // textprintf(screen, font, 410, 580, cm, "Next ->", mouse_y);
                        rectfill(screen, 480, 400, 900, 600, black);
                }
                if (dia == 61)
                {
                   if (scr != 3)
                   {
                       textprintf(screen, font, 183, 474, yellow, "Outside", mouse_y);
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
                       textprintf(screen, font, 278, 474, yellow, "Museum", mouse_y);  
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
                   textprintf(screen, font, 165, 568, yellow, "Nevermind", mouse_y);
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
                       textprintf(screen, font, 183, 516, yellow, "Office", mouse_y);
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
                           textprintf(screen, font, 368, 474, yellow, "Drinkey's", mouse_y); 
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
                           textprintf(screen, font, 278, 516, yellow, "La Crepe", mouse_y); 
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
                           textprintf(screen, font, 368, 516, yellow, "Warehouse", mouse_y); 
                           if (mouse_x >= 330 && mouse_x <= 400 && mouse_y >= 500 && mouse_y <= 530)
                           {
                               cm = red;
                               if (mouse_b)
                               {
                                  scr = 9;
                                  gamew = 400;
                                  area = &warehouse;
                                  h = h9;
                                  w = w9;
                                  dia = 0;
                                  cm = yellow;            
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
