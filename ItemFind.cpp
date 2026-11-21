//
// Created by summe on 11/21/2026.
//

#include "ItemFind.h"

 Item ItemFind::getName () const {
     return item;
 }

Item ItemFind::getDescription () const {
     return item;
 }

string ItemFind::pickUp(Player p) {
     p.addItem(item);
     string text = item.getName + " added to inventory.";
     return text;
}
