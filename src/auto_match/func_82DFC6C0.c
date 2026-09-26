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
#define ZEXT48(x) ((U64)((U32)(x)))
extern unsigned int lbl_821AAD20;
extern unsigned int stack0x00000000;
extern V16 loadVectorLeftIndexed128();
extern V16 vectorMultiplyAddFloatingPoint();


void fn_82DFC6C0(int param_1,undefined8 param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined8 in_r0;
  undefined1 in_vs32 [16];
  undefined1 in_vs44 [16];
  undefined1 in_vs45 [16];
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  if (*(float *)(*(int *)(param_1 + 0x1c) + 0x6c) == lbl_821AAD20) {
    return;
  }
  puVar1 = (undefined4 *)(*(int *)(param_1 + 0x1c) + 0x180U & 0xfffffff0);
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  uVar5 = puVar1[3];
  loadVectorLeftIndexed128(in_r0,ZEXT48(&stack0x00000000) - 0x10);
  vectorMultiplyAddFloatingPoint(in_vs44,in_vs32,in_vs45);
  puVar2 = (undefined4 *)((int)in_r0 + param_3 + 0x20 & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar3;
  puVar2[2] = uVar4;
  puVar2[3] = uVar5;
  return;
}

