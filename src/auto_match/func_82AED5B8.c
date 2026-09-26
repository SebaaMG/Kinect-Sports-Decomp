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
extern int fn_82AA66A8();
extern int fn_82AD1270();
extern int fn_82AD17B0();
extern int fn_82AD18C0();
extern int fn_82AD1918();
extern int fn_82AD1B28();
extern int fn_82AE93B0();
extern int fn_82AE9B78();
extern int fn_82AEAB00();
extern int fn_82AEB480();
extern int fn_82AEB678();
extern int fn_82AEB750();
extern int fn_82AEB828();
extern int fn_82AEC860();
extern int fn_82AECA70();
extern int fn_82AECC50();
extern int fn_82B0FC78();
extern int fn_82B80C68();
extern int fn_82B84350();
extern unsigned int lbl_82005758;


void fn_82AED5B8(int param_1,int param_2,uint *param_3)

{
  uint *puVar1;
  undefined4 uVar2;
  uint *puVar3;
  uint uVar4;
  ulonglong uVar5;
  bool bVar6;
  char cVar10;
  uint *puVar8;
  undefined8 uVar7;
  int iVar9;
  undefined8 uVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong lVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  uint uVar18;
  uint uVar19;
  double extraout_f1;
  double dVar20;
  char acStack_a0 [160];
  
  uVar12 = *(uint *)(param_2 + 8) >> 7 & 0x7f;
  switch(uVar12) {
  case 1:
  case 2:
    puVar3 = *(uint **)(param_2 + 0x30);
    puVar1 = *(uint **)(param_2 + 0x2c);
    uVar2 = *(undefined4 *)(param_2 + 0x1c);
    acStack_a0[0] = '\x01';
    uVar19 = puVar3[3];
    uVar18 = puVar1[3];
    uVar4 = *(uint *)(uVar19 + 8) >> 7 & 0x7f;
    if ((uVar4 == 0x7d) || (bVar6 = false, uVar4 == 0x7c)) {
      bVar6 = true;
    }
    if (bVar6) {
      uVar4 = *(uint *)(uVar18 + 8) >> 7 & 0x7f;
      if ((uVar4 == 0x7d) || (bVar6 = false, uVar4 == 0x7c)) {
        bVar6 = true;
      }
      if (!bVar6) {
        if (((((*puVar1 ^ *puVar3) & 0x1e) == 0) ||
            ((uVar12 == 1 && (((*puVar1 ^ *puVar3) & 0x1a) == 0)))) &&
           (cVar10 = fn_82AE9B78(param_2,acStack_a0), cVar10 != '\0')) {
          uVar12 = *(uint *)(param_2 + 8);
          if ((*(uint *)(param_1 + 0x2c) >> 7 & 1) == 0) {
            uVar17 = (ulonglong)(uVar12 >> 1) & 0xf;
          }
          else {
            uVar17 = (ulonglong)(uint)(1 << (uVar12 >> 0xe & 7)) - 1;
          }
          uVar14 = 0;
          if (((uVar17 & 0xffffffff) == 0) || (bVar6 = true, uVar17 != (uVar17 & ~(uVar17 - 1)))) {
            bVar6 = false;
          }
          if ((!bVar6) && ((uVar12 >> 5 & 1) == 0)) {
            uVar14 = fn_82B84350(param_1,uVar2,0,
                                       ((0x8da691691448U >> (uVar17 & 0x7f)) >> (uVar17 & 0x7f)) >>
                                       (uVar17 & 0x7f) & 7);
          }
          lVar15 = 0;
          cVar10 = acStack_a0[0];
          while ((uVar17 & 0xffffffff) != 0) {
            uVar13 = uVar17 & ~(uVar17 - 1);
            uVar17 = uVar17 - uVar13;
            uVar16 = 0x1f - LZCOUNT((int)uVar13);
            uVar4 = (uint)((uVar16 & 0xffffffff) << 1);
            uVar11 = fn_82AD1918(param_1,uVar19,(*puVar3 >> 5 & 0xff) >> (uVar4 & 0x3e) & 3,
                                       *puVar3 & 0x1f);
            uVar12 = *puVar1;
            uVar5 = (ulonglong)((uVar12 >> 5 & 0xff) >> (uVar4 & 0x3e));
            uVar13 = uVar5 & 3;
            if ((cVar10 == '\0') || ((*(uint *)(uVar18 + 8) & 0x1c000) != 0x10000)) {
              puVar8 = (uint *)fn_82AD18C0(param_1,uVar18,uVar13);
              *puVar8 = *puVar8 & 0xffffffe0 | *puVar1 & 0x1f;
            }
            else {
              puVar8 = (uint *)fn_82AD17B0(param_1,uVar18);
              *puVar8 = *puVar8 & 0xf1ffffff | 0x4000000;
              fn_82AD1270(puVar8,uVar12 & 1);
              *puVar8 = (uint)(((uVar5 & 3) << 2 | 0xe0 | uVar13) << 5) | *puVar8 & 0xfffffc1f;
              uVar7 = fn_82AEB480(param_1,uVar2,param_3,puVar8);
              puVar8 = (uint *)fn_82AD1918(param_1,uVar7,0,*puVar1 & 0x1e);
              cVar10 = '\0';
            }
            if ((*(uint *)(param_2 + 8) & 0x3f80) == 0x80) {
              if (((*puVar3 ^ *puVar1) & 0x1e) == 0) {
                uVar11 = fn_82AEB750(param_1,uVar2,param_3,uVar11,puVar8);
              }
              else {
                if ((*puVar3 >> 2 & 1) == 0) {
                  *puVar8 = *puVar8 & 0xffffffe0 | *puVar8 - 4 & 0x1f;
                }
                else {
                  fn_82AD1270(puVar8,4);
                }
                uVar11 = fn_82AEB828(param_1,uVar2,param_3,uVar11,puVar8);
              }
            }
            else {
              uVar11 = fn_82AEB678(param_1,uVar2,param_3,uVar11,puVar8);
            }
            fn_82AEAB00(param_1,uVar11,param_2,uVar14,lVar15,uVar16);
            lVar15 = lVar15 + 1;
          }
          if ((uVar14 & 0xffffffff) != 0) {
            uVar12 = (uint)uVar14 & 0xfffffffe;
            *(uint *)(uVar12 + 0x24) = *param_3;
            *(uint *)(*param_3 & 0xfffffffe) = uVar12;
            *(uint *)(uVar12 + 0x28) = (uint)(param_3 + -9) | 1;
            *param_3 = uVar12 + 0x28;
          }
          goto code_r0x82aedb48;
        }
      }
    }
    if (uVar18 == uVar19) {
      uVar12 = *puVar1;
      if (((uVar12 ^ *puVar3) & 0x1f) == 0) {
        cVar10 = ' ';
        if ((*(uint *)(param_2 + 8) & 0x3f80) != 0x80) {
          cVar10 = '\"';
        }
      }
      else {
        if (((*(uint *)(param_2 + 8) & 0x3f80) != 0x80) || (((uVar12 ^ *puVar3) & 0x1b) != 0))
        goto code_r0x82aed9fc;
        if ((uVar12 & 4) != 0) {
          uVar2 = *(undefined4 *)(param_2 + 0x30);
          *(undefined4 *)(param_2 + 0x30) = *(undefined4 *)(param_2 + 0x2c);
          *(undefined4 *)(param_2 + 0x2c) = uVar2;
        }
        cVar10 = '9';
      }
code_r0x82aed9e8:
      fn_82AECA70(param_1,param_2,cVar10,param_3);
      goto code_r0x82aedb48;
    }
code_r0x82aed9fc:
    cVar10 = '!';
    if ((*(uint *)(param_2 + 8) & 0x3f80) != 0x80) {
      cVar10 = '#';
    }
    uVar11 = 1;
    goto code_r0x82aeda18;
  case 3:
  case 4:
    cVar10 = (uVar12 != 3) + '%';
    if (((*(uint **)(param_2 + 0x2c))[3] == (*(uint **)(param_2 + 0x30))[3]) &&
       (((**(uint **)(param_2 + 0x2c) ^ **(uint **)(param_2 + 0x30)) & 0x1f) == 0))
    goto code_r0x82aed9e8;
    uVar11 = 0;
code_r0x82aeda18:
    fn_82AECC50(param_1,param_2,cVar10,param_3,uVar11);
    goto code_r0x82aedb48;
  case 5:
    uVar11 = 0x27;
    break;
  case 6:
    uVar11 = 0x28;
    break;
  case 7:
    uVar11 = 0x29;
    break;
  case 8:
    uVar11 = 0x2a;
    break;
  case 9:
    uVar11 = 0x2b;
    break;
  case 10:
    uVar11 = 0x2c;
    break;
  case 0xb:
    uVar11 = 0x2d;
    break;
  default:
                    /* WARNING: Subroutine does not return */
    fn_82AA66A8(param_1,0xdac,0xffffffff820d7cd8);
  case 0x19:
    puVar3 = *(uint **)(param_2 + 0x30);
    uVar19 = 0;
    uVar12 = *puVar3 >> 0x19 & 7;
    if (uVar12 != 0) {
      uVar18 = 0;
      dVar20 = lbl_82005758;
      iVar9 = param_1;
      do {
        iVar9 = fn_82B80C68((double)*(float *)((((*puVar3 >> 5 & 0xff) >> (uVar18 & 0x3f) & 3)
                                                     + 0xb) * 4 + puVar3[3]),iVar9,*puVar3 & 0x1f);
        if (extraout_f1 != dVar20) break;
        uVar19 = uVar19 + 1;
        uVar18 = uVar18 + 2;
      } while (uVar19 < uVar12);
    }
    if (uVar19 == uVar12) {
      uVar11 = 0x47;
    }
    else {
      uVar11 = 0x43;
    }
    break;
  case 0x1a:
    uVar11 = 0x44;
    break;
  case 0x1b:
    uVar11 = 0x45;
    break;
  case 0x1c:
    uVar11 = 0x46;
  }
  fn_82AEC860(param_1,param_2,uVar11,param_3);
code_r0x82aedb48:
  uVar12 = param_3[1];
  if (((uVar12 & 1) == 0) && (uVar12 != 0)) {
    while( true ) {
      uVar19 = *(uint *)((uVar12 & 0xfffffffe) + 0x28);
      if (((uVar19 & 1) != 0) || (uVar19 == 0)) break;
      fn_82AE93B0(uVar12);
      if ((*(uint *)(uVar12 + 8) & 0x3f80) == 0x3700) {
        fn_82B0FC78(param_1,uVar12);
      }
      else {
        fn_82AD1B28(uVar12);
      }
      *(uint *)(uVar12 + 8) = *(uint *)(uVar12 + 8) | 0x1000000;
      uVar12 = *(uint *)((uVar12 & 0xfffffffe) + 0x28);
      if ((uVar12 & 1) != 0) {
        return;
      }
      if (uVar12 == 0) {
        return;
      }
    }
  }
  return;
}

