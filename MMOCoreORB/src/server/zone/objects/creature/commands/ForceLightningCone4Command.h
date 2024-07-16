/*
				Copyright <SWGEmu>
		See file COPYING for copying conditions.*/

#ifndef FORCELIGHTNINGCONE4COMMAND_H_
#define FORCELIGHTNINGCONE4COMMAND_H_

#include "ForcePowersQueueCommand.h"

class ForceLightningCone4Command : public ForcePowersQueueCommand {
public:

	ForceLightningCone4Command(const String& name, ZoneProcessServer* server)
		: ForcePowersQueueCommand(name, server) {

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

#endif //FORCELIGHTNINGCONE2COMMAND_H_
