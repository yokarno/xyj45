// �����硤���μǡ��汾��������
/* <SecCrypt CPL V3R05> */
 
inherit NPC;
string *first_name = ({ "��","Ǯ","��","��","��","��","֣","��"});
string *name_words = ({ "һ", "��", "��", "��", "��", "��", "��", "��", "��"});
void create()
{
   string name;
        name = first_name[random(sizeof(first_name))];
        name += name_words[random(sizeof(name_words))];

        set_name(name, ({"lie hu", "hu"}));
   set("title", "�Ի�");
        set("long", "һ��ɽ�����֡�\n");
        set("age", 30+random(20));
   set("attitude", "heroism");
        set("gender", "����");
        set("str", 25);
        set("int", 20);
        set("per", 10);
        set("con", 30);
        set("max_kee",800);
        set("max_sen", 800);
        set("combat_exp", 100000+random(30000));
        set("force", 500);
        set("max_force", 500);
        set("mana",50);
        set("max_mana", 50);
        set("force_factor", 10);
        set("mana_factor", 10);
        set_skill("unarmed", 60);
        set_skill("force", 60);
        set_skill("dodge", 60);
   set_skill("fork", 60);
set("inquiry", ([
"name": "�����񣬴���Ϊ����˵��������Ҳ��֪����\n",
"here": "�˵�����ʯɽ��ɽ��Ұ�����࣬���ҪС���ġ�\n",
]) );

        setup();
        carry_object("/d/obj/armor/shoupi")->wear();
   carry_object("/d/obj/weapon/fork/gangcha")->wield();
}