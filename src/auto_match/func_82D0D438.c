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
extern unsigned int *auStack_260;
extern unsigned int *auStack_270;
extern unsigned int *auStack_280;
extern unsigned int *auStack_290;
extern unsigned int *auStack_2a0;
extern unsigned int *auStack_2b0;
extern unsigned int *auStack_2c0;
extern unsigned int *auStack_2d0;
extern int fn_82CE5040();
extern int fn_82CE5410();
extern int fn_82CE63B0();
extern int fn_82CED958();
extern int fn_82CEDB38();
extern int fn_82CEE578();
extern int fn_82D0AEE8();
extern int fn_82D12450();
extern int fn_82D16400();
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_8323B1A0;
extern unsigned int lbl_8323B1D0;
extern unsigned int lbl_8323B1E0;
extern unsigned int lbl_8323B1F0;
extern unsigned int lbl_8323B200;
extern unsigned int *lbl_8323B464;
extern unsigned int uRam8323b1e4;
extern unsigned int uRam8323b1e8;
extern unsigned int uRam8323b1ec;
extern unsigned int uRam8323b1f4;
extern unsigned int uRam8323b1f8;
extern unsigned int uRam8323b1fc;
extern unsigned int uRam8323b204;
extern unsigned int uRam8323b208;
extern unsigned int uRam8323b20c;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_82D0D438(int param_1,undefined8 param_2,int param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  float *pfVar3;
  float *pfVar4;
  bool bVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined8 in_r0;
  char cVar16;
  int iVar15;
  int iVar17;
  double dVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  float fVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  float fVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  float fVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined1 auStack_2d0 [16];
  undefined1 auStack_2c0 [16];
  undefined1 auStack_2b0 [16];
  undefined1 auStack_2a0 [16];
  undefined1 auStack_290 [16];
  undefined1 auStack_280 [16];
  undefined1 auStack_270 [16];
  undefined1 auStack_260 [608];
  
  uVar14 = uRam8323b20c;
  uVar13 = uRam8323b208;
  uVar12 = uRam8323b204;
  uVar11 = lbl_8323B200;
  uVar10 = uRam8323b1fc;
  uVar9 = uRam8323b1f8;
  uVar8 = uRam8323b1f4;
  uVar7 = lbl_8323B1F0;
  uVar6 = uRam8323b1ec;
  uVar28 = uRam8323b1e8;
  uVar25 = uRam8323b1e4;
  uVar22 = lbl_8323B1E0;
  iVar17 = (int)in_r0;
  puVar1 = (undefined4 *)((uint)(&lbl_8323B1A0 + iVar17) & 0xfffffff0);
  uVar19 = *puVar1;
  uVar20 = puVar1[1];
  uVar23 = puVar1[2];
  uVar26 = puVar1[3];
  puVar1 = (undefined4 *)((uint)(&lbl_8323B1D0 + iVar17) & 0xfffffff0);
  uVar29 = puVar1[1];
  uVar30 = puVar1[2];
  uVar31 = puVar1[3];
  puVar2 = (undefined4 *)((uint)(auStack_2a0 + iVar17) & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar29;
  puVar2[2] = uVar30;
  puVar2[3] = uVar31;
  puVar1 = (undefined4 *)((uint)(auStack_290 + iVar17) & 0xfffffff0);
  *puVar1 = uVar22;
  puVar1[1] = uVar25;
  puVar1[2] = uVar28;
  puVar1[3] = uVar6;
  puVar1 = (undefined4 *)((uint)(auStack_280 + iVar17) & 0xfffffff0);
  *puVar1 = uVar7;
  puVar1[1] = uVar8;
  puVar1[2] = uVar9;
  puVar1[3] = uVar10;
  puVar1 = (undefined4 *)((uint)(auStack_270 + iVar17) & 0xfffffff0);
  *puVar1 = uVar11;
  puVar1[1] = uVar12;
  puVar1[2] = uVar13;
  puVar1[3] = uVar14;
  uVar22 = *(undefined4 *)(param_1 + 8);
  puVar1 = (undefined4 *)((uint)(auStack_2d0 + iVar17) & 0xfffffff0);
  *puVar1 = uVar19;
  puVar1[1] = uVar20;
  puVar1[2] = uVar23;
  puVar1[3] = uVar26;
  fn_82D16400(uVar22,auStack_2d0,auStack_2a0);
  iVar17 = 0;
  if (0 < param_3) {
    pfVar3 = (float *)((uint)(auStack_2d0 + (int)in_r0) & 0xfffffff0);
    fVar32 = *pfVar3;
    fVar33 = pfVar3[1];
    fVar34 = pfVar3[2];
    fVar35 = pfVar3[3];
    dVar18 = (double)lbl_821AAD20;
    do {
      bVar5 = false;
      iVar15 = 0;
      do {
        fn_82D0AEE8(param_2,auStack_2d0);
        pfVar3 = (float *)((uint)(auStack_2d0 + (int)in_r0) & 0xfffffff0);
        fVar21 = pfVar3[1];
        fVar24 = pfVar3[2];
        fVar27 = pfVar3[3];
        pfVar4 = (float *)((uint)(auStack_2c0 + (int)in_r0) & 0xfffffff0);
        *pfVar4 = fVar32 * *pfVar3;
        pfVar4[1] = fVar33 * fVar21;
        pfVar4[2] = fVar34 * fVar24;
        pfVar4[3] = fVar35 * fVar27;
        fn_82CE5040(auStack_2c0,auStack_2a0,auStack_2c0);
        cVar16 = fn_82D12450(dVar18,*(int *)(param_1 + 8),auStack_2c0,
                                   *(undefined1 *)(*(int *)(param_1 + 8) + 0x1b5));
        if (cVar16 != '\0') {
          iVar15 = fn_82CE5410();
          if (param_4[1] == (param_4[2] & 0x3fffffffU)) {
            fn_82CE63B0(*(undefined4 *)(iVar15 + 0x10),param_4,0x10);
          }
          bVar5 = true;
          puVar1 = (undefined4 *)((uint)(auStack_2c0 + (int)in_r0) & 0xfffffff0);
          uVar22 = puVar1[1];
          uVar25 = puVar1[2];
          uVar28 = puVar1[3];
          puVar2 = (undefined4 *)((int)in_r0 + param_4[1] * 0x10 + *param_4 & 0xfffffff0);
          *puVar2 = *puVar1;
          puVar2[1] = uVar22;
          puVar2[2] = uVar25;
          puVar2[3] = uVar28;
          param_4[1] = param_4[1] + 1;
          break;
        }
        iVar15 = iVar15 + 1;
      } while (iVar15 < 0x400);
      if (!bVar5) {
        fn_82CEE578(auStack_2b0,auStack_260,0x200);
        fn_82CEDB38(auStack_2b0,0xffffffff82134690);
        (**(code **)(*lbl_8323B464 + 0xc))
                  (lbl_8323B464,1,0x1559e,auStack_260,0xffffffff8213450c,0xd69);
        fn_82CED958(auStack_2b0);
        return;
      }
      iVar17 = iVar17 + 1;
    } while (iVar17 < param_3);
  }
  return;
}

