// tyroad5.c ���ɽ·
// by Marz 

inherit ROOM;

#include "/d/suburb/xkx/wudang/feng.h"

void create()
{
	set("short", "���ɽ·");
	set("long", @LONG
	������һ�������խ��ɽ·�ϣ�һ�����ͱڣ�һ�������£��߸ߵ�������(feng)
����������Լ�ɼ������ԵĽ���ͺ����˶���ϸ�ض����Լ��Ľ��£�����̧ͷ��һ�ۣ�
Ω��һ��С��ˤ��ȥ������ǿ�˳û���٣������޲�����������ֻ�����·��
LONG
	);
	set("outdoors", "wudang");

	set("exits", ([
		"northup" : __DIR__"tyroad4",
		"eastdown" : __DIR__"tyroad6",
	]));

    set("item_desc", ([
        "feng" : (:look_feng:),
    ]));

	setup();
}

void init()
{
        add_action("look_feng", "look");
}