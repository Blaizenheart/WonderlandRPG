//
// Created by Aubrey on 11/21/26.
//
#include "NPC.h"

// static NPC npc = NPC();
static NPC Delilah = NPC("Delilah", "Alice sees a friendly looking deer with heart shaped white spots on the back of her fur.", 0, 4,{"*bleat* Oh why hello! Aren't you just the cutest thing! I'm Delilah! And whats your name sweetheart? Alice? What a darling name!",
"Do you like to frolick dear? Oh well I suppose I'm the deer aren't I? laughs You should try frolicking from time to time though, it really helps to reset the mind.",
"If you have any strawberries, or crackers...be sure to stop on by and we can share a little snack together.",
"Have you seen a brown bunny around? Her and I were supposed to frolick in this grass together...sigh I hope she didn't sleep in again. If she were anywhere, she'd probably be in that shack by that beach...sigh."}, false);

static NPC Becky = NPC("Becky", "The bunny is laying belly up atop the oysters, She is cute and fluffy but rather large. Alice is uncertain whether she has a lot of soft fluffy fur or if she's just fat. Alice figures it'd be rude to ask so the answer remains a mystery."
, 0, 4, {"Hi.",
"Oh yeah, these empty oyster shells were just here when I got here. I didn't have any. Say you got any berries for lil ol Becky here? huh, whos Becky? Me, obviously"
"You seem so stressed, you should relax. Preferably somewhere that is not here."
"Have you seen a really pretty deer around? I was supposed to meet her but I slept in again...and now I can't remember where the field we're supposed to frolick in is..."}, false);

static NPC Hatter = NPC("The Angry Hatter", "Alice approaches the Hatter who is a tall looming opossum in a vest and large coat with a cravat around her neck. On top of her head she has one large top hat, on top of that a medium hat with a bow, and on top of that a smaller straw hat with ribbons and flowers. But most notably, she is very very angry.", 0, 4,
{"what can I [redacted] help you with? spits",
"Im the hatter. I make hats. Do you want one? No, you don't. Nobody wants a hat these days.",
"Why don't people like hats? My mother didn't like hats. She said being a hatter was stupid. But you know what I think is stupid? Remarrying her ex husband, who by the way gets so guilty around her he drops dead.",
"Stupid mom...I thought I'd show her, but it seems I'm the failure she always thought I was. Why are you still here? PISS OFF!"}, false);

static NPC Niwrad = NPC("Niwrad", "Alice hesitantly approaches the strange duck creature, he had shed antlers taped to his head, conjoined at the top. He was shaking and looking up at the sky, almost paranoid that something would appear.", 0, 4,
{"The- The big one...its coming!!",
"I've been researching strange things in this area for years, and listen young miss, you gotta get out of here! And tell them that Niwrad the genius duck saved you! I'll save everyone!"
"Find yourself some antlers, it will help protect your mind from being read! The Queen...she wants to control everyone! But she doesn't even realize..."
"This world...its not quite real, is it? I know I'm not real, you seem to be quite real miss, but are you really? Is anything real?"}, false);

static NPC Owlbert = NPC("Owlbert", "Owlbert is a round but tall owl sitting in front of a canvas, his he sports overalls covered in paint and quills poking out his pocket. Another quil held by his wing and painting strokes on his masterpiece.", 0, 4,
{"Oh! hehe well hello! My names Owlbert, what can I do for you?",
"Oh this little thing? It's not much really, just a spur of the moment thing. but, I have always said that spur of the moment is when true art is made.",
"I've always said painting is best and most prosperous thing a person could do. My brother however, disagreed. He insisted I join the military with them...I think he's still mad at me for saying no...",
"But what can one do, fighting was never for me. I prefer my attacks to be with paint on to a canvas."}, false);

static NPC Marbles = NPC("Marbles", "Alice bounded over to the stout frog solider, her smile which spread from cheek to cheek was infectious, her face lit up in diamond shape blush, she seemed much nicer than the owl guard just next to her.", 0, 4,
{"Well how do ya DO! My names Marbles, Marbles the frog!",
"I've been here protecting this kingdom since I was a wee pollywog! oh frog, does the time fly! mmm flies....",
"I don't agree all too much with our lovely monarch's policies, but when you've done one thing your whole life, its hard to leave it!",
"And besides, my buddy Owliver here is such an inspiration! Just look at that serious face! It just makes you want to protect."}, false);
