// Room: "/d/oldpine/epath1.c

inherit ROOM;

void create()
{
	set("short", "�ּ�С·");
	set("long", @LONG
������������һ���������е�С·����������������϶�����һЩ
��ֵļǺţ����Ǳ����õ��ӻ�����С·��������һ��յأ�������Զ
���Կ���һ��ɽ������������һ��Сʯ�š�
LONG
	);
	set("exits", ([ /* sizeof() == 2 */
  "west" : "/d/suburb/es/oldpine/clearing",
  "east" : "/d/suburb/es/oldpine/epath2",
]));
	set("outdoors", "oldpine");

	setup();
	replace_program(ROOM);
}