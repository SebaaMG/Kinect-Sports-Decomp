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
extern int fn_8255DBB8();
extern V16 vectorMaximumFloatingPoint();
extern V16 vectorMinimumFloatingPoint();
extern void *memcpy(void *, const void *, unsigned int);


void fn_8255DB38(undefined8 param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int in_r0;
  undefined1 *puVar3;
  longlong lVar4;
  undefined1 in_vs32 [16];
  undefined1 in_vs44 [16];
  undefined1 in_vs45 [16];
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [120];
  
  fn_8255DBB8(param_1,auStack_a0);
  puVar3 = auStack_90;
  puVar1 = (undefined4 *)((uint)(auStack_a0 + in_r0) & 0xfffffff0);
  uVar5 = *puVar1;
  uVar6 = puVar1[1];
  uVar7 = puVar1[2];
  uVar8 = puVar1[3];
  lVar4 = 7;
  puVar1 = (undefined4 *)(in_r0 + param_2 & 0xfffffff0);
  *puVar1 = uVar5;
  puVar1[1] = uVar6;
  puVar1[2] = uVar7;
  puVar1[3] = uVar8;
  puVar1 = (undefined4 *)(in_r0 + param_3 & 0xfffffff0);
  *puVar1 = uVar5;
  puVar1[1] = uVar6;
  puVar1[2] = uVar7;
  puVar1[3] = uVar8;
  do {
    puVar1 = (undefined4 *)((uint)(puVar3 + in_r0) & 0xfffffff0);
    uVar5 = *puVar1;
    uVar6 = puVar1[1];
    uVar7 = puVar1[2];
    uVar8 = puVar1[3];
    puVar3 = puVar3 + 0x10;
    puVar1 = (undefined4 *)(in_r0 + param_2 & 0xfffffff0);
    uVar9 = puVar1[1];
    uVar10 = puVar1[2];
    uVar11 = puVar1[3];{ V16 _vt0 = vectorMinimumFloatingPoint(in_vs45,in_vs32); memcpy(in_vs45, &_vt0, 16); }{ V16 _vt1 = vectorMaximumFloatingPoint(in_vs44,in_vs32); memcpy(in_vs32, &_vt1, 16); }
    puVar2 = (undefined4 *)(in_r0 + param_2 & 0xfffffff0);
    *puVar2 = *puVar1;
    puVar2[1] = uVar9;
    puVar2[2] = uVar10;
    puVar2[3] = uVar11;
    puVar1 = (undefined4 *)(in_r0 + param_3 & 0xfffffff0);
    *puVar1 = uVar5;
    puVar1[1] = uVar6;
    puVar1[2] = uVar7;
    puVar1[3] = uVar8;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  return;
}

