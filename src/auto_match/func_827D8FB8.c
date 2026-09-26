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
extern int fn_82231540();
extern int fn_82311AB8();
extern int fn_826741F0();
extern int fn_82F622A8();
extern int fn_82F69290();
extern unsigned int lbl_821AD03C;


void fn_827D8FB8(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  undefined **appuStack_20 [8];
  
  uVar7 = param_1[1] - *param_1 >> 3;
  if (0x1fffffffU - param_2 < uVar7) {
    fn_82311AB8(appuStack_20,0xffffffff82196fd4);
    appuStack_20[0] = &lbl_821AD03C;
                    /* WARNING: Subroutine does not return */
    fn_82F69290(appuStack_20,0xffffffff821dd9dc);
  }
  uVar7 = uVar7 + param_2;
  uVar3 = param_1[2] - *param_1 >> 3;
  if (uVar7 <= uVar3) {
    return;
  }
  uVar6 = 0;
  if (uVar3 <= 0x1fffffff - (uVar3 >> 1)) {
    uVar6 = (uVar3 >> 1) + uVar3;
  }
  if (uVar6 < uVar7) {
    uVar6 = uVar7;
  }
  if (0x1fffffff < uVar6) {
                    /* WARNING: Subroutine does not return */
    fn_82F622A8(0xffffffff82196fd4);
  }
  if ((uint)(param_1[2] - *param_1 >> 3) < uVar6) {
    piVar8 = param_1 + 3;
    uVar4 = (**(code **)(*(int *)param_1[3] + 0xc))((int *)param_1[3],uVar6 * 8,param_1 + 4);
    iVar5 = (int)uVar4;
    fn_826741F0(*param_1,param_1[1],uVar4,piVar8,0);
    iVar1 = *param_1;
    iVar2 = param_1[1];
    if (iVar1 != 0) {
      fn_82231540(iVar1,iVar2,piVar8);
      (**(code **)(*(int *)*piVar8 + 0x18))((int *)*piVar8,*param_1,param_1 + 4);
    }
    *param_1 = iVar5;
    param_1[2] = uVar6 * 8 + iVar5;
    param_1[1] = (iVar2 - iVar1 >> 3) * 8 + iVar5;
  }
  return;
}

