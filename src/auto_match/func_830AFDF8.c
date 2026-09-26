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
#define ZEXT48(x) ((U64)((U32)(x)))
extern unsigned int *auStack_100;
extern unsigned int *auStack_110;
extern unsigned int *auStack_120;
extern unsigned int *auStack_130;
extern unsigned int *auStack_140;
extern unsigned int *auStack_150;
extern unsigned int *auStack_170;
extern unsigned int *auStack_180;
extern unsigned int *auStack_190;
extern unsigned int *auStack_1a0;
extern unsigned int *auStack_1b0;
extern unsigned int *auStack_1c0;
extern unsigned int *auStack_1d0;
extern unsigned int *auStack_f0;
extern unsigned int fStack_1f0;
extern unsigned int fStack_1f4;
extern unsigned int fStack_1f8;
extern unsigned int fStack_1fc;
extern unsigned int fStack_200;
extern int fn_82CE5110();
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_831BD444;
extern unsigned int stack0x00000000;
extern unsigned int uStack_158;
extern unsigned int uStack_15c;
extern unsigned int uStack_160;
extern U64 storeVectorElementWordIndexed();
extern V16 vectorAddFloatingPoint();
extern V16 vectorMultiplyAddFloatingPoint();
extern V16 vectorSubtractFloatingPoint();
extern void *memcpy(void *, const void *, unsigned int);


