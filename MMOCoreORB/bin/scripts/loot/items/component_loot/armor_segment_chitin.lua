armor_segment_chitin = {
	minimumLevel = 0,
	maximumLevel = -1,
	customObjectName = "",
	directObjectTemplate = "object/tangible/component/armor/armor_segment_chitin.iff",
	craftingValues = {
		{"hit_points",1000,1000,0, true},
		{"armor_effectiveness",2,5,10},
		{"armor_integrity",1000,2000,0},
		{"armor_health_encumbrance",13,1,0},
		{"armor_action_encumbrance",13,1,0},
		{"armor_mind_encumbrance",16,1,0},
		{"armor_rating",1,1,0, true},
		{"armor_special_type",1,1,0, true},
		{"armor_special_effectiveness",5,10,0},
		{"armor_special_integrity",100,100,0, true},
		{"useCount",1,11,0},
	},
	customizationStringName = {},
	customizationValues = {}
}


addLootItemTemplate("armor_segment_chitin", armor_segment_chitin)
