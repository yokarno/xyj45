// �����硤���μǡ��汾��������
/* <SecCrypt CPL V3R05> */
 

inherit ITEM;

void setup()
{}

void init()
{
  add_action("do_eat", "eat");
}

void create()
{
  set_name("������", ({"jishen wan", "wan"}));
  if (clonep())
    set_default_object(__FILE__);
  else {
    set("unit", "��");
    set("long", "һ�������Կ��ҩ�裮\n");
    set("value", 3000);
    set("drug_type", "��ҩ");
  }
  setup();
}

int do_eat(string arg)
{
  if (arg != "jishen wan" && arg != "wan")
    return 0;

  if ((int)this_player()->query("eff_sen") == 
    (int)this_player()->query("max_sen"))
    return notify_fail("�����ڲ���Ҫ�ü����衣\n");
  else {
    this_player()->receive_curing("sen", 40+random(10));
    message_vision("$N����һ�ż����裬���������\n",this_player());
    destruct(this_object());
    return 1;
  }
}
