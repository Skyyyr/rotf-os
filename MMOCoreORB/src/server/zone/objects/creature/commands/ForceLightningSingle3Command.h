/*
				Copyright <SWGEmu>
		See file COPYING for copying conditions.*/

#ifndef FORCELIGHTNINGSINGLE3COMMAND_H_
#define FORCELIGHTNINGSINGLE3COMMAND_H_

#include "ForcePowersQueueCommand.h"

class ForceLightningSingle3Command : public ForcePowersQueueCommand {
public:

	ForceLightningSingle3Command(const String& name, ZoneProcessServer* server)
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

#endif //FORCELIGHTNINGSINGLE2COMMAND_H_
