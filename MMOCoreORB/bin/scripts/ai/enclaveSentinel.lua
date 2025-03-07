awareEnclavesentinel = {
	{id="2877429880",	name="LookForTarget",	pid="none"},
	{id="1842231240",	name="Sequence",	pid="2877429880"},
	{id="680465367",	name="If",	pid="1842231240"},
	{id="14270026",	name="CheckProspectInRange",	pid="680465367",	args={condition=32.0}},
	{id="565703857",	name="Sequence",	pid="1842231240"},
	{id="2453213506",	name="If",	pid="565703857"},
	{id="2897258589",	name="CheckProspectIsType",	pid="2453213506",	args={condition=PLAYERTYPE}},
	{id="2845873207",	name="If",	pid="565703857"},
	{id="119310356",	name="CheckProspectJediTrial",	pid="2845873207"},
	{id="2718719330",	name="AlwaysSucceed",	pid="1842231240"},
	{id="808385479",	name="Sequence",	pid="2718719330"},
	{id="3267863872",	name="If",	pid="808385479"},
	{id="1762706722",	name="CheckIsKiller",	pid="3267863872"},
	{id="849527437",	name="If",	pid="808385479"},
	{id="1024379378",	name="CheckProspectIsIncapacitated",	pid="849527437"},
	{id="4140801574",	name="TreeSocket",	pid="808385479",	args={slot=KILL}},
	{id="2654446403",	name="Sequence",	pid="1842231240"},
	{id="3473260042",	name="If",	pid="2654446403"},
	{id="2428064963",	name="CheckAggroDelayPast",	pid="3473260042"},
	{id="1223216548",	name="If",	pid="2654446403"},
	{id="601133795",	name="CheckTargetIsValid",	pid="1223216548"},
	{id="4191492022",	name="SetAlert",	pid="2654446403",	args={duration=6.0, show=1}},
	{id="1530216695",	name="CalculateAggroMod",	pid="2654446403"},
	{id="2630611784",	name="TreeSocket",	pid="2654446403",	args={slot=AGGRO}}}
addAiTemplate("awareEnclavesentinel", awareEnclavesentinel)
