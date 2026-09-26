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
extern int fn_82270B70();


void fn_822708D8(double param_1,uint param_2,undefined8 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 **ppuVar4;
  undefined4 in_register_00010010;
  undefined4 in_register_00010014;
  undefined4 in_register_00010018;
  undefined4 in_vr1;
  undefined4 in_register_00010020;
  undefined4 in_register_00010024;
  undefined4 in_register_00010028;
  undefined4 in_vr2;
  undefined4 *puStack_50;
  undefined4 *apuStack_4c [13];
  
  iVar2 = fn_82270B70();
  puVar1 = (undefined4 *)(*(undefined4 **)(iVar2 + 0xe8))[1];
  puStack_50 = *(undefined4 **)(iVar2 + 0xe8);
  while (puVar3 = puVar1, *(char *)((int)puVar3 + 0x61) == '\0') {
    if ((uint)puVar3[4] < param_2) {
      puVar1 = (undefined4 *)puVar3[2];
    }
    else {
      puVar1 = (undefined4 *)*puVar3;
      puStack_50 = puVar3;
    }
  }
  if ((puStack_50 == *(undefined4 **)(iVar2 + 0xe8)) || (param_2 < (uint)puStack_50[4])) {
    apuStack_4c[0] = *(undefined4 **)(iVar2 + 0xe8);
    ppuVar4 = apuStack_4c;
  }
  else {
    ppuVar4 = &puStack_50;
  }
  puVar1 = *ppuVar4;
  if (puVar1 != *(undefined4 **)(iVar2 + 0xe8)) {
    puVar1[0x14] = (float)param_1;
    puVar1[0x15] = param_4;
    puVar3 = (undefined4 *)((uint)(puVar1 + 0xc) & 0xfffffff0);
    *puVar3 = in_register_00010010;
    puVar3[1] = in_register_00010014;
    puVar3[2] = in_register_00010018;
    puVar3[3] = in_vr1;
    puVar1 = (undefined4 *)((uint)(puVar1 + 0x10) & 0xfffffff0);
    *puVar1 = in_register_00010020;
    puVar1[1] = in_register_00010024;
    puVar1[2] = in_register_00010028;
    puVar1[3] = in_vr2;
  }
  return;
}

