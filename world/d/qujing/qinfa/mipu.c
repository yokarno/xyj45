// �����硤���μǡ��汾��������
/* <SecCrypt CPL V3R05> */
 
// created by snowcat 12/2/1997

inherit ROOM;

void create ()
{
  set ("short", "����");
  set ("long", @LONG

������һ���ſ������״����״��򿪣�¶����ɫ�Ĵ��׺���ۡ�
��̨����һʯĥ����ĥ����֮������ϡ���ֻ�չ����������
���ˡ�

LONG);

  set("exits", ([
        "north"    : __DIR__"wugu",
      ]));
  set("objects", ([
        __DIR__"npc/chen"    : 1,
      ]));
  setup();
}
