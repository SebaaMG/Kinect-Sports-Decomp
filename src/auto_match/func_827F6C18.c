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
extern unsigned int *auStack_110;
extern unsigned int *auStack_70;
extern unsigned int *auStack_80;
extern unsigned int *auStack_90;
extern unsigned int *auStack_a0;
extern unsigned int *auStack_b0;
extern unsigned int *auStack_c0;
extern int fn_827F6BA8();
extern int fn_82809558();
extern int fn_828102D0();
extern int fn_828105C8();
extern int fn_82810830();
extern int fn_828108B8();
extern int fn_82810A28();
extern int fn_82810B40();
extern int fn_82810B78();
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_8201DDF4;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_100;
extern unsigned int uStack_118;
extern unsigned int uStack_11c;
extern unsigned int uStack_120;
extern unsigned int uStack_128;
extern unsigned int uStack_12c;
extern unsigned int uStack_130;
extern unsigned int uStack_138;
extern unsigned int uStack_13c;
extern unsigned int uStack_140;
extern unsigned int uStack_c8;
extern unsigned int uStack_cc;
extern unsigned int uStack_d0;
extern unsigned int uStack_d8;
extern unsigned int uStack_dc;
extern unsigned int uStack_e0;
extern unsigned int uStack_e8;
extern unsigned int uStack_ec;
extern unsigned int uStack_f0;
extern unsigned int uStack_f8;
extern unsigned int uStack_fc;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_827F6C18(int param_1,undefined4 *param_2,float *param_3)

{
  float fVar1;
  ushort uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  longlong lVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined1 auStack_110 [16];
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [112];
  
  uVar2 = *(ushort *)(param_1 + 0x32);
  uVar8 = (ulonglong)uVar2;
  dVar13 = (double)lbl_8201DDF4;
  if (uVar8 == 0) {
    dVar13 = (double)lbl_821AAD20;
    fn_828105C8(dVar13,dVar13,dVar13,param_2);
    *param_3 = (float)dVar13;
  }
  else if (uVar8 == 1) {
    puVar5 = (undefined4 *)fn_827F6BA8(auStack_110,param_1,0);
    fVar1 = lbl_821AAD20;
    uVar3 = puVar5[1];
    uVar4 = puVar5[2];
    *param_2 = *puVar5;
    param_2[1] = uVar3;
    param_2[2] = uVar4;
    *param_3 = fVar1;
  }
  else {
    lVar10 = 0;
    if (0 < (longlong)(uVar8 - 1)) {
      do {
        puVar5 = (undefined4 *)fn_827F6BA8(auStack_110,param_1,lVar10);
        uStack_130 = *puVar5;
        uStack_12c = puVar5[1];
        lVar9 = lVar10 + 1;
        uStack_128 = puVar5[2];
        lVar6 = lVar9;
        iVar7 = (int)lVar9;
        while (iVar7 < (int)(uint)uVar2) {
          puVar5 = (undefined4 *)fn_827F6BA8(&uStack_120,param_1,lVar10);
          uStack_140 = *puVar5;
          uStack_13c = puVar5[1];
          uStack_138 = puVar5[2];
          dVar11 = (double)fn_828102D0(&uStack_130,&uStack_140);
          if (dVar13 < dVar11) {
            uStack_e0 = uStack_130;
            uStack_dc = uStack_12c;
            uStack_d8 = uStack_128;
            uStack_f0 = uStack_140;
            uStack_ec = uStack_13c;
            uStack_e8 = uStack_138;
            dVar13 = dVar11;
          }
          lVar6 = lVar6 + 1;
          iVar7 = (int)lVar6;
        }
        lVar10 = lVar9;
      } while ((int)lVar9 < (int)(uVar8 - 1));
    }
    puVar5 = (undefined4 *)fn_82810830(auStack_110,&uStack_e0,&uStack_f0);
    uStack_140 = *puVar5;
    uStack_13c = puVar5[1];
    dVar11 = (double)lbl_82002C5C;
    uStack_138 = puVar5[2];
    puVar5 = (undefined4 *)fn_82810A28(dVar11,&uStack_120,&uStack_140);
    uVar3 = puVar5[1];
    uVar4 = puVar5[2];
    *param_2 = *puVar5;
    param_2[1] = uVar3;
    param_2[2] = uVar4;
    dVar13 = (double)fn_82809558(dVar13);
    fVar1 = (float)(dVar13 * dVar11);
    *param_3 = fVar1;
    lVar10 = 0;
    dVar13 = (double)(fVar1 * fVar1);
    if (uVar2 != 0) {
      do {
        puVar5 = (undefined4 *)fn_827F6BA8(auStack_c0,param_1,lVar10);
        uStack_140 = *puVar5;
        uStack_13c = puVar5[1];
        uStack_138 = puVar5[2];
        dVar12 = (double)fn_828102D0(&uStack_140,param_2);
        if (dVar13 < dVar12) {
          puVar5 = (undefined4 *)fn_828108B8(auStack_a0,&uStack_140,param_2);
          uStack_d0 = *puVar5;
          uStack_cc = puVar5[1];
          uStack_c8 = puVar5[2];
          fn_82810B78(&uStack_d0,auStack_110);
          puVar5 = (undefined4 *)fn_82810A28((double)*param_3,auStack_80,auStack_110);
          uStack_100 = *puVar5;
          uStack_fc = puVar5[1];
          uStack_f8 = puVar5[2];
          puVar5 = (undefined4 *)fn_828108B8(auStack_b0,param_2,&uStack_100);
          uStack_130 = *puVar5;
          uStack_12c = puVar5[1];
          uStack_128 = puVar5[2];
          puVar5 = (undefined4 *)fn_82810830(auStack_90,&uStack_130,&uStack_140);
          uStack_120 = *puVar5;
          uStack_11c = puVar5[1];
          uStack_118 = puVar5[2];
          puVar5 = (undefined4 *)fn_82810A28(dVar11,auStack_70,&uStack_120);
          uVar3 = puVar5[1];
          uVar4 = puVar5[2];
          *param_2 = *puVar5;
          param_2[1] = uVar3;
          param_2[2] = uVar4;
          dVar13 = (double)fn_82810B40(&uStack_130,&uStack_140);
          fVar1 = (float)(dVar13 * dVar11);
          *param_3 = fVar1;
          dVar13 = (double)(fVar1 * fVar1);
        }
        lVar10 = lVar10 + 1;
      } while ((int)lVar10 < (int)(uint)uVar2);
    }
  }
  return;
}

