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
extern int fn_82CE5040();
extern int fn_82F63108();
extern V16 vectorAddFloatingPoint();


void fn_82606440(int param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int in_r0;
  byte bVar3;
  undefined1 in_vs32 [16];
  undefined1 in_vs45 [16];
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 auStack_40 [64];
  
  if ((*(ushort *)(param_2 + 0x46) & 4) == 0) {
    puVar1 = (undefined4 *)(param_2 + 0x10U & 0xfffffff0);
    uVar4 = puVar1[1];
    uVar5 = puVar1[2];
    uVar6 = puVar1[3];
    vectorAddFloatingPoint(in_vs45,in_vs32);
    puVar2 = (undefined4 *)((uint)(auStack_40 + in_r0) & 0xfffffff0);
    *puVar2 = *puVar1;
    puVar2[1] = uVar4;
    puVar2[2] = uVar5;
    puVar2[3] = uVar6;
    fn_82CE5040(param_2 + 0x4d0,param_3,auStack_40);
    *(ushort *)(param_2 + 0x46) = *(ushort *)(param_2 + 0x46) | 4;
  }
  if ((*(ushort *)(param_2 + 0x46) & 0x80) == 0) {
    fn_82CE5040(param_2 + 0x2a0,param_3,param_2 + 0x250);
    bVar3 = *(byte *)(param_2 + 0x45) ^ 2;
    *(byte *)(param_2 + 0x45) = bVar3;
    if ((bVar3 & 7) != 0) {
      if (*(int *)(param_1 + 0x80) == 0) {
                    /* WARNING: Subroutine does not return */
        fn_82F63108();
      }
      (**(code **)(**(int **)(param_1 + 0x80) + 4))
                (*(int **)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x10),param_4,param_2 + 0x2a0,
                 param_2 + 0x278,param_2 + 0x27c,param_2 + 0x280,param_2 + 0x290);
    }
    *(ushort *)(param_2 + 0x46) = *(ushort *)(param_2 + 0x46) | 0x80;
  }
  return;
}

