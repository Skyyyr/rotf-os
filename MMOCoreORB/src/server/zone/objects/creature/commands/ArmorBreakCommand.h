/*
				Copyright <SWGEmu>
		See file COPYING for copying conditions.*/

#ifndef ARMORBREAKCOMMAND_H_
#define ARMORBREAKCOMMAND_H_

#include "JediCombatQueueCommand.h"

class ArmorBreakCommand : public JediCombatQueueCommand {
public:

	ArmorBreakCommand(const String& name, ZoneProcessServer* server)
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

		return doCombatAction(creature, target);
	}

};

#endif //SABER2HSWEEP2COMMAND_H_
