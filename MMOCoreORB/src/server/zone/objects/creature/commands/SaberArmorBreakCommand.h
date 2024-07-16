/*
				Copyright <SWGEmu>
		See file COPYING for copying conditions.*/

#ifndef SABERARMORBREAKCOMMAND_H_
#define SABERARMORBREAKCOMMAND_H_

#include "JediCombatQueueCommand.h"

class SaberArmorBreakCommand : public JediCombatQueueCommand {
public:

	SaberArmorBreakCommand(const String& name, ZoneProcessServer* server)
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

#endif //SABERARMORBREAKCOMMAND_H_
