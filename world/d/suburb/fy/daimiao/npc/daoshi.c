// 
// 

inherit NPC;
void create()
{
	string *order=({"�ϲ�", "ɨ��", "�շ�", "��ˮ", "����","����"});
        set_name((order[random(5)]) +"�ĵ�ʿ", ({ "daoshi", "dao"}) );
        set("gender", "����" );
        set("age", 22);
        set("long", "���������С��ʿ������æ��\n");
        set("combat_exp", 10);
        set("attitude", "friendly");
        set_skill("unarmed", 5);
	set_skill("demon-steps",3);
	set_skill("dodge", 4);
	set_skill("force",4);
	map_skill("dodge","demon-steps");
        set("force",10);
        set("force_factor",2);
        set("max_force",100);
        set("chat_chance", 10);
        set("chat_msg", ({
                "С��ʿ����ĵ��˵����ϵĳ���������\n",
		(: random_move :),
        }) );
	
	setup();
        carry_object(__DIR__"obj/boom");
}
