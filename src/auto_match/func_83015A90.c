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
extern unsigned int *auStack_20;
extern unsigned int *auStack_30;
extern unsigned int fStack00000024;
extern int fn_82FFE0F0();
extern unsigned int uStack_34;


undefined8 fn_83015A90(double param_1,longlong param_2)

{
  int in_r0;
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  longlong lVar4;
  undefined1 in_vs32 [16];
  undefined1 in_vs43 [16];
  undefined4 in_register_000103f0;
  float fStack00000024;
  undefined4 uStack_34;
  undefined1 auStack_30 [16];
  undefined1 auStack_20 [32];
  
  fStack00000024 = (float)param_1;
  altv300_21(in_vs32,in_vs43);
  puVar3 = (undefined4 *)((uint)(auStack_20 + in_r0) & 0xfffffff0);
  *puVar3 = in_register_000103f0;
  puVar3[1] = in_register_000103f0;
  puVar3[2] = in_register_000103f0;
  puVar3[3] = in_register_000103f0;
  puVar3 = (undefined4 *)((uint)(auStack_30 + in_r0) & 0xfffffff0);
  *puVar3 = in_register_000103f0;
  puVar3[1] = in_register_000103f0;
  puVar3[2] = in_register_000103f0;
  puVar3[3] = in_register_000103f0;
  iVar1 = fn_82FFE0F0(param_2 + 4);
  if (iVar1 != 0) {
    puVar3 = &uStack_34;
    puVar2 = (undefined4 *)(iVar1 + 4);
    lVar4 = 6;
    do {
      puVar3 = puVar3 + 1;
      puVar2 = puVar2 + 1;
      *puVar2 = *puVar3;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    return 1;
  }
  return 2;
}

