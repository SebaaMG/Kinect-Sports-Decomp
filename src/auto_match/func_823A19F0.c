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
extern int fn_82374078();
extern int fn_823970D0();
extern int fn_82399218();
extern int fn_82399BA0();
extern int fn_8239B410();
extern int fn_8239BD90();
extern int fn_8239C4D8();
extern int fn_8239CE98();
extern int fn_823A1C50();
extern int fn_823A2098();
extern int fn_823A5108();
extern int fn_8248F9F8();
extern int fn_82536590();
extern int fn_82A1E1A8();
extern unsigned int lbl_821916FC;
extern unsigned int lbl_82193AF0;
extern unsigned int lbl_821CC160;


void fn_823A19F0(double param_1,int param_2)

{
  float fVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  
  if (*(int *)(*(int *)(*(int *)(param_2 + 8) + 8) + 0x178) == 1) {
    fVar1 = (float)((double)*(float *)(param_2 + 0xc) - param_1);
    *(float *)(param_2 + 0xc) = fVar1;
    if (fVar1 <= lbl_821CC160) {
      fn_82A1E1A8(2000);
      *(undefined4 *)(param_2 + 0xc) = lbl_821916FC;
    }
  }
  iVar4 = *(int *)(*(int *)(param_2 + 8) + 8);
  iVar2 = *(int *)(iVar4 + 0x1e4);
  iVar4 = fn_823970D0(iVar4,iVar2);
  if (iVar4 != 0) {
    iVar4 = *(int *)(*(int *)(param_2 + 8) + 8);
    fn_82399218(iVar4,*(undefined4 *)(iVar4 + 0x1e4));
    iVar4 = *(int *)(*(int *)(param_2 + 8) + 8);
    fn_8239BD90(iVar4,*(undefined4 *)(iVar4 + 0x1e4));
    puVar3 = *(uint **)(*(int *)(*(int *)(param_2 + 8) + 8) + 0x94);
    if ((puVar3 != (uint *)0x0) && (puVar3[7] != 0)) {
      lVar6 = 0;
      if ((ulonglong)*puVar3 != 0) {
        lVar6 = (ulonglong)*puVar3 - 1;
      }
      fn_8248F9F8(puVar3[7],lVar6,0);
    }
    fn_8239B410(*(undefined4 *)(*(int *)(param_2 + 8) + 8));
    fn_8239C4D8(*(undefined4 *)(*(int *)(param_2 + 8) + 8));
    fn_823A5108(*(undefined4 *)(param_2 + 8),5);
    if ((*(int *)(*(int *)(*(int *)(param_2 + 8) + 8) + 0x1e4) != 0) &&
       (iVar4 = fn_8239CE98(), iVar4 == 0)) {
      iVar4 = *(int *)(*(int *)(*(int *)(param_2 + 8) + 8) + 0x1e4);
      *(float *)(iVar4 + 0x13c) = *(float *)(iVar4 + 0x13c) - lbl_82193AF0;
    }
    iVar4 = fn_82399BA0(*(undefined4 *)(*(int *)(param_2 + 8) + 8));
    if (iVar4 != 0) {
      if (*(int *)(iVar2 + 0x188) != 0) {
        iVar4 = (**(code **)(**(int **)(*(int *)(*(int *)(param_2 + 8) + 8) + 0x2e0) + 0x18))();
        uVar5 = (**(code **)(**(int **)(*(int *)(*(int *)(param_2 + 8) + 8) + 0x2e0) + 0x34))();
        if ((iVar4 == 0) == uVar5) {
          fn_82374078(*(undefined4 *)(*(int *)(param_2 + 8) + 8),iVar4 == 0,0x24);
        }
      }
      iVar4 = *(int *)(*(int *)(*(int *)(param_2 + 8) + 8) + 0x178);
      if (iVar4 == 0) {
        fn_823A1C50(param_2);
      }
      else if (iVar4 == 1) {
        fn_823A2098(param_2);
        iVar4 = *(int *)(*(int *)(param_2 + 8) + 8);
        if (((*(int *)(iVar4 + 0xa0) == 0) || (*(int *)(*(int *)(iVar4 + 0xa0) + 0x40) != 1)) &&
           (*(int *)(iVar4 + 0xbd4) != 0)) {
          fn_82536590(iVar4 + 0xbcc,0);
          *(undefined4 *)(iVar4 + 0xbd4) = 0;
        }
      }
    }
  }
  return;
}

