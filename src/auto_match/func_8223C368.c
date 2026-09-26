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
extern int fn_8223C258();
extern int fn_82311AB8();
extern int fn_8265CA20();
extern int fn_82F622A8();
extern int fn_82F63CA0();
extern int fn_82F69290();
extern unsigned int lbl_821AD03C;


void fn_8223C368(uint *param_1,longlong param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined **appuStack_20 [8];
  
  uVar7 = (ulonglong)param_1[1] - (ulonglong)*param_1;
  if ((-param_2 - 1U & 0xffffffff) < (uVar7 & 0xffffffff)) {
    fn_82311AB8(appuStack_20,0xffffffff82196fd4);
    appuStack_20[0] = &lbl_821AD03C;
                    /* WARNING: Subroutine does not return */
    fn_82F69290(appuStack_20,0xffffffff821dd9dc);
  }
  uVar7 = uVar7 + param_2;
  uVar8 = (ulonglong)param_1[2] - (ulonglong)*param_1;
  if ((uVar7 & 0xffffffff) <= (uVar8 & 0xffffffff)) {
    return;
  }
  uVar3 = (uVar8 & 0xffffffff) >> 1;
  uVar6 = 0;
  if ((uVar8 & 0xffffffff) <= (-uVar3 - 1 & 0xffffffff)) {
    uVar6 = uVar3 + uVar8;
  }
  if ((uVar6 & 0xffffffff) < (uVar7 & 0xffffffff)) {
    uVar6 = uVar7;
  }
  if (0xffffffff < (uVar6 & 0xffffffff)) {
                    /* WARNING: Subroutine does not return */
    fn_82F622A8(0xffffffff82196fd4);
  }
  if (((ulonglong)param_1[2] - (ulonglong)*param_1 & 0xffffffff) < (uVar6 & 0xffffffff)) {
    uVar5 = fn_8223C258(uVar6,0);
    fn_82F63CA0(uVar5,(ulonglong)*param_1,(ulonglong)param_1[1] - (ulonglong)*param_1);
    uVar1 = *param_1;
    uVar2 = param_1[1];
    if (uVar1 != 0) {
      fn_8265CA20();
    }
    uVar4 = (uint)uVar5;
    *param_1 = uVar4;
    param_1[2] = uVar4 + (int)uVar6;
    param_1[1] = (uVar2 - uVar1) + uVar4;
  }
  return;
}

