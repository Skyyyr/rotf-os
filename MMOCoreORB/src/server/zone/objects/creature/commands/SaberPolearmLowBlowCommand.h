/*
				Copyright <SWGEmu>
		See file COPYING for copying conditions.*/

#ifndef SABERPOLEARMLOWBLOWCOMMAND_H_
#define SABERPOLEARMLOWBLOWCOMMAND_H_

#include "JediCombatQueueCommand.h"

class SaberPolearmLowBlowCommand : public JediCombatQueueCommand {
public:

	SaberPolearmLowBlowCommand(const String& name, ZoneProcessServer* server)
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

#endif //SABERPOLEARMLOWBLOWCOMMAND_H_
