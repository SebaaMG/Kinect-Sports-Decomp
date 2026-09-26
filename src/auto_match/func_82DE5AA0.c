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
extern int fn_82DE57B8();
extern int fn_82F6A528();
extern int fn_82F6A574();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82005344;
extern unsigned int lbl_8200BF40;


void fn_82DE5AA0(undefined8 param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  int iVar18;
  int iVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  int *piVar24;
  
  fn_82F6A528();
  piVar24 = (int *)fn_82DE57B8();
  fVar23 = lbl_82005344;
  iVar18 = *piVar24;
  fVar1 = (float)piVar24[4];
  fVar2 = *param_2;
  fVar3 = *param_3;
  fVar4 = param_3[1];
  fVar5 = param_2[2];
  iVar19 = piVar24[1];
  fVar20 = lbl_82002AE0 / param_3[piVar24[2]];
  fVar6 = param_3[2];
  fVar7 = param_2[1];
  fVar8 = (float)piVar24[5];
  piVar24[0xd] = (int)(fVar1 * fVar20);
  piVar24[0xe] = (int)(fVar8 * fVar20);
  fVar16 = param_3[iVar18];
  fVar21 = fVar20 * fVar20;
  fVar17 = param_3[iVar19];
  fVar9 = (float)piVar24[6];
  fVar10 = (float)piVar24[8];
  piVar24[0x10] = (int)(fVar9 * fVar20);
  piVar24[0x11] = (int)(fVar10 * fVar20);
  fVar11 = (float)piVar24[7];
  fVar22 = fVar21 * fVar20;
  fVar12 = (float)piVar24[9];
  fVar13 = (float)piVar24[0xc];
  fVar14 = (float)piVar24[0xb];
  fVar15 = (float)piVar24[10];
  fVar4 = -(fVar5 * fVar6 - -(fVar7 * fVar4 - -(fVar2 * fVar3)));
  fVar5 = (float)piVar24[3] * fVar4;
  piVar24[0xf] = (int)-((fVar16 * fVar1 + fVar8 * fVar17 + fVar5) * fVar21);
  fVar2 = param_3[iVar19];
  fVar3 = param_3[iVar18];
  piVar24[0x13] = (int)(fVar12 * fVar20);
  piVar24[0x14] = (int)(fVar13 * fVar20);
  piVar24[0x12] =
       (int)((fVar9 * fVar3 * fVar3 +
             fVar10 * fVar2 * fVar2 +
             ((fVar2 * fVar8 + fVar3 * fVar1) * fVar23 + fVar5) * fVar4 +
             fVar11 * fVar3 * fVar2 * fVar23) * fVar22);
  fVar6 = lbl_8200BF40;
  fVar2 = param_3[iVar19];
  fVar3 = param_3[iVar18];
  piVar24[0x16] = (int)(fVar15 * fVar20);
  piVar24[0x15] =
       (int)-((fVar12 * fVar3 * fVar3 * fVar3 +
              fVar13 * fVar2 * fVar2 * fVar2 +
              fVar15 * fVar2 * fVar3 * fVar3 * fVar6 +
              ((fVar9 * fVar3 * fVar3 + fVar11 * fVar3 * fVar2 * fVar23 + fVar10 * fVar2 * fVar2) *
               fVar6 + ((fVar2 * fVar8 + fVar3 * fVar1) * fVar6 + fVar5) * fVar4) * fVar4 +
              fVar14 * fVar3 * fVar2 * fVar2 * fVar6) * fVar22 * fVar20);
  piVar24[0x17] =
       (int)-((fVar10 * fVar4 + param_3[iVar18] * fVar14 + fVar13 * param_3[iVar19]) * fVar21);
  fVar2 = param_3[iVar19];
  fVar3 = param_3[iVar18];
  piVar24[0x18] =
       (int)((fVar12 * fVar3 * fVar3 +
             fVar14 * fVar2 * fVar2 +
             ((fVar11 * fVar2 + fVar9 * fVar3) * fVar23 + fVar1 * fVar4) * fVar4 +
             fVar15 * fVar3 * fVar2 * fVar23) * fVar22);
  fn_82F6A574();
  return;
}

