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
extern unsigned int iStack_14;


void fn_82A965C8(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  uint *puVar3;
  int *piVar4;
  int in_r0;
  int *piVar5;
  int *piVar6;
  longlong lVar7;
  undefined4 in_register_00010010;
  undefined4 in_register_00010014;
  undefined4 in_register_00010018;
  undefined4 in_vr1;
  int iStack_14;
  int aiStack_10 [4];
  
  piVar5 = &iStack_14;
  piVar6 = (int *)(param_2 + 0xc);
  puVar2 = (undefined4 *)((int)aiStack_10 + in_r0 & 0xfffffff0);
  *puVar2 = in_register_00010010;
  puVar2[1] = in_register_00010014;
  puVar2[2] = in_register_00010018;
  puVar2[3] = in_vr1;
  lVar7 = 4;
  do {
    puVar3 = (uint *)(piVar6 + 8);
    iVar1 = *piVar6;
    piVar5 = piVar5 + 1;
    piVar4 = piVar6 + 4;
    piVar6 = piVar6 + 1;
    *(byte *)(iVar1 + param_1) =
         (byte)(*piVar5 << (*puVar3 & 0x3f)) & (byte)*piVar4 | *(byte *)(iVar1 + param_1);
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  return;
}

