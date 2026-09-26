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
extern unsigned int *auStack_3c;
extern unsigned int *auStack_40;
extern int fn_8281B838();
extern int fn_82F691F0();


void fn_8281C250(int param_1,longlong param_2,longlong param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_40 [4];
  undefined1 auStack_3c [60];
  
  lVar2 = param_2;
  lVar3 = param_3;
  if ((*(uint *)(param_1 + 0xc) & 4) != 0) {
    lVar2 = (ulonglong)*(uint *)(param_1 + 0x78) + param_2;
    lVar3 = param_3 + ((ulonglong)*(uint *)(param_1 + 0x78) & 0x7fffffff) * -2;
  }
  if ((*(uint *)(param_1 + 0xc) & 0x40) != 0) {
    uVar1 = *(uint *)(param_1 + 0x78);
    fn_8281B838(param_2,(ulonglong)uVar1,0xbb,auStack_3c,auStack_40);
    fn_8281B838((ulonglong)uVar1 + param_2 + lVar3,*(undefined4 *)(param_1 + 0x78),0xdd,auStack_3c
                  ,auStack_40);
  }
  if ((*(uint *)(param_1 + 0xc) & 2) != 0) {
                    /* WARNING: Subroutine does not return */
    fn_82F691F0(param_2,0xee,param_3);
  }
  if ((*(uint *)(param_1 + 0xc) & 4) != 0) {
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + *(int *)(param_1 + 0x78) * -2;
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + *(int *)(param_1 + 0x78) * 2;
  }
  *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + -1;
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) - (int)lVar3;
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + (int)lVar3;
  if (*(code **)(param_1 + 0x24) != (code *)0x0) {
    (**(code **)(param_1 + 0x24))(param_1,lVar2);
  }
  return;
}

