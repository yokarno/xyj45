// Room: "/d/oldpine/keep1.c

inherit ROOM;

void create()
{
	set("short", "����կ�������");
	set("long", @LONG
����ֻ��һ��ľͷ��ɵĴ��ţ��ſ��Ϲ����ġ���Ĳ�֪����ʲô
�����ͷ�Ǹ�һЩ����������������һ��Ǭ�ݵ���֦��������һ��ɭ��
�ﻹ�治���׷�����
LONG
	);
	set("exits", ([ /* sizeof() == 2 */
  "west" : "/d/suburb/es/oldpine/pine2",
  "east" : "/d/suburb/es/oldpine/keep2",
]));
	set("objects", ([ /* sizeof() == 1 */
  "/d/suburb/es/oldpine/npc/bandit_guard" : 4,
]));
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}