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
extern int fn_827DC988();
extern int fn_82F622A8();
extern int fn_82F69290();
extern unsigned int lbl_821AD03C;


void fn_827DCB80(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  undefined8 uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined **appuStack_20 [8];
  
  uVar8 = param_1[1] - *param_1 >> 2;
  if (0x3fffffffU - param_2 < uVar8) {
    fn_82311AB8(appuStack_20,0xffffffff82196fd4);
    appuStack_20[0] = &lbl_821AD03C;
                    /* WARNING: Subroutine does not return */
    fn_82F69290(appuStack_20,0xffffffff821dd9dc);
  }
  uVar8 = uVar8 + param_2;
  uVar4 = param_1[2] - *param_1 >> 2;
  if (uVar8 <= uVar4) {
    return;
  }
  uVar7 = 0;
  if (uVar4 <= 0x3fffffff - (uVar4 >> 1)) {
    uVar7 = (uVar4 >> 1) + uVar4;
  }
  if (uVar7 < uVar8) {
    uVar7 = uVar8;
  }
  if (0x3fffffff < uVar7) {
                    /* WARNING: Subroutine does not return */
    fn_82F622A8(0xffffffff82196fd4);
  }
  if ((uint)(param_1[2] - *param_1 >> 2) < uVar7) {
    uVar5 = (**(code **)(*(int *)param_1[3] + 0xc))((int *)param_1[3],uVar7 * 4,param_1 + 4);
    iVar6 = (int)uVar5;
    fn_827DC988(*param_1,param_1[1],uVar5,param_1 + 3,0,0);
    iVar1 = *param_1;
    iVar2 = param_1[1];
    if (iVar1 != 0) {
      piVar3 = (int *)param_1[3];
      (**(code **)(*piVar3 + 0x18))(piVar3,iVar1,param_1 + 4);
    }
    *param_1 = iVar6;
    param_1[2] = uVar7 * 4 + iVar6;
    param_1[1] = (iVar2 - iVar1 >> 2) * 4 + iVar6;
  }
  return;
}

