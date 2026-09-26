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
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_8200571C;
extern unsigned int lbl_8200D898;
extern unsigned int lbl_82015B38;
extern unsigned int lbl_82021540;
extern unsigned int lbl_82028800;
extern unsigned int lbl_820885C8;
extern unsigned int lbl_8208DD74;
extern unsigned int lbl_8208DDB0;
extern unsigned int lbl_8214F260;
extern unsigned int lbl_8214F270;
extern unsigned int lbl_8214F280;
extern unsigned int lbl_8214F294;
extern unsigned int lbl_8214F2A8;
extern unsigned int lbl_8214F2B8;
extern unsigned int lbl_8214F2C8;
extern unsigned int lbl_8214F2E4;
extern unsigned int lbl_8214F310;
extern unsigned int lbl_8214F320;
extern unsigned int lbl_8214F330;
extern unsigned int lbl_8214F344;
extern unsigned int lbl_8214F358;
extern unsigned int lbl_8214F368;
extern unsigned int lbl_8214F378;
extern unsigned int lbl_8214F394;
extern unsigned int lbl_8214F3C0;
extern unsigned int lbl_8214F3D0;
extern unsigned int lbl_8214F3E0;
extern unsigned int lbl_8214F3F4;
extern unsigned int lbl_8214F408;
extern unsigned int lbl_8214F418;
extern unsigned int lbl_8214F428;
extern unsigned int lbl_8214F444;
extern unsigned int lbl_8214F470;
extern unsigned int lbl_8214F480;
extern unsigned int lbl_8214F490;
extern unsigned int lbl_8214F4A4;
extern unsigned int lbl_8214F4B8;
extern unsigned int lbl_8214F4C8;
extern unsigned int lbl_8214F4D8;
extern unsigned int lbl_8214F4F4;
extern unsigned int lbl_8214F520;
extern unsigned int lbl_8214F530;
extern unsigned int lbl_8214F540;
extern unsigned int lbl_8214F554;
extern unsigned int lbl_8214F568;
extern unsigned int lbl_8214F578;
extern unsigned int lbl_8214F588;
extern unsigned int lbl_8214F5A4;
extern unsigned int lbl_8214F5D0;
extern unsigned int lbl_8214F5E0;
extern unsigned int lbl_8214F5F0;
extern unsigned int lbl_8214F60C;
extern unsigned int lbl_8214F628;
extern unsigned int lbl_8214F638;
extern unsigned int lbl_8214F648;
extern unsigned int lbl_8214F664;
extern unsigned int lbl_8214F690;
extern unsigned int lbl_8214F6A0;
extern unsigned int lbl_8214F6B0;
extern unsigned int lbl_8214F6C4;
extern unsigned int lbl_8214F6D8;
extern unsigned int lbl_8214F6E8;
extern unsigned int lbl_8214F6F8;
extern unsigned int lbl_8214F714;
extern unsigned int lbl_8214F740;
extern unsigned int lbl_8214F750;
extern unsigned int lbl_8214F760;
extern unsigned int lbl_8214F774;
extern unsigned int lbl_8214F788;
extern unsigned int lbl_8214F798;
extern unsigned int lbl_8214F7A8;
extern unsigned int lbl_8214F7C4;
extern unsigned int lbl_8214F7F0;
extern unsigned int lbl_8214F800;
extern unsigned int lbl_8214F810;
extern unsigned int lbl_8214F824;
extern unsigned int lbl_8214F838;
extern unsigned int lbl_8214F848;
extern unsigned int lbl_8214F858;
extern unsigned int lbl_8214F874;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 fn_82E35B70(int *param_1)

