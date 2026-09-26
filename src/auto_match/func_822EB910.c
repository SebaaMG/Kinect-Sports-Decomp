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
extern unsigned int *auStack_30;
extern int fn_822BD338();
extern int fn_822C1928();
extern int fn_822EBBD8();
extern int fn_822EBCD0();
extern int fn_822EBDA0();
extern int fn_822EBEE0();
extern int fn_822EC378();
extern int fn_822EC480();
extern int fn_82399BA0();
extern int fn_82520780();
extern int fn_827F5708();
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_831CD144;
extern unsigned int lbl_831CD14C;
extern unsigned int lbl_83265A28;
extern V16 loadVectorLeftIndexed128();
extern V16 vectorRotateLeftImmediateMaskInsert128();
extern V16 vectorSubtractFloatingPoint();


void fn_822EB910(int param_1)

{
  undefined4 *puVar1;
  int in_r0;
  int iVar2;
  int iVar3;
  char cVar4;
  undefined8 uVar5;
  byte bVar6;
  undefined1 in_vs32 [16];
  undefined1 in_vs45 [16];
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 in_vr12 [16];
  undefined1 auStack_30 [24];
  
  iVar2 = fn_82399BA0(*(undefined4 *)(param_1 + 0x10));
  if ((((iVar2 == 0) &&
       (iVar2 = *(int *)(*(int *)(param_1 + 0xc) + 0x2c),
       iVar3 = (**(code **)(**(int **)(*(int *)(param_1 + 0x10) + 0x2e0) + 0x34))(), iVar3 == iVar2)
       ) && (iVar2 = *(int *)(*(int *)(param_1 + 0x10) + 0x1e4), iVar2 != 0)) &&
     (*(int *)(iVar2 + 0x120) != 0)) {
    fn_822EBEE0(param_1,0xffffffff821ae2ac);
    cVar4 = fn_822BD338(param_1 + 0x28,0xffffffff82196582);
    if ((cVar4 == '\0') && (*(int *)(*(int *)(*(int *)(param_1 + 0xc) + 0x118) + 0x2e4) != 0)) {
      fn_827F5708((double)lbl_821CC160);
    }
  }
  else {
    iVar2 = fn_822EBBD8(param_1);
    if (iVar2 == 0) {
      iVar2 = fn_82399BA0(*(undefined4 *)(param_1 + 0x10));
      if (iVar2 == 0) {
        lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
        if (lbl_831CD14C <= (float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - lbl_821CA460)
        goto LAB_822ebb2c;
        iVar2 = *(int *)(*(int *)(param_1 + 0xc) + 0x2c);
        iVar3 = (**(code **)(**(int **)(*(int *)(param_1 + 0x10) + 0x2e0) + 0x34))();
        if (iVar3 == iVar2) {
          uVar5 = 0xffffffff821ae2f8;
        }
        else {
          uVar5 = 0xffffffff821ae308;
        }
      }
      else {
        iVar2 = *(int *)(*(int *)(param_1 + 0xc) + 0x2c);
        iVar3 = (**(code **)(**(int **)(*(int *)(param_1 + 0x10) + 0x2e0) + 0x34))();
        if (iVar3 == iVar2) {
          uVar5 = 0xffffffff821ae2d8;
        }
        else {
          uVar5 = 0xffffffff821ae2e8;
        }
      }
      fn_822EBEE0(param_1,uVar5);
    }
    else {
      iVar2 = *(int *)(*(int *)(param_1 + 0x10) + 0xa0);
      if (((iVar2 == 0) || (*(int *)(iVar2 + 0x40) != 1)) &&
         (iVar2 = fn_82520780((double)lbl_831CD144,0xffffffff83265a28), iVar2 != 0)) {
        fn_822EBDA0(param_1);
        cVar4 = fn_822BD338(param_1 + 0x28,0xffffffff82196582);
        if (cVar4 == '\0') goto LAB_822ebb2c;
      }
      fn_822EBCD0(param_1);
    }
  }
LAB_822ebb2c:
  iVar2 = fn_822C1928(param_1 + 0x28,0xffffffff821ae2a4,0,7);
  bVar6 = (iVar2 == -1) << 1;
  if (iVar2 == -1) {
    iVar2 = *(int *)(param_1 + 0xc);
    puVar1 = (undefined4 *)(iVar2 + 0x80U & 0xfffffff0);
    uVar7 = *puVar1;
    uVar8 = puVar1[1];
    uVar9 = puVar1[2];
    uVar10 = puVar1[3];
  }
  else {
    fn_822EC378(param_1 + 0x28);
    iVar3 = fn_822EC480(auStack_30,param_1);
    iVar2 = *(int *)(param_1 + 0xc);
    puVar1 = (undefined4 *)(in_r0 + iVar3 & 0xfffffff0);
    uVar7 = *puVar1;
    uVar8 = puVar1[1];
    uVar9 = puVar1[2];
    uVar10 = puVar1[3];
  }
  vectorSubtractFloatingPoint(in_vs45,in_vs32);
  loadVectorLeftIndexed128(0xffffffff82192950,0x60);
  vectorRotateLeftImmediateMaskInsert128
            (*(undefined1 (*) [16])(in_r0 + iVar2 + 0x290 & 0xfffffff0),in_vr12,1,0);
  if (!(bool)(bVar6 >> 1 & 1)) {
    *(undefined4 *)(iVar2 + 0x2a8) = 0;
    *(undefined4 *)(iVar2 + 0x2a4) = 0;
    puVar1 = (undefined4 *)(in_r0 + iVar2 + 0x290 & 0xfffffff0);
    *puVar1 = uVar7;
    puVar1[1] = uVar8;
    puVar1[2] = uVar9;
    puVar1[3] = uVar10;
  }
  return;
}

