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
extern V16 vectorMultiplyAddFloatingPoint();
extern void *memcpy(void *, const void *, unsigned int);


void fn_82CEBF30(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int in_r0;
  undefined1 in_vs32 [16];
  undefined1 auVar3 [16];
  undefined1 in_vs44 [16];
  undefined1 in_vs45 [16];
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  puVar1 = (undefined4 *)(in_r0 + param_2 & 0xfffffff0);
  uVar4 = puVar1[1];
  uVar5 = puVar1[2];
  uVar6 = puVar1[3];{ V16 _vt0 = vectorMultiplyAddFloatingPoint(in_vs45,in_vs32,in_vs44); memcpy(auVar3, &_vt0, 16); }
  puVar2 = (undefined4 *)(in_r0 + param_1 & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar4;
  puVar2[2] = uVar5;
  puVar2[3] = uVar6;
  puVar1 = (undefined4 *)(in_r0 + param_2 & 0xfffffff0);
  uVar4 = puVar1[1];
  uVar5 = puVar1[2];
  uVar6 = puVar1[3];{ V16 _vt1 = vectorMultiplyAddFloatingPoint(in_vs44,auVar3,in_vs45); memcpy(auVar3, &_vt1, 16); }
  puVar2 = (undefined4 *)(in_r0 + param_1 + 0x10 & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar4;
  puVar2[2] = uVar5;
  puVar2[3] = uVar6;
  puVar1 = (undefined4 *)(in_r0 + param_2 & 0xfffffff0);
  uVar4 = puVar1[1];
  uVar5 = puVar1[2];
  uVar6 = puVar1[3];
  vectorMultiplyAddFloatingPoint(in_vs44,auVar3,in_vs45);
  puVar2 = (undefined4 *)(in_r0 + param_1 + 0x20 & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar4;
  puVar2[2] = uVar5;
  puVar2[3] = uVar6;
  return;
}

