// �����硤���μǡ��汾��������
/* <SecCrypt CPL V3R05> */
 
// heart_sense.c

#include <ansi.h>

//inherit SSERVER;

int conjure(object me, object target)
{
	if( !target || !target->is_character() )
		return notify_fail("��Ҫ��˭ʹ����ʶ��ͨ��\n");
	if( target->is_corpse() )
		return notify_fail("�������ˣ�ֻ�л��˲��ܾ��ѡ�\n");

	if( (int)me->query("atman") < 50 ) return notify_fail("��ľ���������\n");
	me->add("atman", -50);
	me->receive_damage("gin", 30);
	message_vision( HIY "$Nһ�ַ���$n��������ϣ�һ������$n�����ģ������۾��������� ...\n" NOR,
		me, target );
	if( random(me->query("max_atman")) > 100 )
		target->revive();
	else
		me->unconcious();
	if( me->is_fighting() )
		me->start_busy(3);
	return 1;
}