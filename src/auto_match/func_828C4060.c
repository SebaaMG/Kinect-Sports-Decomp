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
extern int fn_825089A0();
extern int fn_828A30A0();
extern int fn_828B6330();
extern int fn_82F622A8();
extern int fn_82F69290();
extern unsigned int lbl_821AD03C;


void fn_828C4060(uint *param_1,int param_2)

{
  uint uVar1;
  int *piVar3;
  ulonglong uVar2;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined **appuStack_20 [8];
  
  uVar5 = (int)(param_1[1] - *param_1) >> 2;
  if (0x3fffffffU - param_2 < uVar5) {
    fn_82311AB8(appuStack_20,0xffffffff82196fd4);
    appuStack_20[0] = &lbl_821AD03C;
                    /* WARNING: Subroutine does not return */
    fn_82F69290(appuStack_20,0xffffffff821dd9dc);
  }
  uVar5 = uVar5 + param_2;
  uVar1 = (int)(param_1[2] - *param_1) >> 2;
  if (uVar5 <= uVar1) {
    return;
  }
  uVar4 = 0;
  if (uVar1 <= 0x3fffffff - (uVar1 >> 1)) {
    uVar4 = (uVar1 >> 1) + uVar1;
  }
  if (uVar4 < uVar5) {
    uVar4 = uVar5;
  }
  if (0x3fffffff < uVar4) {
                    /* WARNING: Subroutine does not return */
    fn_82F622A8(0xffffffff82196fd4);
  }
  if ((uint)((int)(param_1[2] - *param_1) >> 2) < uVar4) {
    piVar3 = (int *)fn_825089A0();
    uVar2 = (**(code **)(*piVar3 + 0x24))(piVar3,uVar4 * 4,1);
    uVar8 = (ulonglong)*param_1;
    uVar5 = param_1[1];
    uVar7 = uVar2;
    if (uVar8 != uVar5) {
      do {
        if ((uVar7 & 0xffffffff) != 0) {
          fn_828B6330(uVar7,uVar8);
        }
        uVar8 = uVar8 + 4;
        uVar7 = uVar7 + 4;
      } while ((uVar8 & 0xffffffff) != (ulonglong)uVar5);
    }
    uVar5 = *param_1;
    uVar1 = param_1[1];
    if (uVar5 != 0) {
      fn_828A30A0(uVar5,uVar1,param_1 + 3);
      uVar6 = *param_1;
      piVar3 = (int *)fn_825089A0();
      (**(code **)(*piVar3 + 0x28))(piVar3,uVar6);
    }
    uVar6 = (uint)uVar2;
    *param_1 = uVar6;
    param_1[2] = uVar4 * 4 + uVar6;
    param_1[1] = ((int)(uVar1 - uVar5) >> 2) * 4 + uVar6;
  }
  return;
}

