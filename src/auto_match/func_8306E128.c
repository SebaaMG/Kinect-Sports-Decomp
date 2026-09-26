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
extern unsigned int *fStack_7c;
extern unsigned int fStack_80;
extern int fn_82F6A544();
extern int fn_82F6A590();
extern int fn_8306D398();
extern int fn_8306D698();
extern int fn_8306D760();
extern int fn_8306D7E0();
extern int fn_8306DCC0();
extern int fn_8306E7D8();
extern int fn_8306E7F8();
extern int fn_8306E818();
extern int fn_8306E890();
extern int fn_83077098();
extern int fn_83078420();
extern int fn_83078F00();
extern int fn_83078FE8();
extern int fn_83079018();
extern int fn_83079040();
extern int fn_8307D128();
extern unsigned int lbl_8205751C;
extern unsigned int lbl_82186D50;
extern unsigned int lbl_82186E74;
extern unsigned int lbl_821AAD20;


void fn_8306E128(undefined8 param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4,
                  ulonglong param_5)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  double dVar4;
  int in_r0;
  undefined4 *puVar5;
  char cVar7;
  int iVar6;
  undefined4 *puVar8;
  undefined4 *puVar9;
  float *pfVar10;
  double extraout_f1;
  double dVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined1 in_vs32 [16];
  undefined1 in_vs35 [16];
  undefined1 in_vs60 [16];
  undefined4 in_register_000103f0;
  undefined4 in_register_000103f4;
  undefined4 in_register_000103f8;
  undefined4 in_vr63;
  float fStack_80;
  float fStack_7c;
  
  puVar5 = (undefined4 *)fn_82F6A544();
  puVar8 = puVar5 + 4;
  dVar15 = extraout_f1;
  fn_83079040(puVar8,*puVar5);
  fn_8306D398(dVar15,puVar5 + 0x1c44);
  puVar9 = puVar5 + 0x534c;
  fn_83078420(dVar15,puVar9);
  cVar7 = fn_8306D7E0(*puVar5);
  dVar16 = (double)lbl_821AAD20;
  if (cVar7 != '\0') {
    puVar5[0x53b4] = lbl_821AAD20;
    puVar5[0x53b5] = 0;
  }
  iVar6 = fn_8306D698(&fStack_80,*puVar5,0);
  dVar17 = (double)*(float *)(iVar6 + 4);
  dVar11 = (double)fn_83077098(puVar9);
  uVar2 = puVar5[0x1c28];
  fStack_7c = (float)(dVar11 * dVar17);
  dVar11 = (double)fStack_7c;
  altv207_13(in_vs32,in_vs35);
  puVar3 = (undefined4 *)((int)&fStack_80 + in_r0 & 0xfffffff0);
  *puVar3 = in_register_000103f0;
  puVar3[1] = in_register_000103f4;
  puVar3[2] = in_register_000103f8;
  puVar3[3] = in_vr63;
  fn_83078F00(uVar2);
  cVar7 = fn_8306D760(*puVar5);
  if (cVar7 != '\0') {
    fn_8307D128(dVar15,puVar5 + 0x5374);
  }
  fn_83079018(puVar8,0x17);
  uVar12 = fn_83078FE8();
  fn_83079018(puVar8,0x15);
  uVar13 = fn_83078FE8();
  dVar17 = (double)fn_8306E7D8(uVar13,uVar12);
  dVar17 = (double)(float)(dVar17 - (double)(float)puVar5[0x5359]);
  fVar1 = lbl_8205751C;
  if ((param_3 & 0xff) != 0) {
    fVar1 = lbl_82186D50;
  }
  uVar12 = fn_8306E890((double)fVar1,dVar15);
  dVar14 = (double)fn_8306E818((double)(float)puVar5[0x53b4],dVar17,uVar12);
  puVar5[0x53b4] = (float)dVar14;
  cVar7 = fn_8306D760(*puVar5);
  dVar14 = dVar17;
  if (cVar7 != '\0') {
    dVar14 = (double)fn_8306E7D8((double)(float)puVar5[0x53b4],dVar17);
  }
  dVar4 = dVar14;
  if ((param_5 & 0xff) != 0) {
    dVar4 = dVar17;
  }
  fStack_7c = (float)(dVar11 - dVar4);
  fn_83078F00(puVar5[0x1c28]);
  altv207_13(in_vs32,in_vs60);
  puVar5[0x53b5] = puVar5[0x53b5] + 1;
  puVar8 = (undefined4 *)((int)&fStack_80 + in_r0 & 0xfffffff0);
  *puVar8 = in_register_000103f0;
  puVar8[1] = in_register_000103f4;
  puVar8[2] = in_register_000103f8;
  puVar8[3] = in_vr63;
  dVar11 = (double)fn_83077098(puVar9);
  fn_8306DCC0((double)(float)(dVar11 * (double)fStack_80),
                    (double)((float)(dVar17 - dVar14) * fStack_7c),*puVar5);
  cVar7 = fn_8306D7E0(*puVar5);
  if (cVar7 == '\0') {
    dVar15 = -dVar15;
  }
  pfVar10 = (float *)(puVar5 + 0x53b6);
  dVar11 = (double)lbl_82186E74;
  fVar1 = *pfVar10;
  *pfVar10 = (float)(dVar15 + (double)fVar1);
  dVar15 = (double)fn_8306E7F8((double)(float)(dVar15 + (double)fVar1),dVar16,dVar11);
  *pfVar10 = (float)dVar15;
  fn_82F6A590();
  return;
}

