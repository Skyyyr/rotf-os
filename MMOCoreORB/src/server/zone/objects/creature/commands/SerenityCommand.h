/*
				Copyright <SWGEmu>
		See file COPYING for copying conditions.*/

#ifndef SERENITYCOMMAND_H_
#define SERENITYCOMMAND_H_

class SerenityCommand : public JediQueueCommand {
public:

	SerenityCommand(const String& name, ZoneProcessServer* server)
		: JediQueueCommand(name, server) {

		buffCRC = BuffCRC::JEDI_FORCE_FOCUS;

		skillMods.put("ranged_defense", 25);
		skillMods.put("melee_defense", 25);

	}

	int doQueueCommand(CreatureObject* creature, const uint64& target, const UnicodeString& arguments) const {
		return doJediSelfBuffCommand(creature);
	}

};

#endif //SERENITYCOMMAND_H_
