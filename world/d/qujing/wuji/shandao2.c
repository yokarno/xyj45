// �����硤���μǡ��汾��������
/* <SecCrypt CPL V3R05> */
 
// snowcat moved to /d/qujing/wuji

inherit ROOM;

void create ()
{
  set ("short", "ɽ��");
  set ("long", @LONG

ɽ����᫲�ƽ������ɽ�������������ƣ�����ʮ���ն�Ⱥ
�ͻ��ƣ��ѱ涫���ϱ�����紵�����е����˺�����

LONG);

  set("exits", ([ /* sizeof() == 2 */
    "northeast" : __DIR__"shandao1",
    "southwest" : __DIR__"street1",
  ]));
  set("outdoors", __DIR__"");

  setup();
}