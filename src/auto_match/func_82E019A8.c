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
extern V16 vectorMaximumFloatingPoint();
extern V16 vectorMinimumFloatingPoint();
extern void *memcpy(void *, const void *, unsigned int);


void fn_82E019A8(undefined8 param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  int in_r0;
  int iVar2;
  int iVar3;
  undefined1 in_vs32 [16];
  undefined1 in_vs38 [16];
  undefined1 in_vs40 [16];
  undefined1 in_vs42 [16];
  undefined1 in_vs43 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 in_vs45 [16];
  undefined4 in_register_00010050;
  undefined4 in_register_00010054;
  undefined4 in_register_00010058;
  undefined4 in_vr5;
  undefined4 in_register_00010070;
  undefined4 in_register_00010074;
  undefined4 in_register_00010078;
  undefined4 in_vr7;
  undefined4 in_register_00010090;
  undefined4 in_register_00010094;
  undefined4 in_register_00010098;
  undefined4 in_vr9;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 in_register_000100c0;
  undefined4 in_register_000100c4;
  undefined4 in_register_000100c8;
  undefined4 in_vr12;
  
  iVar3 = param_3 + 0x10;
  iVar2 = 1;{ V16 _vt0 = vectorMinimumFloatingPoint(in_vs45,in_vs32); memcpy(auVar5, &_vt0, 16); }
  puVar1 = (undefined4 *)(in_r0 + param_3 & 0xfffffff0);
  *puVar1 = in_register_000100c0;
  puVar1[1] = in_register_000100c4;
  puVar1[2] = in_register_000100c8;
  puVar1[3] = in_vr12;
  puVar1 = (undefined4 *)(*(int *)(param_2 + 0x48) + 0x60U & 0xfffffff0);
  uVar6 = *puVar1;
  uVar7 = puVar1[1];
  uVar8 = puVar1[2];
  uVar9 = puVar1[3];
  vectorMaximumFloatingPoint(in_vs42,in_vs43);
  puVar1 = (undefined4 *)(in_r0 + iVar3 & 0xfffffff0);
  *puVar1 = in_register_00010090;
  puVar1[1] = in_register_00010094;
  puVar1[2] = in_register_00010098;
  puVar1[3] = in_vr9;
  if ('\x01' < *(char *)(*(int *)(param_2 + 0x1c) + 0x20)) {
    do {
      iVar2 = iVar2 + 1;{ V16 _vt1 = vectorMinimumFloatingPoint(in_vs32,auVar5); memcpy(auVar4, &_vt1, 16); }
      puVar1 = (undefined4 *)(in_r0 + param_3 & 0xfffffff0);
      *puVar1 = uVar6;
      puVar1[1] = uVar7;
      puVar1[2] = uVar8;
      puVar1[3] = uVar9;
      vectorMinimumFloatingPoint(auVar4,in_vs42);
      puVar1 = (undefined4 *)(in_r0 + param_3 & 0xfffffff0);
      *puVar1 = in_register_00010090;
      puVar1[1] = in_register_00010094;
      puVar1[2] = in_register_00010098;
      puVar1[3] = in_vr9;{ V16 _vt2 = vectorMaximumFloatingPoint(in_vs45,in_vs40); memcpy(auVar4, &_vt2, 16); }
      puVar1 = (undefined4 *)(in_r0 + iVar3 & 0xfffffff0);
      *puVar1 = in_register_00010070;
      puVar1[1] = in_register_00010074;
      puVar1[2] = in_register_00010078;
      puVar1[3] = in_vr7;
      vectorMaximumFloatingPoint(auVar4,in_vs38);
      puVar1 = (undefined4 *)(in_r0 + iVar3 & 0xfffffff0);
      *puVar1 = in_register_00010050;
      puVar1[1] = in_register_00010054;
      puVar1[2] = in_register_00010058;
      puVar1[3] = in_vr5;
    } while (iVar2 < *(char *)(*(int *)(param_2 + 0x1c) + 0x20));
    return;
  }
  return;
}

