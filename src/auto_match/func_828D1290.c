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
extern int fn_828D1070();
extern int fn_82F622A8();
extern int fn_82F69290();
extern unsigned int lbl_821AD03C;


void fn_828D1290(int *param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *piVar5;
  undefined8 uVar4;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  undefined **appuStack_20 [8];
  
  uVar1 = (param_1[1] - *param_1) / 0xc4;
  if ((0x14e5e0aU - param_2 & 0xffffffff) < (ulonglong)uVar1) {
    fn_82311AB8(appuStack_20,0xffffffff82196fd4);
    appuStack_20[0] = &lbl_821AD03C;
                    /* WARNING: Subroutine does not return */
    fn_82F69290(appuStack_20,0xffffffff821dd9dc);
  }
  uVar7 = (int)uVar1 + param_2;
  uVar1 = (param_1[2] - *param_1) / 0xc4;
  if ((uVar7 & 0xffffffff) <= (ulonglong)uVar1) {
    return;
  }
  uVar6 = 0;
  if ((ulonglong)uVar1 <= (0x14e5e0a - (ulonglong)(uVar1 >> 1) & 0xffffffff)) {
    uVar6 = (ulonglong)(uVar1 >> 1) + (longlong)(int)uVar1;
  }
  if ((uVar6 & 0xffffffff) < (uVar7 & 0xffffffff)) {
    uVar6 = uVar7;
  }
  if (0x14e5e0a < (uVar6 & 0xffffffff)) {
                    /* WARNING: Subroutine does not return */
    fn_82F622A8(0xffffffff82196fd4);
  }
  if ((ulonglong)(uint)((param_1[2] - *param_1) / 0xc4) < (uVar6 & 0xffffffff)) {
    piVar5 = (int *)fn_825089A0();
    uVar4 = (**(code **)(*piVar5 + 0x24))(piVar5,uVar6 * 0xc4,1);
    fn_828D1070(*param_1,param_1[1],uVar4,param_1 + 3);
    iVar2 = param_1[1];
    iVar3 = *param_1;
    if (iVar3 != 0) {
      piVar5 = (int *)fn_825089A0();
      (**(code **)(*piVar5 + 0x28))(piVar5,iVar3);
    }
    iVar8 = (int)uVar4;
    *param_1 = iVar8;
    param_1[2] = (int)(uVar6 * 0xc4) + iVar8;
    param_1[1] = ((iVar2 - iVar3) / 0xc4) * 0xc4 + iVar8;
  }
  return;
}

