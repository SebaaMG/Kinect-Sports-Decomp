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
extern int fn_8265C940();
extern int fn_82F66A80();
extern int fn_82F66AC0();
extern unsigned int lbl_28280086;


/* WARNING: Type propagation algorithm not settling */

ulonglong fn_8291EFD8(undefined4 *param_1,char *param_2,longlong param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  bool bVar3;
  int iVar4;
  uint *puVar5;
  longlong lVar6;
  byte *pbVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  uint *puStack_70;
  
  if ((1 < (uint)param_3) && (*param_2 == 'P')) {
    if (param_2[1] == '3') {
      bVar3 = true;
    }
    else {
      if (param_2[1] != '6') {
        return 0xffffffff80004005;
      }
      bVar3 = false;
    }
    pbVar7 = (byte *)(param_2 + 2);
    uVar8 = 0;
    uVar11 = 0;
    uVar9 = 0xff;
    uVar13 = param_3 - 2;
    puVar5 = puStack_70;
    uVar14 = uVar13;
    while (uVar14 != 0) {
      if ((!bVar3) && (uVar8 == 3)) {
        if (0xff < (uVar9 & 0xffffffff)) {
          return 0xffffffff80004005;
        }
        if ((1 < (uVar13 & 0xffffffff)) && (*pbVar7 == 0xd)) {
          pbVar7 = pbVar7 + 1;
          uVar13 = uVar13 - 1;
        }
        lVar6 = uVar13 - 1;
        if (lVar6 == 0) goto LAB_8291f2a0;
        pbVar7 = pbVar7 + -2;
        goto LAB_8291f244;
      }
      iVar4 = fn_82F66AC0(*pbVar7);
      if (iVar4 == 0) {
        if (*pbVar7 == 0x23) {
          uVar14 = uVar13 & 0xffffffff;
          for (; (uVar14 != 0 && (*pbVar7 != 10)); pbVar7 = pbVar7 + 1) {
            uVar13 = uVar13 - 1;
            uVar14 = uVar13;
          }
          goto LAB_8291f098;
        }
        uVar14 = 0;
        uVar10 = uVar13 & 0xffffffff;
        while ((uVar10 != 0 && (iVar4 = fn_82F66AC0(*pbVar7), iVar4 == 0))) {
          iVar4 = fn_82F66A80(*pbVar7);
          if (iVar4 == 0) {
            return 0xffffffff80004005;
          }
          uVar13 = uVar13 - 1;
          uVar14 = (uVar14 * 10 + (ulonglong)*pbVar7) - 0x30;
          pbVar7 = pbVar7 + 1;
          uVar10 = uVar13;
        }
        uVar10 = uVar9;
        uVar12 = uVar14;
        if (uVar8 == 0) {
LAB_8291f1ec:
          uVar9 = uVar10;
          uVar11 = uVar12;
          if ((uVar14 & 0xffffffff) == 0) {
            return 0xffffffff80004005;
          }
        }
        else if (uVar8 == 1) {
          if ((uVar14 & 0xffffffff) == 0) {
            return 0xffffffff80004005;
          }
          iVar4 = (int)uVar14 * (int)uVar11;
          puVar5 = (uint *)fn_8265C940(iVar4 * 4,0x24810000);
          param_1[1] = puVar5;
          if (puVar5 == (uint *)0x0) {
            return 0xffffffff8007000e;
          }
          param_1[3] = (int)uVar11;
          param_1[4] = (int)uVar14;
          param_1[0xe] = 1;
          param_1[0xc] = (int)((uVar11 & 0xffffffff) << 2);
          *param_1 = &lbl_28280086;
          param_1[0xd] = 0;
          puStack_70 = puVar5 + iVar4;
          param_1[5] = 1;
        }
        else {
          uVar10 = uVar14;
          uVar12 = uVar11;
          if (uVar8 < 3) goto LAB_8291f1ec;
          if (uVar8 == 3) {
            if (puStack_70 <= puVar5) {
              return 0xffffffff80004005;
            }
            trapWord(6,uVar9,0);
            *puVar5 = (uint)((uVar14 * 0xff & 0xffffffff) / (uVar9 & 0xffffffff) << 0x10) & 0xff0000
                      | 0xff000000;
          }
          else if (uVar8 < 5) {
            trapWord(6,uVar9,0);
            *puVar5 = (uint)((uVar14 * 0xff & 0xffffffff) / (uVar9 & 0xffffffff) << 8) | *puVar5;
          }
          else if (uVar8 == 5) {
            trapWord(6,uVar9,0);
            *puVar5 = (uint)((uVar14 * 0xff & 0xffffffff) / (uVar9 & 0xffffffff)) | *puVar5;
            puVar5 = puVar5 + 1;
            if (puVar5 == puStack_70) {
              return 0;
            }
            uVar8 = 2;
          }
        }
        uVar8 = uVar8 + 1;
      }
      else {
LAB_8291f098:
        pbVar7 = pbVar7 + 1;
        uVar13 = uVar13 - 1;
      }
      uVar14 = uVar13 & 0xffffffff;
    }
  }
  return 0xffffffff80004005;
  while( true ) {
    pbVar1 = pbVar7 + 5;
    pbVar2 = pbVar7 + 4;
    lVar6 = lVar6 + -3;
    pbVar7 = pbVar7 + 3;
    trapWord(6,uVar9,0);
    trapWord(6,uVar9,0);
    trapWord(6,uVar9,0);
    *puVar5 = (uint)(((((ulonglong)*pbVar7 * 0xff) / (uVar9 & 0xffffffff) & 0xff) << 8 | 0xffff0000
                     | ((ulonglong)*pbVar2 * 0xff) / (uVar9 & 0xffffffff)) << 8) |
              (uint)(((ulonglong)*pbVar1 * 0xff) / (uVar9 & 0xffffffff));
    puVar5 = puVar5 + 1;
    if (lVar6 == 0) break;
LAB_8291f244:
    if (puStack_70 <= puVar5) break;
  }
LAB_8291f2a0:
  return -(ulonglong)(puStack_70 != puVar5) & 0xffffffff80004005;
}

