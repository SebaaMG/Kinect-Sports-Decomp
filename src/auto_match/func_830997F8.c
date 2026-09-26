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
#define TBLr 0
extern unsigned int *auStack_890;
extern unsigned int *auStack_8c0;
extern int fn_82CE5410();
extern int fn_82CE8B30();
extern int fn_82CE8E78();
extern int fn_8309A2A0();
extern unsigned int iStack_89c;
extern unsigned int iStack_8c4;
extern unsigned int iStack_8c8;
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_82132BC4;
extern unsigned int lbl_8323B4A0;
extern unsigned int uStack_898;
extern unsigned int uStack_8cc;
extern unsigned int uStack_8d0;
extern unsigned int uStack_8d4;
extern unsigned int uStack_8d8;
extern unsigned int uStack_8dc;
extern unsigned int uStack_8e0;
extern unsigned int uStack_8ea;
extern unsigned int uStack_8ec;
extern unsigned int uStack_8ee;
extern unsigned int uStack_8ef;
extern unsigned int uStack_8f0;


undefined8 fn_830997F8(undefined8 param_1,int param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar4;
  int *piVar8;
  int iVar10;
  longlong lVar9;
  undefined4 *puVar12;
  longlong lVar11;
  ulonglong uVar13;
  ulonglong uVar14;
  int *piVar15;
  ulonglong uVar16;
  double dVar17;
  undefined1 uStack_8f0;
  undefined1 uStack_8ef;
  undefined1 uStack_8ee;
  undefined2 uStack_8ec;
  undefined2 uStack_8ea;
  undefined4 uStack_8e0;
  undefined4 uStack_8dc;
  undefined4 uStack_8d8;
  undefined4 uStack_8d4;
  undefined4 uStack_8d0;
  undefined4 uStack_8cc;
  int iStack_8c8;
  int iStack_8c4;
  undefined1 auStack_8c0 [32];
  undefined1 *puStack_8a0;
  int iStack_89c;
  uint uStack_898;
  undefined1 auStack_890 [2192];
  
  iVar5 = KeTlsGetValue(lbl_8323B4A0);
  puVar12 = *(undefined4 **)(iVar5 + 4);
  if (puVar12 < *(undefined4 **)(iVar5 + 0xc)) {
    *puVar12 = "TtCollQueryWorldGetClosestPoints";
    uVar4 = TBLr;
    puVar12[1] = (int)uVar4;
    *(undefined4 **)(iVar5 + 4) = puVar12 + 3;
  }
  uVar13 = (ulonglong)*(uint *)(param_2 + 0x2c);
  puStack_8a0 = auStack_890;
  piVar15 = *(int **)(param_2 + 0x30);
  uVar14 = (ulonglong)*(uint *)(param_2 + 0x28);
  iVar5 = 0;
  iStack_89c = 0;
  uStack_898 = 0x80000100;
  *(undefined4 *)(param_2 + 0x38) = 0;
  if (0 < *(int *)(param_2 + 0x34)) {
    dVar17 = (double)lbl_82002C5C;
    do {
      iStack_89c = 0;
      piVar8 = *(int **)(param_2 + 0x20);
      piVar1 = *(int **)*piVar15;
      (**(code **)(*piVar1 + 0x1c))
                (-(double)(float)((double)*(float *)(*(int *)(param_2 + 0x18) + 8) * dVar17 -
                                 (double)*(float *)(param_2 + 0x24)),piVar1,
                 ((undefined4 *)*piVar15)[2]);
      (**(code **)(*piVar8 + 0x44))(piVar8,auStack_8c0,&puStack_8a0);
      iVar3 = iStack_89c;
      iVar6 = fn_82CE5410();
      iVar6 = (**(code **)(**(int **)(iVar6 + 0x10) + 4))(*(int **)(iVar6 + 0x10),iVar3 << 5);
      uVar16 = 0;
      iVar7 = 0;
      if (0 < iStack_89c) {
        puVar12 = (undefined4 *)(iVar6 + -0xc);
        piVar8 = (int *)(puStack_8a0 + 4);
        do {
          iVar10 = (int)*(char *)(*piVar8 + 5) + *piVar8;
          if (iVar10 != *piVar15) {
            puVar12[3] = *piVar15;
            puVar12[4] = iVar10;
            uVar16 = uVar16 + 1;
            puVar12[5] = piVar15[1];
            puVar12[6] = piVar15[2];
            puVar12 = puVar12 + 8;
            *puVar12 = piVar15 + 3;
          }
          iVar7 = iVar7 + 1;
          piVar8 = piVar8 + 2;
        } while (iVar7 < iStack_89c);
        iVar7 = (int)uVar16;
        if (0 < iVar7) {
          uStack_8d0 = *(undefined4 *)(param_2 + 0x24);
          uStack_8f0 = 1;
          uStack_8ef = 2;
          uStack_8ee = 2;
          uStack_8ec = 0x30;
          uStack_8ea = 0xffff;
          uStack_8e0 = 0;
          uStack_8d4 = 0;
          uStack_8dc = 0;
          uStack_8d8 = 0;
          if ((*(int *)(param_2 + 0x28) == 0) || ((int)uVar13 < iVar7)) {
            fn_8309A2A0(&uStack_8f0,0,iVar6,uVar16);
          }
          else {
            lVar9 = (uVar16 & 0x7fffffff) << 1;
            puVar12 = (undefined4 *)(iVar6 + -4);
            lVar11 = uVar14 + 8;
            iStack_8c8 = (int)uVar14;
            do {
              puVar2 = (undefined4 *)lVar11;
              puVar2[-2] = puVar12[1];
              puVar2[-1] = puVar12[2];
              *puVar2 = *(undefined4 *)((iVar6 - iStack_8c8) + (int)puVar2);
              puVar12 = puVar12 + 4;
              puVar2[1] = *puVar12;
              lVar11 = lVar11 + 0x10;
              lVar9 = lVar9 + -1;
            } while (lVar9 != 0);
            uStack_8dc = *(undefined4 *)(param_2 + 0x14);
            uStack_8e0 = *(undefined4 *)(param_2 + 0x10);
            uStack_8d8 = *(undefined4 *)(param_2 + 0x18);
            uStack_8cc = 0x100;
            uStack_8ee = 1;
            iStack_8c4 = iVar7;
            fn_82CE8B30(param_1,&uStack_8f0,1);
            uVar13 = uVar13 - uVar16;
            uVar14 = (uVar16 & 0x7ffffff) * 0x20 + uVar14;
            *(int *)(param_2 + 0x38) = *(int *)(param_2 + 0x38) + 1;
          }
        }
      }
      iVar7 = fn_82CE5410();
      (**(code **)(**(int **)(iVar7 + 0x10) + 8))(*(int **)(iVar7 + 0x10),iVar6,iVar3 << 5);
      iVar5 = iVar5 + 1;
      piVar15 = piVar15 + 4;
    } while (iVar5 < *(int *)(param_2 + 0x34));
  }
  iVar5 = KeTlsGetValue(lbl_8323B4A0);
  puVar12 = *(undefined4 **)(iVar5 + 4);
  if (puVar12 < *(undefined4 **)(iVar5 + 0xc)) {
    *puVar12 = &lbl_82132BC4;
    uVar4 = TBLr;
    puVar12[1] = (int)uVar4;
    *(undefined4 **)(iVar5 + 4) = puVar12 + 3;
  }
  uVar4 = fn_82CE8E78(param_1,param_2,param_2,0);
  iVar5 = fn_82CE5410();
  iStack_89c = 0;
  if ((uStack_898 & 0x80000000) == 0) {
    (**(code **)(**(int **)(iVar5 + 0x10) + 0x10))
              (*(int **)(iVar5 + 0x10),puStack_8a0,uStack_898 & 0x3fffffff,8);
  }
  return uVar4;
}

