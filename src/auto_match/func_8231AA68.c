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
extern unsigned int *auStack_70;
extern int fn_822BD278();
extern int fn_822C4448();
extern int fn_822C8C08();
extern int fn_822C8C60();
extern int fn_822CB020();
extern int fn_822FC0E0();
extern int fn_8230C220();
extern int fn_8231AEF0();
extern int fn_8231B168();
extern int fn_8231B3F0();
extern int fn_8231BC10();
extern int fn_8231C178();
extern int fn_8231E420();
extern int fn_823694F8();
extern int fn_824CD030();
extern int fn_824D7EC0();
extern int fn_82508078();
extern int fn_8255A070();
extern int fn_82F64C68();
extern unsigned int lbl_821CC160;
extern unsigned int lbl_8329EA20;
extern unsigned int uStack_7c;
extern unsigned int uStack_80;
extern V16 vectorConditionalSelect();


void fn_8231AA68(double param_1,int param_2)

{
  float fVar1;
  char cVar2;
  int *piVar3;
  undefined4 *puVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  int in_r0;
  longlong lVar8;
  undefined8 uVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined1 uVar13;
  int iVar12;
  double dVar14;
  undefined1 in_vs32 [16];
  undefined1 in_vs44 [16];
  undefined1 in_vs45 [16];
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined1 auStack_70 [112];
  
  cVar2 = *(char *)(param_2 + 0x2a1);
  iVar12 = *(int *)(*(int *)(param_2 + 0xc) + 0x24);
  iVar10 = ((uint)LZCOUNT(iVar12) >> 5 ^ 1) + 1;
  if (iVar10 != *(int *)(param_2 + 0x29c)) {
    *(int *)(param_2 + 0x29c) = iVar10;
    *(undefined4 *)(param_2 + 0x2a8) = 0;
    if ((iVar12 != 0) && (*(int *)(param_2 + 0x294) != 0)) {
      fn_824D7EC0(*(int *)(param_2 + 0x294),iVar12);
    }
  }
  iVar10 = *(int *)(*(int *)(*(int *)(param_2 + 0xc) + 0x114) + 0x20);
  puVar11 = (undefined4 *)(iVar10 + 4);
  if (0xf < *(uint *)(iVar10 + 0x18)) {
    puVar11 = (undefined4 *)*puVar11;
  }
  iVar10 = fn_82F64C68(puVar11,0xffffffff821af0f4);
  if ((iVar10 == 0) ||
     (bVar6 = true, *(int *)(*(int *)(*(int *)(param_2 + 0xc) + 0x114) + 0x28) != 0)) {
    bVar6 = false;
  }
  if (*(int *)(param_2 + 0x29c) == 1) {
    if (!bVar6) {
      fn_8231B168(param_2);
      if (*(int *)(*(int *)(param_2 + 0x10) + 0x4c0) == 0) {
        fn_8231BC10(param_1,param_2);
      }
      else {
        fn_8231C178();
      }
    }
  }
  else if (*(int *)(param_2 + 0x29c) == 2) {
    iVar10 = fn_824CD030(iVar12);
    if (iVar10 == 0) {
      if (!bVar6) {
        piVar3 = *(int **)(*(int *)(param_2 + 0xc) + 0x168);
        if (piVar3 != (int *)0x0) {
          uVar15 = *(undefined4 *)(*(int *)(param_2 + 0xc) + 0x114);
          lVar8 = (**(code **)(*piVar3 + 8))(piVar3);
          fn_822CB020(&uStack_80,lVar8 + 0xf0);
          lVar8 = (**(code **)(*piVar3 + 8))(piVar3);
          fn_822BD278(auStack_70,lVar8 + 0x144);
          fn_822C8C60(uVar15,1,0);
        }
      }
    }
    else {
      iVar10 = *(int *)(param_2 + 0x2a8);
      if (!bVar6) {
        fn_8231AEF0(param_2);
      }
      if (((iVar10 == 0) && (*(int *)(param_2 + 0x2a8) != 0)) &&
         (*(int *)(*(int *)(param_2 + 0x10) + 0x4c0) == 0)) {
        fn_8231E420(param_2);
      }
      if (*(int *)(*(int *)(param_2 + 0x10) + 0x4c0) != 0) {
        piVar3 = *(int **)(*(int *)(param_2 + 0x10) + 0xe20);
        if (piVar3 == (int *)0x0) {
          bVar5 = false;
        }
        else if ((*(int *)(*piVar3 + 0xe04) == 0) ||
                (bVar5 = true, *(char *)((int)piVar3 + 0x9d) != '\0')) {
          bVar5 = false;
        }
        if (!bVar5) goto LAB_8231aca0;
      }
      fn_8231B3F0(param_1,param_2);
    }
  }
LAB_8231aca0:
  bVar5 = *(int *)(param_2 + 0x29c) != 2;
  if (((bVar5) || (*(char *)(param_2 + 0x2a1) == '\0')) || (bVar7 = true, cVar2 != '\0')) {
    bVar7 = false;
  }
  if (((*(int *)(param_2 + 800) != 0) && (!bVar6)) || (bVar7)) {
    if (!bVar5) {
      if (bVar7) {
        fn_822C4448(&uStack_80,*(undefined4 *)(param_2 + 0xc),*(undefined4 *)(param_2 + 0x10),
                          0,1);
        dVar14 = (double)fn_8255A070();
        iVar10 = *(int *)(param_2 + 0xc);
        uVar9 = 0xffffffff821ace70;
        *(float *)(iVar10 + 0x254) = (float)dVar14;
        *(undefined4 *)(iVar10 + 600) = 1;
      }
      else {
        iVar10 = *(int *)(param_2 + 0xc);
        uVar9 = 0xffffffff821aca94;
      }
      fn_822C8C08(*(undefined4 *)(iVar10 + 0x114),uVar9);
    }
    if (!bVar7) {
      fn_823694F8(*(undefined4 *)(param_2 + 0x10),(-(*(int *)(param_2 + 0x2a4) != 0) & 4U) + 2
                       );
    }
    *(undefined4 *)(param_2 + 800) = 0;
  }
  if (iVar12 != 0) {
    if ((*(char *)(param_2 + 0x2a1) == '\0') || (uVar13 = 0, *(char *)(param_2 + 0x2a0) != '\0')) {
      uVar13 = 1;
    }
    *(undefined1 *)(iVar12 + 0xe0) = uVar13;
  }
  dVar14 = (double)fn_822FC0E0(0xb);
  iVar12 = (*(int *)(*(int *)(param_2 + 0xc) + 0x2c) * 7 + *(int *)(*(int *)(param_2 + 0xc) + 0x28))
           * 0x40 + *(int *)(*(int *)(param_2 + 0x10) + 0x4c4);
  *(float *)(iVar12 + 0x38) = (float)dVar14;
  *(undefined4 *)(iVar12 + 0x30) = 2;
  puVar11 = (undefined4 *)((uint)(&lbl_8329EA20 + in_r0) & 0xfffffff0);
  uVar15 = puVar11[1];
  uVar16 = puVar11[2];
  uVar17 = puVar11[3];
  vectorConditionalSelect(in_vs32,in_vs45,in_vs44);
  puVar4 = (undefined4 *)(in_r0 + iVar12 & 0xfffffff0);
  *puVar4 = *puVar11;
  puVar4[1] = uVar15;
  puVar4[2] = uVar16;
  puVar4[3] = uVar17;
  *(undefined4 *)(iVar12 + 0x20) = 1;
  *(undefined4 *)(iVar12 + 0x34) = 0xb;
  iVar12 = *(int *)(param_2 + 0x10);
  if ((*(int *)(iVar12 + 0x58) != 0x11) && (*(int *)(iVar12 + 0x54) != 0x11)) {
    uStack_80 = *(undefined4 *)(*(int *)(param_2 + 0xc) + 0x28);
    uStack_7c = *(undefined4 *)(*(int *)(param_2 + 0xc) + 0x2c);
    fn_8230C220(iVar12 + 0xa28,&uStack_80);
  }
  dVar14 = (double)lbl_821CC160;
  if ((dVar14 < (double)*(float *)(param_2 + 0x324)) &&
     (fVar1 = (float)((double)*(float *)(param_2 + 0x324) - param_1),
     *(float *)(param_2 + 0x324) = fVar1, (double)fVar1 <= dVar14)) {
    iVar12 = *(int *)(param_2 + 0x10);
    if ((*(int *)(iVar12 + 0x54) == 10) ||
       ((*(int *)(iVar12 + 0x58) == 0xb || (*(int *)(iVar12 + 0x58) == 0xc)))) {
      if (*(int *)(iVar12 + 0x4c0) != 0) {
        return;
      }
      uVar9 = 0xffffffff821af8ec;
    }
    else if (*(int *)(iVar12 + 0x54) == 9) {
      if (*(int *)(iVar12 + 0x4c0) != 0) {
        return;
      }
      uVar9 = 0xffffffff821af8f8;
    }
    else {
      if (*(int *)(iVar12 + 0x4c0) != 0) {
        return;
      }
      uVar9 = 0xffffffff821af908;
    }
    fn_82508078(*(undefined4 *)(iVar12 + 0xa4),uVar9,0);
  }
  return;
}

