/*
				Copyright <SWGEmu>
		See file COPYING for copying conditions.*/

#ifndef SABER1HBLEEDCOMMAND_H_
#define SABER1HBLEEDCOMMAND_H_

#include "JediCombatQueueCommand.h"

class Saber1hBleedCommand : public JediCombatQueueCommand {
public:

	Saber1hBleedCommand(const String& name, ZoneProcessServer* server)
		: JediCombatQueueCommand(name, server) {

	}

	int doQueueCommand(CreatureObject* creature, const uint64& target, const UnicodeString& arguments) const {

		if (!checkStateMask(creature))
			return INVALIDSTATE;

		if (!checkInvalidLocomotions(creature))
			return INVALIDLOCOMOTION;

		if (isWearingArmor(creature)) {
			return NOJEDIARMOR;
		}

		return doCombatAction(creature, target, "");
	}

	String getAnimation(TangibleObject* attacker, TangibleObject* defender, WeaponObject* weapon, uint8 hitLocation, int damage) const {

		String anim = "";
		if (weapon->isJediOneHandedWeapon()) {
			return "knockdown_1hmelee_1";
		} else {
			warning("Invalid weapon in Saber1hBleedCommand getAnimation");
			return "";
		}
	}

};

#endif //SABERSLASH2COMMAND_H_
