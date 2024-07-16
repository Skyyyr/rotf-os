/*
				Copyright <SWGEmu>
		See file COPYING for copying conditions.*/

#ifndef SABER2HPOWERATTACKCOMMAND_H_
#define SABER2HPOWERATTACKCOMMAND_H_

#include "JediCombatQueueCommand.h"

class Saber2hPowerAttackCommand : public JediCombatQueueCommand {
public:

	Saber2hPowerAttackCommand(const String& name, ZoneProcessServer* server)
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

#endif //SABER2HPOWERATTACKCOMMAND_H_