{
  float fVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  undefined *puVar8;
  ulonglong uVar9;
  int iVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  int iVar14;
  
  iVar10 = lbl_82021540;
  iVar14 = lbl_8200571C;
  iVar3 = *param_1;
  if (*(int *)(iVar3 + 0x50) < 16000) {
    return 0;
  }
  param_1[0x1d9f] = lbl_820885C8;
  param_1[0x1da0] = iVar14;
  param_1[0x1da1] = iVar14;
  param_1[0x1da2] = iVar10;
  fVar7 = lbl_82028800;
  fVar6 = lbl_8200D898;
  iVar4 = *(int *)(iVar3 + 0x50);
  if (iVar4 < 0xac44) {
    if (31999 < iVar4) {
      iVar14 = 0x10;
      if (*(int *)(iVar3 + 0xec) != 0x100) {
        iVar14 = 0x20;
      }
      param_1[0x1de7] = iVar14;
      if (*(float *)(iVar3 + 0x30) <= lbl_8208DD74) {
        param_1[0x1da1] = (int)fVar6;
      }
      else {
        param_1[0x1da1] = (int)fVar7;
      }
      goto code_r0x82e35c48;
    }
    if (0x5621 < iVar4) {
      param_1[0x1da0] = iVar14;
      param_1[0x1da1] = (int)fVar6;
      param_1[0x1de7] = 0x20;
      param_1[0x1d9f] = lbl_82015B38;
      goto code_r0x82e35c48;
    }
    iVar14 = 8;
  }
  else {
    iVar14 = 0x20;
  }
  param_1[0x1de7] = iVar14;
code_r0x82e35c48:
  if ((*(int *)(iVar3 + 0x310) == 1) && (lbl_8208DDB0 <= *(float *)(iVar3 + 0x30))) {
    fVar1 = (float)param_1[0x1da1];
    if (*(int *)(iVar3 + 0x50) < 32000) {
      if (fVar6 <= fVar1) {
        fVar1 = fVar6;
      }
    }
    else if (fVar7 <= fVar1) {
      fVar1 = fVar7;
    }
    param_1[0x1da1] = (int)fVar1;
    param_1[0x1da2] = iVar10;
  }
  uVar5 = param_1[0x1de7];
  uVar9 = (longlong)((int)uVar5 >> 2) + (ulonglong)((int)uVar5 < 0 && (uVar5 & 3) != 0);
  iVar10 = (int)uVar9;
  param_1[0x1de8] = iVar10;
  iVar14 = (int)uVar5 / iVar10;
  param_1[0x1de9] = iVar14;
  trapWord(6,uVar9,0);
  trapWord(5,uVar9 & ~((((ulonglong)uVar5 & 0x7fffffff) << 1 | (ulonglong)(uVar5 >> 0x1f)) - 1),
           0xffff);
  if (*(int *)(iVar3 + 0x50) < 0x5623) {
    iVar4 = iVar14 << 4;
  }
  else {
    iVar4 = iVar14 << 3;
  }
  param_1[0x1dea] = iVar4 + iVar14;
  uVar2 = *(ushort *)(iVar3 + 0x6e);
  param_1[0x1da7] = 4;
  iVar4 = 5 << (uVar2 - 0x10 & 0x3f);
  param_1[0x1da5] = 4;
  fVar7 = lbl_82002AE0;
  fVar6 = (float)(longlong)((param_1[0x1dea] - iVar14) * iVar10 * iVar4 * iVar4);
  param_1[0x1deb] = (int)fVar6;
  param_1[0x1dec] = (int)(fVar7 / fVar6);
  if (*(int *)(iVar3 + 0x50) == 0xac44) {
    param_1[0x1da6] = 7;
  }
  else {
    param_1[0x1da6] = 5;
  }
  param_1[0x1da8] = 7;
  iVar3 = *(int *)(iVar3 + 0x50);
  if (iVar3 < 0x2ee00) {
    if (iVar3 < 0x2b110) {
      if (iVar3 < 96000) {
        if (iVar3 < 0x15888) {
          if (iVar3 < 48000) {
            if (iVar3 < 0xac44) {
              if (iVar3 < 32000) {
                if (iVar3 < 0x5622) {
                  param_1[0x1d94] = (int)&lbl_8214F874;
                  puVar13 = &lbl_8214F810;
                  param_1[0x1d8d] = (int)&lbl_8214F7F0;
                  puVar12 = &lbl_8214F824;
                  param_1[0x1d8e] = (int)&lbl_8214F800;
                  puVar11 = &lbl_8214F838;
                  puVar8 = &lbl_8214F848;
                  param_1[0x1d93] = (int)&lbl_8214F858;
                }
                else {
                  param_1[0x1d8d] = (int)&lbl_8214F740;
                  param_1[0x1d8e] = (int)&lbl_8214F750;
                  puVar13 = &lbl_8214F760;
                  param_1[0x1d93] = (int)&lbl_8214F7A8;
                  puVar12 = &lbl_8214F774;
                  param_1[0x1d94] = (int)&lbl_8214F7C4;
                  puVar11 = &lbl_8214F788;
                  puVar8 = &lbl_8214F798;
                }
              }
              else {
                param_1[0x1d8d] = (int)&lbl_8214F690;
                param_1[0x1d8e] = (int)&lbl_8214F6A0;
                puVar13 = &lbl_8214F6B0;
                param_1[0x1d93] = (int)&lbl_8214F6F8;
                puVar12 = &lbl_8214F6C4;
                param_1[0x1d94] = (int)&lbl_8214F714;
                puVar11 = &lbl_8214F6D8;
                puVar8 = &lbl_8214F6E8;
              }
            }
            else {
              param_1[0x1d8d] = (int)&lbl_8214F5D0;
              param_1[0x1d8e] = (int)&lbl_8214F5E0;
              puVar13 = &lbl_8214F5F0;
              param_1[0x1d93] = (int)&lbl_8214F648;
              puVar12 = &lbl_8214F60C;
              param_1[0x1d94] = (int)&lbl_8214F664;
              puVar11 = &lbl_8214F628;
              puVar8 = &lbl_8214F638;
            }
          }
          else {
            param_1[0x1d8d] = (int)&lbl_8214F520;
            param_1[0x1d8e] = (int)&lbl_8214F530;
            puVar13 = &lbl_8214F540;
            param_1[0x1d93] = (int)&lbl_8214F588;
            puVar12 = &lbl_8214F554;
            param_1[0x1d94] = (int)&lbl_8214F5A4;
            puVar11 = &lbl_8214F568;
            puVar8 = &lbl_8214F578;
          }
        }
        else {
          param_1[0x1d8d] = (int)&lbl_8214F470;
          param_1[0x1d8e] = (int)&lbl_8214F480;
          puVar13 = &lbl_8214F490;
          param_1[0x1d93] = (int)&lbl_8214F4D8;
          puVar12 = &lbl_8214F4A4;
          param_1[0x1d94] = (int)&lbl_8214F4F4;
          puVar11 = &lbl_8214F4B8;
          puVar8 = &lbl_8214F4C8;
        }
      }
      else {
        param_1[0x1d8d] = (int)&lbl_8214F3C0;
        param_1[0x1d8e] = (int)&lbl_8214F3D0;
        puVar13 = &lbl_8214F3E0;
        param_1[0x1d93] = (int)&lbl_8214F428;
        puVar12 = &lbl_8214F3F4;
        param_1[0x1d94] = (int)&lbl_8214F444;
        puVar11 = &lbl_8214F408;
        puVar8 = &lbl_8214F418;
      }
    }
    else {
      param_1[0x1d8d] = (int)&lbl_8214F310;
      param_1[0x1d8e] = (int)&lbl_8214F320;
      puVar13 = &lbl_8214F330;
      param_1[0x1d93] = (int)&lbl_8214F378;
      puVar12 = &lbl_8214F344;
      param_1[0x1d94] = (int)&lbl_8214F394;
      puVar11 = &lbl_8214F358;
      puVar8 = &lbl_8214F368;
    }
  }
  else {
    param_1[0x1d8d] = (int)&lbl_8214F260;
    param_1[0x1d8e] = (int)&lbl_8214F270;
    puVar13 = &lbl_8214F280;
    param_1[0x1d93] = (int)&lbl_8214F2C8;
    puVar12 = &lbl_8214F294;
    param_1[0x1d94] = (int)&lbl_8214F2E4;
    puVar11 = &lbl_8214F2A8;
    puVar8 = &lbl_8214F2B8;
  }
  param_1[0x1d8f] = (int)puVar13;
  param_1[0x1d90] = (int)puVar12;
  param_1[0x1d91] = (int)puVar11;
  param_1[0x1d92] = (int)puVar8;
  param_1[0x1d8c] = 1;
  if (iVar10 < 4) {
    param_1[0x1d8c] = 1;
  }
  return 0;
}

