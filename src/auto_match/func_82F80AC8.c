typedef unsigned char undefined1;
typedef unsigned char byte;
typedef unsigned char undefined;
typedef unsigned char bool;
#define true 1
#define false 0
typedef unsigned short undefined2;
typedef unsigned short ushort;
typedef unsigned short word;
typedef unsigned int undefined4;
typedef unsigned int uint;
typedef unsigned int dword;
typedef unsigned int ulong;
typedef unsigned __int64 undefined8;
typedef unsigned __int64 ulonglong;
typedef unsigned __int64 qword;
typedef __int64 longlong;
typedef int (*code)();
typedef unsigned char U8;
typedef unsigned short U16;
typedef unsigned int U32;
typedef unsigned __int64 U64;
typedef signed char S8;
typedef signed short S16;
typedef signed int S32;
typedef __int64 S64;
typedef struct { U64 lo, hi; } V16;
extern unsigned int *auStack_aa0;
extern unsigned int *auStack_ab0;
extern int fn_82F69370();
extern int fn_82F69398();
extern int fn_82F697A8();
extern int fn_82F6FA38();
extern int fn_82F80208();
extern int fn_82F80368();
extern int fn_82F80998();
extern int fn_82F8698C();
extern int fn_82F86A70();
extern int fn_82F86B1C();
extern unsigned int iStack_abc;
extern unsigned int uStack_ab4;
extern unsigned int uStack_ab8;
extern unsigned int uStack_ac0;


void fn_82F80AC8(undefined8 param_1,int param_2,undefined8 param_3,int param_4,undefined8 param_5,
                  int param_6,ulonglong param_7,undefined4 *param_8)

{
  undefined8 uVar1;
  longlong lVar2;
  int iVar5;
  undefined8 uVar3;
  ulonglong uVar4;
  int in_stack_00000054;
  undefined4 uStack_ac0;
  int iStack_abc;
  undefined4 uStack_ab8;
  undefined4 uStack_ab4;
  undefined1 auStack_ab0 [16];
  undefined1 auStack_aa0 [2720];
  
  uVar1 = fn_82F69370(param_2,param_5);
  lVar2 = fn_82F69398(param_4,param_5);
  if (lVar2 == 0) {
    uStack_ab8 = 0;
    *(undefined4 **)(param_2 + 4) = &uStack_ac0;
    uStack_ac0 = 0xfffffffe;
    uStack_ab4 = 0;
    iStack_abc = param_2;
  }
  if ((param_7 & 0xffffffff) != 0) {
    fn_82F80998(param_1,uVar1,param_6,param_7);
  }
  iVar5 = fn_82F6FA38();
  *(undefined1 **)(iVar5 + 0x8c) = auStack_aa0;
  uVar3 = fn_82F697A8(auStack_ab0,param_1);
  if (in_stack_00000054 == 0) {
    in_stack_00000054 = *(int *)(param_4 + 8);
  }
  fn_82F86A70(in_stack_00000054,param_1,param_3);
  fn_82F80368(uVar1,param_4,param_5,*param_8);
  fn_82F80208(param_2,param_4,param_5,(ulonglong)(uint)param_8[1] + 1);
  iVar5 = fn_82F6FA38();
  uVar4 = fn_82F86B1C(param_1,uVar1,param_3,param_5,*(undefined4 *)(param_6 + 0xc),
                          (undefined4 *)(param_2 + 4),uVar3,*(undefined4 *)(iVar5 + 0x8c));
  if ((uVar4 & 0xffffffff) != 0) {
    if ((int)lVar2 == 0) {
      *(undefined4 *)(param_2 + 4) = 0;
    }
    fn_82F8698C(uVar4,auStack_aa0);
  }
  return;
}

