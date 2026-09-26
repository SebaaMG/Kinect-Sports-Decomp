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
extern int fn_82F68CC0();
extern int fn_82FA5060();
extern int fn_82FA5190();
extern int fn_83022408();
extern int fn_830224E8();
extern int fn_83024470();
extern int fn_83024C50();
extern int fn_83024E30();
extern int fn_83037438();
extern unsigned int lbl_8217D218;
extern unsigned int lbl_831BC770;


undefined8 fn_83036C30(uint *param_1,ulonglong param_2,int param_3,undefined8 param_4)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  char cVar7;
  undefined8 uVar5;
  undefined4 *puVar6;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  int iVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  
  uVar13 = (ulonglong)*(byte *)(param_1 + 3);
  param_2 = param_2 & 0xff;
  bVar1 = *(byte *)((int)param_1 + 0xd);
  uVar14 = (ulonglong)bVar1;
  uVar12 = 0;
  if (uVar14 != 0) {
    iVar11 = 0;
    uVar8 = *param_1;
    do {
      if (*(int *)(uVar8 + 8) == param_3) break;
      uVar12 = uVar12 + 1;
      iVar11 = iVar11 + 0x10;
      uVar8 = iVar11 + *param_1;
    } while (uVar12 < *(byte *)((int)param_1 + 0xd));
  }
  bVar4 = bVar1 == uVar12;
  if ((uVar13 <= param_2) || (bVar4)) {
    uVar10 = param_2 + 1;
    if ((uint)(param_2 + 1) < (uint)*(byte *)(param_1 + 3)) {
      uVar10 = uVar13;
    }
    *(char *)(param_1 + 3) = (char)uVar10;
    if (bVar4) {
      *(byte *)((int)param_1 + 0xd) = bVar1 + 1;
    }
    cVar7 = fn_83037438(param_1,(longlong)(int)(uint)*(byte *)((int)param_1 + 0xd) *
                                      (longlong)(int)((uint)uVar10 & 0xff));
    if (cVar7 != '\0') {
      if (bVar4) {
        lVar16 = uVar13 - 1;
        if (-1 < lVar16) {
          lVar15 = ((longlong)(int)lVar16 * (longlong)(int)(uint)bVar1 & 0xfffffffU) << 4;
          do {
            fn_82F68CC0(((longlong)(int)(uint)*(byte *)((int)param_1 + 0xd) * (longlong)(int)lVar16
                         & 0xfffffffU) * 0x10 + (ulonglong)*param_1,lVar15 + (ulonglong)*param_1,
                         uVar14 << 4);
            lVar16 = lVar16 + -1;
            lVar15 = (-uVar14 & 0xfffffff) * 0x10 + lVar15;
          } while (-1 < lVar16);
        }
        iVar11 = 0;
        if (*(char *)(param_1 + 3) != '\0') {
          iVar9 = 0x10;
          do {
            iVar11 = iVar11 + 1;
            iVar2 = (uint)*(byte *)((int)param_1 + 0xd) * iVar9;
            iVar9 = iVar9 + 0x10;
            *(int *)(iVar2 + *param_1 + -8) = param_3;
          } while (iVar11 < (int)(uint)*(byte *)(param_1 + 3));
        }
      }
      if (uVar13 <= param_2) {
        uVar8 = 0;
        if (*(byte *)((int)param_1 + 0xd) != 0) {
          iVar9 = 0;
          iVar11 = (*(byte *)(param_1 + 3) - 1) * (uint)*(byte *)((int)param_1 + 0xd) * 0x10;
          do {
            uVar8 = uVar8 + 1;
            iVar2 = iVar9 + *param_1;
            iVar3 = iVar11 + *param_1;
            iVar9 = iVar9 + 0x10;
            iVar11 = iVar11 + 0x10;
            *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(iVar2 + 8);
          } while (uVar8 < *(byte *)((int)param_1 + 0xd));
        }
      }
      goto LAB_83036e04;
    }
LAB_83036d14:
    uVar5 = 2;
  }
  else {
LAB_83036e04:
    iVar11 = ((uint)*(byte *)((int)param_1 + 0xd) * (int)param_2 + uVar12) * 0x10 + *param_1;
    if (*(int *)(iVar11 + 4) == 0) {
      puVar6 = (undefined4 *)fn_82FA5060(lbl_831BC770,0x180);
      if (puVar6 == (undefined4 *)0x0) goto LAB_83036d14;
      *puVar6 = &lbl_8217D218;
      puVar6[0x1c] = 0;
      fn_83022408(puVar6 + 0x20);
      puVar6[0x40] = 0;
      *puVar6 = &lbl_8217D218;
      *(int *)(iVar11 + 0xc) = (int)param_4;
      uVar5 = fn_83024C50(puVar6,param_4,8,0);
      if ((int)uVar5 != 1) {
        fn_83024470();
        fn_830224E8(puVar6 + 0x20);
        fn_82FA5190(lbl_831BC770,puVar6);
        return uVar5;
      }
      fn_83024E30(puVar6);
      *(undefined4 **)(iVar11 + 4) = puVar6;
    }
    uVar5 = 1;
  }
  return uVar5;
}

