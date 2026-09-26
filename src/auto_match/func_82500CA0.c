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
extern unsigned int *auStack_50;
extern unsigned int *auStack_5c;
extern unsigned int *auStack_60;
extern int fn_8225C590();
extern int fn_8225DA70();
extern int fn_825010E8();
extern int fn_82501190();
extern int fn_825012C0();
extern int fn_8255F880();
extern int fn_8255F8D0();
extern int fn_82592430();
extern int fn_827EF8F8();
extern int fn_827EFC90();
extern int fn_827F2D60();
extern int fn_828EB518();
extern int fn_82F51AC0();
extern int fn_82F520B0();
extern int fn_82F52188();
extern int fn_82F525F0();
extern int fn_82F63EC8();
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_821922D0;
extern unsigned int lbl_821C223C;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_83265988;
extern unsigned int lbl_83297B04;
extern unsigned int lbl_8329E624;


void fn_82500CA0(int param_1,undefined8 param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined8 in_r0;
  undefined8 uVar4;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  longlong lVar5;
  char cVar9;
  ulonglong uVar10;
  uint uVar11;
  double dVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined1 auStack_60 [4];
  undefined4 auStack_5c [3];
  undefined1 auStack_50 [80];
  
  iVar7 = (int)in_r0;
  *(undefined4 *)(param_1 + 0x2b0) = lbl_821922D0;
  if (*(char *)(param_1 + 0xb69) == '\0') {
    if ((*(char *)(param_1 + 0xb68) == '\0') &&
       (piVar1 = *(int **)(param_1 + 0x8c0), piVar1 != (int *)0x0)) {
      iVar7 = (**(code **)(*piVar1 + 0x14))(piVar1);
      if (iVar7 == 0) {
        (**(code **)(*piVar1 + 0xc))(piVar1);
      }
      iVar6 = (**(code **)(*piVar1 + 0x14))(piVar1);
      iVar7 = (int)in_r0;
      if (iVar6 != 0) {
        if (*(int *)(param_1 + 0x18c) == 0) {
          uVar8 = (**(code **)(**(int **)(param_1 + 0x8c0) + 0x4c))();
          *(undefined4 *)(param_1 + 0x18c) = uVar8;
        }
        uVar11 = lbl_8329E624;
        *(undefined4 *)(param_1 + 0xb64) = *(undefined4 *)(param_1 + 0x18c);
        if ((uVar11 & 1) == 0) {
          lbl_8329E624 = uVar11 | 1;
          lbl_83297B04 = &lbl_821C223C;
          fn_82F63EC8(0xffffffff8313efb0);
        }
        fn_827EF8F8(*(undefined4 *)(param_1 + 0xb64));
        iVar6 = (**(code **)(*piVar1 + 0x6c))(piVar1,auStack_5c,auStack_60);
        iVar7 = (int)in_r0;
        if (iVar6 != 0) {
          fn_82F520B0(*(undefined4 *)(param_1 + 0xb60),auStack_5c[0],auStack_60[0]);
          uVar11 = 0;
          do {
            fn_827EFC90(*(undefined4 *)(param_1 + 0xb64),uVar11 & 0xffff,0xffffffff83297b04,
                              *(undefined4 *)(param_1 + 0xb60));
            iVar7 = (int)in_r0;
            uVar11 = uVar11 + 1;
          } while ((int)uVar11 < 0x47);
        }
        *(undefined1 *)(param_1 + 0xb68) = 1;
        if (*(int *)(param_1 + 0xfec) != 0) {
          fn_8255F880(auStack_50,param_1 + 0xfec);
          dVar12 = (double)lbl_821CC160;
          lVar5 = fn_8255F8D0(dVar12,(double)lbl_821CA460,auStack_50);
          *(int *)(param_1 + 0xff0) = (int)lVar5;
          if (lVar5 != 0) {
            fn_827F2D60((double)lbl_8218E8E8,*(undefined4 *)(param_1 + 0xb64));
          }
          fn_825012C0(dVar12,param_1);
        }
      }
    }
    goto LAB_82500ef8;
  }
  if ((*(int *)(param_1 + 0xff4) == 3) && (-1 < *(int *)(param_1 + 0xb6c))) {
    if (*(int *)(param_1 + 0xb6c) == 0xff) {
      uVar10 = (ulonglong)lbl_83265988;
    }
    else {
      uVar10 = fn_828EB518();
    }
    if ((uVar10 & 0xffffffff) != 0) {
      uVar4 = fn_8225C590();
      iVar6 = fn_8225DA70(uVar4,param_1 + 0xb70,uVar10,0);
      if (iVar6 == 0) goto LAB_82500ef8;
      goto LAB_82500d48;
    }
  }
  else {
    if (*(int *)(param_1 + 0xf58) == 0x3e5) goto LAB_82500ef8;
LAB_82500d48:
    fn_825010E8(param_1,param_1 + 0xb70);
  }
  *(undefined1 *)(param_1 + 0xb69) = 0;
LAB_82500ef8:
  if (*(char *)(param_1 + 0xb68) != '\0') {
    dVar12 = (double)*(float *)(param_1 + 0xb3c);
    cVar9 = fn_82F525F0(*(undefined4 *)(param_1 + 0xb60));
    if (cVar9 != '\0') {
      iVar6 = fn_82F52188(auStack_50,*(undefined4 *)(param_1 + 0xb60),2);
      uVar8 = *(undefined4 *)(param_1 + 0xb60);
      puVar2 = (undefined4 *)(iVar7 + iVar6 & 0xfffffff0);
      uVar13 = puVar2[1];
      uVar14 = puVar2[2];
      uVar15 = puVar2[3];
      puVar3 = (undefined4 *)(param_1 + 0xf80U & 0xfffffff0);
      *puVar3 = *puVar2;
      puVar3[1] = uVar13;
      puVar3[2] = uVar14;
      puVar3[3] = uVar15;
      fn_82F51AC0(dVar12,uVar8);
      if (*(char *)(param_1 + 0x1000) != '\0') {
        fn_82501190(param_1);
      }
    }
    fn_825012C0(dVar12,param_1);
  }
  fn_82592430(param_1,param_2);
  return;
}