longlong fn_830AFDF8(undefined8 param_1,int param_2,longlong param_3,int param_4,float *param_5)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  char cVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  undefined1 *puVar12;
  double dVar13;
  double dVar14;
  undefined1 in_vs33 [16];
  undefined1 in_vs36 [16];
  undefined1 in_vs37 [16];
  undefined1 in_vs38 [16];
  undefined1 in_vs39 [16];
  undefined1 in_vs40 [16];
  undefined1 in_vs41 [16];
  undefined1 in_vs42 [16];
  undefined1 in_vs43 [16];
  undefined1 auVar15 [16];
  undefined1 in_vs44 [16];
  undefined1 auVar16 [16];
  undefined1 in_vs45 [16];
  undefined1 in_vs54 [16];
  undefined1 in_vs56 [16];
  undefined1 in_vs58 [16];
  undefined1 in_vs59 [16];
  undefined1 in_vs60 [16];
  undefined1 in_vs61 [16];
  undefined1 in_vs62 [16];
  undefined1 in_vs63 [16];
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 in_register_00010140;
  undefined4 in_register_00010144;
  undefined4 in_register_00010148;
  undefined4 in_vr20;
  undefined4 in_register_00010150;
  undefined4 in_register_00010154;
  undefined4 in_register_00010158;
  undefined4 in_vr21;
  undefined4 in_register_00010170;
  undefined4 in_register_00010174;
  undefined4 in_register_00010178;
  undefined4 in_vr23;
  undefined4 in_register_00010190;
  undefined4 in_register_00010194;
  undefined4 in_register_00010198;
  undefined4 in_vr25;
  float fStack_200;
  float fStack_1fc;
  float fStack_1f8;
  float fStack_1f4;
  float fStack_1f0;
  undefined1 auStack_1d0 [16];
  undefined1 auStack_1c0 [16];
  undefined1 auStack_1b0 [16];
  undefined1 auStack_1a0 [16];
  undefined1 auStack_190 [16];
  undefined1 auStack_180 [16];
  undefined1 auStack_170 [16];
  undefined1 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined1 auStack_150 [16];
  undefined1 auStack_140 [16];
  undefined1 auStack_130 [16];
  undefined1 auStack_120 [16];
  undefined1 auStack_110 [16];
  undefined1 auStack_100 [16];
  undefined1 auStack_f0 [240];
  
  uVar6 = ZEXT48(&stack0x00000000);
  lVar11 = (ulonglong)*(ushort *)(param_2 + 4) * 0x80 + param_3;
  param_3 = (ulonglong)*(ushort *)(param_2 + 6) * 0x80 + param_3;
  lVar8 = 0;
  param_2 = param_2 + 0x10;
  iVar10 = 1;
  dVar14 = (double)lbl_821AAD20;
  iVar9 = 2;
  do {
    do {
      cVar1 = *(char *)(param_2 + 3);
    } while (0x1b < (uint)(int)cVar1);
    iVar5 = *(int *)(cVar1 * 4 + -0x7cf50160);
    switch(cVar1) {
    case '\0':
    case '\x01':
    case '\x16':
    case '\x17':
    case '\x18':
      return lVar8;
    case '\x02':
      param_2 = *(int *)(param_2 + 4) + param_2;
      break;
    default:
      cVar7 = cVar1;
      do {
        param_2 = (uint)(byte)(&lbl_831BD444)[cVar7] + param_2;
        cVar7 = *(char *)(param_2 + 3);
      } while (cVar7 == cVar1);
      break;
    case '\x04':
    case '\v':
      break;
    case '\x05':
    case '\x06':
      if (param_4 < iVar10) {
        return lVar8;
      }
      lVar8 = lVar8 + 1;
      iVar9 = iVar9 + 1;
      iVar10 = iVar10 + 1;{ V16 _vt0 = vectorSubtractFloatingPoint(in_vs40,in_vs44); memcpy(in_vs44, &_vt0, 16); }
      param_2 = param_2 + 0x30;{ V16 _vt1 = vectorMultiplyAddFloatingPoint(in_vs41,in_vs43,in_vs42); memcpy(in_vs43, &_vt1, 16); }{ V16 _vt2 = vectorMultiplyAddFloatingPoint(in_vs44,in_vs45,in_vs43); memcpy(in_vs45, &_vt2, 16); }
      uVar17 = storeVectorElementWordIndexed(in_vs39,0,uVar6 - 0x1f8);
      *(undefined4 *)(uVar6 - 0x1f8) = uVar17;
      *param_5 = fStack_1f8;
      param_5 = param_5 + 1;
      break;
    case '\a':
      if (param_4 < iVar10) {
        return lVar8;
      }
      lVar8 = lVar8 + 1;
      iVar9 = iVar9 + 1;
      iVar10 = iVar10 + 1;{ V16 _vt3 = vectorSubtractFloatingPoint(in_vs40,in_vs44); memcpy(in_vs44, &_vt3, 16); }
      param_2 = param_2 + 0x40;{ V16 _vt4 = vectorMultiplyAddFloatingPoint(in_vs41,in_vs43,in_vs42); memcpy(in_vs43, &_vt4, 16); }{ V16 _vt5 = vectorMultiplyAddFloatingPoint(in_vs44,in_vs45,in_vs43); memcpy(in_vs45, &_vt5, 16); }
      uVar17 = storeVectorElementWordIndexed(in_vs39,0,uVar6 - 0x1f0);
      *(undefined4 *)(uVar6 - 0x1f0) = uVar17;
      *param_5 = fStack_1f0;
      param_5 = param_5 + 1;
      break;
    case '\x10':
    case '\x11':
    case '\x12':
    case '\x13':
      if (param_4 < iVar10) {
        return lVar8;
      }
      lVar8 = lVar8 + 1;
      iVar9 = iVar9 + 1;
      iVar10 = iVar10 + 1;{ V16 _vt6 = vectorSubtractFloatingPoint(in_vs40,in_vs44); memcpy(in_vs44, &_vt6, 16); }
      param_2 = param_2 + 0x30;{ V16 _vt7 = vectorMultiplyAddFloatingPoint(in_vs41,in_vs43,in_vs42); memcpy(in_vs43, &_vt7, 16); }{ V16 _vt8 = vectorMultiplyAddFloatingPoint(in_vs44,in_vs45,in_vs43); memcpy(in_vs45, &_vt8, 16); }
      uVar17 = storeVectorElementWordIndexed(in_vs39,0,uVar6 - 0x1fc);
      *(undefined4 *)(uVar6 - 0x1fc) = uVar17;
      dVar13 = (double)fStack_1fc;
      if (-(double)fStack_1fc < 0.0) {
        dVar13 = dVar14;
      }
      *param_5 = (float)dVar13;
      param_5 = param_5 + 1;
      break;
    case '\x14':
    case '\x15':
      if (param_4 < iVar9) {
        return lVar8;
      }{ V16 _vt9 = vectorSubtractFloatingPoint(in_vs39,in_vs40); memcpy(auVar16, &_vt9, 16); }
      lVar8 = lVar8 + 2;
      iVar9 = iVar9 + 2;
      iVar10 = iVar10 + 2;
      param_2 = param_2 + 0x70;{ V16 _vt10 = vectorMultiplyAddFloatingPoint(in_vs41,in_vs43,in_vs42); memcpy(auVar15, &_vt10, 16); }{ V16 _vt11 = vectorMultiplyAddFloatingPoint(auVar16,in_vs45,auVar15); memcpy(auVar16, &_vt11, 16); }
      uVar17 = storeVectorElementWordIndexed(in_vs38,0,uVar6 - 500);
      *(undefined4 *)(uVar6 - 500) = uVar17;
      dVar13 = (double)fStack_1f4;
      if (-(double)fStack_1f4 < 0.0) {
        dVar13 = dVar14;
      }
      *param_5 = (float)dVar13;{ V16 _vt12 = vectorSubtractFloatingPoint(in_vs36,in_vs37); memcpy(in_vs44, &_vt12, 16); }{ V16 _vt13 = vectorMultiplyAddFloatingPoint(in_vs41,auVar15,in_vs42); memcpy(in_vs43, &_vt13, 16); }{ V16 _vt14 = vectorMultiplyAddFloatingPoint(in_vs44,auVar16,in_vs43); memcpy(in_vs45, &_vt14, 16); }
      uVar17 = storeVectorElementWordIndexed(in_vs33,0,uVar6 - 0x200);
      *(undefined4 *)(uVar6 - 0x200) = uVar17;
      dVar13 = (double)fStack_200;
      if (-(double)fStack_200 < 0.0) {
        dVar13 = dVar14;
      }
      param_5[1] = (float)dVar13;
      param_5 = param_5 + 2;
      break;
    case '\x1b':
      puVar12 = (undefined1 *)lVar11;
      uStack_160 = *puVar12;
      uStack_15c = *(undefined4 *)(puVar12 + 4);
      uStack_158 = *(undefined4 *)(puVar12 + 8);
      puVar2 = (undefined4 *)((uint)(puVar12 + 0x10) & 0xfffffff0);
      uVar17 = puVar2[1];
      uVar18 = puVar2[2];
      uVar19 = puVar2[3];
      puVar3 = (undefined4 *)((uint)(auStack_150 + iVar5) & 0xfffffff0);
      *puVar3 = *puVar2;
      puVar3[1] = uVar17;
      puVar3[2] = uVar18;
      puVar3[3] = uVar19;
      puVar2 = (undefined4 *)((uint)(puVar12 + 0x20) & 0xfffffff0);
      uVar17 = puVar2[1];
      uVar18 = puVar2[2];
      uVar19 = puVar2[3];
      puVar3 = (undefined4 *)((uint)(auStack_140 + iVar5) & 0xfffffff0);
      *puVar3 = *puVar2;
      puVar3[1] = uVar17;
      puVar3[2] = uVar18;
      puVar3[3] = uVar19;
      puVar2 = (undefined4 *)((uint)(puVar12 + 0x30) & 0xfffffff0);
      uVar17 = puVar2[1];
      uVar18 = puVar2[2];
      uVar19 = puVar2[3];
      puVar3 = (undefined4 *)((uint)(auStack_130 + iVar5) & 0xfffffff0);
      *puVar3 = *puVar2;
      puVar3[1] = uVar17;
      puVar3[2] = uVar18;
      puVar3[3] = uVar19;
      puVar2 = (undefined4 *)((uint)(puVar12 + 0x40) & 0xfffffff0);
      uVar17 = puVar2[1];
      uVar18 = puVar2[2];
      uVar19 = puVar2[3];
      puVar3 = (undefined4 *)((uint)(auStack_120 + iVar5) & 0xfffffff0);
      *puVar3 = *puVar2;
      puVar3[1] = uVar17;
      puVar3[2] = uVar18;
      puVar3[3] = uVar19;
      puVar2 = (undefined4 *)((uint)(puVar12 + iVar5 + 0x50) & 0xfffffff0);
      uVar17 = puVar2[1];
      uVar18 = puVar2[2];
      uVar19 = puVar2[3];
      puVar3 = (undefined4 *)((uint)(auStack_110 + iVar5) & 0xfffffff0);
      *puVar3 = *puVar2;
      puVar3[1] = uVar17;
      puVar3[2] = uVar18;
      puVar3[3] = uVar19;
      puVar2 = (undefined4 *)((uint)(puVar12 + 0x60) & 0xfffffff0);
      uVar17 = puVar2[1];
      uVar18 = puVar2[2];
      uVar19 = puVar2[3];
      puVar3 = (undefined4 *)((uint)(auStack_100 + iVar5) & 0xfffffff0);
      *puVar3 = *puVar2;
      puVar3[1] = uVar17;
      puVar3[2] = uVar18;
      puVar3[3] = uVar19;
      puVar2 = (undefined4 *)((uint)(puVar12 + 0x70) & 0xfffffff0);
      uVar17 = puVar2[1];
      uVar18 = puVar2[2];
      uVar19 = puVar2[3];
      iVar4 = (int)param_3;
      puVar3 = (undefined4 *)((uint)(auStack_f0 + iVar5) & 0xfffffff0);
      *puVar3 = *puVar2;
      puVar3[1] = uVar17;
      puVar3[2] = uVar18;
      puVar3[3] = uVar19;
      lVar11 = uVar6 - 0x160;
      puVar2 = (undefined4 *)(iVar4 + 0x10U & 0xfffffff0);
      uVar17 = puVar2[1];
      uVar18 = puVar2[2];
      uVar19 = puVar2[3];
      puVar3 = (undefined4 *)((uint)(auStack_1d0 + iVar5) & 0xfffffff0);
      *puVar3 = *puVar2;
      puVar3[1] = uVar17;
      puVar3[2] = uVar18;
      puVar3[3] = uVar19;
      puVar2 = (undefined4 *)(iVar4 + 0x20U & 0xfffffff0);
      uVar17 = puVar2[1];
      uVar18 = puVar2[2];
      uVar19 = puVar2[3];
      puVar3 = (undefined4 *)((uint)(auStack_1c0 + iVar5) & 0xfffffff0);
      *puVar3 = *puVar2;
      puVar3[1] = uVar17;
      puVar3[2] = uVar18;
      puVar3[3] = uVar19;
      puVar2 = (undefined4 *)(iVar4 + 0x30U & 0xfffffff0);
      uVar17 = puVar2[1];
      uVar18 = puVar2[2];
      uVar19 = puVar2[3];
      puVar3 = (undefined4 *)((uint)(auStack_1b0 + iVar5) & 0xfffffff0);
      *puVar3 = *puVar2;
      puVar3[1] = uVar17;
      puVar3[2] = uVar18;
      puVar3[3] = uVar19;
      puVar2 = (undefined4 *)(iVar4 + 0x40U & 0xfffffff0);
      uVar17 = puVar2[1];
      uVar18 = puVar2[2];
      uVar19 = puVar2[3];
      param_3 = uVar6 - 0x1e0;
      puVar3 = (undefined4 *)((uint)(auStack_1a0 + iVar5) & 0xfffffff0);
      *puVar3 = *puVar2;
      puVar3[1] = uVar17;
      puVar3[2] = uVar18;
      puVar3[3] = uVar19;
      puVar2 = (undefined4 *)(iVar5 + iVar4 + 0x50 & 0xfffffff0);
      uVar17 = puVar2[1];
      uVar18 = puVar2[2];
      uVar19 = puVar2[3];
      puVar3 = (undefined4 *)((uint)(auStack_190 + iVar5) & 0xfffffff0);
      *puVar3 = *puVar2;
      puVar3[1] = uVar17;
      puVar3[2] = uVar18;
      puVar3[3] = uVar19;
      puVar2 = (undefined4 *)(iVar4 + 0x60U & 0xfffffff0);
      uVar17 = puVar2[1];
      uVar18 = puVar2[2];
      uVar19 = puVar2[3];
      puVar3 = (undefined4 *)((uint)(auStack_180 + iVar5) & 0xfffffff0);
      *puVar3 = *puVar2;
      puVar3[1] = uVar17;
      puVar3[2] = uVar18;
      puVar3[3] = uVar19;
      puVar2 = (undefined4 *)(iVar4 + 0x70U & 0xfffffff0);
      uVar17 = puVar2[1];
      uVar18 = puVar2[2];
      uVar19 = puVar2[3];
      puVar3 = (undefined4 *)((uint)(auStack_170 + iVar5) & 0xfffffff0);
      *puVar3 = *puVar2;
      puVar3[1] = uVar17;
      puVar3[2] = uVar18;
      puVar3[3] = uVar19;
      fn_82CE5110(uVar6 - 0xb0,param_2,uVar6 - 0x140);
      fn_82CE5110(uVar6 - 0xd0,param_2 + 0x30,uVar6 - 0x1c0);
      fn_82CE5110(uVar6 - 0xe0,param_2,uVar6 - 0x110);
      fn_82CE5110(uVar6 - 0xc0,param_2 + 0x30,uVar6 - 400);
      vectorAddFloatingPoint(in_vs59,in_vs63);
      vectorAddFloatingPoint(in_vs58,in_vs62);
      vectorAddFloatingPoint(in_vs56,in_vs61);
      vectorAddFloatingPoint(in_vs54,in_vs60);
      param_2 = param_2 + 0x60;
      puVar2 = (undefined4 *)((uint)(auStack_150 + iVar5) & 0xfffffff0);
      *puVar2 = in_register_00010190;
      puVar2[1] = in_register_00010194;
      puVar2[2] = in_register_00010198;
      puVar2[3] = in_vr25;
      puVar2 = (undefined4 *)((uint)(auStack_1d0 + iVar5) & 0xfffffff0);
      *puVar2 = in_register_00010170;
      puVar2[1] = in_register_00010174;
      puVar2[2] = in_register_00010178;
      puVar2[3] = in_vr23;
      puVar2 = (undefined4 *)((uint)(auStack_120 + iVar5) & 0xfffffff0);
      *puVar2 = in_register_00010150;
      puVar2[1] = in_register_00010154;
      puVar2[2] = in_register_00010158;
      puVar2[3] = in_vr21;
      puVar2 = (undefined4 *)((uint)(auStack_1a0 + iVar5) & 0xfffffff0);
      *puVar2 = in_register_00010140;
      puVar2[1] = in_register_00010144;
      puVar2[2] = in_register_00010148;
      puVar2[3] = in_vr20;
    }
  } while( true );
}

