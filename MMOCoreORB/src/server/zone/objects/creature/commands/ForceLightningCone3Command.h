/*
				Copyright <SWGEmu>
		See file COPYING for copying conditions.*/

#ifndef FORCELIGHTNINGCONE3COMMAND_H_
#define FORCELIGHTNINGCONE3COMMAND_H_

#include "ForcePowersQueueCommand.h"

class ForceLightningCone3Command : public ForcePowersQueueCommand {
public:

	ForceLightningCone3Command(const String& name, ZoneProcessServer* server)
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
