// �����硤���μǡ��汾��������
/* <SecCrypt CPL V3R05> */
 
// finger.c

inherit F_CLEAN_UP;

void create()
{
   seteuid(getuid());
}

int main(object me, string arg)
{
   if( !arg ) {
     if( (int)me->query("sen") < 50 )
        return notify_fail("��ľ����޷����С�\n");
     if( !wizardp(me) )
        me->receive_damage("sen", 50);
     me->start_more( FINGER_D->finger_all() );
//     write( FINGER_D->finger_all() );
   } else {
     if( (int)me->query("sen") < 15 )
        return notify_fail("��ľ����޷����С�\n");
     if( !wizardp(me) )
        me->receive_damage("sen", 15);
     write( FINGER_D->finger_user(arg) );
   }
   return 1;
}

int help(object me)
{
  write(@HELP
ָ���ʽ�� finger
           finger [ʹ����Ӣ�Ĵ���]
           finger [ʹ����Ӣ�Ĵ���]@Mudname
 
���ָ����û��ָ��ʹ��������������ʾ�����������������
���������ϡ���֮�������ʾ�й�ĳ����ҵ����ߣ�Ȩ�޵����ϡ�
 
see also : who, mudlist
HELP
    );
    return 1;
}
 