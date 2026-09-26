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
extern int fn_82ABDA10();
extern int fn_82ABDAA0();
extern int fn_82AC65F0();
extern int fn_82AD12C8();
extern int fn_82AE9340();


undefined8 fn_82AE9600(undefined8 param_1,longlong param_2,longlong param_3)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  int iVar8;
  int iVar9;
  char cVar10;
  char cVar11;
  ulonglong uVar7;
  ulonglong uVar12;
  longlong lVar13;
  uint *puVar15;
  uint uVar17;
  longlong lVar16;
  uint uVar18;
  int *piVar14;
  
  iVar3 = (int)param_2;
  iVar4 = (int)param_3;
  uVar18 = *(uint *)(iVar3 + 8) >> 5 & 1;
  if (uVar18 != (*(uint *)(iVar4 + 8) >> 5 & 1)) {
    return 0;
  }
  if (uVar18 != 0) {
    for (puVar1 = *(uint **)(iVar3 + 4); (puVar1 != (uint *)0x0 && ((*puVar1 & 0xe000000) == 0));
        puVar1 = (uint *)puVar1[2]) {
    }
    for (puVar15 = *(uint **)(iVar4 + 4); (puVar15 != (uint *)0x0 && ((*puVar15 & 0xe000000) == 0));
        puVar15 = (uint *)puVar15[2]) {
    }
    if (((*puVar15 >> 0xd & 0xff0 ^ *puVar1 >> 0xd & 0xfff) & 0xfffffff0) != 0) {
      return 0;
    }
  }
  iVar8 = 0;
  if ((*(uint *)(iVar3 + 8) >> 0x11 & 1) != 0) {
    iVar8 = fn_82AC65F0(param_2);
    iVar8 = *(int *)(iVar8 + 0xc);
  }
  iVar9 = 0;
  if ((*(uint *)(iVar4 + 8) >> 0x11 & 1) != 0) {
    iVar9 = fn_82AC65F0(param_3);
    iVar9 = *(int *)(iVar9 + 0xc);
  }
  if (iVar8 != iVar9) {
    return 0;
  }
  if ((*(uint *)(*(int *)(iVar3 + 0x1c) + 0x4c) >> 0x16 & 1) == 0) goto LAB_82ae9738;
  if (iVar8 == 0) {
    cVar10 = fn_82ABDAA0(param_2);
    bVar6 = true;
    if (cVar10 == '\0') goto LAB_82ae9700;
  }
  else {
LAB_82ae9700:
    bVar6 = false;
  }
  if (iVar9 == 0) {
    cVar10 = fn_82ABDAA0(param_3);
    bVar5 = true;
    if (cVar10 == '\0') goto LAB_82ae9724;
  }
  else {
LAB_82ae9724:
    bVar5 = false;
  }
  if (bVar6) {
    return 0;
  }
  if (bVar5) {
    return 0;
  }
