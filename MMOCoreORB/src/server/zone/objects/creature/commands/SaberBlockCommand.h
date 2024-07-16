/*
				Copyright <SWGEmu>
		See file COPYING for copying conditions.*/

#ifndef SABERBLOCKCOMMAND_H_
#define SABERBLOCKCOMMAND_H_

#include "JediCombatQueueCommand.h"

class SaberBlockCommand : public JediCombatQueueCommand {
public:

	SaberBlockCommand(const String& name, ZoneProcessServer* server)
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

#endif //SABERBLOCKCOMMAND_H_
