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
extern unsigned int *auStack_70;
extern unsigned int *auStack_80;
extern int fn_82681D00();
extern int fn_826826A8();
extern int fn_82682D30();
extern int fn_82683270();
extern int fn_82693410();
extern int fn_82695DA0();
extern int fn_82696330();
extern int fn_826C9858();
extern int fn_82700B38();
extern int fn_82704A98();


ulonglong fn_82705A50(int param_1,undefined8 param_2,ulonglong param_3,longlong param_4,
                       longlong param_5)

{
  uint uVar1;
  int *piVar2;
  longlong lVar3;
  int iVar5;
  longlong lVar4;
  ulonglong uVar6;
  uint *puVar7;
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [112];
  
  piVar2 = *(int **)(param_1 + 0x68);
  if (piVar2 != (int *)0x0) {
    lVar3 = fn_82693410();
    auStack_80[0] = 0;
    *(int *)(param_1 + 0xb88) = *(int *)(param_1 + 0xb88) + 1;
    iVar5 = (**(code **)(*piVar2 + 0x5c))(piVar2);
    uVar6 = param_5 - 1;
    if (-1 < (longlong)uVar6) {
      puVar7 = (uint *)(iVar5 + 8);
      param_4 = (uVar6 & 0xfffffff) * 0x10 + param_4;
      do {
        auStack_70[0] = 0;
        fn_82681D00(param_1,param_4,auStack_70);
        uVar1 = *puVar7;
        *puVar7 = uVar1 + 0x10;
        if (*(uint *)(iVar5 + 0x10) <= uVar1 + 0x10) {
          fn_826826A8(puVar7);
        }
        if (*puVar7 != 0) {
          fn_82695DA0(*puVar7,auStack_70);
        }
        fn_82696330(auStack_70);
        uVar6 = uVar6 - 1;
        param_4 = param_4 + -0x10;
      } while (-1 < (longlong)uVar6);
    }
    if ((*(int *)(param_1 + 0xa00) == 0) || (lVar4 = fn_82704A98(param_1,param_2), lVar4 == 0)) {
      uVar6 = fn_826C9858(piVar2,param_2,auStack_80,param_5);
    }
    else {
      uVar6 = fn_82700B38(param_1,param_2,lVar4,auStack_80,param_5);
    }
    fn_82683270(iVar5 + 8,param_5);
    if (((uVar6 & 0xff) != 0) && ((param_3 & 0xffffffff) != 0)) {
      fn_82682D30(param_1,iVar5,auStack_80,param_3);
    }
    fn_82696330(auStack_80);
    lVar4 = fn_82693410();
    *(longlong *)(param_1 + 0xb58) = *(longlong *)(param_1 + 0xb58) + (lVar4 - lVar3);
    return uVar6;
  }
  return 0;
}

