/*
				Copyright <SWGEmu>
		See file COPYING for copying conditions.*/

#ifndef FORCEFOCUSCOMMAND_H_
#define FORCEFOCUSCOMMAND_H_

class ForceFocusCommand : public JediQueueCommand {
public:

	ForceFocusCommand(const String& name, ZoneProcessServer* server)
		: JediQueueCommand(name, server) {

		buffCRC = BuffCRC::JEDI_FORCE_FOCUS;

		skillMods.put("ranged_defense", 25);
		skillMods.put("melee_defense", 25);
		skillMods.put("forcefocus", 1);//shouldn't be the same as the actual mod
	}

	int doQueueCommand(CreatureObject* creature, const uint64& target, const UnicodeString& arguments) const {
        return doJediSelfBuffCommand(creature);
    }

};

#endif //FORCEFOCUSCOMMAND_H_
