// zhu.c ����
// CLEANSWORD 1996/2/2

inherit NPC;

void create()
{
	set_name("����", ({ "zhu xi", "zhu" }));
	set("long", "����������Ϊ������һ����ѧ�ң��������īˮ�Ⱥ���Ҫ�\n");
	set("gender", "����");
	set("age", 65);

	set_skill("literate", 300);

	set_skill("unarmed", 80);
	set_skill("dodge", 80);
	set_skill("parry", 80);
	set_temp("apply/attack", 80);
	set_temp("apply/defense", 80);
	set_temp("apply/damage", 20);

	set("combat_exp", 400000);
	set("shen_type", 1);
	setup();

	set("chat_chance", 3);
	set("chat_msg", ({
		"����˵��������֮�£�Ī������������֮����Ī��������\n",
		"����˵���������ˣ�С�������ɣ����������δ������֮��\n",
		"����˵������ѧ֮�����������¡���������ֹ�����ơ� \n",
		"����˵����������֪���������ģ�������ң��ι�ƽ���¡�\n",
	}) );
}

int recognize_apprentice(object ob)
{
	if (!(int)ob->query_temp("mark/��"))
		return 0; 
	ob->add_temp("mark/��", -1);
	return 1;
}

int accept_object(object who, object ob)
{
	if (!(int)who->query_temp("mark/��"))
		who->set_temp("mark/��", 0);
	if (ob->query("money_id") && ob->value() >= 1000) {
		message_vision("����ͬ��ָ��$NһЩ����д�ֵ����⡣\n", who);
		who->add_temp("mark/��", ob->value() / 50);
		return 1;
	}
	return 0;
}