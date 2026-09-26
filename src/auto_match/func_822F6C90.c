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
#define NAN(x) ((x) != (x))
extern double _seed_nan;
extern unsigned int *auStack_100;
extern unsigned int *auStack_168;
extern float fRam831cce20;
extern unsigned int fStack_138;
extern unsigned int fStack_13c;
extern int fn_822315A0();
extern int fn_8223CD80();
extern int fn_8223DB10();
extern int fn_822BD338();
extern int fn_822DB5D0();
extern int fn_822DB628();
extern int fn_822DC6A0();
extern int fn_822EAD10();
extern int fn_822EADF8();
extern int fn_822EC770();
extern int fn_822F80B8();
extern int fn_822F85E0();
extern int fn_8232C8B8();
extern int fn_8232CA90();
extern int fn_8251F720();
extern int fn_8251FA58();
extern int fn_8255FD70();
extern int fn_8265CA20();
extern int fn_82F63CA0();
extern unsigned int iStack_160;
extern unsigned int iStack_b0;
extern unsigned int iStack_fc;
extern unsigned int lbl_821AE3B4;
extern unsigned int uStack_104;
extern unsigned int uStack_108;
extern unsigned int uStack_10c;
extern unsigned int uStack_110;
extern unsigned int uStack_134;
extern unsigned int uStack_140;


undefined4 * fn_822F6C90(undefined4 *param_1,int param_2)

{
  float fVar1;
  ushort uVar2;
  float fVar3;
  char cVar7;
  undefined4 uVar5;
  ushort *puVar6;
  undefined8 uVar4;
  ulonglong uVar8;
  float *pfVar9;
  uint *puVar10;
  undefined4 uVar11;
  int iVar12;
  undefined4 *puVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  double dVar17;
  float afStack_170 [2];
  undefined4 auStack_168 [2];
  int iStack_160;
  int aiStack_150 [4];
  undefined4 uStack_140;
  float fStack_13c;
  float fStack_138;
  undefined4 uStack_134;
  float afStack_130 [4];
  float *pfStack_120;
  float *pfStack_11c;
  uint uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined1 auStack_100 [4];
  int iStack_fc;
  undefined **appuStack_f0 [15];
  undefined4 *puStack_b4;
  int iStack_b0;
  
  fn_8255FD70(&pfStack_120,*(undefined4 *)(*(int *)(*(int *)(param_2 + 0xc) + 0x118) + 0x24),
                    0xffffffff821adef4);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  fn_8232CA90(param_1,(int)pfStack_11c - (int)pfStack_120 >> 2);
  pfVar9 = pfStack_120;
  do {
    if (pfVar9 == pfStack_11c) {
      if (pfStack_120 != (float *)0x0) {
        fn_8265CA20();
      }
      return param_1;
    }
    uVar11 = 1;
    fVar3 = *pfVar9;
    aiStack_150[0] = 0;
    aiStack_150[1] = 0;
    aiStack_150[2] = 0;
    auStack_168[0] = 0;
    iStack_160 = 1;
    puVar10 = (uint *)((int)fVar3 + 0x44);
    afStack_170[0] = fVar3;
    afStack_130[0] = fVar3;
    fn_82F63CA0(auStack_168,0xffffffff821ac4b4,1);
    fn_822DC6A0(auStack_168,(int)auStack_168 + iStack_160,
                      ((int)auStack_168 + iStack_160) - (int)auStack_168);
    fn_822DB628(aiStack_150,afStack_170,auStack_168);
    iVar14 = aiStack_150[0];
    puVar13 = (undefined4 *)(aiStack_150[0] + 0x1c);
    fn_8223CD80(appuStack_f0);
    appuStack_f0[0] = &lbl_821AE3B4;
    if (0xf < *(uint *)(iVar14 + 0x30)) {
      puVar13 = (undefined4 *)*puVar13;
    }
    iStack_b0 = (int)puVar13 + *(int *)(iVar14 + 0x2c);
    puStack_b4 = puVar13;
    cVar7 = fn_822F85E0(appuStack_f0,&uStack_134);
    uVar5 = uStack_134;
    if (cVar7 == '\0') {
      fn_8223DB10(appuStack_f0);
      uVar5 = 0;
    }
    else {
      fn_8223DB10(appuStack_f0);
    }
    uStack_140 = uVar5;
    dVar17 = (double)fn_822EC770(aiStack_150[0] + 0xa8);
    fStack_13c = (float)dVar17;
    dVar17 = (double)fn_822EC770(aiStack_150[0] + 0xc4);
    afStack_170[0] = (float)dVar17;
    iVar14 = aiStack_150[0] + 0x8c;
    cVar7 = fn_822BD338(iVar14,0xffffffff821adae0);
    if (cVar7 == '\0') {
      cVar7 = fn_822BD338(iVar14,0xffffffff821adae8);
      if (cVar7 == '\0') {
        fn_822BD338(iVar14,0xffffffff821ae298);
        uVar11 = 2;
      }
    }
    else {
      uVar11 = 0;
    }
    iVar15 = aiStack_150[0] + 0x38;
    iVar12 = aiStack_150[0] + 0x70;
    iVar14 = aiStack_150[0] + 0x54;
    cVar7 = fn_822BD338(iVar15,0xffffffff821ae208);
    if (cVar7 == '\0') {
      cVar7 = fn_822BD338(iVar15,0xffffffff821ae214);
      uVar16 = (uint)(cVar7 != '\0');
    }
    else {
      uVar16 = 0;
    }
    uVar5 = fn_822EADF8(iVar12);
    uStack_10c = fn_822EAD10(iVar14);
    uStack_110 = uVar16;
    uStack_108 = uVar5;
    uStack_104 = uVar11;
    if ((fVar3 == -(_seed_nan)) ||
       (uVar8 = (ulonglong)*puVar10, uVar8 == (uVar8 - 1) + (ulonglong)(uVar8 == 0))) {
      dVar17 = (double)fRam831cce20;
    }
    else {
      puVar6 = (ushort *)fn_8251F720(puVar10,0);
      uVar2 = puVar6[6];
      while (uVar2 != 0) {
        if (uVar2 == 0x14) goto LAB_822f6f40;
        puVar6 = (ushort *)((uint)*puVar6 + (int)puVar6);
        uVar2 = puVar6[6];
      }
      puVar6 = (ushort *)0x0;
LAB_822f6f40:
      fVar1 = fRam831cce20;
      if (puVar6 != (ushort *)0x0) {
        fVar1 = *(float *)(puVar6 + 2);
      }
      dVar17 = (double)fVar1;
      fn_8251FA58();
    }
    fStack_138 = (float)dVar17;
    uVar4 = fn_822F80B8(auStack_100,&uStack_140,(int)fVar3 + 0x40,puVar10,afStack_130,
                            &fStack_138,&uStack_110,&fStack_13c);
    fn_8232C8B8(param_1,uVar4);
    if (iStack_fc != 0) {
      fn_822315A0();
    }
    fn_822DB5D0(aiStack_150);
    pfVar9 = pfVar9 + 1;
  } while( true );
}

