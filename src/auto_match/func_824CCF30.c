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
extern unsigned int *auStack_50;
extern int fn_82F50DA8();
extern int fn_82F512E8();
extern int fn_82F52348();


void fn_824CCF30(int param_1,undefined8 param_2,longlong param_3,int param_4,int param_5)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int in_r0;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 auStack_50 [80];
  
  if (param_4 != 0) {
    iVar3 = fn_82F512E8(auStack_50,*(undefined4 *)(param_1 + 0x20),param_2,-(param_3 != 2) & 2);
    puVar1 = (undefined4 *)(in_r0 + iVar3 & 0xfffffff0);
    uVar4 = puVar1[1];
    uVar5 = puVar1[2];
    uVar6 = puVar1[3];
    puVar2 = (undefined4 *)(in_r0 + param_4 & 0xfffffff0);
    *puVar2 = *puVar1;
    puVar2[1] = uVar4;
    puVar2[2] = uVar5;
    puVar2[3] = uVar6;
  }
  if (param_5 != 0) {
    iVar3 = fn_82F50DA8(auStack_50,*(undefined4 *)(param_1 + 0x20),param_2,-(param_3 != 2) & 2
                             );
    puVar1 = (undefined4 *)(in_r0 + iVar3 & 0xfffffff0);
    uVar4 = puVar1[1];
    uVar5 = puVar1[2];
    uVar6 = puVar1[3];
    puVar2 = (undefined4 *)(in_r0 + param_5 & 0xfffffff0);
    *puVar2 = *puVar1;
    puVar2[1] = uVar4;
    puVar2[2] = uVar5;
    puVar2[3] = uVar6;
  }
  fn_82F52348(*(undefined4 *)(param_1 + 0x20),param_2);
  return;
}

