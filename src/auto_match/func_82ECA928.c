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
#define ZEXT48(x) ((U64)((U32)(x)))
extern unsigned int *auStack_2e0;
extern unsigned int *auStack_4e0;
extern unsigned int *auStack_540;
extern unsigned int *auStack_5c0;
extern unsigned int *auStack_640;
extern int fn_82E97140();
extern int fn_82E9AB68();
extern int fn_82E9AC18();
extern int fn_82E9B140();
extern int fn_82EAA150();
extern int fn_82EAA320();
extern int fn_82EC82F8();
extern int fn_82EC8EC0();
extern int fn_82EC93E0();
extern int fn_82EC96A8();
extern int fn_82ECA110();
extern int fn_82ED9160();
extern int fn_82EF55A8();
extern int fn_82EF58B8();
extern int fn_82EF5D60();
extern int fn_82EF62F8();
extern int fn_82EFE140();
extern int fn_82EFE1A8();
extern int fn_82F06BE8();
extern int fn_82F07488();
extern int fn_82F076C8();
extern int fn_82F11938();
extern int fn_82F12368();
extern int fn_82F125F0();
extern int fn_82F26D38();
extern int fn_82F26F98();
extern int fn_82F6A544();
extern int fn_82F6A590();
extern int fn_83143EB0();
extern unsigned int iStack_18f0;
extern unsigned int iStack_1930;
extern unsigned int iStack_1938;
extern unsigned int iStack_1940;
extern unsigned int iStack_19b0;
extern unsigned int iStack_19bc;
extern unsigned int iStack_19c0;
extern unsigned int iStack_1a30;
extern unsigned int iStack_1a40;
extern unsigned int iStack_1a48;
extern unsigned int iStack_1a4c;
extern unsigned int *iStack_1a50;
extern unsigned int iStack_1a54;
extern unsigned int iStack_1a5c;
extern unsigned int iStack_1a64;
extern unsigned int iStack_1a68;
extern unsigned int iStack_1a6c;
extern unsigned int iStack_1a70;
extern unsigned int iStack_1a74;
extern unsigned int iStack_1a78;
extern unsigned int iStack_1a7c;
extern unsigned int iStack_1ac0;
extern unsigned int iStack_1ac8;
extern unsigned int iStack_1ad0;
extern unsigned int iStack_1ad4;
extern unsigned int iStack_1ad8;
extern unsigned int iStack_1adc;
extern unsigned int iStack_1ae0;
extern unsigned int iStack_1ae4;
extern unsigned int iStack_1aec;
extern unsigned int iStack_1af0;
extern unsigned int iStack_1b04;
extern unsigned int iStack_1b14;
extern unsigned int iStack_1b1c;
extern unsigned int iStack_1b28;
extern unsigned int iStack_1b30;
extern unsigned int iStack_1b44;
extern unsigned int iStack_1b4c;
extern unsigned int iStack_1b5c;
extern unsigned int iStack_1b84;
extern unsigned int iStack_1b88;
extern unsigned int iStack_1b90;
extern unsigned int iStack_1b94;
extern unsigned int iStack_1b98;
extern unsigned int iStack_1ba0;
extern unsigned int iStack_1bb0;
extern unsigned int iStack_1bb4;
extern unsigned int iStack_1bbc;
extern unsigned int *iStack_1bc4;
extern unsigned int iStack_1bcc;
extern unsigned int iStack_1bd0;
extern unsigned int iStack_1bd8;
extern unsigned int iStack_1bdc;
extern unsigned int iStack_1be0;
extern unsigned int iStack_1be8;
extern unsigned int iStack_1bf8;
extern unsigned int iStack_1bfc;
extern unsigned int iStack_1c00;
extern unsigned int iStack_1c04;
extern unsigned int iStack_1c08;
extern unsigned int iStack_1c3c;
extern unsigned int iStack_1c4c;
extern unsigned int iStack_1c54;
extern unsigned int iStack_1c74;
extern unsigned int iStack_1c9c;
extern unsigned int iStack_1ca0;
extern unsigned int iStack_1ca4;
extern unsigned int iStack_1ca8;
extern unsigned int iStack_1cac;
extern unsigned int iStack_1cb4;
extern unsigned int iStack_1cc0;
extern unsigned int iStack_1cc4;
extern unsigned int iStack_1cc8;
extern unsigned int iStack_1cd0;
extern unsigned int iStack_1cd4;
extern unsigned int lbl_82005710;
extern unsigned int lbl_831898B8;
extern unsigned int stack0x00000000;
extern unsigned int uStack_1894;
extern unsigned int uStack_18dc;
extern unsigned int uStack_18e0;
extern unsigned int uStack_18e4;
extern unsigned int uStack_18e8;
extern unsigned int uStack_192c;
extern unsigned int uStack_1934;
extern unsigned int uStack_199c;
extern unsigned int uStack_19a0;
extern unsigned int uStack_19a4;
extern unsigned int uStack_19a8;
extern unsigned int uStack_19b4;
extern unsigned int uStack_19b8;
extern unsigned int uStack_19c4;
extern unsigned int uStack_19c8;
extern unsigned int uStack_19cc;
extern unsigned int uStack_19d0;
extern unsigned int uStack_19d4;
extern unsigned int uStack_19d8;
extern unsigned int uStack_19dc;
extern unsigned int uStack_19e0;
extern unsigned int uStack_1a1c;
extern unsigned int uStack_1a20;
extern unsigned int uStack_1a24;
extern unsigned int uStack_1a28;
extern unsigned int uStack_1a32;
extern unsigned int uStack_1a44;
extern unsigned int uStack_1a58;
extern unsigned int uStack_1a60;
extern unsigned int uStack_1aac;
extern unsigned int uStack_1ab0;
extern unsigned int uStack_1ab4;
extern unsigned int uStack_1ab8;
extern unsigned int uStack_1ac4;
extern unsigned int uStack_1ae8;
extern unsigned int uStack_1af8;
extern unsigned int uStack_1b00;
extern unsigned int uStack_1b0c;
extern unsigned int uStack_1b18;
extern unsigned int uStack_1b20;
extern unsigned int uStack_1b24;
extern unsigned int uStack_1b2c;
extern unsigned int uStack_1b32;
extern unsigned int uStack_1b34;
extern unsigned int uStack_1b36;
extern unsigned int uStack_1b48;
extern unsigned int uStack_1b50;
extern unsigned int uStack_1b54;
extern unsigned int uStack_1b58;
extern unsigned int uStack_1b80;
extern unsigned int uStack_1ba8;
extern unsigned int uStack_1bac;
extern unsigned int uStack_1bb8;
extern unsigned int uStack_1bc0;
extern unsigned int uStack_1bc8;
extern unsigned int uStack_1bd4;
extern unsigned int uStack_1be4;
extern unsigned int uStack_1bec;
extern unsigned int uStack_1bf0;
extern unsigned int uStack_1c0c;
extern unsigned int uStack_1c10;
extern unsigned int uStack_1c14;
extern unsigned int uStack_1c18;
extern unsigned int uStack_1c34;
extern unsigned int uStack_1c38;
extern unsigned int uStack_1c50;
extern unsigned int uStack_1c5c;
extern unsigned int uStack_1c78;
extern unsigned int uStack_1c84;
extern unsigned int uStack_1c88;
extern unsigned int uStack_1c8c;
extern unsigned int uStack_1c90;
extern unsigned int uStack_1c94;
extern unsigned int uStack_1c98;
extern unsigned int uStack_1cb0;
extern unsigned int uStack_1cb8;
extern unsigned int uStack_1cbc;
extern unsigned int uStack_1cd8;
extern unsigned int uStack_1cdc;
extern unsigned int uStack_1ce0;


void fn_82ECA928(undefined8 param_1,ulonglong param_2,ulonglong param_3,int *param_4,
                  double *param_5,double *param_6,double *param_7,double *param_8)

