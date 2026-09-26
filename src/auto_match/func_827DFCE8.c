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
extern unsigned int *auStack_90;
extern unsigned int *auStack_a0;
extern unsigned int *auStack_a8;
extern unsigned int *auStack_b0;
extern int fn_822315A0();
extern int fn_827D50B8();
extern int fn_827D5100();
extern int fn_827DF148();
extern int fn_827DF770();
extern int fn_827DFC38();
extern int fn_827E1838();
extern int fn_827E25B8();
extern int fn_827E2618();
extern int fn_827E2790();
extern int fn_82811438();
extern unsigned int iStack_9c;
extern unsigned int iStack_a4;
extern unsigned int lbl_83156AA0;


undefined8
fn_827DFCE8(int param_1,undefined8 param_2,undefined8 param_3,int param_4,undefined8 param_5,
             undefined8 param_6,int param_7,undefined4 *param_8)

{
  bool bVar1;
  bool bVar2;
  longlong lVar3;
  undefined4 *puVar5;
  int iVar6;
  undefined8 uVar4;
  undefined4 uVar7;
  undefined8 uVar8;
  int in_stack_00000054;
  code *in_stack_0000005c;
  undefined1 *in_stack_00000064;
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [4];
  int iStack_a4;
  undefined1 auStack_a0 [4];
  int iStack_9c;
  undefined1 auStack_90 [144];
  
  uVar8 = 0;
  RtlEnterCriticalSection(param_1 + 400);
  *in_stack_00000064 = 0;
  lVar3 = fn_827DF148(param_1,param_2,param_3);
  if (lVar3 == 0) {
    fn_82811438(auStack_90,auStack_b0,0x10);
    uVar8 = (**(code **)(*(int *)lbl_83156AA0 + 4))(lbl_83156AA0,0x30,auStack_90,param_6);
    uVar7 = fn_827DF770(param_1,param_2,param_3,param_5,uVar8,param_6);
    *param_8 = uVar7;
LAB_827dfea0:
    *(int *)(param_1 + 0x1ac) = *(int *)(param_1 + 0x1ac) + 1;
    *in_stack_00000064 = 1;
  }
  else {
    *param_8 = (int)lVar3;
    if (param_4 != 0) {
      fn_827DFC38(param_1,lVar3);
      goto LAB_827dfea0;
    }
    puVar5 = (undefined4 *)fn_827E2790(auStack_a0);
    bVar2 = false;
    iVar6 = fn_827D5100(*puVar5);
    if (iVar6 == 3) {
      puVar5 = (undefined4 *)fn_827E2790(auStack_a8,lVar3);
      bVar2 = true;
      iVar6 = fn_827D50B8(*puVar5);
      bVar1 = true;
      if (iVar6 != 0) goto LAB_827dfda4;
    }
    else {
LAB_827dfda4:
      bVar1 = false;
    }
    if ((bVar2) && (iStack_a4 != 0)) {
      fn_822315A0();
    }
    if (iStack_9c != 0) {
      fn_822315A0();
    }
    if (bVar1) {
      if (param_7 != 0) {
        fn_827E25B8(*param_8);
      }
      uVar4 = fn_827E2790(auStack_b0,lVar3);
      (*in_stack_0000005c)(uVar4,param_6);
      if (in_stack_00000054 != 0) {
        fn_827E1838();
      }
      goto LAB_827dfe28;
    }
  }
  if (param_7 != 0) {
    fn_827E25B8(*param_8);
  }
  fn_827E2618(*param_8);
  uVar8 = 1;
LAB_827dfe28:
  RtlLeaveCriticalSection(param_1 + 400);
  return uVar8;
}

