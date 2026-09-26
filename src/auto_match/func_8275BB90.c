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
extern int fn_8267C4F0();
extern int fn_826957D0();
extern int fn_82697610();
extern int fn_826A7398();
extern int fn_826C52C8();
extern int fn_826C53D0();
extern int fn_826C68B8();
extern int fn_826D06C8();
extern int fn_8274A8E0();
extern int fn_8275BB38();
extern unsigned int lbl_821AAD20;


void fn_8275BB90(int param_1)

{
  undefined4 uVar1;
  ulonglong uVar2;
  int *piVar6;
  int iVar7;
  longlong lVar3;
  undefined8 uVar4;
  int iVar8;
  longlong lVar5;
  char cVar9;
  
  uVar2 = fn_826A7398(*(undefined4 *)(param_1 + 0x18));
  if ((uVar2 & 0xffffffff) == 0) {
    return;
  }
  piVar6 = (int *)fn_8274A8E0(uVar2 + 8);
  if (piVar6 == (int *)0x0) {
    return;
  }
  if (*(int **)(param_1 + 8) == (int *)0x0) {
    return;
  }
  iVar7 = (**(code **)(**(int **)(param_1 + 8) + 8))();
  if (iVar7 != 0x20) {
    return;
  }
  iVar7 = *(int *)(param_1 + 8) + -0x10;
  if (*(int *)(param_1 + 8) == 0) {
    iVar7 = 0;
  }
  if (iVar7 == 0) {
    return;
  }
  lVar3 = fn_8275BB38(iVar7);
  if (lVar3 == 0) {
    return;
  }
  iVar8 = 0;
  if (0 < *(int *)(param_1 + 0x1c)) {
    uVar1 = *(undefined4 *)(param_1 + 0x18);
    uVar4 = fn_826957D0(param_1,0);
    iVar8 = fn_82697610(uVar4,uVar1);
  }
  if (1 < *(int *)(param_1 + 0x1c)) {
    uVar1 = *(undefined4 *)(param_1 + 0x18);
    uVar4 = fn_826957D0(param_1,1);
    lVar5 = fn_82697610(uVar4,uVar1);
    if (lVar5 != 0) goto LAB_8275bc70;
  }
  lVar5 = 1;
LAB_8275bc70:
  if ((*(int *)(iVar7 + 0x34) == 0) && (cVar9 = fn_826C68B8(lVar3,iVar7), cVar9 != '\0')) {
    return;
  }
  piVar6 = (int *)(**(code **)(*piVar6 + 0x14))(piVar6,*(undefined4 *)(iVar7 + 0x30),1);
  if (piVar6 != (int *)0x0) {
    if ((0 < iVar8) || (0 < (int)lVar5)) {
      (**(code **)(*piVar6 + 0x20))((double)(longlong)iVar8,(double)lbl_821AAD20,piVar6,lVar5);
    }
    iVar8 = *piVar6;
    fn_826C52C8(lVar3);
    (**(code **)(iVar8 + 0x28))(piVar6);
    iVar8 = *piVar6;
    fn_826C53D0(lVar3);
    (**(code **)(iVar8 + 0x30))(piVar6);
    (**(code **)(*piVar6 + 0x10))(piVar6,0);
    fn_826D06C8(lVar3,piVar6,iVar7,*(undefined4 *)(iVar7 + 0x34));
    fn_8267C4F0(piVar6);
  }
  return;
}

