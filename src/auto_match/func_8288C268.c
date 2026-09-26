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
extern int fn_82311AB8();
extern int fn_8265CA20();
extern int fn_8288BD00();
extern int fn_82F622A8();
extern int fn_82F63CA0();
extern int fn_82F69290();
extern unsigned int lbl_821AD03C;


void fn_8288C268(int *param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  undefined **appuStack_20 [8];
  
  uVar3 = param_1[1] - *param_1 >> 2;
  if ((0x3fffffffU - param_2 & 0xffffffff) < (ulonglong)uVar3) {
    fn_82311AB8(appuStack_20,0xffffffff82196fd4);
    appuStack_20[0] = &lbl_821AD03C;
                    /* WARNING: Subroutine does not return */
    fn_82F69290(appuStack_20,0xffffffff821dd9dc);
  }
  uVar6 = (int)uVar3 + param_2;
  uVar3 = param_1[2] - *param_1 >> 2;
  if ((uVar6 & 0xffffffff) <= (ulonglong)uVar3) {
    return;
  }
  uVar5 = 0;
  if ((ulonglong)uVar3 <= (0x3fffffff - (ulonglong)(uVar3 >> 1) & 0xffffffff)) {
    uVar5 = (ulonglong)(uVar3 >> 1) + (longlong)(int)uVar3;
  }
  if ((uVar5 & 0xffffffff) < (uVar6 & 0xffffffff)) {
    uVar5 = uVar6;
  }
  if (0x3fffffff < (uVar5 & 0xffffffff)) {
                    /* WARNING: Subroutine does not return */
    fn_82F622A8(0xffffffff82196fd4);
  }
  if ((ulonglong)(uint)(param_1[2] - *param_1 >> 2) < (uVar5 & 0xffffffff)) {
    uVar4 = fn_8288BD00(param_1 + 3,uVar5);
    fn_82F63CA0(uVar4,*param_1,(param_1[1] - *param_1 >> 2) << 2);
    iVar1 = *param_1;
    iVar2 = param_1[1];
    if (iVar1 != 0) {
      fn_8265CA20();
    }
    iVar7 = (int)uVar4;
    *param_1 = iVar7;
    param_1[2] = (int)((uVar5 & 0xffffffff) << 2) + iVar7;
    param_1[1] = (iVar2 - iVar1 >> 2) * 4 + iVar7;
  }
  return;
}

