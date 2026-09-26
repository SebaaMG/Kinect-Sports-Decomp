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
extern int fn_82ACA5E0();
extern int fn_82ACB0F8();
extern int fn_82AE9340();
extern int fn_82AE9B78();
extern int fn_82B80C68();
extern unsigned int lbl_82005710;
extern unsigned int lbl_82005758;


ulonglong fn_82AEA6F8(int param_1)

{
  uint uVar1;
  ulonglong uVar2;
  char cVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  uint *puVar14;
  bool bVar15;
  double extraout_f1;
  double extraout_f1_00;
  double dVar16;
  char acStack_70 [112];
  
  uVar12 = *(uint *)(param_1 + 8);
  uVar9 = (ulonglong)(uVar12 >> 0xe) & 7;
  uVar2 = fn_82ACA5E0();
  if (((uVar2 & 0xff) != 0) && (uVar9 != ((ulonglong)(**(uint **)(param_1 + 0x2c) >> 0x19) & 7))) {
    return 0xffffffffffffffff;
  }
  uVar12 = uVar12 >> 7 & 0x7f;
  uVar8 = 0xffffffffffffffff;
  bVar15 = false;
  uVar13 = uVar9;
  if (uVar12 < 9) {
    if (uVar12 < 5) {
      if (uVar12 == 0) goto LAB_82aeaaf0;
      if (uVar12 < 3) {
        puVar5 = *(uint **)(param_1 + 0x30);
        puVar14 = *(uint **)(param_1 + 0x2c);
        acStack_70[0] = '\x01';
        uVar11 = puVar5[3];
        uVar6 = puVar14[3];
        uVar7 = *(uint *)(uVar11 + 8) >> 7 & 0x7f;
        if ((uVar7 == 0x7d) || (bVar15 = false, uVar7 == 0x7c)) {
          bVar15 = true;
        }
        if (bVar15) {
          uVar7 = *(uint *)(uVar6 + 8) >> 7 & 0x7f;
          if ((uVar7 == 0x7d) || (bVar15 = false, uVar7 == 0x7c)) {
            bVar15 = true;
          }
          if (!bVar15) {
            if (((((*puVar14 ^ *puVar5) & 0x1e) == 0) ||
                ((uVar12 == 1 && (((*puVar14 ^ *puVar5) & 0x1a) == 0)))) &&
               (cVar3 = fn_82AE9B78(param_1,acStack_70), cVar3 != '\0')) {
              if ((acStack_70[0] != '\0') && ((*(uint *)(uVar6 + 8) & 0x1c000) == 0x10000)) {
                uVar13 = uVar9 + 1;
              }
              goto LAB_82aeaa04;
            }
          }
        }
        if (uVar6 == uVar11) {
          if ((((*puVar14 ^ *puVar5) & 0x1f) == 0) ||
             (((*(uint *)(param_1 + 8) & 0x3f80) == 0x80 && (((*puVar14 ^ *puVar5) & 0x1b) == 0))))
          goto LAB_82aeaa04;
        }
        cVar3 = fn_82AE9340(param_1);
        uVar13 = uVar8;
        if (cVar3 == '\0') {
          uVar13 = uVar9 << 1;
        }
      }
      else {
        if (4 < uVar12) goto LAB_82aeaaf0;
        if (((*(uint **)(param_1 + 0x2c))[3] != (*(uint **)(param_1 + 0x30))[3]) ||
           (((**(uint **)(param_1 + 0x30) ^ **(uint **)(param_1 + 0x2c)) & 0x1f) != 0)) {
          uVar13 = uVar9 * 3;
        }
      }
LAB_82aeaa04:
      bVar15 = 1 < uVar9;
      uVar8 = uVar13;
    }
    else {
LAB_82aea900:
      puVar5 = *(uint **)(param_1 + 0x30);
      if ((*(uint *)(puVar5[3] + 8) & 0x3f80) == 16000) {
        uVar10 = 0;
        uVar12 = *puVar5 >> 0x19;
        uVar13 = (ulonglong)uVar12 & 7;
        if ((uVar12 & 7) != 0) {
          uVar11 = 0;
          dVar16 = lbl_82005710;
          do {
            uVar2 = fn_82B80C68((double)*(float *)((((*puVar5 >> 5 & 0xff) >> (uVar11 & 0x3f)
                                                          & 3) + 0xb) * 4 + puVar5[3]),uVar2,
                                      *puVar5 & 0x1f);
            if (extraout_f1 != dVar16) break;
            uVar10 = uVar10 + 1;
            uVar11 = uVar11 + 2;
          } while ((uVar10 & 0xffffffff) < uVar13);
        }
        if ((uVar10 & 0xffffffff) == uVar13) {
LAB_82aea9ec:
          uVar8 = uVar13;
          if ((int)uVar13 != -1) goto LAB_82aeaa04;
        }
        else if ((*(uint *)(param_1 + 8) & 0x3f80) == 0xc80) {
          uVar10 = 0;
          if ((uVar12 & 7) != 0) {
            uVar12 = 0;
            dVar16 = lbl_82005758;
            do {
              uVar2 = fn_82B80C68((double)*(float *)((((*puVar5 >> 5 & 0xff) >>
                                                             (uVar12 & 0x3f) & 3) + 0xb) * 4 +
                                                          puVar5[3]),uVar2,*puVar5 & 0x1f);
              if (extraout_f1_00 != dVar16) break;
              uVar10 = uVar10 + 1;
              uVar12 = uVar12 + 2;
            } while ((uVar10 & 0xffffffff) < uVar13);
          }
          if ((uVar10 & 0xffffffff) == uVar13) goto LAB_82aea9ec;
        }
      }
    }
    if (bVar15) {
      puVar14 = *(uint **)(param_1 + 4);
      for (puVar5 = puVar14; puVar5 != (uint *)0x0; puVar5 = (uint *)puVar5[2]) {
        uVar12 = puVar5[4];
        if ((uVar12 != 0) && ((*(uint *)(uVar12 + 8) & 0x3f80) == 0x3700)) goto LAB_82aeaa50;
      }
    }
  }
  else {
    if (8 < uVar12) {
      if (uVar12 < 0xc) goto LAB_82aeaa04;
      if ((0x18 < uVar12) && (uVar12 < 0x1d)) goto LAB_82aea900;
    }
LAB_82aeaaf0:
    uVar8 = 0xffffffffffffffff;
  }
  return uVar8;
LAB_82aeaa50:
  if (puVar14 == (uint *)0x0) {
    return uVar8;
  }
  uVar11 = puVar14[4];
  if (((uVar11 != 0) && (uVar11 != uVar12)) && (cVar3 = fn_82ACB0F8(uVar11,uVar12), cVar3 != '\0'))
  {
    uVar6 = 0;
    uVar7 = 0;
    uVar11 = *puVar14 >> 0x19 & 7;
    if (uVar11 == 0) {
LAB_82aeaad4:
      bVar15 = false;
    }
    else {
      uVar4 = 0;
      do {
        uVar7 = uVar7 + 1;
        uVar1 = uVar4 & 0x3f;
        uVar4 = uVar4 + 2;
        uVar6 = 1 << ((*puVar14 >> 5 & 0xff) >> uVar1 & 3) | uVar6;
      } while (uVar7 < uVar11);
      if ((uVar6 == 0) || (bVar15 = true, uVar6 != (uVar6 & ~(uVar6 - 1)))) goto LAB_82aeaad4;
    }
    if (!bVar15) goto LAB_82aeaaf0;
  }
  puVar14 = (uint *)puVar14[2];
  goto LAB_82aeaa50;
}

