#include "Aussiegochi.h"

void feedAus(Aussiegochi & aus)
{
	aus.hunger - 1.0f;
	aus.sanity + 0.5f;
}

void waterAus(Aussiegochi & aus)
{
	aus.thirst - 1;
	aus.happiness + 0.5f;
}

void abuseAus(Aussiegochi & aus)
{
	aus.happiness - 1.0f;
}

void cuddleAus(Aussiegochi & aus)
{
	aus.happiness + 1.0f;
}
