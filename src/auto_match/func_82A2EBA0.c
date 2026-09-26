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
extern unsigned int *auStack_2c;
extern int fn_82A2BAF0();
extern int fn_82A2DC18();
extern unsigned int iStack_30;


ulonglong fn_82A2EBA0(int param_1,ulonglong param_2,int param_3,int *param_4)

{
  int iVar1;
  int iVar3;
  ulonglong uVar2;
  uint uVar4;
  int iStack_30;
  undefined1 auStack_2c [44];
  
  iVar3 = fn_82A2BAF0(param_1,param_2,1,&iStack_30,auStack_2c);
  if ((iVar3 == 0) &&
     ((param_3 == 0 || (iVar3 = fn_82A2DC18(param_1,param_2,0,&iStack_30), iVar3 < 0)))) {
    uVar2 = 0xffffffffffffffff;
  }
  else {
    uVar2 = param_2 + ((param_2 & 0xffffffff) / 0xaa) * -0xaa;
    iVar3 = 0;
    while ((uVar2 = (ulonglong)*(uint *)((int)uVar2 * 0x18 + iStack_30 + 0x14) & 0xffffff,
           uVar2 != 0xffffff && (uVar2 / 0xaa == (param_2 & 0xffffffff) / 0xaa))) {
      iVar3 = iVar3 + 1;
      uVar2 = uVar2 % 0xaa;
    }
    uVar4 = iStack_30 - *(int *)(param_1 + 0x34);
    iVar1 = (((int)uVar4 >> 0xc) + (uint)((int)uVar4 < 0 && (uVar4 & 0xfff) != 0)) * 8 +
            *(int *)(param_1 + 0x30);
    *(char *)(iVar1 + 4) = *(char *)(iVar1 + 4) + -1;
    if (param_4 != (int *)0x0) {
      *param_4 = iVar3;
    }
  }
  return uVar2;
}

