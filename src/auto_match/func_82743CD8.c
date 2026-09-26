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
extern unsigned int *auStack_40;
extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern int fn_82696330();
extern int fn_826972E0();


void fn_82743CD8(int param_1,int param_2,undefined8 *param_3)

{
  uint *puVar1;
  undefined1 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [64];
  
  puVar2 = auStack_70;
  puVar1 = (uint *)(param_2 + 0x78);
  lVar3 = 2;
  do {
    puVar2 = puVar2 + 0x10;
    *puVar2 = 0;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  (**(code **)(*(int *)(param_1 + 0x10) + 0x2c))
            (param_1 + 0x10,puVar1,(ulonglong)*puVar1 + 0x1ec,auStack_60);
  (**(code **)(*(int *)(param_1 + 0x10) + 0x2c))
            (param_1 + 0x10,puVar1,(ulonglong)*puVar1 + 0x1f0,auStack_50);
  uVar4 = fn_826972E0(auStack_50,param_2);
  uVar5 = fn_826972E0(auStack_60,param_2);
  *param_3 = uVar5;
  param_3[1] = uVar4;
  puVar2 = auStack_40;
  lVar3 = 1;
  do {
    puVar2 = puVar2 + -0x10;
    fn_82696330(puVar2);
    lVar3 = lVar3 + -1;
  } while (-1 < lVar3);
  return;
}

