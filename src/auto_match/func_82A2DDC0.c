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
extern unsigned int *auStack_5c;
extern int fn_82A2BAF0();
extern int fn_82A2D960();
extern int fn_82A2DB28();
extern unsigned int iStack_60;


undefined8 fn_82A2DDC0(longlong param_1,ulonglong param_2,uint param_3,int param_4,uint *param_5)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  byte bVar9;
  ulonglong uVar10;
  longlong lVar11;
  uint *puVar12;
  ulonglong uVar13;
  uint uVar14;
  longlong lVar15;
  int iStack_60;
  uint auStack_5c [23];
  
  iVar3 = (int)param_1;
  uVar14 = (uint)*(byte *)(iVar3 + 0xca);
  lVar15 = param_1 + 0xb0;
  uVar13 = 0;
  do {
    iVar2 = (int)lVar15;
    iVar4 = (int)uVar13;
    if ((uVar14 == param_3) && (param_4 != 0)) {
      uVar5 = fn_82A2DB28(param_1,param_2,uVar14 + 1,auStack_5c,&iStack_60);
      if ((int)uVar5 < 0) {
LAB_82a2e010:
        if (uVar13 == 0) {
          return uVar5;
        }
        uVar14 = iVar4 - *(int *)(iVar3 + 0x34);
        iVar3 = (((int)uVar14 >> 0xc) + (uint)((int)uVar14 < 0 && (uVar14 & 0xfff) != 0)) * 8 +
                *(int *)(iVar3 + 0x30);
        *(char *)(iVar3 + 4) = *(char *)(iVar3 + 4) + -1;
        return uVar5;
      }
      *(uint *)(iVar2 + 0x14) = *(uint *)(iVar2 + 0x14) & 0x3fffffff | 0x80000000;
    }
    else {
      iVar6 = fn_82A2BAF0(param_1,param_2,uVar14 + 1,auStack_5c,&iStack_60);
      if ((iVar6 == 0) &&
         (uVar5 = fn_82A2D960(param_1,param_2,uVar14 + 1,lVar15,auStack_5c,&iStack_60),
         (int)uVar5 < 0)) goto LAB_82a2e010;
    }
    uVar7 = (ulonglong)auStack_5c[0];
    if ((*(uint *)(iVar2 + 0x14) & 0x80000000) == 0) {
      uVar10 = (~(ulonglong)*(uint *)(iVar2 + 0x14) & 0xffffffff) >> 0x1e & 1;
      *(byte *)(iStack_60 + 7) = (byte)(uVar10 << 5) | *(byte *)(iStack_60 + 7) & 0xdf;
      lVar15 = 0xaa;
      *(uint *)(iVar2 + 0x14) =
           (uint)(uVar10 << 0x1e) | 0x80000000 | *(uint *)(iVar2 + 0x14) & 0x3fffffff;
      if (uVar14 == 0) {
        lVar11 = uVar7 + 0x14;
        do {
          puVar12 = (uint *)lVar11;
          if (*puVar12 >> 0x1e == 1) {
            uVar8 = *puVar12 & 0x3fffffff;
LAB_82a2df04:
            *puVar12 = uVar8;
          }
          else if (*puVar12 >> 0x1e == 3) {
            uVar8 = *puVar12 & 0x3fffffff | 0x80000000;
            goto LAB_82a2df04;
          }
          lVar11 = lVar11 + 0x18;
          lVar15 = lVar15 + -1;
        } while (lVar15 != 0);
      }
      else {
        lVar11 = uVar7 - 4;
        do {
          uVar8 = *(uint *)((int)lVar11 + 0x18);
          lVar11 = lVar11 + 0x18;
          *(uint *)lVar11 =
               (uVar8 >> 0xf & 0xffff) + (uVar8 & 0x7fffffff) & 0x7fff | uVar8 & 0x40000000;
          lVar15 = lVar15 + -1;
        } while (lVar15 != 0);
      }
    }
    bVar1 = *(byte *)(iStack_60 + 7);
    *(byte *)(iStack_60 + 7) = bVar1 | 0x44;
    bVar9 = (*(byte *)(iVar3 + 0xcc) & 1) << 3 | bVar1 & 0xf7 | 0x44;
    *(byte *)(iStack_60 + 7) = bVar9;
    if ((bVar1 & 0x10) == 0) {
      *(byte *)(iStack_60 + 7) = bVar9 | 0x10;
      if (uVar13 != 0) {
        uVar8 = iVar4 - *(int *)(iVar3 + 0x34);
        iVar2 = (((int)uVar8 >> 0xc) + (uint)((int)uVar8 < 0 && (uVar8 & 0xfff) != 0)) * 8 +
                *(int *)(iVar3 + 0x30);
        *(char *)(iVar2 + 4) = *(char *)(iVar2 + 4) + '\x01';
        goto LAB_82a2dfa0;
      }
    }
    else {
LAB_82a2dfa0:
      if (uVar13 != 0) {
        uVar8 = iVar4 - *(int *)(iVar3 + 0x34);
        iVar2 = (((int)uVar8 >> 0xc) + (uint)((int)uVar8 < 0 && (uVar8 & 0xfff) != 0)) * 8 +
                *(int *)(iVar3 + 0x30);
        *(char *)(iVar2 + 4) = *(char *)(iVar2 + 4) + -1;
      }
    }
    if (uVar14 == param_3) {
      *param_5 = auStack_5c[0];
      return 0;
    }
    iVar2 = uVar14 * 4;
    uVar14 = uVar14 - 1;
    trapWord(6,(ulonglong)*(uint *)("XLNI_DET_MEDIA" + iVar2 + 0xc),0);
    lVar15 = (((param_2 & 0xffffffff) / (ulonglong)*(uint *)("XLNI_DET_MEDIA" + iVar2 + 0xc)) % 0xaa
             ) * 0x18 + uVar7;
    uVar13 = uVar7;
  } while( true );
}

