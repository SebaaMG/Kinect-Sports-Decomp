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
extern int fn_8306ED38();


int fn_8306D6D8(int param_1,int param_2)

{
  char cVar1;
  undefined4 *puVar2;
  int in_r0;
  undefined1 in_vs32 [16];
  undefined1 in_vs36 [16];
  undefined1 in_vs43 [16];
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 in_register_000103f0;
  undefined4 in_register_000103f4;
  undefined4 in_register_000103f8;
  undefined4 in_vr63;
  float afStack_30 [12];
  
  cVar1 = *(char *)(param_2 + 0x1a7c);
  altv207_13(in_vs36,in_vs43);
  puVar2 = (undefined4 *)((int)afStack_30 + in_r0 & 0xfffffff0);
  *puVar2 = in_register_000103f0;
  puVar2[1] = in_register_000103f4;
  puVar2[2] = in_register_000103f8;
  puVar2[3] = in_vr63;
  if (cVar1 != '\0') {
    afStack_30[0] = -afStack_30[0];
  }
  puVar2 = (undefined4 *)((int)afStack_30 + in_r0 & 0xfffffff0);
  uVar3 = *puVar2;
  uVar4 = puVar2[1];
  uVar5 = puVar2[2];
  uVar6 = puVar2[3];
  fn_8306ED38((double)*(float *)(param_2 + 0x1a74));
  puVar2 = (undefined4 *)((int)afStack_30 + in_r0 & 0xfffffff0);
  *puVar2 = uVar3;
  puVar2[1] = uVar4;
  puVar2[2] = uVar5;
  puVar2[3] = uVar6;
  altv207_13(in_vs32,in_vs43);
  puVar2 = (undefined4 *)(in_r0 + param_1 & 0xfffffff0);
  *puVar2 = in_register_000103f0;
  puVar2[1] = in_register_000103f4;
  puVar2[2] = in_register_000103f8;
  puVar2[3] = in_vr63;
  return param_1;
}

