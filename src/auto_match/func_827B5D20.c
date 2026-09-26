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
extern unsigned int *auStack_50;
extern int fn_8267BED0();
extern int fn_8267C498();
extern int fn_826809F0();
extern int fn_82F68CC0();


void fn_827B5D20(int param_1,int param_2,longlong param_3,int param_4,ulonglong param_5,
                  ulonglong param_6)

{
  int iVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 auStack_50 [20];
  
  iVar1 = *(int *)(param_1 + 0x2d0);
  if (((iVar1 == 0) || ((ulonglong)*(uint *)(iVar1 + 0xc) < (param_5 & 0xffffffff))) ||
     ((ulonglong)*(uint *)(iVar1 + 0x10) < (param_6 & 0xffffffff))) {
    auStack_50[0] = 3;
    uVar2 = fn_8267BED0(param_1,0x30,auStack_50);
    if ((uVar2 & 0xffffffff) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = fn_826809F0(uVar2,9,param_5 + 0x10,param_6 + 0x10);
    }
    if (*(int *)(param_1 + 0x2d0) != 0) {
      fn_8267C498();
    }
    *(undefined4 *)(param_1 + 0x2d0) = uVar3;
  }
  uVar4 = 0;
  if ((param_6 & 0xffffffff) != 0) {
    do {
      fn_82F68CC0((longlong)*(int *)(*(int *)(param_1 + 0x2d0) + 0x14) * (longlong)(int)uVar4 +
                   (ulonglong)*(uint *)(*(int *)(param_1 + 0x2d0) + 0x18),
                   (longlong)(int)(uVar4 + param_4) * (longlong)*(int *)(param_2 + 0x14) +
                   (ulonglong)*(uint *)(param_2 + 0x18) + param_3,param_5);
      uVar4 = uVar4 + 1;
    } while ((ulonglong)uVar4 < (param_6 & 0xffffffff));
  }
  return;
}