LAB_82ae9738:
  cVar10 = fn_82ABDA10(param_2);
  cVar11 = fn_82ABDA10(param_3);
  if ((cVar10 != '\0') || (cVar11 != '\0')) {
    if ((cVar10 != '\0') && (cVar11 != '\0')) {
      return 0;
    }
    uVar18 = *(uint *)(iVar3 + 8) >> 7 & 0x7f;
    if (((uVar18 < 0x19) || (0x1c < uVar18)) && ((uVar18 < 0x43 || (0x47 < uVar18)))) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) {
      return 0;
    }
    uVar18 = *(uint *)(iVar4 + 8) >> 7 & 0x7f;
    if (((uVar18 < 0x19) || (0x1c < uVar18)) && ((uVar18 < 0x43 || (0x47 < uVar18)))) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) {
      return 0;
    }
  }
  uVar18 = *(uint *)(iVar3 + 8);
  if ((uVar18 & 0x40) == 0) {
    bVar6 = false;
  }
  else {
    uVar17 = uVar18 >> 7 & 0x7f;
    if (((uVar17 == 0x1e) || (uVar17 == 0x37)) || (bVar6 = false, uVar17 == 0x38)) {
      bVar6 = true;
    }
  }
  if ((*(uint *)(iVar4 + 8) & 0x40) == 0) {
    bVar5 = false;
  }
  else {
    uVar17 = *(uint *)(iVar4 + 8) >> 7 & 0x7f;
    if (((uVar17 == 0x1e) || (uVar17 == 0x37)) || (bVar5 = false, uVar17 == 0x38)) {
      bVar5 = true;
    }
  }
  if ((!bVar6) || (!bVar5)) {
    uVar17 = uVar18 >> 7 & 0x7f;
    if ((uVar17 == 0) || (bVar6 = true, 0x1f < uVar17)) {
      bVar6 = false;
    }
    lVar16 = param_3;
    lVar13 = param_2;
    if (bVar6) {
      lVar16 = param_2;
      lVar13 = param_3;
    }
    piVar14 = (int *)lVar13;
    uVar12 = (ulonglong)(*(uint *)((int)lVar16 + 8) >> 0x13) & 7;
    if ((uVar12 != 3) || ((piVar14[2] & 0x380000U) < 0x80001)) {
      cVar10 = fn_82AE9340(lVar16);
      if (cVar10 != '\0') {
        for (puVar1 = (uint *)piVar14[1]; puVar1 != (uint *)0x0; puVar1 = (uint *)puVar1[2]) {
          if (puVar1[4] != 0) {
            uVar17 = *puVar1;
            if (((uVar17 & 0x40000000) == 0) || (bVar6 = true, (uVar17 & 0xe000000) != 0)) {
              bVar6 = false;
            }
            if ((bVar6) && ((uVar17 & 0x1ffe000) == 0xc000)) {
              return 0;
            }
          }
        }
        for (puVar1 = (uint *)*piVar14; puVar1 != (uint *)0x0; puVar1 = (uint *)puVar1[1]) {
          uVar17 = *puVar1;
          if (((uVar17 & 0x40000000) == 0) || (bVar6 = true, (uVar17 & 0xe000000) != 0)) {
            bVar6 = false;
          }
          if ((bVar6) && ((uVar17 & 0x1ffe000) == 0xc000)) {
            return 0;
          }
        }
      }
      if ((piVar14[2] & 0x380000U) != 0) {
        if ((uVar12 & 0xffffffff) == 3) {
          return 0;
        }
        uVar17 = *(uint *)(((uint *)piVar14[0xb])[3] + 8) >> 7 & 0x7f;
        if ((uVar17 == 0x7d) || (bVar6 = false, uVar17 == 0x7c)) {
          bVar6 = true;
        }
        if (bVar6) {
          puVar1 = *(uint **)((int)lVar16 + 0x2c);
          if ((uVar12 & 0xffffffff) < 2) {
            puVar15 = (uint *)0x0;
          }
          else {
            puVar15 = *(uint **)((int)lVar16 + 0x30);
          }
          if (puVar15 == (uint *)0x0) {
            uVar17 = 0;
          }
          else {
            uVar17 = puVar15[3];
          }
          uVar2 = *(uint *)(puVar1[3] + 8) >> 7 & 0x7f;
          if ((uVar2 == 0x7d) || (bVar6 = false, uVar2 == 0x7c)) {
            bVar6 = true;
          }
          if (uVar17 == 0) {
            bVar5 = false;
          }
          else {
            uVar17 = *(uint *)(uVar17 + 8) >> 7 & 0x7f;
            if ((uVar17 == 0x7d) || (bVar5 = false, uVar17 == 0x7c)) {
              bVar5 = true;
            }
          }
          if ((bVar6) || (bVar5)) {
            if (((bVar6) && ((*puVar1 >> 1 & 1) != 0)) || ((bVar5 && ((*puVar15 >> 1 & 1) != 0)))) {
              uVar17 = 1;
            }
            else {
              uVar17 = 0;
            }
            uVar2 = *(uint *)piVar14[0xb];
            if (uVar17 != (uVar2 >> 1 & 1)) {
              return 0;
            }
            if ((bVar6) && (((*puVar1 ^ uVar2) & 0x18) != 0)) {
              return 0;
            }
            if ((bVar5) && (((*puVar15 ^ uVar2) & 0x18) != 0)) {
              return 0;
            }
          }
        }
      }
      uVar17 = 0;
      lVar16 = param_2 + 0x2c;
      while( true ) {
        if ((uVar18 >> 0x13 & 7) <= uVar17) {
          return 1;
        }
        if ((*(uint *)*(undefined4 *)lVar16 & 8) != 0) break;
        uVar17 = uVar17 + 1;
        lVar16 = lVar16 + 4;
      }
      uVar12 = fn_82AD12C8(param_2);
      if (uVar12 == 0) {
        return 1;
      }
      uVar18 = 0;
      lVar16 = param_3 + 0x2c;
      while( true ) {
        if ((*(uint *)(iVar4 + 8) >> 0x13 & 7) <= uVar18) {
          return 1;
        }
        if ((*(uint *)*(undefined4 *)lVar16 & 8) != 0) break;
        uVar18 = uVar18 + 1;
        lVar16 = lVar16 + 4;
      }
      uVar7 = fn_82AD12C8(param_3);
      if ((uVar7 & 0xffffffff) == 0) {
        return 1;
      }
      if ((uVar7 & 0xffffffff) == (uVar12 & 0xffffffff)) {
        return 1;
      }
      return 0;
    }
  }
  return 0;
}

