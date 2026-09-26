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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern int fn_82360E28();
extern int fn_8257A9F0();
extern int fn_8265CA20();
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_83265A28;
extern unsigned int uStack_48;
extern unsigned int uStack_50;


uint fn_82467378(int *param_1,int param_2,uint param_3,int param_4,int *param_5)

{
  undefined4 *puVar1;
  uint uVar2;
  float fVar3;
  bool bVar4;
  float fVar5;
  uint *puVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 **ppuVar9;
  uint *puVar10;
  uint uVar11;
  uint uVar12;
  uint uStack_50;
  undefined4 *puStack_4c;
  ulonglong uStack_48;
  uint *puStack_40;
  uint *puStack_3c;
  uint *puStack_38;
  
  puStack_38 = (uint *)0x0;
  puStack_40 = (uint *)0x0;
  puStack_3c = (uint *)0x0;
  if (param_4 == 0) {
    iVar7 = *param_1;
    uStack_50 = 0;
    if (param_1[1] - iVar7 >> 2 != 0) {
      do {
        puVar1 = *(undefined4 **)(param_2 + 4);
        uVar11 = *(uint *)(uStack_50 * 4 + iVar7);
        puStack_4c = puVar1;
        puVar8 = (undefined4 *)puVar1[1];
        while (*(char *)((int)puVar8 + 0x11) == '\0') {
          if ((uint)puVar8[3] < uVar11) {
            puVar8 = (undefined4 *)puVar8[2];
          }
          else {
            puStack_4c = puVar8;
            puVar8 = (undefined4 *)*puVar8;
          }
        }
        if ((puStack_4c == *(undefined4 **)(param_2 + 4)) || (uVar11 < (uint)puStack_4c[3])) {
          uStack_48 = CONCAT44(*(undefined4 **)(param_2 + 4),(((U64)(uStack_48) >> 32) & 0xFFFFFFFF));
          ppuVar9 = (undefined4 **)&uStack_48;
        }
        else {
          ppuVar9 = &puStack_4c;
        }
        if ((*ppuVar9 == puVar1) && (uVar11 != param_3)) {
          fn_8257A9F0(&puStack_40,&uStack_50);
        }
        iVar7 = *param_1;
        uStack_50 = uStack_50 + 1;
      } while (uStack_50 < (uint)(param_1[1] - iVar7 >> 2));
      puVar10 = puStack_3c;
      if (puStack_40 != puStack_3c) goto LAB_8246759c;
    }
  }
  iVar7 = *param_1;
  uStack_50 = 0;
  if (param_1[1] - iVar7 >> 2 != 0) {
    do {
      if (*(uint *)(uStack_50 * 4 + iVar7) != param_3) {
        fn_8257A9F0(&puStack_40,&uStack_50);
      }
      iVar7 = *param_1;
      uStack_50 = uStack_50 + 1;
    } while (uStack_50 < (uint)(param_1[1] - iVar7 >> 2));
  }
  puVar10 = puStack_3c;
  if (puStack_40 == puStack_3c) {
    uStack_50 = 0;
    if ((puStack_3c <= &uStack_50) || (bVar4 = true, &uStack_50 < puStack_40)) {
      bVar4 = false;
    }
    if (bVar4) {
      iVar7 = (int)&uStack_50 - (int)puStack_40;
      if (puStack_3c == puStack_38) {
        fn_82360E28(&puStack_40,1);
      }
      if (puStack_3c != (uint *)0x0) {
        *puStack_3c = puStack_40[iVar7 >> 2];
      }
    }
    else {
      if (puStack_3c == puStack_38) {
        fn_82360E28(&puStack_40,1);
      }
      if (puStack_3c != (uint *)0x0) {
        *puStack_3c = 0;
      }
    }
    puVar10 = puStack_3c + 1;
  }
LAB_8246759c:
  if (param_5 == (int *)0x0) {
    lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
    uVar11 = (uint)((float)(longlong)((int)puVar10 - (int)puStack_40 >> 2) *
                   ((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - lbl_821CA460));
    uStack_48 = (ulonglong)(int)uVar11;
LAB_824676f4:
    uVar12 = puStack_40[uVar11];
  }
  else {
    uVar2 = (int)puVar10 - (int)puStack_40 >> 2;
    uVar11 = 0;
    fVar3 = lbl_821CA460;
    if (uVar2 != 0) {
      puVar6 = puStack_40 + -1;
      do {
        puVar6 = puVar6 + 1;
        uVar11 = uVar11 + 1;
        fVar3 = *(float *)(*puVar6 * 4 + *param_5) + fVar3;
      } while (uVar11 < uVar2);
    }
    uVar12 = puVar10[-1];
    lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
    uVar11 = 0;
    uStack_48 = CONCAT44(lbl_83265A28,uVar2) & 0x7fffffffffffff | 0x3f80000000000000;
    if (uVar2 != 0) {
      puVar10 = puStack_40;
      fVar5 = lbl_821CC160;
      do {
        fVar5 = *(float *)(*puVar10 * 4 + *param_5) + lbl_821CA460 / (float)uVar2 + fVar5;
        if (((float)(((U64)(uStack_48) >> 0) & 0xFFFFFFFF) - lbl_821CA460) * fVar3 < fVar5) goto LAB_824676f4;
        uVar11 = uVar11 + 1;
        puVar10 = puVar10 + 1;
      } while (uVar11 < uVar2);
    }
  }
  if (puStack_40 != (uint *)0x0) {
    fn_8265CA20();
  }
  return uVar12;
}

