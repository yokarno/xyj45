// �����硤���μǡ��汾��������
/* <SecCrypt CPL V3R05> */
 
// by snowcat oct 15 1997

inherit ITEM;
inherit F_FOOD;

void create()
{
  set_name("�׷�", ({"mi fan", "fan", "rice"}));
  set_weight(100);
  if (clonep())
    set_default_object(__FILE__);
  else {
    set("long", "һ��ɰ�����׷���\n");
    set("unit", "��ɰ��");
    set("value", 90);
    set("food_remaining", 5);
    set("food_supply", 35);
  }
}