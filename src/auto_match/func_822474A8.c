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
extern unsigned int *auStack_80;
extern int fn_82248CC8();
extern int fn_8225F160();
extern int fn_8251F720();
extern int fn_8251FA58();
extern int fn_8251FBA8();
extern int fn_82520158();
extern int fn_82520780();
extern int fn_828AAF70();
extern int fn_828AB870();
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_83265A28;


void fn_822474A8(int *param_1)

{
  int iVar1;
  float fVar2;
  int iVar9;
  undefined8 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  int iVar10;
  int iVar11;
  longlong lVar8;
  int iVar12;
  int *piVar13;
  double dVar14;
  double dVar15;
  longlong lStack_90;
  longlong lStack_88;
  uint auStack_80 [2];
  longlong lStack_78;
  
  iVar9 = fn_8225F160();
  auStack_80[0] = *(uint *)(iVar9 + 0x14);
  if (auStack_80[0] == 0) {
    fn_82520158(0xffffffff821977d4,&lStack_90,0);
    uVar3 = 0xffffffff821977e4;
  }
  else if (auStack_80[0] == 1) {
    fn_82520158(0xffffffff821977f8,&lStack_90,0);
    uVar3 = 0xffffffff8219780c;
  }
  else if (auStack_80[0] < 3) {
    fn_82520158(0xffffffff82197820,&lStack_90,0);
    uVar3 = 0xffffffff82197830;
  }
  else {
    if (auStack_80[0] != 3) goto LAB_8224756c;
    fn_82520158(0xffffffff82197844,&lStack_90,0);
    uVar3 = 0xffffffff82197858;
  }
  fn_82520158(uVar3,&lStack_88,0);
LAB_8224756c:
  uVar4 = fn_8251F720(&lStack_90,0);
  uVar5 = fn_8251F720(&lStack_88,0);
  if ((uVar4 & 0xffffffff) == 0) {
    iVar9 = 0;
  }
  else {
    uVar6 = fn_8251FBA8(uVar4);
    iVar9 = (int)((uVar6 & 0xffffffff) / 0x24);
  }
  if ((uVar5 & 0xffffffff) == 0) {
    iVar12 = 0;
  }
  else {
    uVar6 = fn_8251FBA8(uVar5);
    iVar12 = (int)((uVar6 & 0xffffffff) / 0x24);
  }
  if ((uVar4 & 0xffffffff) != 0) {
    fn_8251FA58(uVar4);
  }
  if ((uVar5 & 0xffffffff) != 0) {
    fn_8251FA58(uVar5);
  }
  dVar14 = (double)lbl_8218E8E8;
  uVar4 = 0;
  dVar15 = (double)lbl_821CA460;
  do {
    lVar7 = fn_82520780(dVar14,0xffffffff83265a28);
    do {
      lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
      if ((int)lVar7 == 0) {
        lStack_78 = (longlong)iVar12;
        fVar2 = (float)((double)(float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - dVar15) *
                (float)lStack_78;
      }
      else {
        lStack_90 = (longlong)iVar9;
        fVar2 = (float)((double)(float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - dVar15) *
                (float)lStack_90;
      }
      iVar1 = (int)fVar2;
      lStack_88 = (longlong)iVar1;
      iVar10 = (**(code **)(*param_1 + 8))(param_1);
      iVar11 = (**(code **)(*param_1 + 8))(param_1);
      piVar13 = (int *)(iVar11 + 0x294);
      while ((piVar13 != (int *)(iVar10 + 0x780) &&
             (iVar11 = (**(code **)(*piVar13 + 0x3c))(piVar13), iVar11 != iVar1))) {
        piVar13 = piVar13 + 0x15;
      }
      iVar10 = (**(code **)(*param_1 + 8))(param_1);
    } while (piVar13 != (int *)(iVar10 + 0x780));
    lVar8 = (**(code **)(*param_1 + 8))(param_1);
    fn_828AB870(uVar4 + lVar8 + 0x294,iVar1);
    lVar8 = (**(code **)(*param_1 + 8))(param_1);
    fn_828AAF70(uVar4 + lVar8 + 0x780,lVar7 != 0);
    uVar4 = uVar4 + 0x54;
  } while ((uVar4 & 0xffffffff) < 0x4ec);
  lVar7 = (**(code **)(*param_1 + 8))(param_1);
  fn_82248CC8(lVar7 + 0x240,auStack_80);
  *(undefined1 *)(param_1 + 0x20) = 1;
  return;
}

