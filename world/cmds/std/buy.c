// �����硤���μǡ��汾��������
/* <SecCrypt CPL V3R05> */
 
// buy.c

inherit F_CLEAN_UP;

int main(object me, string arg)
{
   string item, targ = "";
   object ob, owner;
   int i, price, afford;
   object* inv;

    if( this_player()->is_busy() )
        return notify_fail("��������æ���ء�\n");

   if( !environment(me) )
     return notify_fail("��Ҫ��˭������\n");

   if( !arg || sscanf(arg, "%s from %s", item, targ)!=2 ) {
     inv = all_inventory(environment(me));
     i = sizeof (inv);
     while (i--) {
       if (inv[i]->is_vendor()) {
         item = arg;
         targ = inv[i]->query("id");
         break;
       }
     }
     if (targ == "")
       return notify_fail("ָ���ʽ��buy <ĳ��> from <ĳ��>\n");
   }

   if( !objectp(owner = present(targ, environment(me))) )
     return notify_fail("��Ҫ��˭������\n");

   if( userp(owner) ) {
     message_vision("$N����$n����" + item + "����\n", me, owner);
           notify_fail("�Է�����Ը����㽻�ס�\n");
     return 1;
   }

   if( (price = owner->buy_object(me, item)) == -1 ) return 1;
   if( price < 1 ) return 0;

   if( afford = me->can_afford(price) ) {
           if( afford==2 ) 
        return notify_fail("��û���㹻����Ǯ������Ʊ��û���ҵÿ���\n");

//     me->start_busy(1);
//     owner->complete_trade(me, item);

     if(owner->complete_trade(me, item)) {
       me->pay_money(price);
       return 1;
     } else {
         return 0;
     }
   } else
     return notify_fail("���Ǯ������\n");
}

int help(object me)
{
   write( @HELP
ָ���ʽ: buy <something> from <someone>

��һָ��������Դ�ĳЩ����������Ʒ��
HELP
   );
   return 1;
}