{
  char cVar1;
  undefined2 uVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  undefined *puVar8;
  undefined1 *puVar9;
  ulonglong uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  undefined4 uVar20;
  undefined2 uVar21;
  short sVar22;
  ulonglong uVar23;
  int iVar24;
  undefined2 uVar25;
  short sVar26;
  short sVar27;
  uint uVar28;
  uint uVar29;
  ulonglong uVar30;
  uint uVar31;
  ulonglong uVar32;
  ulonglong uVar33;
  ulonglong uVar34;
  ulonglong uVar35;
  ulonglong uVar36;
  ulonglong uVar37;
  longlong lVar38;
  longlong lVar39;
  uint uVar40;
  longlong lVar41;
  uint uVar43;
  ulonglong uVar42;
  uint uVar46;
  uint uVar47;
  ulonglong uVar44;
  undefined8 uVar45;
  longlong lVar48;
  ulonglong uVar49;
  ulonglong uVar50;
  double dVar51;
  double dVar52;
  double dVar53;
  double dVar54;
  double dVar55;
  double *in_stack_00000054;
  uint uStack_1ce0;
  uint uStack_1cdc;
  uint uStack_1cd8;
  int iStack_1cd4;
  int iStack_1cd0;
  undefined *puStack_1ccc;
  int iStack_1cc8;
  int iStack_1cc4;
  int iStack_1cc0;
  uint uStack_1cbc;
  uint uStack_1cb8;
  int iStack_1cb4;
  uint uStack_1cb0;
  int iStack_1cac;
  int iStack_1ca8;
  int iStack_1ca4;
  int iStack_1ca0;
  int iStack_1c9c;
  undefined4 uStack_1c98;
  uint uStack_1c94;
  uint uStack_1c90;
  undefined4 uStack_1c8c;
  uint uStack_1c88;
  uint uStack_1c84;
  undefined1 *puStack_1c80;
  undefined1 *puStack_1c7c;
  uint uStack_1c78;
  int iStack_1c74;
  int aiStack_1c70 [5];
  uint uStack_1c5c;
  short sStack_1c58;
  short sStack_1c56;
  int iStack_1c54;
  uint uStack_1c50;
  int iStack_1c4c;
  short sStack_1c48;
  short sStack_1c46;
  short sStack_1c44;
  short sStack_1c42;
  short sStack_1c40;
  short sStack_1c3e;
  int iStack_1c3c;
  uint uStack_1c38;
  uint uStack_1c34;
  code **ppcStack_1c30;
  int aiStack_1c28 [3];
  undefined1 *puStack_1c1c;
  uint uStack_1c18;
  uint uStack_1c14;
  uint uStack_1c10;
  uint uStack_1c0c;
  int iStack_1c08;
  int iStack_1c04;
  int iStack_1c00;
  int iStack_1bfc;
  int iStack_1bf8;
  uint *puStack_1bf4;
  undefined4 uStack_1bf0;
  uint uStack_1bec;
  int iStack_1be8;
  undefined4 uStack_1be4;
  int iStack_1be0;
  int iStack_1bdc;
  int iStack_1bd8;
  uint uStack_1bd4;
  int iStack_1bd0;
  int iStack_1bcc;
  uint uStack_1bc8;
  int iStack_1bc4;
  uint uStack_1bc0;
  int iStack_1bbc;
  uint uStack_1bb8;
  int iStack_1bb4;
  int iStack_1bb0;
  undefined4 uStack_1bac;
  uint uStack_1ba8;
  undefined1 *puStack_1ba4;
  int iStack_1ba0;
  int iStack_1b98;
  int iStack_1b94;
  int iStack_1b90;
  int iStack_1b88;
  int iStack_1b84;
  uint uStack_1b80;
  code *apcStack_1b70 [5];
  int iStack_1b5c;
  uint uStack_1b58;
  uint uStack_1b54;
  uint uStack_1b50;
  int iStack_1b4c;
  uint uStack_1b48;
  int iStack_1b44;
  longlong lStack_1b40;
  undefined2 uStack_1b36;
  undefined2 uStack_1b34;
  undefined2 uStack_1b32;
  int iStack_1b30;
  undefined4 uStack_1b2c;
  int iStack_1b28;
  uint uStack_1b24;
  undefined4 uStack_1b20;
  int iStack_1b1c;
  uint uStack_1b18;
  int iStack_1b14;
  undefined1 *puStack_1b10;
  undefined4 uStack_1b0c;
  undefined1 *puStack_1b08;
  int iStack_1b04;
  uint uStack_1b00;
  undefined8 uStack_1af8;
  int iStack_1af0;
  int iStack_1aec;
  uint uStack_1ae8;
  int iStack_1ae4;
  int iStack_1ae0;
  int iStack_1adc;
  int iStack_1ad8;
  int iStack_1ad4;
  int iStack_1ad0;
  undefined1 *puStack_1acc;
  int iStack_1ac8;
  uint uStack_1ac4;
  int iStack_1ac0;
  uint uStack_1ab8;
  uint uStack_1ab4;
  uint uStack_1ab0;
  uint uStack_1aac;
  int iStack_1a7c;
  int iStack_1a78;
  int iStack_1a74;
  int iStack_1a70;
  int iStack_1a6c;
  int iStack_1a68;
  int iStack_1a64;
  uint uStack_1a60;
  int iStack_1a5c;
  undefined4 uStack_1a58;
  int iStack_1a54;
  int iStack_1a50;
  int iStack_1a4c;
  int iStack_1a48;
  uint uStack_1a44;
  int iStack_1a40;
  undefined2 uStack_1a32;
  int iStack_1a30;
  uint uStack_1a28;
  uint uStack_1a24;
  uint uStack_1a20;
  uint uStack_1a1c;
  uint uStack_19e0;
  uint uStack_19dc;
  uint uStack_19d8;
  uint uStack_19d4;
  uint uStack_19d0;
  uint uStack_19cc;
  uint uStack_19c8;
  uint uStack_19c4;
  int iStack_19c0;
  int iStack_19bc;
  undefined4 uStack_19b8;
  undefined4 uStack_19b4;
  int iStack_19b0;
  uint uStack_19a8;
  uint uStack_19a4;
  uint uStack_19a0;
  uint uStack_199c;
  longlong lStack_1968;
  longlong lStack_1960;
  longlong lStack_1958;
  longlong lStack_1950;
  longlong lStack_1948;
  int iStack_1940;
  int iStack_1938;
  uint uStack_1934;
  int iStack_1930;
  uint uStack_192c;
  int iStack_18f0;
  uint uStack_18e8;
  uint uStack_18e4;
  uint uStack_18e0;
  uint uStack_18dc;
  uint uStack_1894;
  undefined1 auStack_640 [128];
  undefined1 auStack_5c0 [128];
  undefined1 auStack_540 [96];
  undefined1 auStack_4e0 [512];
  undefined1 auStack_2e0 [736];
  
  uVar10 = ZEXT48(&stack0x00000000);
  iVar11 = fn_82F6A544();
  puStack_1b10 = auStack_640;
  puStack_1b08 = auStack_4e0;
  iStack_1bcc = *(int *)(iVar11 + 0x564) >> 2;
  puStack_1acc = auStack_5c0;
  iStack_1a4c = *(int *)(iVar11 + 0x1abc);
  puStack_1c80 = auStack_2e0;
  iStack_1bc4 = *(int *)(*(int *)(iVar11 + 0x5154) + 0x244);
  uVar19 = (uint)param_2;
  iStack_1c54 = *(int *)(iVar11 + 0x2d0) * uVar19;
  iStack_1a6c = *(int *)(iVar11 + 0x310);
  iVar13 = *(int *)(iVar11 + 0x6d8c);
  iVar24 = iStack_1bcc * 8;
  puStack_1ba4 = auStack_540;
  iVar12 = *(int *)(iVar11 + 0x1e54) + iStack_1c54 * 0x114;
  uStack_1a44 = *(int *)(iVar11 + 0x2d0) + 0x1fU >> 5;
  iStack_1a70 = *(int *)(iVar11 + 0x1a94) + iVar24 + 8;
  iStack_1c4c = 0;
  iStack_1c08 = 0;
  uStack_1c98 = 0;
  if (iVar13 != 0) {
    iStack_1a78 = *(int *)(iVar11 + 0x1aa4) + iVar24 + 8;
    iStack_1a5c = *(int *)(iVar11 + 0x1ac0);
    iStack_1a7c = *(int *)(iVar11 + 0x18) + *(int *)(iVar11 + 0x578);
    iStack_1a40 = *(int *)(iVar11 + 0x1ac4);
    iStack_1a54 = *(int *)(iVar11 + 0x1c) + *(int *)(iVar11 + 0x578);
    iStack_1a48 = *(int *)(iVar11 + 0x1aa8) + iVar24 + 8;
  }
  dVar51 = lbl_82005710;
  dVar52 = lbl_82005710;
  dVar53 = lbl_82005710;
  dVar54 = lbl_82005710;
  dVar55 = lbl_82005710;
  iStack_1cc4 = iVar12;
  uStack_1c94 = uVar19;
  if ((param_2 & 0xffffffff) < (param_3 & 0xffffffff)) {
    puStack_1ccc = &lbl_831898B8;
    do {
      uVar30 = 0;
      iVar14 = (int)param_2;
      uStack_1a60 = *(uint *)(iVar14 * uStack_1a44 * 4 + *(int *)(iVar11 + 0x690));
      iVar24 = iVar14 * iStack_1bcc * 4;
      uStack_1b50 = *(int *)(iVar11 + 0x31c) * iVar14 * 0x10 + iStack_1a4c;
      iStack_1bdc = iVar24 + iStack_1a70;
      uStack_1cb8 = *(int *)(iVar11 + 0x564) * iVar14 * 0x10 + iStack_1a6c;
      if (iVar13 != 0) {
        uStack_1b0c = 0;
        uStack_1b2c = 0;
        uStack_1be4 = 0;
        uStack_1bf0 = 0;
        iVar17 = (*(int *)(iVar11 + 0x31c) >> 1) * iVar14 * 8;
        iStack_1bfc = *(int *)(iVar11 + 0x568) * iVar14 * 8;
        iStack_1b5c = iVar24 + iStack_1a78;
        uStack_1b48 = iVar17 + iStack_1a5c;
        uStack_1b54 = iVar17 + iStack_1a40;
        iStack_1c04 = iStack_1bfc + iStack_1a7c;
        iStack_1bfc = iStack_1bfc + iStack_1a54;
        iStack_1b44 = iVar24 + iStack_1a48;
      }
      uVar23 = (ulonglong)*(uint *)(iVar11 + 0x2d0);
      iStack_1c3c = 0;
      iStack_1c74 = 0;
      iStack_1bb0 = 0;
      iStack_1b04 = 0;
      iStack_1ba0 = 0;
      iStack_1b1c = 0;
      iStack_1ca4 = 0;
      iStack_1bd0 = 0;
      iStack_1bd8 = 0;
      uStack_1c38 = 0;
      if (uVar23 != 0) {
        iStack_1a74 = -0x10 - (int)((param_2 & 0xffffffff) << 4);
        uStack_1bec = (uint)LZCOUNT(uVar19 - iVar14) >> 5;
        do {
          puVar9 = puStack_1b08;
          iStack_1ca0 = (int)((uVar30 & 0xffffffff) << 4);
          iStack_1ac8 = 0;
          iStack_1ae4 = 0;
          iStack_1bb4 = 0;
          iStack_1bbc = 0;
          iStack_1ca8 = -0x10 - iStack_1ca0;
          iStack_1b90 = (int)((((longlong)*(int *)(iVar11 + 0x2d0) * (longlong)(int)param_2 &
                               0x7fffffffU) * 2 + uVar30 & 0xffffffff) << 1);
          iVar24 = -*(int *)(iVar11 + 0x1aec);
          uStack_1bb8 = *(int *)(iVar11 + 0x2d0) * 2 + iStack_1b90;
          uVar33 = uVar30 & 1;
          if (iStack_1ca8 < iVar24) {
            iStack_1ca8 = iVar24;
          }
          iVar24 = *(int *)(iVar11 + 0x1aec) + -1;
          iStack_1ca0 = *(int *)(iVar11 + 0x548) - iStack_1ca0;
          if (iVar24 < iStack_1ca0) {
            iStack_1ca0 = iVar24;
          }
          iVar24 = -*(int *)(iVar11 + 0x1af0);
          iStack_1c9c = iStack_1a74;
          if (iStack_1a74 < iVar24) {
            iStack_1c9c = iVar24;
          }
          iVar24 = *(int *)(iVar11 + 0x1af0) + -1;
          iStack_1cac = *(int *)(iVar11 + 0x550) - (int)((param_2 & 0xffffffff) << 4);
          if (iVar24 < iStack_1cac) {
            iStack_1cac = iVar24;
          }
          if ((int)uVar33 == 0) {
            iVar13 = (int)uVar23 + -1;
            uVar37 = (ulonglong)uStack_1b50;
            uVar23 = ZEXT48(puStack_1b08);
            if (*(int *)(iVar12 + 0x94) == 0) {
              fn_82ED9160(iVar11,uVar23,0,0,uVar37,0,0,iVar13 == (int)uVar30);
              if ((*(int *)(iVar11 + 0x1c20) != 0) && ((param_2 & 0xffffffff) == 0)) {
                fn_82F06BE8(iVar11,uVar23,0,0);
              }
              uVar35 = ZEXT48(puStack_1b10);
              uVar34 = ZEXT48(puStack_1ba4);
            }
            else {
              uVar35 = ZEXT48(puStack_1b10);
              lVar48 = uVar35 + 0x40;
              fn_82ED9160(iVar11,uVar23,uVar35,lVar48,uVar37,uStack_1b48,uStack_1b54,
                            iVar13 == (int)uVar30);
              if ((*(int *)(iVar11 + 0x1c20) != 0) && ((param_2 & 0xffffffff) == 0)) {
                fn_82F06BE8(iVar11,uVar23,uVar35,lVar48);
              }
              uVar34 = ZEXT48(puStack_1ba4);
              (**(code **)(iVar11 + 0x1bb0))(uVar35,8,8,uVar34,8,8);
              (**(code **)(iVar11 + 0x1bb0))(lVar48,8,8,uVar34 + 0x20,8,8);
            }
            uVar32 = ZEXT48(puStack_1c80);
            (**(code **)(iVar11 + 0x1bac))(uVar23,0x10,0x10,uVar32,8,0x10);
            if ((uVar30 + 1 & 0xffffffff) < (ulonglong)*(uint *)(iVar11 + 0x2d0)) {
              iVar13 = *(uint *)(iVar11 + 0x2d0) - 1;
              lVar48 = uVar23 + 0x100;
              iVar24 = (int)(uVar30 + 1);
              if (*(int *)(iVar12 + 0x94) == 0) {
                fn_82ED9160(iVar11,lVar48,0,0,uVar37 + 0x10,0,0,iVar13 == iVar24);
                if ((*(int *)(iVar11 + 0x1c20) != 0) && ((param_2 & 0xffffffff) == 0)) {
                  fn_82F06BE8(iVar11,lVar48,0,0);
                }
              }
              else {
                uVar36 = ZEXT48(puStack_1acc);
                lVar38 = uVar36 + 0x40;
                fn_82ED9160(iVar11,lVar48,uVar36,lVar38,uVar37 + 0x10,(ulonglong)uStack_1b48 + 8,
                              (ulonglong)uStack_1b54 + 8,iVar13 == iVar24);
                if ((*(int *)(iVar11 + 0x1c20) != 0) && ((param_2 & 0xffffffff) == 0)) {
                  fn_82F06BE8(iVar11,lVar48,uVar36,lVar38);
                }
                (**(code **)(iVar11 + 0x1bb0))(uVar36,8,8,uVar34 + 4,8,8);
                (**(code **)(iVar11 + 0x1bb0))(lVar38,8,8,uVar34 + 0x24,8,8);
              }
              (**(code **)(iVar11 + 0x1bac))(lVar48,0x10,0x10,uVar32 + 4,8,0x10);
            }
            puStack_1c7c = puVar9;
            if (*(int *)(iVar11 + 0x6d8c) == 0) {
LAB_82ecb000:
              uVar35 = ZEXT48(puStack_1c1c);
              uVar37 = (ulonglong)uStack_1c14;
            }
            else {
              uVar37 = uVar35 + 0x40;
              puStack_1c1c = (undefined1 *)uVar35;
              uStack_1c14 = (uint)uVar37;
            }
          }
          else {
            uVar32 = ZEXT48(puStack_1c80);
            uVar23 = ZEXT48(puStack_1b08) + 0x100;
            puStack_1c7c = (undefined1 *)uVar23;
            if (iVar13 == 0) goto LAB_82ecb000;
            uVar35 = ZEXT48(puStack_1acc);
            uVar37 = uVar35 + 0x40;
            uStack_1c14 = (uint)uVar37;
            puStack_1c1c = puStack_1acc;
          }
          fn_82F07488(iVar11,iVar12,uVar30,param_2);
          if (*(int *)(iVar11 + 0x6d74) == 0) {
            uStack_1c78 = (**(code **)(iVar11 + 0x1be0))(uVar23,0x10);
            uStack_1c50 = (**(code **)(iVar11 + 0x1be0))(uVar23 + 8,0x10);
            uStack_1b20 = (undefined4)(uVar23 + 0x80);
            uStack_1c84 = (**(code **)(iVar11 + 0x1be0))(uVar23 + 0x80,0x10);
            uStack_1af8 = CONCAT44((int)(uVar23 + 0x88),(((U64)(uStack_1af8) >> 32) & 0xFFFFFFFF));
            lVar48 = (**(code **)(iVar11 + 0x1be0))(uVar23 + 0x88,0x10);
            uVar36 = (ulonglong)uStack_1c78;
            uVar34 = (ulonglong)uStack_1c50;
            uVar32 = (ulonglong)uStack_1c84;
            iVar13 = *(int *)(iVar11 + 0x4b1c);
            uStack_1c78 = iVar13 + uStack_1c78;
            uStack_1c50 = iVar13 + uStack_1c50;
            uStack_1c84 = iVar13 + uStack_1c84;
            uStack_1c34 = iVar13 + (int)lVar48;
            lVar48 = uVar36 + uVar34 + uVar32 + lVar48;
            uVar28 = iVar13 * 4 + (int)lVar48;
            if (*(int *)(iVar12 + 0x94) != 0) {
              uStack_1c88 = uVar28;
              if ((*(uint *)(iVar11 + 0x6dc4) & 1) != 0) {
                iStack_1bb4 = (**(code **)(iVar11 + 0x1be0))(uVar35,8);
              }
              if ((*(uint *)(iVar11 + 0x6dc4) & 2) != 0) {
                iStack_1bbc = (**(code **)(iVar11 + 0x1be0))(uVar37,8);
              }
              uVar28 = uVar28 + iStack_1bbc + iStack_1bb4;
            }
            iStack_1bd8 = uVar28 + iStack_1bd8;
            uStack_1c88 = uVar28;
          }
          else {
            fn_82F076C8(iVar11,iVar12);
            iStack_1aec = iStack_1c74;
            iStack_1af0 = iStack_1c3c;
            fn_82F11938(iVar11,uVar23,0,*(undefined4 *)(iVar12 + 0x60),iVar12,iStack_1b1c,
                          iStack_1b04);
            iStack_1b28 = iStack_1b1c;
            iStack_1b30 = iStack_1b04;
            uVar28 = (iStack_1a64 + iStack_1bc4) * *(int *)(iVar12 + 0x70) + iStack_1a68;
            iVar13 = *(int *)(iVar12 + 0x70) * iStack_1a50 + iStack_1a68 + iStack_1bd8;
            uStack_1c88 = uVar28;
            iStack_1bd8 = iVar13;
            if (*(int *)(iVar12 + 0x94) != 0) {
              if ((*(uint *)(iVar11 + 0x6dc4) & 1) != 0) {
                (**(code **)(iVar11 + 0x9d8))(uVar35,uVar32 + 0x100,0x40);
                fn_82F125F0(iVar11,uVar35,uVar32 + 0x100,8,*(undefined4 *)(iVar12 + 0x60),
                                  iVar12,uStack_1b2c,uStack_1bf0);
              }
              if ((*(uint *)(iVar11 + 0x6dc4) & 2) != 0) {
                (**(code **)(iVar11 + 0x9d8))(uVar37,uVar32 + 0x100,0x40);
                fn_82F125F0(iVar11,uVar37,uVar32 + 0x100,8,*(undefined4 *)(iVar12 + 0x60),
                                  iVar12,uStack_1b0c,uStack_1be4);
              }
              uStack_1c88 = uVar28 + iStack_1bbc + iStack_1bb4;
              iStack_1bd8 = iStack_1ae4 + iStack_1ac8 + iVar13;
              uStack_1bf0 = uStack_1b2c;
              uStack_1be4 = uStack_1b0c;
            }
            uStack_1c78 = (**(code **)(iVar11 + 0x1be0))(uVar23,0x10);
            uStack_1c50 = (**(code **)(iVar11 + 0x1be0))(uVar23 + 8,0x10);
            uStack_1b20 = (undefined4)(uVar23 + 0x80);
            uStack_1c84 = (**(code **)(iVar11 + 0x1be0))(uVar23 + 0x80,0x10);
            uStack_1af8 = CONCAT44((int)(uVar23 + 0x88),(((U64)(uStack_1af8) >> 32) & 0xFFFFFFFF));
            lVar48 = (**(code **)(iVar11 + 0x1be0))(uVar23 + 0x88,0x10);
            uStack_1c34 = (uint)lVar48;
            lVar48 = (ulonglong)uStack_1c78 + (ulonglong)uStack_1c50 + (ulonglong)uStack_1c84 +
                     lVar48;
          }
          *(int *)(iVar12 + 0x98) = (int)lVar48;
          fn_82E9AB68(iVar11,*(undefined4 *)(iVar12 + 100),lVar48,uVar10 - 0x1c70);
          if ((*(uint *)(iVar11 + 0x6db8) & 0xc) == 0) {
            uVar32 = ZEXT48(puStack_1c80);
          }
          else {
            uVar28 = *(uint *)(iVar12 + 0x60);
            lVar48 = ((ulonglong)uVar28 & 0x7fffffff) << 1;
            if (*(int *)(iVar11 + 0x594) == 0) {
              lVar48 = ((ulonglong)uVar28 & 0x3fffffff) << 2;
            }
            fn_83143EB0(iVar11,uVar10 - 0x1a30,(uVar30 & 0x7fffffff) << 1,
                              (param_2 & 0x7fffffff) << 1,*(undefined4 *)(iVar11 + 0x9f0),
                              *(undefined4 *)(iVar11 + 0x9f4),1,1);
            uVar32 = ZEXT48(puStack_1c80);
            uStack_1c8c = fn_82EFE1A8(iVar11,uVar23,uStack_1cb8,uVar32 + 0x100,uVar10 - 0x1a30
                                            ,((ulonglong)uVar28 + lVar48 & 0x1fffffff) << 3,uVar30,
                                            param_2);
          }
          iVar24 = iStack_1ad8;
          iVar13 = iStack_1ae0;
          if ((int)uVar33 == 0) {
            if ((uStack_1a60 & 1) != 0) {
              iStack_1ad8 = 1;
            }
            iVar24 = iStack_1ad8;
            if ((uStack_1a60 & 2) != 0) {
              iStack_1ae0 = 1;
            }
            iVar13 = iStack_1ae0;
            if (*(int *)(iVar12 + 0x94) == 0) {
              if ((iStack_1ad8 == 0) && (iStack_1ae0 == 0)) {
                uStack_1c98 = fn_82EF55A8(iVar11,uVar32,8,iStack_1bdc,iStack_1bcc,uVar30,
                                                param_2,0);
              }
              else {
                uStack_1c98 = fn_82EF5D60(iVar11,uVar32,8,iStack_1bdc,iStack_1bcc,uVar30,param_2,0
                                           );
              }
            }
            else if ((iStack_1ad8 == 0) && (iStack_1ae0 == 0)) {
              uStack_1c98 = fn_82EF58B8(iVar11,uVar32,ZEXT48(puStack_1ba4),
                                          ZEXT48(puStack_1ba4) + 0x20,8,8,iStack_1bdc,iStack_1b5c);
            }
            else {
              uStack_1c98 = fn_82EF62F8(iVar11,uVar32,ZEXT48(puStack_1ba4),
                                          ZEXT48(puStack_1ba4) + 0x20,8,8,iStack_1bdc,iStack_1b5c);
            }
          }
          (**(code **)(iVar11 + 0x9d8))(uVar23,uVar32,0x100);
          iStack_1ad0 = iVar13;
          if (uVar33 == 0) {
            iStack_1ad0 = iVar24;
          }
          if (iStack_1ad0 != 0) {
            lVar48 = (uVar30 & 0x7fffffff) * 2;
            lVar38 = (param_2 & 0x7fffffff) << 1;
            fn_83143EB0(iVar11,uVar10 - 0x19b0,lVar48,lVar38,*(undefined4 *)(iVar11 + 0x9f0),
                              *(undefined4 *)(iVar11 + 0x9f4),0,1);
            lVar41 = uVar33 * 0x780;
            uVar33 = (ulonglong)uStack_1cb8;
            fn_82EC93E0(iVar11,uVar23,uVar33,lVar41 + (uVar10 - 0x1540),uVar10 - 0x19b0,iVar12
                              ,uVar30,param_2);
            bVar5 = false;
            iStack_1c08 = 0;
            if (*(int *)(iVar11 + 0x6d74) != 0) {
              fn_82F12368(iVar11,uVar23,puStack_1c80,0x10,*(undefined4 *)(iVar12 + 0x60),
                                iVar12,iStack_1aec,uVar10 - 0x1c78);
              uStack_1c78 = *(int *)(iVar12 + 0x70) * iStack_1bc4 + uStack_1c78;
            }
            if ((int)uStack_1c78 < (int)uStack_1cd8) {
              uStack_1cdc = 0x4000;
              uStack_1ce0 = 0x4000;
              iStack_1c08 = 1;
              uStack_1cd8 = uStack_1c78;
            }
            else {
              iStack_1b4c = 0;
            }
            uVar28 = uStack_1cd8;
            lVar39 = lVar48 + 1;
            iVar13 = iStack_1b90 * 2;
            uStack_1a58 = (undefined4)lVar39;
            iStack_1bf8 = 0;
            iStack_1be8 = 0;
            *(short *)(*(int *)(iVar11 + 0x9f0) + iVar13) = (short)uStack_1cdc;
            bVar6 = false;
            *(short *)(*(int *)(iVar11 + 0x9f4) + iVar13) = (short)uStack_1ce0;
            uStack_1cb0 = uStack_1cdc;
            ppcStack_1c30 = (code **)uStack_1cd8;
            uStack_1cbc = uStack_1ce0;
            uStack_1ac4 = uStack_1cd8;
            fn_83143EB0(iVar11,uVar10 - 0x18f0,lVar39,lVar38,*(undefined4 *)(iVar11 + 0x9f0),
                              *(undefined4 *)(iVar11 + 0x9f4),0,1);
            ppcStack_1c30 = apcStack_1b70;
            puStack_1bf4 = (uint *)aiStack_1c70;
            fn_82EC93E0(iVar11,uVar23 + 8,uVar33 + 8,(uVar10 - 0x13c0) + lVar41,
                              uVar10 - 0x18f0,iVar12,uVar30,param_2);
            if (*(int *)(iVar11 + 0x6d74) != 0) {
              fn_82F12368(iVar11,uVar23 + 8,ZEXT48(puStack_1c80) + 0x10,0x10,
                                *(undefined4 *)(iVar12 + 0x60),iVar12,iStack_1b4c,uVar10 - 0x1c50);
              uStack_1c50 = *(int *)(iVar12 + 0x70) * iStack_1bc4 + uStack_1c50;
            }
            if ((int)uStack_1c50 < (int)uStack_1cd8) {
              iStack_1c08 = iStack_1c08 + 1;
              uStack_1cdc = 0x4000;
              uStack_1ce0 = 0x4000;
              uStack_1cd8 = uStack_1c50;
            }
            else {
              iStack_1c74 = 0;
            }
            uVar40 = uStack_1cdc;
            uVar47 = uStack_1ce0;
            iVar24 = uVar28 + uStack_1cd8;
            *(short *)(*(int *)(iVar11 + 0x9f0) + iVar13 + 2) = (short)uStack_1cdc;
            *(short *)(*(int *)(iVar11 + 0x9f4) + iVar13 + 2) = (short)uStack_1ce0;
            uStack_1bc0 = uStack_1cdc;
            uStack_1c18 = uStack_1ce0;
            uStack_1ae8 = uStack_1cd8;
            if (((*(int *)(iVar11 + 0x6d88) != 0) && (uStack_1cb0 == uStack_1cdc)) &&
               (uStack_1cbc == uStack_1ce0)) {
              bVar5 = true;
              iStack_1bf8 = 1;
            }
            lVar38 = (param_2 & 0x7fffffff) * 2 + 1;
            fn_83143EB0(iVar11,uVar10 - 0x1940,lVar48,lVar38,*(undefined4 *)(iVar11 + 0x9f0),
                              *(undefined4 *)(iVar11 + 0x9f4),0,1);
            ppcStack_1c30 = (code **)aiStack_1c70;
            puStack_1bf4 = (uint *)uStack_1c98;
            uStack_1b58 = uStack_1cb8;
            fn_82EC93E0(iVar11,uVar23 + 0x80,
                              ((ulonglong)*(uint *)(iVar11 + 0x564) & 0x1fffffff) * 8 +
                              (ulonglong)uStack_1cb8,(uVar10 - 0x1240) + lVar41,uVar10 - 0x1940,
                              iVar12,uVar30,param_2);
            if (*(int *)(iVar11 + 0x6d74) != 0) {
              iVar13 = iStack_1af0;
              if (((iStack_1b4c != 0) && (iVar13 = iStack_1b4c, iStack_1af0 != 0)) &&
                 (uVar28 = iStack_1aec - iStack_1b4c >> 0x1f,
                 uVar31 = iStack_1aec - iStack_1af0 >> 0x1f,
                 (int)((iStack_1aec - iStack_1b4c ^ uVar28) - uVar28) <
                 (int)((iStack_1aec - iStack_1af0 ^ uVar31) - uVar31))) {
                iVar13 = iStack_1af0;
              }
              fn_82F12368(iVar11,uVar23 + 0x80,ZEXT48(puStack_1c80) + 0x100,0x10,
                                *(undefined4 *)(iVar12 + 0x60),iVar12,iVar13,uVar10 - 0x1c84);
              uStack_1c84 = *(int *)(iVar12 + 0x70) * iStack_1bc4 + uStack_1c84;
            }
            if ((int)uStack_1c84 < (int)uStack_1cd8) {
              iStack_1c08 = iStack_1c08 + 1;
              uStack_1cdc = 0x4000;
              uStack_1ce0 = 0x4000;
              uStack_1cd8 = uStack_1c84;
            }
            else {
              iStack_1b14 = 0;
            }
            uVar31 = uStack_1cdc;
            uVar28 = uStack_1ce0;
            iVar24 = iVar24 + uStack_1cd8;
            lVar48 = ((ulonglong)uStack_1bb8 & 0x7fffffff) << 1;
            iVar13 = (int)lVar48;
            *(short *)(*(int *)(iVar11 + 0x9f0) + iVar13) = (short)uStack_1cdc;
            *(short *)(*(int *)(iVar11 + 0x9f4) + iVar13) = (short)uStack_1ce0;
            uStack_1c0c = uStack_1cdc;
            aiStack_1c28[2] = uStack_1ce0;
            uStack_1b58 = uStack_1cd8;
            if (*(int *)(iVar11 + 0x6d88) != 0) {
              if ((iStack_1bf8 != 0) &&
                 ((uStack_1cb0 != uStack_1cdc || (uStack_1cbc != uStack_1ce0)))) {
                iStack_1bf8 = 0;
              }
              if ((uStack_1cb0 == uStack_1cdc) && (uStack_1cbc == uStack_1ce0)) {
                bVar6 = true;
                iStack_1be8 = 1;
              }
            }
            fn_83143EB0(iVar11,uVar10 - 0x1890,lVar39,lVar38,*(undefined4 *)(iVar11 + 0x9f0),
                              *(undefined4 *)(iVar11 + 0x9f4),0,1);
            puStack_1bf4 = &uStack_1ce0;
            ppcStack_1c30 = (code **)uStack_1c8c;
            lStack_1b40 = lVar48;
            fn_82EC93E0(iVar11,uVar23 + 0x88,
                              ((ulonglong)*(uint *)(iVar11 + 0x564) + 1 & 0x1fffffff) * 8 +
                              (ulonglong)uStack_1cb8,(uVar10 - 0x10c0) + lVar41,uVar10 - 0x1890,
                              iVar12,uVar30,param_2);
            lVar48 = lStack_1b40;
            if (*(int *)(iVar11 + 0x6d74) != 0) {
              iVar13 = iStack_1b14;
              if ((iStack_1c74 != 0) &&
                 ((iStack_1b14 == 0 ||
                  (uVar43 = iStack_1b4c - iStack_1c74 >> 0x1f,
                  uVar3 = iStack_1b4c - iStack_1b14 >> 0x1f,
                  (int)((iStack_1b4c - iStack_1b14 ^ uVar3) - uVar3) <=
                  (int)((iStack_1b4c - iStack_1c74 ^ uVar43) - uVar43))))) {
                iVar13 = iStack_1c74;
              }
              fn_82F12368(iVar11,uVar23 + 0x88,ZEXT48(puStack_1c80) + 0x110,0x10,
                                *(undefined4 *)(iVar12 + 0x60),iVar12,iVar13,uVar10 - 0x1c34);
              uStack_1c34 = *(int *)(iVar12 + 0x70) * iStack_1bc4 + uStack_1c34;
            }
            if ((int)uStack_1c34 < (int)uStack_1cd8) {
              iStack_1c08 = iStack_1c08 + 1;
              uStack_1cdc = 0x4000;
              uStack_1ce0 = 0x4000;
              uStack_1cd8 = uStack_1c34;
            }
            else {
              iStack_1c3c = 0;
            }
            uVar3 = uStack_1cdc;
            uVar43 = uStack_1ce0;
            sVar26 = (short)uStack_1cdc;
            *(short *)(*(int *)(iVar11 + 0x9f0) + (int)lVar48 + 2) = sVar26;
            sVar22 = (short)uStack_1ce0;
            *(short *)(*(int *)(iVar11 + 0x9f4) + (int)lVar48 + 2) = sVar22;
            uStack_1b24 = uStack_1cdc;
            ppcStack_1c30 = (code **)uStack_1ce0;
            puStack_1bf4 = (uint *)uStack_1cd8;
            if (*(int *)(iVar11 + 0x6d88) != 0) {
              if ((iStack_1bf8 != 0) &&
                 ((uStack_1cb0 != uStack_1cdc || (uStack_1cbc != uStack_1ce0)))) {
                iStack_1bf8 = 0;
              }
              if ((bVar5) && ((uVar31 != uStack_1cdc || (uVar28 != uStack_1ce0)))) {
                bVar5 = false;
              }
              if ((bVar6) && ((uVar40 != uStack_1cdc || (uVar47 != uStack_1ce0)))) {
                iStack_1be8 = 0;
              }
            }
            iVar13 = iVar24 + uStack_1cd8 + *(int *)(iVar11 + 0x4b20);
            iStack_1cc8 = iVar13;
            if (*(int *)(iVar12 + 0x94) != 0) {
              uStack_19cc = uVar40;
              uStack_19dc = uVar47;
              uStack_19c8 = uVar31;
              uStack_19d0 = uStack_1cb0;
              uStack_19e0 = uStack_1cbc;
              uStack_19d8 = uVar28;
              uStack_19c4 = uStack_1cdc;
              uStack_19d4 = uStack_1ce0;
              fn_82EAA320(iVar11,uVar10 - 0x19d0,uVar10 - 0x19e0,uVar10 - 0x1c00,
                                uVar10 - 0x1bac,0);
              if (iStack_1c00 == 0x4000) {
                iStack_1cc8 = iVar13 + iStack_1bbc + iStack_1bb4;
              }
              else {
                fn_82F26D38(iVar11,uVar30,param_2,uVar10 - 0x1c00,uVar10 - 0x1bac);
                if (*(int *)(iVar11 + 0x6d74) == 0) {
                  if ((*(uint *)(iVar11 + 0x6dc4) & 1) != 0) {
                    uVar33 = ZEXT48(puStack_1c80);
                    fn_82F26F98(iVar11,iStack_1c04,*(undefined4 *)(iVar11 + 0x568),
                                      uVar33 + 0x100,8,iStack_1c00,uStack_1bac,0);
                    iVar24 = (*apcStack_1b70[0])(puStack_1c1c,8,uVar33 + 0x100,8);
                    iVar13 = iVar24 + iVar13;
                    iStack_1cc8 = iVar13;
                  }
                  if ((*(uint *)(iVar11 + 0x6dc4) & 2) != 0) {
                    uVar33 = ZEXT48(puStack_1c80);
                    fn_82F26F98(iVar11,iStack_1bfc,*(undefined4 *)(iVar11 + 0x568),
                                      uVar33 + 0x100,8,iStack_1c00,uStack_1bac,0);
                    iStack_1cc8 = (*apcStack_1b70[0])(uStack_1c14,8,uVar33 + 0x100,8);
                    iStack_1cc8 = iStack_1cc8 + iVar13;
                  }
                }
                else {
                  uVar28 = *(uint *)(iVar11 + 0x6db8);
                  iStack_1ad4 = 0;
                  iStack_1be0 = 0;
                  iStack_1cc8 = 0;
                  iStack_1adc = 0;
                  if (uVar28 == 0) {
LAB_82ecbfb0:
                    uVar20 = 0;
                  }
                  else if (((uVar28 & 1) == 0) && ((uVar28 & 2) == 0)) {
                    uVar20 = uStack_1c8c;
                    if (((uVar28 & 4) == 0) && ((uVar28 & 8) == 0)) goto LAB_82ecbfb0;
                  }
                  else {
                    uVar20 = 1;
                  }
                  fn_82EFE140(iVar11,uVar10 - 0x1b70,uVar20);
                  iVar24 = 0;
                  iVar14 = 0;
                  if ((*(uint *)(iVar11 + 0x6dc4) & 1) != 0) {
                    uVar33 = ZEXT48(puStack_1c80);
                    fn_82F26F98(iVar11,iStack_1c04,*(undefined4 *)(iVar11 + 0x568),
                                      uVar33 + 0x100,8,iStack_1c00,uStack_1bac,0);
                    fn_82E9AC18(iVar11,puStack_1c1c,8,uVar33 + 0x100,8,8,8,iVar12);
                    iVar24 = iStack_1cc8;
                    iVar14 = iStack_1be0;
                  }
                  if ((*(uint *)(iVar11 + 0x6dc4) & 2) != 0) {
                    uVar33 = ZEXT48(puStack_1c80);
                    fn_82F26F98(iVar11,iStack_1bfc,*(undefined4 *)(iVar11 + 0x568),
                                      uVar33 + 0x100,8,iStack_1c00,uStack_1bac,0);
                    fn_82E9AC18(iVar11,uStack_1c14,8,uVar33 + 0x100,8,8,8,iVar12);
                    iVar24 = iStack_1adc + iVar24;
                    iVar14 = iStack_1ad4 + iVar14;
                  }
                  iStack_1cc8 = *(int *)(iVar12 + 0x6c) * iVar24 + iVar14 + iVar13;
                }
              }
            }
            uVar40 = uStack_1c38;
            uVar47 = uStack_1c5c;
            uVar28 = uStack_1cb0;
            iVar14 = iStack_1cb4;
            iVar24 = iStack_1cc0;
            iVar13 = iStack_1cc4;
            if (*(int *)(iVar11 + 0x5264) != 0) {
              uVar33 = (ulonglong)uStack_1c38;
              iVar12 = *(int *)(iVar11 + 0x9f0);
              iVar17 = *(int *)(iVar11 + 0x9f4);
              uStack_1894 = uStack_1c50 + uStack_1c34;
              uVar29 = uStack_1c84 + uStack_1c34;
              uVar23 = (((longlong)(int)*(uint *)(iVar11 + 0x2d0) * (longlong)(int)uStack_1c94 &
                        0x7fffffffU) * 2 + uVar33 & 0x7fffffff) * 2;
              uVar31 = uStack_1c78 + uStack_1c84;
              uVar30 = ((ulonglong)*(uint *)(iVar11 + 0x2d0) & 0x7fffffff) * 2 + uVar23;
              iStack_19c0 = (int)uVar23;
              iStack_19bc = iStack_19c0 + 1;
              uStack_19b8 = (undefined4)uVar30;
              iVar7 = iStack_19bc * 2;
              uStack_19b4 = (undefined4)(uVar30 + 1);
              iVar18 = (int)((uVar23 & 0x7fffffff) << 1);
              sVar27 = *(short *)(iVar18 + iVar12);
              uVar21 = *(undefined2 *)(iVar18 + iVar17);
              uVar46 = uStack_1c78 + uStack_1c50;
              uStack_1b36 = *(undefined2 *)(iVar7 + iVar17);
              iVar15 = (int)((uVar30 & 0x7fffffff) << 1);
              uStack_1b34 = *(undefined2 *)(iVar15 + iVar17);
              iVar16 = (int)((uVar30 + 1 & 0x7fffffff) << 1);
              uStack_1a32 = *(undefined2 *)(iVar16 + iVar12);
              uStack_1b32 = *(undefined2 *)(iVar16 + iVar17);
              uVar25 = *(undefined2 *)(iVar15 + iVar12);
              uVar2 = *(undefined2 *)(iVar7 + iVar12);
              if ((*(int *)(iVar11 + 0x6d88) == 0) || (!bVar5)) {
                if (*(int *)(iVar11 + 0x6d98) == 0) {
                  iStack_1b98 = (int)sVar27;
                  lStack_1b40 = CONCAT44(&iStack_1b88,(((U64)(lStack_1b40) >> 32) & 0xFFFFFFFF));
                  uStack_1af8 = CONCAT44(iStack_1ca0,(((U64)(uStack_1af8) >> 32) & 0xFFFFFFFF));
                  uVar30 = (ulonglong)uStack_1cb8;
                  iStack_1b88 = (int)*(short *)(iVar18 + iVar17);
                  iStack_1b94 = (int)*(short *)(iVar7 + iVar12);
                  iStack_1b84 = (int)*(short *)(iVar7 + iVar17);
                  fn_82E97140(iVar11,puStack_1c7c,uVar30,uVar10 - 0x19b0,iStack_1cc4,uVar33,
                                    uStack_1c94,iStack_1ca8);
                  uVar28 = uStack_1cd8;
                  if ((int)uVar46 < (int)uStack_1cd8) {
                    uStack_1ce0 = 0x4000;
                    uStack_1cdc = 0x4000;
                    uVar28 = uVar46;
                  }
                  sStack_1c44 = (short)uStack_1cdc;
                  *(short *)(*(int *)(iVar11 + 0x9f0) + iVar18) = sStack_1c44;
                  sStack_1c58 = (short)uStack_1ce0;
                  *(short *)(*(int *)(iVar11 + 0x9f4) + iVar18) = sStack_1c58;
                  *(short *)(*(int *)(iVar11 + 0x9f0) + iVar7) = sStack_1c44;
                  *(short *)(*(int *)(iVar11 + 0x9f4) + iVar7) = sStack_1c58;
                  iVar24 = *(int *)(iVar11 + 0x9f0);
                  iVar12 = *(int *)(iVar11 + 0x9f4);
                  iStack_1b98 = (int)*(short *)(iVar15 + iVar24);
                  iStack_1b88 = (int)*(short *)(iVar15 + iVar12);
                  iStack_1b94 = (int)*(short *)(iVar16 + iVar24);
                  iStack_1b84 = (int)*(short *)(iVar16 + iVar12);
                  fn_83143EB0(iVar11,uVar10 - 0x1a30,uVar40 << 1,lVar38,iVar24,iVar12,0,1);
                  uStack_1af8 = 0x4000;
                  lStack_1b40 = CONCAT44(&iStack_1b88,(((U64)(lStack_1b40) >> 32) & 0xFFFFFFFF));
                  fn_82E97140(iVar11,uStack_1b20,
                                    ((ulonglong)*(uint *)(iVar11 + 0x564) & 0x1fffffff) * 8 + uVar30
                                    ,uVar10 - 0x1a30,iVar13,uVar33,uStack_1c94,iStack_1ca8);
                  uVar47 = uStack_1cd8;
                  if ((int)uVar29 < (int)uStack_1cd8) {
                    uStack_1ce0 = (uint)uStack_1af8;
                    uVar47 = uVar29;
                    uStack_1cdc = uStack_1ce0;
                  }
                  aiStack_1c28[0] = uVar28 + uVar47 + *(int *)(iVar11 + 0x4b20);
                  *(short *)(*(int *)(iVar11 + 0x9f0) + iVar18) = sVar27;
                  sStack_1c42 = (short)uStack_1cdc;
                  sStack_1c56 = (short)uStack_1ce0;
                  *(undefined2 *)(*(int *)(iVar11 + 0x9f4) + iVar18) = uVar21;
                  *(undefined2 *)(*(int *)(iVar11 + 0x9f0) + iVar7) = uVar2;
                  *(undefined2 *)(*(int *)(iVar11 + 0x9f4) + iVar7) = uStack_1b36;
                  *(undefined2 *)(*(int *)(iVar11 + 0x9f0) + iVar15) = uVar25;
                  *(undefined2 *)(*(int *)(iVar11 + 0x9f4) + iVar15) = uStack_1b34;
                  *(undefined2 *)(*(int *)(iVar11 + 0x9f0) + iVar16) = uStack_1a32;
                  *(undefined2 *)(*(int *)(iVar11 + 0x9f4) + iVar16) = uStack_1b32;
                }
                else {
                  uVar30 = (ulonglong)uStack_1cb8;
                  uVar47 = uStack_1c50;
                  if (uStack_1cb0 != 0x4000) {
                    fn_82EAA150(iVar11,ZEXT48(puStack_1c7c) + 8,uVar30 + 8,iStack_1cc4,uVar33,
                                      uStack_1c94,uStack_1cb0,uStack_1cbc);
                    uVar47 = uStack_1bd4;
                  }
                  uVar40 = uStack_1bc0;
                  uVar47 = uVar47 + uStack_1ac4;
                  uVar29 = uStack_1c78;
                  uStack_1bd4 = uVar47;
                  if (uStack_1bc0 != 0x4000) {
                    fn_82EAA150(iVar11,puStack_1c7c,uVar30,iVar13,uVar33,uStack_1c94,
                                      uStack_1bc0,uStack_1c18);
                    uVar29 = uStack_1b80;
                  }
                  uVar46 = uStack_1c0c;
                  uStack_1b80 = uVar29 + uStack_1ae8;
                  if ((int)uVar47 < (int)uStack_1b80) {
                    sStack_1c44 = (short)uVar28;
                    sStack_1c58 = (short)uStack_1cbc;
                  }
                  else {
                    sStack_1c44 = (short)uVar40;
                    sStack_1c58 = (short)uStack_1c18;
                    uVar47 = uStack_1b80;
                  }
                  uVar28 = uStack_1c34;
                  if (uStack_1c0c != 0x4000) {
                    fn_82EAA150(iVar11,(((U64)(uStack_1af8) >> 0) & 0xFFFFFFFF),
                                      ((ulonglong)*(uint *)(iVar11 + 0x564) + 1 & 0x1fffffff) * 8 +
                                      uVar30,iVar13,uVar33,uStack_1c94,uStack_1c0c,aiStack_1c28[2]);
                    uVar28 = uStack_1bd4;
                  }
                  uVar28 = uVar28 + uStack_1b58;
                  uVar40 = uStack_1c84;
                  uStack_1bd4 = uVar28;
                  if (uVar3 != 0x4000) {
                    fn_82EAA150(iVar11,uStack_1b20,
                                      ((ulonglong)*(uint *)(iVar11 + 0x564) & 0x1fffffff) * 8 +
                                      uVar30,iVar13,uVar33,uStack_1c94,uVar3,uVar43);
                    uVar40 = uStack_1b80;
                  }
                  uStack_1b80 = uVar40 + (int)puStack_1bf4;
                  uVar40 = uStack_1b80;
                  sStack_1c56 = sVar22;
                  sStack_1c42 = sVar26;
                  if ((int)uVar28 < (int)uStack_1b80) {
                    uVar40 = uVar28;
                    sStack_1c56 = (short)aiStack_1c28[2];
                    sStack_1c42 = (short)uVar46;
                  }
                  aiStack_1c28[0] = uVar40 + uVar47 + *(int *)(iVar11 + 0x4b20);
                }
                uVar23 = (ulonglong)uStack_19a8;
                uVar33 = (ulonglong)uStack_19a4;
                uVar30 = (ulonglong)uStack_1c5c;
              }
              else {
                uVar32 = (ulonglong)uStack_1cb0;
                uVar30 = (ulonglong)uStack_1c5c;
                uVar33 = (ulonglong)uStack_19a4;
                uVar23 = (ulonglong)uStack_19a8;
                if (uStack_1cb0 != 0x4000) {
                  if (iStack_19b0 == 0) {
                    if (*(int *)(iVar11 + 0x6d74) == 0) {
                      uVar37 = uStack_1cbc - uVar33;
                      uVar34 = (ulonglong)((int)(uVar32 - uVar23) >> 0x1f);
                      uVar35 = (ulonglong)((int)uVar37 >> 0x1f);
                      uVar34 = (uVar32 - uVar23 ^ uVar34) - uVar34;
                      uVar35 = (uVar37 ^ uVar35) - uVar35;
                      if ((0x9e < (int)uVar34) || (0x9e < (int)uVar35)) goto LAB_82ecc5fc;
                      iVar13 = aiStack_1c70
                               [*(int *)(puStack_1ccc + (int)((uVar35 & 0xffffffff) << 2))] +
                               aiStack_1c70
                               [*(int *)(puStack_1ccc + (int)((uVar34 & 0xffffffff) << 2))];
                      goto LAB_82ecc604;
                    }
                    lVar48 = uVar32 - uVar23;
                    lVar38 = uStack_1cbc - uVar33;
                    if (iStack_1cb4 == iStack_1cc0) {
                      iVar13 = fn_82E9B140(iVar11,lVar48,lVar38,iStack_1cb4,0);
                      iVar13 = iVar13 << 1;
                    }
                    else {
                      iVar13 = fn_82E9B140(iVar11,lVar48,lVar38,iStack_1cb4,0);
                      iVar12 = fn_82E9B140(iVar11,lVar48,lVar38,iVar24,0);
                      iVar13 = iVar13 + iVar12;
                    }
                    if ((iVar14 != 0) || (uVar45 = 0, iVar24 != 0)) {
                      uVar45 = 1;
                    }
                    iVar24 = fn_82E9B140(iVar11,lVar48,lVar38,uVar45,0);
                    uVar46 = (iVar24 - iVar13) * *(int *)(iStack_1cc4 + 0x70) + iStack_1cc8;
                  }
                  else {
                    uVar42 = uVar32 - uVar23;
                    uVar44 = uStack_1cbc - uVar33;
                    uVar50 = (ulonglong)uStack_1cbc - (ulonglong)uStack_199c;
                    uVar36 = (ulonglong)((int)uVar44 >> 0x1f);
                    uVar32 = uVar32 - uStack_19a0;
                    uVar34 = (ulonglong)((int)uVar42 >> 0x1f);
                    uVar37 = (ulonglong)((int)uVar50 >> 0x1f);
                    uVar35 = (ulonglong)((int)uVar32 >> 0x1f);
                    uVar34 = (uVar42 ^ uVar34) - uVar34;
                    uVar36 = (uVar44 ^ uVar36) - uVar36;
                    uVar37 = (uVar50 ^ uVar37) - uVar37;
                    uVar35 = (uVar32 ^ uVar35) - uVar35;
                    iVar17 = (int)uVar34;
                    iVar4 = (int)uVar36;
                    iVar13 = (int)uVar35;
                    iVar12 = (int)uVar37;
                    if (iVar17 + iVar4 < iVar13 + iVar12) {
                      if (*(int *)(iVar11 + 0x6d74) == 0) {
                        if ((iVar17 < 0x9f) && (iVar4 < 0x9f)) {
                          iVar13 = aiStack_1c70
                                   [*(int *)(puStack_1ccc + (int)((uVar36 & 0xffffffff) << 2))] +
                                   aiStack_1c70
                                   [*(int *)(puStack_1ccc + (int)((uVar34 & 0xffffffff) << 2))];
                        }
                        else {
LAB_82ecc5fc:
                          iVar13 = uStack_1c5c << 1;
                        }
LAB_82ecc604:
                        uVar46 = iStack_1cc8 - iVar13;
                      }
                      else {
                        if (iStack_1cb4 == iStack_1cc0) {
                          iVar13 = fn_82E9B140(iVar11,uVar42,uVar44,iStack_1cb4,0);
                          iVar13 = iVar13 << 1;
                        }
                        else {
                          iVar13 = fn_82E9B140(iVar11,uVar42,uVar44,iStack_1cb4,0);
                          iVar12 = fn_82E9B140(iVar11,uVar42,uVar44,iVar24,0);
                          iVar13 = iVar13 + iVar12;
                        }
                        if ((iVar14 != 0) || (uVar45 = 0, iVar24 != 0)) {
                          uVar45 = 1;
                        }
                        iVar24 = fn_82E9B140(iVar11,uVar42,uVar44,uVar45,0);
                        uVar46 = (iVar24 - iVar13) * *(int *)(iStack_1cc4 + 0x70) + iStack_1cc8;
                      }
                    }
                    else {
                      if (*(int *)(iVar11 + 0x6d74) == 0) {
                        if ((0x9e < iVar13) || (0x9e < iVar12)) goto LAB_82ecc5fc;
                        iVar13 = aiStack_1c70
                                 [*(int *)(puStack_1ccc + (int)((uVar37 & 0xffffffff) << 2))] +
                                 aiStack_1c70
                                 [*(int *)(puStack_1ccc + (int)((uVar35 & 0xffffffff) << 2))];
                        goto LAB_82ecc604;
                      }
                      if (iStack_1cb4 == iStack_1cc0) {
                        iVar13 = fn_82E9B140(iVar11,uVar32,uVar50,iStack_1cb4,0);
                        iVar13 = iVar13 << 1;
                      }
                      else {
                        iVar13 = fn_82E9B140(iVar11,uVar32,uVar50,iStack_1cb4,0);
                        iVar12 = fn_82E9B140(iVar11,uVar32,uVar50,iVar24,0);
                        iVar13 = iVar13 + iVar12;
                      }
                      if ((iVar14 != 0) || (uVar45 = 0, iVar24 != 0)) {
                        uVar45 = 1;
                      }
                      iVar24 = fn_82E9B140(iVar11,uVar32,uVar50,uVar45,0);
                      uVar46 = (iVar24 - iVar13) * *(int *)(iStack_1cc4 + 0x70) + iStack_1cc8;
                    }
                  }
                }
                iVar13 = iStack_1cd0;
                if (uStack_1c0c == 0x4000) {
                  aiStack_1c28[0] = uVar46 + uStack_1c84 + uStack_1c34;
                }
                else {
                  if (iStack_1940 == 0) {
                    if (*(int *)(iVar11 + 0x6d74) == 0) {
                      uVar28 = (int)(uStack_1c0c - iStack_1938) >> 0x1f;
                      uVar40 = (int)(aiStack_1c28[2] - uStack_1934) >> 0x1f;
                      iVar24 = (uStack_1c0c - iStack_1938 ^ uVar28) - uVar28;
                      iVar13 = (aiStack_1c28[2] - uStack_1934 ^ uVar40) - uVar40;
                      if ((0x9e < iVar24) || (0x9e < iVar13)) goto LAB_82ecc9cc;
                      aiStack_1c28[0] =
                           aiStack_1c70[*(int *)(puStack_1ccc + iVar13 * 4)] +
                           aiStack_1c70[*(int *)(puStack_1ccc + iVar24 * 4)];
                      goto LAB_82ecc9d0;
                    }
                    lVar48 = (ulonglong)(uint)aiStack_1c28[2] - (ulonglong)uStack_1934;
                    iVar24 = uStack_1c0c - iStack_1938;
                    if (iStack_1cd0 == iStack_1cd4) {
                      iVar12 = fn_82E9B140(iVar11,iVar24,lVar48,iStack_1cd0,0);
                      iVar12 = iVar12 << 1;
                    }
                    else {
                      iVar12 = fn_82E9B140(iVar11,iVar24,lVar48,iStack_1cd4,0);
                      iVar14 = fn_82E9B140(iVar11,iVar24,lVar48,iVar13,0);
                      iVar12 = iVar12 + iVar14;
                    }
                    if ((iVar13 != 0) || (uVar45 = 0, iStack_1cd4 != 0)) {
                      uVar45 = 1;
                    }
                    iVar13 = fn_82E9B140(iVar11,iVar24,lVar48,uVar45,0);
                    aiStack_1c28[0] = (iVar13 - iVar12) * *(int *)(iStack_1cc4 + 0x70) + uVar46;
                  }
                  else {
                    uVar34 = (ulonglong)(uint)aiStack_1c28[2] - (ulonglong)uStack_192c;
                    uVar43 = uStack_1c0c - iStack_1930;
                    uVar37 = (ulonglong)(uint)aiStack_1c28[2] - (ulonglong)uStack_1934;
                    uVar40 = uStack_1c0c - iStack_1938;
                    uVar35 = (ulonglong)((int)uVar34 >> 0x1f);
                    uVar32 = (ulonglong)((int)uVar37 >> 0x1f);
                    uVar28 = uVar40 ^ (int)uVar40 >> 0x1f;
                    lStack_1b40 = CONCAT44(uVar28,(((U64)(lStack_1b40) >> 32) & 0xFFFFFFFF));
                    uVar35 = (uVar34 ^ uVar35) - uVar35;
                    iVar14 = (uVar43 ^ (int)uVar43 >> 0x1f) - ((int)uVar43 >> 0x1f);
                    uVar32 = (uVar37 ^ uVar32) - uVar32;
                    iVar12 = uVar28 - ((int)uVar40 >> 0x1f);
                    iVar24 = (int)uVar35;
                    iVar13 = (int)uVar32;
                    if (iVar12 + iVar13 < iVar14 + iVar24) {
                      if (*(int *)(iVar11 + 0x6d74) == 0) {
                        if ((iVar12 < 0x9f) && (iVar13 < 0x9f)) {
                          aiStack_1c28[0] =
                               aiStack_1c70
                               [*(int *)(puStack_1ccc + (int)((uVar32 & 0xffffffff) << 2))] +
                               aiStack_1c70[*(int *)(puStack_1ccc + iVar12 * 4)];
                        }
                        else {
LAB_82ecc9cc:
                          aiStack_1c28[0] = uVar47 << 1;
                        }
LAB_82ecc9d0:
                        aiStack_1c28[0] = uVar46 - aiStack_1c28[0];
                      }
                      else {
                        if (iStack_1cd0 == iStack_1cd4) {
                          iVar13 = fn_82E9B140(iVar11,uVar40,uVar37,iStack_1cd0,0);
                          iVar13 = iVar13 << 1;
                        }
                        else {
                          iVar13 = fn_82E9B140(iVar11,uVar40,uVar37,iStack_1cd4,0);
                          iVar24 = fn_82E9B140(iVar11,uVar40,uVar37,iStack_1cd0,0);
                          iVar13 = iVar13 + iVar24;
                        }
                        if ((iStack_1cd0 != 0) || (uVar45 = 0, iStack_1cd4 != 0)) {
                          uVar45 = 1;
                        }
                        iVar24 = fn_82E9B140(iVar11,uVar40,uVar37,uVar45,0);
                        aiStack_1c28[0] = (iVar24 - iVar13) * *(int *)(iStack_1cc4 + 0x70) + uVar46;
                      }
                    }
                    else {
                      if (*(int *)(iVar11 + 0x6d74) == 0) {
                        if ((0x9e < iVar14) || (0x9e < iVar24)) goto LAB_82ecc9cc;
                        aiStack_1c28[0] =
                             aiStack_1c70
                             [*(int *)(puStack_1ccc + (int)((uVar35 & 0xffffffff) << 2))] +
                             aiStack_1c70[*(int *)(puStack_1ccc + iVar14 * 4)];
                        goto LAB_82ecc9d0;
                      }
                      if (iStack_1cd0 == iStack_1cd4) {
                        iVar13 = fn_82E9B140(iVar11,uVar43,uVar34,iStack_1cd0,0);
                        iVar13 = iVar13 << 1;
                      }
                      else {
                        iVar13 = fn_82E9B140(iVar11,uVar43,uVar34,iStack_1cd4,0);
                        iVar24 = fn_82E9B140(iVar11,uVar43,uVar34,iStack_1cd0,0);
                        iVar13 = iVar13 + iVar24;
                      }
                      if ((iStack_1cd0 != 0) || (uVar45 = 0, iStack_1cd4 != 0)) {
                        uVar45 = 1;
                      }
                      iVar24 = fn_82E9B140(iVar11,uVar43,uVar34,uVar45,0);
                      aiStack_1c28[0] = (iVar24 - iVar13) * *(int *)(iStack_1cc4 + 0x70) + uVar46;
                    }
                  }
                  sStack_1c44 = (short)uStack_1cb0;
                  sStack_1c58 = (short)uStack_1cbc;
                  sStack_1c42 = (short)uStack_1c0c;
                  sStack_1c56 = (short)aiStack_1c28[2];
                }
              }
              uVar47 = uStack_1c38;
              uVar28 = uStack_1c94;
              if ((*(int *)(iVar11 + 0x6d88) == 0) || (iStack_1be8 == 0)) {
                if (*(int *)(iVar11 + 0x6d98) == 0) {
                  iVar13 = *(int *)(iVar11 + 0x9f0);
                  iVar24 = *(int *)(iVar11 + 0x9f4);
                  iStack_1b98 = (int)*(short *)(iVar18 + iVar13);
                  iStack_1b88 = (int)*(short *)(iVar18 + iVar24);
                  iStack_1b94 = (int)*(short *)(iVar15 + iVar13);
                  iStack_1b84 = (int)*(short *)(iVar15 + iVar24);
                  fn_83143EB0(iVar11,uVar10 - 0x1a30,uStack_1c38 << 1,uStack_1c94 << 1,iVar13,
                                    iVar24,0,1);
                  fn_82E97140(iVar11,puStack_1c7c,uStack_1cb8,uVar10 - 0x1a30,iStack_1cc4,
                                    uVar47,uVar28,iStack_1ca8);
                  uVar28 = uStack_1c94;
                  uVar47 = uStack_1cd8;
                  if ((int)uVar31 < (int)uStack_1cd8) {
                    uStack_1ce0 = 0x4000;
                    uStack_1cdc = 0x4000;
                    uVar47 = uVar31;
                  }
                  lVar48 = uVar10 - 0x19c8;
                  sStack_1c48 = (short)uStack_1cdc;
                  lVar38 = 2;
                  sStack_1c40 = (short)uStack_1ce0;
                  do {
                    lVar48 = lVar48 + 8;
                    iVar13 = *(int *)lVar48 * 2;
                    *(short *)(iVar13 + *(int *)(iVar11 + 0x9f0)) = sStack_1c48;
                    *(short *)(*(int *)(iVar11 + 0x9f4) + iVar13) = sStack_1c40;
                    lVar38 = lVar38 + -1;
                  } while (lVar38 != 0);
                  fn_83143EB0(iVar11,uVar10 - 0x1a30,uStack_1a58,uStack_1c94 << 1,
                                    *(undefined4 *)(iVar11 + 0x9f0),*(undefined4 *)(iVar11 + 0x9f4),
                                    0,1);
                  iStack_1b98 = (int)*(short *)(iVar7 + *(int *)(iVar11 + 0x9f0));
                  iStack_1b88 = (int)*(short *)(iVar7 + *(int *)(iVar11 + 0x9f4));
                  iStack_1b94 = (int)*(short *)(iVar16 + *(int *)(iVar11 + 0x9f0));
                  iStack_1b84 = (int)*(short *)(iVar16 + *(int *)(iVar11 + 0x9f4));
                  fn_82E97140(iVar11,ZEXT48(puStack_1c7c) + 8,(ulonglong)uStack_1cb8 + 8,
                                    uVar10 - 0x1a30,iStack_1cc4,uStack_1c38,uVar28,iStack_1ca8);
                  uVar28 = uStack_1cd8;
                  if ((int)uStack_1894 < (int)uStack_1cd8) {
                    uStack_1ce0 = 0x4000;
                    uStack_1cdc = 0x4000;
                    uVar28 = uStack_1894;
                  }
                  *(short *)(*(int *)(iVar11 + 0x9f0) + iVar18) = sVar27;
                  sStack_1c46 = (short)uStack_1cdc;
                  sStack_1c3e = (short)uStack_1ce0;
                  *(undefined2 *)(*(int *)(iVar11 + 0x9f4) + iVar18) = uVar21;
                  *(undefined2 *)(*(int *)(iVar11 + 0x9f0) + iVar7) = uVar2;
                  *(undefined2 *)(*(int *)(iVar11 + 0x9f4) + iVar7) = uStack_1b36;
                  *(undefined2 *)(*(int *)(iVar11 + 0x9f0) + iVar15) = uVar25;
                  *(undefined2 *)(*(int *)(iVar11 + 0x9f4) + iVar15) = uStack_1b34;
                  *(undefined2 *)(*(int *)(iVar11 + 0x9f0) + iVar16) = uStack_1a32;
                  *(undefined2 *)(*(int *)(iVar11 + 0x9f4) + iVar16) = uStack_1b32;
                  aiStack_1c28[1] = uVar47 + uVar28 + *(int *)(iVar11 + 0x4b20);
                }
                else {
                  uVar28 = uStack_1c84;
                  if (uStack_1cb0 != 0x4000) {
                    fn_82EAA150(iVar11,ZEXT48(puStack_1c7c) + 0x80,
                                      ((ulonglong)*(uint *)(iVar11 + 0x564) & 0x1fffffff) * 8 +
                                      (ulonglong)uStack_1cb8,iStack_1cc4,uStack_1c38,uStack_1c94,
                                      uStack_1cb0,uStack_1cbc);
                    uVar28 = uStack_1bc8;
                  }
                  uVar28 = uVar28 + uStack_1ac4;
                  uVar47 = uStack_1c78;
                  uStack_1bc8 = uVar28;
                  if (uStack_1c0c != 0x4000) {
                    fn_82EAA150(iVar11,puStack_1c7c,uStack_1cb8,iStack_1cc4,uStack_1c38,
                                      uStack_1c94,uStack_1c0c,aiStack_1c28[2]);
                    uVar47 = uStack_1ba8;
                  }
                  uStack_1ba8 = uVar47 + uStack_1b58;
                  if ((int)uVar28 < (int)uStack_1ba8) {
                    sStack_1c48 = (short)uStack_1cb0;
                    sStack_1c40 = (short)uStack_1cbc;
                  }
                  else {
                    sStack_1c48 = (short)uStack_1c0c;
                    sStack_1c40 = (short)aiStack_1c28[2];
                    uVar28 = uStack_1ba8;
                  }
                  uVar47 = uStack_1c34;
                  if (uStack_1bc0 != 0x4000) {
                    fn_82EAA150(iVar11,ZEXT48(puStack_1c7c) + 0x88,
                                      ((ulonglong)*(uint *)(iVar11 + 0x564) + 1 & 0x1fffffff) * 8 +
                                      (ulonglong)uStack_1cb8,iStack_1cc4,uStack_1c38,uStack_1c94,
                                      uStack_1bc0,uStack_1c18);
                    uVar47 = uStack_1bc8;
                  }
                  uVar47 = uVar47 + uStack_1ae8;
                  uVar40 = uStack_1c50;
                  uStack_1bc8 = uVar47;
                  if (uStack_1b24 != 0x4000) {
                    fn_82EAA150(iVar11,ZEXT48(puStack_1c7c) + 8,(ulonglong)uStack_1cb8 + 8,
                                      iStack_1cc4,uStack_1c38,uStack_1c94,uStack_1b24,ppcStack_1c30)
                    ;
                    uVar40 = uStack_1ba8;
                  }
                  uStack_1ba8 = uVar40 + (int)puStack_1bf4;
                  if ((int)uVar47 < (int)uStack_1ba8) {
                    sStack_1c46 = (short)uStack_1bc0;
                    sStack_1c3e = (short)uStack_1c18;
                  }
                  else {
                    sStack_1c46 = (short)uStack_1b24;
                    sStack_1c3e = (short)ppcStack_1c30;
                    uVar47 = uStack_1ba8;
                  }
                  aiStack_1c28[1] = uVar47 + uVar28 + *(int *)(iVar11 + 0x4b20);
                }
              }
              else {
                uVar32 = (ulonglong)uStack_1cb0;
                if (uStack_1cb0 == 0x4000) {
                  iVar13 = uStack_1c78 + uStack_1c84;
                }
                else if (iStack_19b0 == 0) {
                  if (*(int *)(iVar11 + 0x6d74) == 0) {
                    uVar37 = (ulonglong)((int)(uVar32 - uVar23) >> 0x1f);
                    uVar35 = (ulonglong)((int)(uStack_1cbc - uVar33) >> 0x1f);
                    uVar37 = (uVar32 - uVar23 ^ uVar37) - uVar37;
                    uVar35 = (uStack_1cbc - uVar33 ^ uVar35) - uVar35;
                    if ((0x9e < (int)uVar37) || (0x9e < (int)uVar35)) goto LAB_82ecd270;
                    iVar13 = aiStack_1c70
                             [*(int *)(puStack_1ccc + (int)((uVar35 & 0xffffffff) << 2))] +
                             aiStack_1c70
                             [*(int *)(puStack_1ccc + (int)((uVar37 & 0xffffffff) << 2))];
                    goto LAB_82ecd274;
                  }
                  lVar38 = uStack_1cbc - uVar33;
                  lVar48 = uStack_1cb0 - uVar23;
                  if (iStack_1cb4 == iStack_1cd0) {
                    iVar13 = fn_82E9B140(iVar11,lVar48,lVar38,iStack_1cb4,0);
                    iVar13 = iVar13 << 1;
                  }
                  else {
                    iVar13 = fn_82E9B140(iVar11,lVar48,lVar38,iStack_1cb4,0);
                    iVar24 = fn_82E9B140(iVar11,lVar48,lVar38,iStack_1cd0,0);
                    iVar13 = iVar13 + iVar24;
                  }
                  if ((iStack_1cb4 != 0) || (uVar45 = 0, iStack_1cd0 != 0)) {
                    uVar45 = 1;
                  }
                  iVar24 = fn_82E9B140(iVar11,lVar48,lVar38,uVar45,0);
                  iVar13 = (iVar24 - iVar13) * *(int *)(iStack_1cc4 + 0x70) + iStack_1cc8;
                }
                else {
                  uVar23 = uVar32 - uVar23;
                  uVar33 = uStack_1cbc - uVar33;
                  uVar50 = (ulonglong)uStack_1cbc - (ulonglong)uStack_199c;
                  uVar36 = (ulonglong)((int)uVar33 >> 0x1f);
                  uVar32 = uVar32 - uStack_19a0;
                  uVar34 = (ulonglong)((int)uVar23 >> 0x1f);
                  uVar37 = (ulonglong)((int)uVar50 >> 0x1f);
                  uVar35 = (ulonglong)((int)uVar32 >> 0x1f);
                  uVar34 = (uVar23 ^ uVar34) - uVar34;
                  uVar36 = (uVar33 ^ uVar36) - uVar36;
                  uVar37 = (uVar50 ^ uVar37) - uVar37;
                  uVar35 = (uVar32 ^ uVar35) - uVar35;
                  iVar12 = (int)uVar34;
                  iVar14 = (int)uVar36;
                  iVar13 = (int)uVar35;
                  iVar24 = (int)uVar37;
                  if (iVar12 + iVar14 < iVar13 + iVar24) {
                    if (*(int *)(iVar11 + 0x6d74) == 0) {
                      if ((iVar12 < 0x9f) && (iVar14 < 0x9f)) {
                        iVar13 = aiStack_1c70
                                 [*(int *)(puStack_1ccc + (int)((uVar36 & 0xffffffff) << 2))] +
                                 aiStack_1c70
                                 [*(int *)(puStack_1ccc + (int)((uVar34 & 0xffffffff) << 2))];
                      }
                      else {
LAB_82ecd270:
                        iVar13 = (int)(uVar30 << 1);
                      }
LAB_82ecd274:
                      iVar13 = iStack_1cc8 - iVar13;
                    }
                    else {
                      if (iStack_1cb4 == iStack_1cd0) {
                        iVar13 = fn_82E9B140(iVar11,uVar23,uVar33,iStack_1cb4,0);
                        iVar13 = iVar13 << 1;
                      }
                      else {
                        iVar13 = fn_82E9B140(iVar11,uVar23,uVar33,iStack_1cb4,0);
                        iVar24 = fn_82E9B140(iVar11,uVar23,uVar33,iStack_1cd0,0);
                        iVar13 = iVar13 + iVar24;
                      }
                      if ((iStack_1cb4 != 0) || (uVar45 = 0, iStack_1cd0 != 0)) {
                        uVar45 = 1;
                      }
                      iVar24 = fn_82E9B140(iVar11,uVar23,uVar33,uVar45,0);
                      iVar13 = (iVar24 - iVar13) * *(int *)(iStack_1cc4 + 0x70) + iStack_1cc8;
                    }
                  }
                  else {
                    if (*(int *)(iVar11 + 0x6d74) == 0) {
                      if ((0x9e < iVar13) || (0x9e < iVar24)) goto LAB_82ecd270;
                      iVar13 = aiStack_1c70
                               [*(int *)(puStack_1ccc + (int)((uVar37 & 0xffffffff) << 2))] +
                               aiStack_1c70
                               [*(int *)(puStack_1ccc + (int)((uVar35 & 0xffffffff) << 2))];
                      goto LAB_82ecd274;
                    }
                    if (iStack_1cb4 == iStack_1cd0) {
                      iVar13 = fn_82E9B140(iVar11,uVar32,uVar50,iStack_1cb4,0);
                      iVar13 = iVar13 << 1;
                    }
                    else {
                      iVar13 = fn_82E9B140(iVar11,uVar32,uVar50,iStack_1cb4,0);
                      iVar24 = fn_82E9B140(iVar11,uVar32,uVar50,iStack_1cd0,0);
                      iVar13 = iVar13 + iVar24;
                    }
                    if ((iStack_1cb4 != 0) || (uVar45 = 0, iStack_1cd0 != 0)) {
                      uVar45 = 1;
                    }
                    iVar24 = fn_82E9B140(iVar11,uVar32,uVar50,uVar45,0);
                    iVar13 = (iVar24 - iVar13) * *(int *)(iStack_1cc4 + 0x70) + iStack_1cc8;
                  }
                }
                uVar47 = uStack_1bc0;
                uVar28 = uStack_1c18;
                iVar12 = iStack_1cc0;
                iVar24 = iStack_1cd4;
                uVar23 = (ulonglong)uStack_1bc0;
                uVar33 = (ulonglong)uStack_1c18;
                if (uStack_1bc0 == 0x4000) {
                  aiStack_1c28[1] = iVar13 + uStack_1c50 + uStack_1c34;
                }
                else if (iStack_18f0 == 0) {
                  if (*(int *)(iVar11 + 0x6d74) == 0) {
                    uVar35 = (ulonglong)((int)(uVar23 - uStack_18e8) >> 0x1f);
                    uVar32 = (ulonglong)((int)(uVar33 - uStack_18e4) >> 0x1f);
                    uVar35 = (uVar23 - uStack_18e8 ^ uVar35) - uVar35;
                    uVar32 = (uVar33 - uStack_18e4 ^ uVar32) - uVar32;
                    if ((0x9e < (int)uVar35) || (0x9e < (int)uVar32)) goto LAB_82ecd618;
                    aiStack_1c28[1] =
                         aiStack_1c70[*(int *)(puStack_1ccc + (int)((uVar32 & 0xffffffff) << 2))] +
                         aiStack_1c70[*(int *)(puStack_1ccc + (int)((uVar35 & 0xffffffff) << 2))];
                    goto LAB_82ecd61c;
                  }
                  lVar38 = uVar33 - uStack_18e4;
                  lVar48 = uVar23 - uStack_18e8;
                  if (iStack_1cc0 == iStack_1cd4) {
                    iVar14 = fn_82E9B140(iVar11,lVar48,lVar38,iStack_1cc0,0);
                    iVar14 = iVar14 << 1;
                  }
                  else {
                    iVar14 = fn_82E9B140(iVar11,lVar48,lVar38,iStack_1cd4,0);
                    iVar17 = fn_82E9B140(iVar11,lVar48,lVar38,iVar12,0);
                    iVar14 = iVar14 + iVar17;
                  }
                  if ((iVar12 != 0) || (uVar45 = 0, iVar24 != 0)) {
                    uVar45 = 1;
                  }
                  iVar24 = fn_82E9B140(iVar11,lVar48,lVar38,uVar45,0);
                  aiStack_1c28[1] = (iVar24 - iVar14) * *(int *)(iStack_1cc4 + 0x70) + iVar13;
                }
                else {
                  uVar50 = uVar33 - uStack_18dc;
                  uVar36 = uVar23 - uStack_18e0;
                  uVar33 = uVar33 - uStack_18e4;
                  uVar34 = (ulonglong)((int)uVar50 >> 0x1f);
                  uVar23 = uVar23 - uStack_18e8;
                  uVar37 = (ulonglong)((int)uVar36 >> 0x1f);
                  uVar35 = (ulonglong)((int)uVar33 >> 0x1f);
                  uVar32 = (ulonglong)((int)uVar23 >> 0x1f);
                  uVar37 = (uVar36 ^ uVar37) - uVar37;
                  uVar34 = (uVar50 ^ uVar34) - uVar34;
                  uVar35 = (uVar33 ^ uVar35) - uVar35;
                  uVar32 = (uVar23 ^ uVar32) - uVar32;
                  iVar18 = (int)uVar37;
                  iVar15 = (int)uVar34;
                  iVar14 = (int)uVar32;
                  iVar17 = (int)uVar35;
                  if (iVar14 + iVar17 < iVar18 + iVar15) {
                    if (*(int *)(iVar11 + 0x6d74) == 0) {
                      if ((iVar14 < 0x9f) && (iVar17 < 0x9f)) {
                        aiStack_1c28[1] =
                             aiStack_1c70
                             [*(int *)(puStack_1ccc + (int)((uVar35 & 0xffffffff) << 2))] +
                             aiStack_1c70
                             [*(int *)(puStack_1ccc + (int)((uVar32 & 0xffffffff) << 2))];
                      }
                      else {
LAB_82ecd618:
                        aiStack_1c28[1] = (int)(uVar30 << 1);
                      }
LAB_82ecd61c:
                      aiStack_1c28[1] = iVar13 - aiStack_1c28[1];
                    }
                    else {
                      if (iStack_1cc0 == iStack_1cd4) {
                        iVar14 = fn_82E9B140(iVar11,uVar23,uVar33,iStack_1cc0,0);
                        iVar14 = iVar14 << 1;
                      }
                      else {
                        iVar14 = fn_82E9B140(iVar11,uVar23,uVar33,iStack_1cd4,0);
                        iVar17 = fn_82E9B140(iVar11,uVar23,uVar33,iVar12,0);
                        iVar14 = iVar14 + iVar17;
                      }
                      if ((iVar12 != 0) || (uVar45 = 0, iVar24 != 0)) {
                        uVar45 = 1;
                      }
                      iVar24 = fn_82E9B140(iVar11,uVar23,uVar33,uVar45,0);
                      aiStack_1c28[1] = (iVar24 - iVar14) * *(int *)(iStack_1cc4 + 0x70) + iVar13;
                    }
                  }
                  else {
                    if (*(int *)(iVar11 + 0x6d74) == 0) {
                      if ((0x9e < iVar18) || (0x9e < iVar15)) goto LAB_82ecd618;
                      aiStack_1c28[1] =
                           aiStack_1c70[*(int *)(puStack_1ccc + (int)((uVar34 & 0xffffffff) << 2))]
                           + aiStack_1c70
                             [*(int *)(puStack_1ccc + (int)((uVar37 & 0xffffffff) << 2))];
                      goto LAB_82ecd61c;
                    }
                    if (iStack_1cc0 == iStack_1cd4) {
                      iVar14 = fn_82E9B140(iVar11,uVar36,uVar50,iStack_1cc0,0);
                      iVar14 = iVar14 << 1;
                    }
                    else {
                      iVar14 = fn_82E9B140(iVar11,uVar36,uVar50,iStack_1cd4,0);
                      iVar17 = fn_82E9B140(iVar11,uVar36,uVar50,iVar12,0);
                      iVar14 = iVar14 + iVar17;
                    }
                    if ((iVar12 != 0) || (uVar45 = 0, iVar24 != 0)) {
                      uVar45 = 1;
                    }
                    iVar24 = fn_82E9B140(iVar11,uVar36,uVar50,uVar45,0);
                    aiStack_1c28[1] = (iVar24 - iVar14) * *(int *)(iStack_1cc4 + 0x70) + iVar13;
                  }
                }
                sStack_1c46 = (short)uVar47;
                sStack_1c3e = (short)uVar28;
                sStack_1c48 = (short)uStack_1cb0;
                sStack_1c40 = (short)uStack_1cbc;
              }
              uVar23 = ZEXT48(puStack_1c7c);
              uVar30 = (ulonglong)uStack_1c38;
              param_2 = (ulonglong)uStack_1c94;
              iVar12 = iStack_1cc4;
            }
          }
          iVar17 = iStack_1cb4;
          iVar14 = iStack_1cc0;
          iVar24 = iStack_1cd0;
          fn_83143EB0(iVar11,uVar10 - 0x1a30,(uVar30 & 0x7fffffff) << 1,
                            (param_2 & 0x7fffffff) << 1,*(undefined4 *)(iVar11 + 0x9f0),
                            *(undefined4 *)(iVar11 + 0x9f4),1,1);
          uVar28 = uStack_1cb0;
          iVar13 = iStack_1cd4;
          if ((*(int *)(iVar11 + 0x6d88) == 0) || (iStack_1bf8 == 0)) {
            if ((*(uint *)(iVar11 + 0x68c) & 1) == 0) {
              if (*(int *)(iVar12 + 0x94) == 0) {
                fn_82EC82F8(iVar11,uVar23,uStack_1cb8,(uVar30 & 1) * 0x780 + (uVar10 - 0xf40),
                                  uVar10 - 0x1a30,iVar12,uVar30,param_2);
                uVar47 = uStack_1c90;
              }
              else {
                fn_82EC96A8(iVar11,uVar23,puStack_1c1c,uStack_1c14,uStack_1cb8,iStack_1c04,
                                  iStack_1bfc,(uVar30 & 1) * 0x780 + (uVar10 - 0xf40));
                uVar47 = uStack_1c90;
              }
            }
            else {
              fn_83143EB0(iVar11,uVar10 - 0x1ac0,uVar30,param_2,
                                *(undefined4 *)(iVar11 + 0x1d6c),*(undefined4 *)(iVar11 + 0x1d70),1,
                                0);
              if (*(int *)(iVar12 + 0x94) == 0) {
                fn_82EC8EC0(iVar11,uVar23,uStack_1cb8,(uVar30 & 1) * 0x780 + (uVar10 - 0xf40),
                                  uVar10 - 0x1ac0,uVar10 - 0x1a30,iVar12,uVar30);
                uVar47 = uStack_1c90;
              }
              else {
                fn_82ECA110(iVar11,uVar23,puStack_1c1c,uStack_1c14,uStack_1cb8,iStack_1c04,
                                  iStack_1bfc,(uVar30 & 1) * 0x780 + (uVar10 - 0xf40));
                uVar47 = uStack_1c90;
              }
            }
          }
          else {
            uVar32 = (ulonglong)uStack_1cb0;
            uVar33 = (ulonglong)uStack_1cbc;
            uStack_1b18 = uStack_1cb0;
            uStack_1cdc = uStack_1cb0;
            uStack_1b00 = uStack_1cbc;
            uStack_1ce0 = uStack_1cbc;
            uVar47 = uStack_1c88;
            if (uStack_1cb0 != 0x4000) {
              if (iStack_1a30 == 0) {
                if (*(int *)(iVar11 + 0x6d74) == 0) {
                  uVar37 = (ulonglong)((int)(uVar32 - uStack_1a28) >> 0x1f);
                  uVar35 = (ulonglong)((int)(uVar33 - uStack_1a24) >> 0x1f);
                  uVar37 = (uVar32 - uStack_1a28 ^ uVar37) - uVar37;
                  uVar35 = (uVar33 - uStack_1a24 ^ uVar35) - uVar35;
                  if ((0x9e < (int)uVar37) || (0x9e < (int)uVar35)) goto LAB_82ece090;
                  iVar13 = aiStack_1c70[*(int *)(puStack_1ccc + (int)((uVar35 & 0xffffffff) << 2))]
                           + aiStack_1c70
                             [*(int *)(puStack_1ccc + (int)((uVar37 & 0xffffffff) << 2))];
                  goto LAB_82ece09c;
                }
                if ((((iVar17 == 0) && (iVar14 == 0)) && (iVar24 == 0)) && (iStack_1cd4 == 0)) {
                  uVar45 = 0;
LAB_82ecdf40:
                  lVar38 = uVar33 - uStack_1a24;
                  lVar48 = uVar32 - uStack_1a28;
                  iVar13 = fn_82E9B140(iVar11,lVar48,lVar38,iVar17,0);
                  iVar13 = iVar13 << 2;
                }
                else {
                  uVar45 = 1;
                  if (((iVar17 == iVar14) && (iVar14 == iVar24)) && (iVar24 == iStack_1cd4))
                  goto LAB_82ecdf40;
                  lVar38 = uVar33 - uStack_1a24;
                  lVar48 = uVar32 - uStack_1a28;
                  iVar18 = fn_82E9B140(iVar11,lVar48,lVar38,iVar17,0);
                  iVar15 = fn_82E9B140(iVar11,lVar48,lVar38,iStack_1cd4,0);
                  iVar16 = fn_82E9B140(iVar11,lVar48,lVar38,iVar24,0);
                  iVar13 = fn_82E9B140(iVar11,lVar48,lVar38,iVar14,0);
                  iVar13 = iVar18 + iVar15 + iVar16 + iVar13;
                }
                iVar18 = fn_82E9B140(iVar11,lVar48,lVar38,uVar45,0);
                iVar13 = (iVar18 - iVar13) * *(int *)(iVar12 + 0x70) - *(int *)(iVar11 + 0x4b20);
              }
              else {
                uVar49 = uVar33 - uStack_1a1c;
                uVar44 = uVar32 - uStack_1a20;
                uVar42 = uVar33 - uStack_1a24;
                uVar36 = (ulonglong)((int)uVar49 >> 0x1f);
                uVar50 = uVar32 - uStack_1a28;
                uVar34 = (ulonglong)((int)uVar44 >> 0x1f);
                uVar37 = (ulonglong)((int)uVar42 >> 0x1f);
                uVar35 = (ulonglong)((int)uVar50 >> 0x1f);
                uVar34 = (uVar44 ^ uVar34) - uVar34;
                uVar36 = (uVar49 ^ uVar36) - uVar36;
                uVar37 = (uVar42 ^ uVar37) - uVar37;
                uVar35 = (uVar50 ^ uVar35) - uVar35;
                iVar16 = (int)uVar34;
                iVar7 = (int)uVar36;
                iVar18 = (int)uVar35;
                iVar15 = (int)uVar37;
                if (iVar18 + iVar15 < iVar16 + iVar7) {
                  if (*(int *)(iVar11 + 0x6d74) == 0) {
                    if ((iVar18 < 0x9f) && (iVar15 < 0x9f)) {
                      iVar13 = aiStack_1c70
                               [*(int *)(puStack_1ccc + (int)((uVar37 & 0xffffffff) << 2))] +
                               aiStack_1c70
                               [*(int *)(puStack_1ccc + (int)((uVar35 & 0xffffffff) << 2))];
                    }
                    else {
LAB_82ece090:
                      iVar13 = uStack_1c5c << 1;
                    }
LAB_82ece09c:
                    iVar13 = iVar13 * -3 - *(int *)(iVar11 + 0x4b20);
                  }
                  else {
                    if ((((iVar17 == 0) && (iVar14 == 0)) && (iVar24 == 0)) && (iStack_1cd4 == 0)) {
                      uVar45 = 0;
LAB_82ecdc80:
                      iVar13 = fn_82E9B140(iVar11,uVar50,uVar42,iVar17,0);
                      iVar13 = iVar13 << 2;
                    }
                    else {
                      uVar45 = 1;
                      if (((iVar17 == iVar14) && (iVar14 == iVar24)) && (iVar24 == iStack_1cd4))
                      goto LAB_82ecdc80;
                      iVar18 = fn_82E9B140(iVar11,uVar50,uVar42,iVar17,0);
                      iVar15 = fn_82E9B140(iVar11,uVar50,uVar42,iVar13,0);
                      iVar16 = fn_82E9B140(iVar11,uVar50,uVar42,iVar24,0);
                      iVar13 = fn_82E9B140(iVar11,uVar50,uVar42,iVar14,0);
                      iVar13 = iVar18 + iVar15 + iVar16 + iVar13;
                    }
                    iVar18 = fn_82E9B140(iVar11,uVar50,uVar42,uVar45,0);
                    iVar13 = (iVar18 - iVar13) * *(int *)(iVar12 + 0x70) - *(int *)(iVar11 + 0x4b20)
                    ;
                  }
                }
                else {
                  if (*(int *)(iVar11 + 0x6d74) == 0) {
                    if ((0x9e < iVar16) || (0x9e < iVar7)) goto LAB_82ece090;
                    iVar13 = aiStack_1c70
                             [*(int *)(puStack_1ccc + (int)((uVar36 & 0xffffffff) << 2))] +
                             aiStack_1c70
                             [*(int *)(puStack_1ccc + (int)((uVar34 & 0xffffffff) << 2))];
                    goto LAB_82ece09c;
                  }
                  if ((((iVar17 == 0) && (iVar14 == 0)) && (iVar24 == 0)) && (iStack_1cd4 == 0)) {
                    uVar45 = 0;
LAB_82ecdde0:
                    iVar13 = fn_82E9B140(iVar11,uVar44,uVar49,iVar17,0);
                    iVar13 = iVar13 << 2;
                  }
                  else {
                    uVar45 = 1;
                    if (((iVar17 == iVar14) && (iVar14 == iVar24)) && (iVar24 == iStack_1cd4))
                    goto LAB_82ecdde0;
                    iVar18 = fn_82E9B140(iVar11,uVar44,uVar49,iVar17,0);
                    iVar15 = fn_82E9B140(iVar11,uVar44,uVar49,iVar13,0);
                    iVar16 = fn_82E9B140(iVar11,uVar44,uVar49,iVar24,0);
                    iVar13 = fn_82E9B140(iVar11,uVar44,uVar49,iVar14,0);
                    iVar13 = iVar18 + iVar15 + iVar16 + iVar13;
                  }
                  iVar18 = fn_82E9B140(iVar11,uVar44,uVar49,uVar45,0);
                  iVar13 = (iVar18 - iVar13) * *(int *)(iVar12 + 0x70) - *(int *)(iVar11 + 0x4b20);
                }
              }
              uVar47 = iVar13 + iStack_1cc8;
            }
            iVar13 = iStack_1cc8;
            puVar8 = puStack_1ccc;
            uStack_1c90 = uVar47;
            if ((*(uint *)(iVar11 + 0x68c) & 1) != 0) {
              fn_83143EB0(iVar11,uVar10 - 0x1ac0,uVar30,param_2,
                                *(undefined4 *)(iVar11 + 0x1d6c),*(undefined4 *)(iVar11 + 0x1d70),1,
                                0);
              iVar18 = iStack_1cd4;
              if (uVar28 == 0x4000) {
                uStack_1c10 = uStack_1c88;
              }
              else if (iStack_1ac0 == 0) {
                if (*(int *)(iVar11 + 0x6d74) == 0) {
                  uVar37 = (ulonglong)((int)(uVar32 - uStack_1ab8) >> 0x1f);
                  uVar35 = (ulonglong)((int)(uVar33 - uStack_1ab4) >> 0x1f);
                  uVar37 = (uVar32 - uStack_1ab8 ^ uVar37) - uVar37;
                  uVar35 = (uVar33 - uStack_1ab4 ^ uVar35) - uVar35;
                  if ((0x9e < (int)uVar37) || (0x9e < (int)uVar35)) goto LAB_82ece5d4;
                  iVar24 = aiStack_1c70[*(int *)(puVar8 + (int)((uVar35 & 0xffffffff) << 2))] +
                           aiStack_1c70[*(int *)(puVar8 + (int)((uVar37 & 0xffffffff) << 2))];
                  goto LAB_82ece5dc;
                }
                if ((((iVar17 == 0) && (iVar14 == 0)) && (iVar24 == 0)) && (iStack_1cd4 == 0)) {
                  uVar45 = 0;
LAB_82ece484:
                  lVar38 = uVar33 - uStack_1ab4;
                  lVar48 = uVar32 - uStack_1ab8;
                  iVar24 = fn_82E9B140(iVar11,lVar48,lVar38,iVar17,0);
                  iVar24 = iVar24 << 2;
                }
                else {
                  uVar45 = 1;
                  if (((iVar17 == iVar14) && (iVar14 == iVar24)) && (iVar24 == iStack_1cd4))
                  goto LAB_82ece484;
                  lVar38 = uVar33 - uStack_1ab4;
                  lVar48 = uVar32 - uStack_1ab8;
                  iVar18 = fn_82E9B140(iVar11,lVar48,lVar38,iVar17,0);
                  iVar15 = fn_82E9B140(iVar11,lVar48,lVar38,iStack_1cd4,0);
                  iVar16 = fn_82E9B140(iVar11,lVar48,lVar38,iVar24,0);
                  iVar24 = fn_82E9B140(iVar11,lVar48,lVar38,iVar14,0);
                  iVar24 = iVar18 + iVar15 + iVar16 + iVar24;
                }
                iVar14 = fn_82E9B140(iVar11,lVar48,lVar38,uVar45,0);
                uStack_1c10 = ((iVar14 - iVar24) * *(int *)(iVar12 + 0x70) -
                              *(int *)(iVar11 + 0x4b20)) + iVar13;
              }
              else {
                uVar42 = uVar33 - uStack_1aac;
                uVar50 = uVar32 - uStack_1ab0;
                uVar33 = uVar33 - uStack_1ab4;
                uVar36 = (ulonglong)((int)uVar42 >> 0x1f);
                uVar32 = uVar32 - uStack_1ab8;
                uVar34 = (ulonglong)((int)uVar50 >> 0x1f);
                uVar37 = (ulonglong)((int)uVar33 >> 0x1f);
                uVar35 = (ulonglong)((int)uVar32 >> 0x1f);
                uVar34 = (uVar50 ^ uVar34) - uVar34;
                uVar36 = (uVar42 ^ uVar36) - uVar36;
                uVar37 = (uVar33 ^ uVar37) - uVar37;
                uVar35 = (uVar32 ^ uVar35) - uVar35;
                iVar7 = (int)uVar34;
                iVar4 = (int)uVar36;
                iVar15 = (int)uVar35;
                iVar16 = (int)uVar37;
                if (iVar7 + iVar4 <= iVar15 + iVar16) {
                  if (*(int *)(iVar11 + 0x6d74) == 0) {
                    if ((0x9e < iVar7) || (0x9e < iVar4)) goto LAB_82ece5d4;
                    iVar24 = aiStack_1c70[*(int *)(puVar8 + (int)((uVar36 & 0xffffffff) << 2))] +
                             aiStack_1c70[*(int *)(puVar8 + (int)((uVar34 & 0xffffffff) << 2))];
                    goto LAB_82ece5dc;
                  }
                  if ((((iVar17 == 0) && (iVar14 == 0)) && (iVar24 == 0)) && (iStack_1cd4 == 0)) {
                    uVar45 = 0;
LAB_82ece324:
                    iVar24 = fn_82E9B140(iVar11,uVar50,uVar42,iVar17,0);
                    iVar24 = iVar24 << 2;
                  }
                  else {
                    uVar45 = 1;
                    if (((iVar17 == iVar14) && (iVar14 == iVar24)) && (iVar24 == iStack_1cd4))
                    goto LAB_82ece324;
                    iVar15 = fn_82E9B140(iVar11,uVar50,uVar42,iVar17,0);
                    iVar18 = fn_82E9B140(iVar11,uVar50,uVar42,iVar18,0);
                    iVar16 = fn_82E9B140(iVar11,uVar50,uVar42,iVar24,0);
                    iVar24 = fn_82E9B140(iVar11,uVar50,uVar42,iVar14,0);
                    iVar24 = iVar15 + iVar18 + iVar16 + iVar24;
                  }
                  iVar14 = fn_82E9B140(iVar11,uVar50,uVar42,uVar45,0);
                  uStack_1c10 = ((iVar14 - iVar24) * *(int *)(iVar12 + 0x70) -
                                *(int *)(iVar11 + 0x4b20)) + iVar13;
                  goto LAB_82ece8c8;
                }
                if (*(int *)(iVar11 + 0x6d74) == 0) {
                  if ((iVar15 < 0x9f) && (iVar16 < 0x9f)) {
                    iVar24 = aiStack_1c70[*(int *)(puVar8 + (int)((uVar37 & 0xffffffff) << 2))] +
                             aiStack_1c70[*(int *)(puVar8 + (int)((uVar35 & 0xffffffff) << 2))];
                  }
                  else {
LAB_82ece5d4:
                    iVar24 = uStack_1c5c << 1;
                  }
LAB_82ece5dc:
                  uStack_1c10 = (iVar24 * -3 - *(int *)(iVar11 + 0x4b20)) + iVar13;
                  goto LAB_82ece8c8;
                }
                if ((((iVar17 == 0) && (iVar14 == 0)) && (iVar24 == 0)) && (iStack_1cd4 == 0)) {
                  uVar45 = 0;
LAB_82ece1c4:
                  iVar24 = fn_82E9B140(iVar11,uVar32,uVar33,iVar17,0);
                  iVar24 = iVar24 << 2;
                }
                else {
                  uVar45 = 1;
                  if (((iVar17 == iVar14) && (iVar14 == iVar24)) && (iVar24 == iStack_1cd4))
                  goto LAB_82ece1c4;
                  iVar15 = fn_82E9B140(iVar11,uVar32,uVar33,iVar17,0);
                  iVar18 = fn_82E9B140(iVar11,uVar32,uVar33,iVar18,0);
                  iVar16 = fn_82E9B140(iVar11,uVar32,uVar33,iVar24,0);
                  iVar24 = fn_82E9B140(iVar11,uVar32,uVar33,iVar14,0);
                  iVar24 = iVar15 + iVar18 + iVar16 + iVar24;
                }
                iVar14 = fn_82E9B140(iVar11,uVar32,uVar33,uVar45,0);
                uStack_1c10 = ((iVar14 - iVar24) * *(int *)(iVar12 + 0x70) -
                              *(int *)(iVar11 + 0x4b20)) + iVar13;
              }
            }
          }
LAB_82ece8c8:
          iVar24 = iStack_1c54;
          iVar13 = iStack_1cc8;
          if ((*(uint *)(iVar11 + 0x68c) & 1) != 0) {
            if ((int)uStack_1c88 < (int)uStack_1c10) {
              iStack_1ba0 = uStack_1c88 + iStack_1ba0;
              *(undefined2 *)(*(int *)(iVar11 + 0x1d6c) + iStack_1c54 * 2) = 0x4000;
              *(undefined2 *)(*(int *)(iVar11 + 0x1d70) + iStack_1c54 * 2) = 0x4000;
            }
            else {
              iStack_1ba0 = uStack_1c10 + iStack_1ba0;
              *(short *)(*(int *)(iVar11 + 0x1d6c) + iStack_1c54 * 2) = (short)uStack_1b18;
              *(short *)(*(int *)(iVar11 + 0x1d70) + iStack_1c54 * 2) = (short)uStack_1b00;
            }
          }
          uVar28 = 0xffffffff;
          if (iStack_1ad0 == 0) {
            if ((int)uStack_1c88 < (int)uVar47) {
              iStack_1c4c = iStack_1c4c + 4;
              iStack_1ca4 = uStack_1c88 + iStack_1ca4;
              *(undefined1 *)(*(int *)(iVar11 + 0x1a88) + iStack_1c54) = 4;
              iStack_1c74 = iStack_1b28;
              iStack_1c3c = iStack_1b30;
            }
            else {
              iStack_1ca4 = uVar47 + iStack_1ca4;
              *(undefined1 *)(*(int *)(iVar11 + 0x1a88) + iStack_1c54) = 0;
              iStack_1c3c = 0;
              iStack_1c74 = 0;
              if (*(int *)(iVar11 + 0x6d8c) != 0) {
                uStack_1be4 = 0;
                uStack_1bf0 = 0;
              }
            }
          }
          else {
            uVar28 = 0xffffffff;
            iVar14 = iStack_1cc8;
            if (*(int *)(iVar11 + 0x5264) != 0) {
              uVar28 = (uint)(aiStack_1c28[1] < aiStack_1c28[0]);
              iVar14 = aiStack_1c28[aiStack_1c28[1] < aiStack_1c28[0]];
              if (iStack_1cc8 <= aiStack_1c28[aiStack_1c28[1] < aiStack_1c28[0]]) {
                uVar28 = 0xffffffff;
                iVar14 = iStack_1cc8;
              }
            }
            iStack_1cc8 = iVar14;
            if (iStack_1c08 == 4) {
              if ((int)uStack_1c88 < (int)uVar47) {
                iStack_1c4c = iStack_1c4c + 4;
                iStack_1ca4 = uStack_1c88 + iStack_1ca4;
                *(undefined1 *)(*(int *)(iVar11 + 0x1a88) + iStack_1c54) = 4;
                iStack_1c74 = iStack_1b28;
                iStack_1c3c = iStack_1b30;
              }
              else {
LAB_82eceae0:
                iStack_1ca4 = uVar47 + iStack_1ca4;
                *(undefined1 *)(*(int *)(iVar11 + 0x1a88) + iStack_1c54) = 0;
                iStack_1c3c = 0;
                iStack_1c74 = 0;
                if (*(int *)(iVar11 + 0x6d8c) != 0) {
                  uStack_1be4 = 0;
                  uStack_1bf0 = 0;
                }
              }
            }
            else if ((int)uStack_1c88 < (int)uVar47) {
              if ((int)uStack_1c88 < iStack_1cc8) {
                iStack_1c4c = iStack_1c4c + 4;
                iStack_1ca4 = uStack_1c88 + iStack_1ca4;
                *(undefined1 *)(*(int *)(iVar11 + 0x1a88) + iStack_1c54) = 4;
                iStack_1c74 = iStack_1b28;
                iStack_1c3c = iStack_1b30;
              }
              else {
                iStack_1c4c = iStack_1c08 + iStack_1c4c;
                iStack_1ca4 = iStack_1cc8 + iStack_1ca4;
                *(undefined1 *)(*(int *)(iVar11 + 0x1a88) + iStack_1c54) = 1;
                iStack_1c3c = 0;
                iStack_1c74 = 0;
                if ((*(int *)(iVar11 + 0x6d8c) != 0) && (iStack_1c00 != 0x4000)) {
                  uStack_1be4 = 0;
                  uStack_1bf0 = 0;
                }
              }
            }
            else {
              if ((int)uVar47 <= iStack_1cc8) goto LAB_82eceae0;
              iStack_1c4c = iStack_1c08 + iStack_1c4c;
              iStack_1ca4 = iStack_1cc8 + iStack_1ca4;
              *(undefined1 *)(*(int *)(iVar11 + 0x1a88) + iStack_1c54) = 1;
              iStack_1c3c = 0;
              iStack_1c74 = 0;
              if ((*(int *)(iVar11 + 0x6d8c) != 0) && (iStack_1c00 != 0x4000)) {
                uStack_1be4 = 0;
                uStack_1bf0 = 0;
              }
            }
          }
          iVar14 = *(int *)(iVar11 + 0x1a88);
          if ((*(char *)(iVar14 + iStack_1c54) == '\x01') && (uVar28 != 0xffffffff)) {
            if (uVar28 == 0) {
              *(undefined1 *)(iVar14 + iStack_1c54) = 5;
              sVar22 = sStack_1c58;
              sVar26 = sStack_1c56;
              sVar27 = sStack_1c44;
              if (sStack_1c44 == sStack_1c42) {
LAB_82ecec04:
                if ((int)sVar22 == (int)sVar26) {
                  *(undefined1 *)(*(int *)(iVar11 + 0x1a88) + iStack_1c54) = 0;
                  uStack_1cdc = (uint)sVar27;
                  uStack_1ce0 = (int)sVar22;
                }
              }
            }
            else {
              *(undefined1 *)(iVar14 + iStack_1c54) = 6;
              sVar22 = sStack_1c40;
              sVar26 = sStack_1c3e;
              sVar27 = sStack_1c48;
              if (sStack_1c48 == sStack_1c46) goto LAB_82ecec04;
            }
          }
          cVar1 = *(char *)(*(int *)(iVar11 + 0x1a88) + iStack_1c54);
          if (cVar1 == '\x05') {
            iVar14 = iStack_1b90 * 2;
            iVar18 = uStack_1bb8 * 2;
            *(short *)(*(int *)(iVar11 + 0x9f0) + iVar14) = sStack_1c44;
            *(short *)(*(int *)(iVar11 + 0x9f4) + iVar14) = sStack_1c58;
            *(short *)(*(int *)(iVar11 + 0x9f0) + iVar14 + 2) = sStack_1c44;
            *(short *)(*(int *)(iVar11 + 0x9f4) + iVar14 + 2) = sStack_1c58;
            *(short *)(*(int *)(iVar11 + 0x9f0) + iVar18) = sStack_1c42;
            *(short *)(*(int *)(iVar11 + 0x9f4) + iVar18) = sStack_1c56;
            *(short *)(*(int *)(iVar11 + 0x9f0) + iVar18 + 2) = sStack_1c42;
            *(short *)(*(int *)(iVar11 + 0x9f4) + iVar18 + 2) = sStack_1c56;
          }
          else if (cVar1 == '\x06') {
            iVar14 = iStack_1b90 * 2;
            *(short *)(*(int *)(iVar11 + 0x9f0) + iVar14) = sStack_1c48;
            iVar18 = uStack_1bb8 * 2;
            *(short *)(*(int *)(iVar11 + 0x9f4) + iVar14) = sStack_1c40;
            *(short *)(*(int *)(iVar11 + 0x9f0) + iVar14 + 2) = sStack_1c46;
            *(short *)(*(int *)(iVar11 + 0x9f4) + iVar14 + 2) = sStack_1c3e;
            *(short *)(*(int *)(iVar11 + 0x9f0) + iVar18) = sStack_1c48;
            *(short *)(*(int *)(iVar11 + 0x9f4) + iVar18) = sStack_1c40;
            *(short *)(*(int *)(iVar11 + 0x9f0) + iVar18 + 2) = sStack_1c46;
            *(short *)(*(int *)(iVar11 + 0x9f4) + iVar18 + 2) = sStack_1c3e;
          }
          else if (cVar1 == '\x04') {
            *(undefined1 *)(*(int *)(iVar11 + 0x1a88) + iStack_1c54) = 0;
            iVar14 = iStack_1b90 * 2;
            iVar18 = uStack_1bb8 * 2;
            *(undefined2 *)(*(int *)(iVar11 + 0x9f0) + iVar14) = 0x4000;
            *(undefined2 *)(*(int *)(iVar11 + 0x9f4) + iVar14) = 0x4000;
            *(undefined2 *)(*(int *)(iVar11 + 0x9f0) + iVar14 + 2) = 0x4000;
            *(undefined2 *)(*(int *)(iVar11 + 0x9f4) + iVar14 + 2) = 0x4000;
            *(undefined2 *)(*(int *)(iVar11 + 0x9f0) + iVar18) = 0x4000;
            *(undefined2 *)(*(int *)(iVar11 + 0x9f4) + iVar18) = 0x4000;
            *(undefined2 *)(*(int *)(iVar11 + 0x9f0) + iVar18 + 2) = 0x4000;
            *(undefined2 *)(*(int *)(iVar11 + 0x9f4) + iVar18 + 2) = 0x4000;
          }
          else if (cVar1 == '\0') {
            iVar14 = iStack_1b90 * 2;
            iVar18 = uStack_1bb8 * 2;
            uVar25 = (undefined2)uStack_1cdc;
            *(undefined2 *)(*(int *)(iVar11 + 0x9f0) + iVar14) = uVar25;
            uVar21 = (undefined2)uStack_1ce0;
            *(undefined2 *)(*(int *)(iVar11 + 0x9f4) + iVar14) = uVar21;
            *(undefined2 *)(*(int *)(iVar11 + 0x9f0) + iVar14 + 2) = uVar25;
            *(undefined2 *)(*(int *)(iVar11 + 0x9f4) + iVar14 + 2) = uVar21;
            *(undefined2 *)(*(int *)(iVar11 + 0x9f0) + iVar18) = uVar25;
            *(undefined2 *)(*(int *)(iVar11 + 0x9f4) + iVar18) = uVar21;
            *(undefined2 *)(*(int *)(iVar11 + 0x9f0) + iVar18 + 2) = uVar25;
            *(undefined2 *)(*(int *)(iVar11 + 0x9f4) + iVar18 + 2) = uVar21;
          }
          if ((*(uint *)(iVar11 + 0x68c) & 2) == 0) {
            uVar32 = (ulonglong)uStack_1cb0;
            uVar33 = (ulonglong)uStack_1cbc;
          }
          else {
            fn_83143EB0(iVar11,uVar10 - 0x1ac0,uVar30,param_2,*(undefined4 *)(iVar11 + 0x1d7c)
                              ,*(undefined4 *)(iVar11 + 0x1d80),1,0);
            iVar14 = iStack_1cc0;
            uVar32 = (ulonglong)uStack_1cb0;
            uVar33 = (ulonglong)uStack_1cbc;
            if ((((*(int *)(iVar11 + 0x6d88) == 0) || (iStack_1bf8 == 0)) ||
                ((uStack_1cb0 & 1) != 0)) || ((uStack_1cbc & 1) != 0)) {
              if (*(int *)(iVar12 + 0x94) == 0) {
                fn_82EC82F8(iVar11,uVar23,uStack_1cb8,(uVar30 & 1) * 0x780 + (uVar10 - 0xf40),
                                  uVar10 - 0x1ac0,iVar12,uVar30,param_2);
              }
              else {
                fn_82EC96A8(iVar11,uVar23,puStack_1c1c,uStack_1c14,uStack_1cb8,iStack_1c04,
                                  iStack_1bfc,(uVar30 & 1) * 0x780 + (uVar10 - 0xf40));
              }
LAB_82ecf54c:
              if ((int)uStack_1c88 < (int)uStack_1cd8) {
                iStack_1bb0 = uStack_1c88 + iStack_1bb0;
                *(undefined2 *)(iVar24 * 2 + *(int *)(iVar11 + 0x1d7c)) = 0x4000;
                *(undefined2 *)(iVar24 * 2 + *(int *)(iVar11 + 0x1d80)) = 0x4000;
                goto LAB_82ecf58c;
              }
            }
            else {
              uStack_1cdc = uStack_1cb0;
              uStack_1ce0 = uStack_1cbc;
              if (uStack_1cb0 != 0x4000) {
                if (iStack_1ac0 != 0) {
                  uVar49 = uVar33 - uStack_1aac;
                  uVar44 = uVar32 - uStack_1ab0;
                  uVar42 = uVar33 - uStack_1ab4;
                  uVar36 = (ulonglong)((int)uVar49 >> 0x1f);
                  uVar50 = uVar32 - uStack_1ab8;
                  uVar34 = (ulonglong)((int)uVar44 >> 0x1f);
                  uVar37 = (ulonglong)((int)uVar42 >> 0x1f);
                  uVar35 = (ulonglong)((int)uVar50 >> 0x1f);
                  uVar34 = (uVar44 ^ uVar34) - uVar34;
                  uVar36 = (uVar49 ^ uVar36) - uVar36;
                  uVar37 = (uVar42 ^ uVar37) - uVar37;
                  uVar35 = (uVar50 ^ uVar35) - uVar35;
                  iVar16 = (int)uVar34;
                  iVar7 = (int)uVar36;
                  iVar18 = (int)uVar35;
                  iVar15 = (int)uVar37;
                  if (iVar16 + iVar7 <= iVar18 + iVar15) {
                    if (*(int *)(iVar11 + 0x6d74) == 0) {
                      if ((0x9e < iVar16) || (0x9e < iVar7)) goto LAB_82ecf3ec;
                      iVar14 = aiStack_1c70
                               [*(int *)(puStack_1ccc + (int)((uVar36 & 0xffffffff) << 2))] +
                               aiStack_1c70
                               [*(int *)(puStack_1ccc + (int)((uVar34 & 0xffffffff) << 2))];
                      goto LAB_82ecf3f8;
                    }
                    if (((iVar17 == 0) && (iStack_1cc0 == 0)) &&
                       ((iStack_1cd0 == 0 && (iStack_1cd4 == 0)))) {
                      uVar45 = 0;
LAB_82ecf128:
                      iVar14 = fn_82E9B140(iVar11,uVar44,uVar49,iVar17,0);
                      iVar14 = iVar14 << 2;
                    }
                    else {
                      uVar45 = 1;
                      if (((iVar17 == iStack_1cc0) && (iStack_1cc0 == iStack_1cd0)) &&
                         (iStack_1cd0 == iStack_1cd4)) goto LAB_82ecf128;
                      iVar18 = fn_82E9B140(iVar11,uVar44,uVar49,iVar17,0);
                      iVar15 = fn_82E9B140(iVar11,uVar44,uVar49,iStack_1cd4,0);
                      iVar16 = fn_82E9B140(iVar11,uVar44,uVar49,iStack_1cd0,0);
                      iVar14 = fn_82E9B140(iVar11,uVar44,uVar49,iVar14,0);
                      iVar14 = iVar18 + iVar15 + iVar16 + iVar14;
                    }
                    iVar18 = fn_82E9B140(iVar11,uVar44,uVar49,uVar45,0);
                    uStack_1cd8 = ((iVar18 - iVar14) * *(int *)(iVar12 + 0x70) -
                                  *(int *)(iVar11 + 0x4b20)) + iVar13;
                    goto LAB_82ecf54c;
                  }
                  if (*(int *)(iVar11 + 0x6d74) == 0) {
                    if ((iVar18 < 0x9f) && (iVar15 < 0x9f)) {
                      iVar14 = aiStack_1c70
                               [*(int *)(puStack_1ccc + (int)((uVar37 & 0xffffffff) << 2))] +
                               aiStack_1c70
                               [*(int *)(puStack_1ccc + (int)((uVar35 & 0xffffffff) << 2))];
                    }
                    else {
LAB_82ecf3ec:
                      iVar14 = uStack_1c5c << 1;
                    }
LAB_82ecf3f8:
                    uStack_1cd8 = (iVar14 * -3 - *(int *)(iVar11 + 0x4b20)) + iVar13;
                    goto LAB_82ecf54c;
                  }
                  if (((iVar17 == 0) && (iStack_1cc0 == 0)) &&
                     ((iStack_1cd0 == 0 && (iStack_1cd4 == 0)))) {
                    uVar45 = 0;
LAB_82ecefb8:
                    iVar14 = fn_82E9B140(iVar11,uVar50,uVar42,iVar17,0);
                    iVar14 = iVar14 << 2;
                  }
                  else {
                    uVar45 = 1;
                    if (((iVar17 == iStack_1cc0) && (iStack_1cc0 == iStack_1cd0)) &&
                       (iStack_1cd0 == iStack_1cd4)) goto LAB_82ecefb8;
                    iVar18 = fn_82E9B140(iVar11,uVar50,uVar42,iVar17,0);
                    iVar15 = fn_82E9B140(iVar11,uVar50,uVar42,iStack_1cd4,0);
                    iVar16 = fn_82E9B140(iVar11,uVar50,uVar42,iStack_1cd0,0);
                    iVar14 = fn_82E9B140(iVar11,uVar50,uVar42,iVar14,0);
                    iVar14 = iVar18 + iVar15 + iVar16 + iVar14;
                  }
                  iVar18 = fn_82E9B140(iVar11,uVar50,uVar42,uVar45,0);
                  uStack_1cd8 = ((iVar18 - iVar14) * *(int *)(iVar12 + 0x70) -
                                *(int *)(iVar11 + 0x4b20)) + iVar13;
                  goto LAB_82ecf54c;
                }
                if (*(int *)(iVar11 + 0x6d74) == 0) {
                  uVar37 = (ulonglong)((int)(uVar32 - uStack_1ab8) >> 0x1f);
                  uVar35 = (ulonglong)((int)(uVar33 - uStack_1ab4) >> 0x1f);
                  uVar37 = (uVar32 - uStack_1ab8 ^ uVar37) - uVar37;
                  uVar35 = (uVar33 - uStack_1ab4 ^ uVar35) - uVar35;
                  if ((0x9e < (int)uVar37) || (0x9e < (int)uVar35)) goto LAB_82ecf3ec;
                  iVar14 = aiStack_1c70[*(int *)(puStack_1ccc + (int)((uVar35 & 0xffffffff) << 2))]
                           + aiStack_1c70
                             [*(int *)(puStack_1ccc + (int)((uVar37 & 0xffffffff) << 2))];
                  goto LAB_82ecf3f8;
                }
                if (((iVar17 == 0) && (iStack_1cc0 == 0)) &&
                   ((iStack_1cd0 == 0 && (iStack_1cd4 == 0)))) {
                  uVar45 = 0;
LAB_82ecf298:
                  lVar38 = uVar33 - uStack_1ab4;
                  lVar48 = uVar32 - uStack_1ab8;
                  iVar14 = fn_82E9B140(iVar11,lVar48,lVar38,iVar17,0);
                  iVar14 = iVar14 << 2;
                }
                else {
                  uVar45 = 1;
                  if (((iVar17 == iStack_1cc0) && (iStack_1cc0 == iStack_1cd0)) &&
                     (iStack_1cd0 == iStack_1cd4)) goto LAB_82ecf298;
                  lVar38 = uVar33 - uStack_1ab4;
                  lVar48 = uVar32 - uStack_1ab8;
                  iVar18 = fn_82E9B140(iVar11,lVar48,lVar38,iVar17,0);
                  iVar15 = fn_82E9B140(iVar11,lVar48,lVar38,iStack_1cd4,0);
                  iVar16 = fn_82E9B140(iVar11,lVar48,lVar38,iStack_1cd0,0);
                  iVar14 = fn_82E9B140(iVar11,lVar48,lVar38,iStack_1cc0,0);
                  iVar14 = iVar18 + iVar15 + iVar16 + iVar14;
                }
                iVar18 = fn_82E9B140(iVar11,lVar48,lVar38,uVar45,0);
                uStack_1cd8 = ((iVar18 - iVar14) * *(int *)(iVar12 + 0x70) -
                              *(int *)(iVar11 + 0x4b20)) + iVar13;
                goto LAB_82ecf54c;
              }
              uStack_1cd8 = uStack_1c88;
            }
            *(short *)(iVar24 * 2 + *(int *)(iVar11 + 0x1d7c)) = (short)uStack_1cdc;
            *(short *)(iVar24 * 2 + *(int *)(iVar11 + 0x1d80)) = (short)uStack_1ce0;
            iStack_1bb0 = uStack_1cd8 + iStack_1bb0;
          }
LAB_82ecf58c:
          puVar8 = puStack_1ccc;
          if ((*(uint *)(iVar11 + 0x68c) & 4) != 0) {
            fn_83143EB0(iVar11,uVar10 - 0x1ac0,uVar30,param_2,*(undefined4 *)(iVar11 + 0x1d74)
                              ,*(undefined4 *)(iVar11 + 0x1d78),1,0);
            iVar18 = iStack_1cc0;
            iVar14 = iStack_1cd0;
            if (((*(int *)(iVar11 + 0x6d88) == 0) || (iStack_1bf8 == 0)) ||
               (((uVar32 & 1) != 0 || ((uVar33 & 1) != 0)))) {
              if (*(int *)(iVar12 + 0x94) == 0) {
                fn_82EC82F8(iVar11,uVar23,uStack_1cb8,(uVar30 & 1) * 0x780 + (uVar10 - 0xf40),
                                  uVar10 - 0x1ac0,iVar12,uVar30,param_2);
              }
              else {
                fn_82EC96A8(iVar11,uVar23,puStack_1c1c,uStack_1c14,uStack_1cb8,iStack_1c04,
                                  iStack_1bfc,(uVar30 & 1) * 0x780 + (uVar10 - 0xf40));
              }
LAB_82ecfdec:
              if ((int)uStack_1c88 < (int)uStack_1cd8) {
                iStack_1bd0 = uStack_1c88 + iStack_1bd0;
                *(undefined2 *)(iVar24 * 2 + *(int *)(iVar11 + 0x1d74)) = 0x4000;
                *(undefined2 *)(iVar24 * 2 + *(int *)(iVar11 + 0x1d78)) = 0x4000;
                goto LAB_82ecf63c;
              }
            }
            else {
              uStack_1cdc = (uint)uVar32;
              uStack_1ce0 = (uint)uVar33;
              if (uStack_1cdc != 0x4000) {
                if (iStack_1ac0 != 0) {
                  uVar50 = uVar33 - uStack_1aac;
                  uVar36 = uVar32 - uStack_1ab0;
                  uVar33 = uVar33 - uStack_1ab4;
                  uVar34 = (ulonglong)((int)uVar50 >> 0x1f);
                  uVar32 = uVar32 - uStack_1ab8;
                  uVar37 = (ulonglong)((int)uVar36 >> 0x1f);
                  uVar35 = (ulonglong)((int)uVar33 >> 0x1f);
                  uVar23 = (ulonglong)((int)uVar32 >> 0x1f);
                  uVar37 = (uVar36 ^ uVar37) - uVar37;
                  uVar34 = (uVar50 ^ uVar34) - uVar34;
                  uVar35 = (uVar33 ^ uVar35) - uVar35;
                  uVar23 = (uVar32 ^ uVar23) - uVar23;
                  iVar7 = (int)uVar37;
                  iVar4 = (int)uVar34;
                  iVar15 = (int)uVar23;
                  iVar16 = (int)uVar35;
                  if (iVar7 + iVar4 <= iVar15 + iVar16) {
                    if (*(int *)(iVar11 + 0x6d74) == 0) {
                      if ((0x9e < iVar7) || (0x9e < iVar4)) goto LAB_82ecfc98;
                      iVar14 = aiStack_1c70[*(int *)(puVar8 + (int)((uVar34 & 0xffffffff) << 2))] +
                               aiStack_1c70[*(int *)(puVar8 + (int)((uVar37 & 0xffffffff) << 2))];
                      goto LAB_82ecfca0;
                    }
                    if ((((iVar17 == 0) && (iStack_1cc0 == 0)) && (iStack_1cd0 == 0)) &&
                       (iStack_1cd4 == 0)) {
                      uVar45 = 0;
LAB_82ecf9dc:
                      iVar14 = fn_82E9B140(iVar11,uVar36,uVar50,iVar17,0);
                      iVar14 = iVar14 << 2;
                    }
                    else {
                      uVar45 = 1;
                      if (((iVar17 == iStack_1cc0) && (iStack_1cc0 == iStack_1cd0)) &&
                         (iStack_1cd0 == iStack_1cd4)) goto LAB_82ecf9dc;
                      iVar17 = fn_82E9B140(iVar11,uVar36,uVar50,iVar17,0);
                      iVar15 = fn_82E9B140(iVar11,uVar36,uVar50,iStack_1cd4,0);
                      iVar16 = fn_82E9B140(iVar11,uVar36,uVar50,iVar14,0);
                      iVar14 = fn_82E9B140(iVar11,uVar36,uVar50,iVar18,0);
                      iVar14 = iVar17 + iVar15 + iVar16 + iVar14;
                    }
                    iVar17 = fn_82E9B140(iVar11,uVar36,uVar50,uVar45,0);
                    uStack_1cd8 = ((iVar17 - iVar14) * *(int *)(iVar12 + 0x70) -
                                  *(int *)(iVar11 + 0x4b20)) + iVar13;
                    goto LAB_82ecfdec;
                  }
                  if (*(int *)(iVar11 + 0x6d74) == 0) {
                    if ((iVar15 < 0x9f) && (iVar16 < 0x9f)) {
                      iVar14 = aiStack_1c70[*(int *)(puVar8 + (int)((uVar35 & 0xffffffff) << 2))] +
                               aiStack_1c70[*(int *)(puVar8 + (int)((uVar23 & 0xffffffff) << 2))];
                    }
                    else {
LAB_82ecfc98:
                      iVar14 = uStack_1c5c << 1;
                    }
LAB_82ecfca0:
                    uStack_1cd8 = (iVar14 * -3 - *(int *)(iVar11 + 0x4b20)) + iVar13;
                    goto LAB_82ecfdec;
                  }
                  if ((((iVar17 == 0) && (iStack_1cc0 == 0)) && (iStack_1cd0 == 0)) &&
                     (iStack_1cd4 == 0)) {
                    uVar45 = 0;
LAB_82ecf874:
                    iVar14 = fn_82E9B140(iVar11,uVar32,uVar33,iVar17,0);
                    iVar14 = iVar14 << 2;
                  }
                  else {
                    uVar45 = 1;
                    if (((iVar17 == iStack_1cc0) && (iStack_1cc0 == iStack_1cd0)) &&
                       (iStack_1cd0 == iStack_1cd4)) goto LAB_82ecf874;
                    iVar17 = fn_82E9B140(iVar11,uVar32,uVar33,iVar17,0);
                    iVar15 = fn_82E9B140(iVar11,uVar32,uVar33,iStack_1cd4,0);
                    iVar16 = fn_82E9B140(iVar11,uVar32,uVar33,iVar14,0);
                    iVar14 = fn_82E9B140(iVar11,uVar32,uVar33,iVar18,0);
                    iVar14 = iVar17 + iVar15 + iVar16 + iVar14;
                  }
                  iVar17 = fn_82E9B140(iVar11,uVar32,uVar33,uVar45,0);
                  uStack_1cd8 = ((iVar17 - iVar14) * *(int *)(iVar12 + 0x70) -
                                *(int *)(iVar11 + 0x4b20)) + iVar13;
                  goto LAB_82ecfdec;
                }
                if (*(int *)(iVar11 + 0x6d74) == 0) {
                  uVar35 = (ulonglong)((int)(uVar32 - uStack_1ab8) >> 0x1f);
                  uVar23 = (ulonglong)((int)(uVar33 - uStack_1ab4) >> 0x1f);
                  uVar35 = (uVar32 - uStack_1ab8 ^ uVar35) - uVar35;
                  uVar23 = (uVar33 - uStack_1ab4 ^ uVar23) - uVar23;
                  if ((0x9e < (int)uVar35) || (0x9e < (int)uVar23)) goto LAB_82ecfc98;
                  iVar14 = aiStack_1c70[*(int *)(puVar8 + (int)((uVar23 & 0xffffffff) << 2))] +
                           aiStack_1c70[*(int *)(puVar8 + (int)((uVar35 & 0xffffffff) << 2))];
                  goto LAB_82ecfca0;
                }
                if ((((iVar17 == 0) && (iStack_1cc0 == 0)) && (iStack_1cd0 == 0)) &&
                   (iStack_1cd4 == 0)) {
                  uVar45 = 0;
LAB_82ecfb48:
                  lVar38 = uVar33 - uStack_1ab4;
                  lVar48 = uVar32 - uStack_1ab8;
                  iVar14 = fn_82E9B140(iVar11,lVar48,lVar38,iVar17,0);
                  iVar14 = iVar14 << 2;
                }
                else {
                  uVar45 = 1;
                  if (((iVar17 == iStack_1cc0) && (iStack_1cc0 == iStack_1cd0)) &&
                     (iStack_1cd0 == iStack_1cd4)) goto LAB_82ecfb48;
                  lVar38 = uVar33 - uStack_1ab4;
                  lVar48 = uVar32 - uStack_1ab8;
                  iVar17 = fn_82E9B140(iVar11,lVar48,lVar38,iVar17,0);
                  iVar18 = fn_82E9B140(iVar11,lVar48,lVar38,iStack_1cd4,0);
                  iVar15 = fn_82E9B140(iVar11,lVar48,lVar38,iStack_1cd0,0);
                  iVar14 = fn_82E9B140(iVar11,lVar48,lVar38,iStack_1cc0,0);
                  iVar14 = iVar17 + iVar18 + iVar15 + iVar14;
                }
                iVar17 = fn_82E9B140(iVar11,lVar48,lVar38,uVar45,0);
                uStack_1cd8 = ((iVar17 - iVar14) * *(int *)(iVar12 + 0x70) -
                              *(int *)(iVar11 + 0x4b20)) + iVar13;
                goto LAB_82ecfdec;
              }
              uStack_1cd8 = uStack_1c88;
            }
            *(short *)(iVar24 * 2 + *(int *)(iVar11 + 0x1d74)) = (short)uStack_1cdc;
            *(short *)(iVar24 * 2 + *(int *)(iVar11 + 0x1d78)) = (short)uStack_1ce0;
            iStack_1bd0 = uStack_1cd8 + iStack_1bd0;
          }
LAB_82ecf63c:
          uStack_1b50 = uStack_1b50 + 0x10;
          iVar13 = *(int *)(iVar11 + 0x6d8c);
          uStack_1cb8 = uStack_1cb8 + 0x10;
          iStack_1bdc = iStack_1bdc + 4;
          if (iVar13 != 0) {
            uStack_1b48 = uStack_1b48 + 8;
            uStack_1b54 = uStack_1b54 + 8;
            iStack_1c04 = iStack_1c04 + 8;
            iStack_1bfc = iStack_1bfc + 8;
            iStack_1b5c = iStack_1b5c + 4;
            iStack_1b44 = iStack_1b44 + 4;
          }
          uVar23 = (ulonglong)*(uint *)(iVar11 + 0x2d0);
          uVar30 = uVar30 + 1;
          iVar12 = iVar12 + 0x114;
          iStack_1c54 = iVar24 + 1;
          uStack_1c38 = (uint)uVar30;
          iStack_1cc4 = iVar12;
        } while ((uVar30 & 0xffffffff) < uVar23);
      }
      param_2 = param_2 + 1;
      lStack_1948 = (longlong)iStack_1ca4;
      lStack_1960 = (longlong)iStack_1ba0;
      lStack_1958 = (longlong)iStack_1bb0;
      lStack_1968 = (longlong)iStack_1bd0;
      lStack_1950 = (longlong)iStack_1bd8;
      uStack_1c94 = (uint)param_2;
      dVar55 = (double)lStack_1948 + dVar55;
      dVar54 = (double)lStack_1960 + dVar54;
      dVar53 = (double)lStack_1958 + dVar53;
      dVar52 = (double)lStack_1968 + dVar52;
      dVar51 = (double)lStack_1950 + dVar51;
    } while ((param_2 & 0xffffffff) < (param_3 & 0xffffffff));
  }
  *param_4 = iStack_1c4c;
  *param_5 = dVar55;
  *param_6 = dVar54;
  *param_7 = dVar53;
  *param_8 = dVar52;
  *in_stack_00000054 = dVar51;
  fn_82F6A590();
  return;
}

