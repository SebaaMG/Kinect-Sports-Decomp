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
extern unsigned int *auStack_80;
extern unsigned int *auStack_90;
extern unsigned int fStack_84;
extern int fn_8234E338();
extern int fn_829C5C78();
extern int fn_82F65E18();
extern unsigned int lbl_83214F30;
extern unsigned int lbl_83214F38;
extern unsigned int uStack_98;
extern unsigned int uStack_a0;
extern V16 vectorMultiplyAddFloatingPoint();
extern V16 vectorNegativeMultiplySubtractFloatingPoint();
extern void *memcpy(void *, const void *, unsigned int);


void fn_829C6880(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int in_r0;
  double dVar8;
  undefined1 in_vs32 [16];
  undefined1 in_vs42 [16];
  undefined1 in_vs43 [16];
  undefined1 in_vs44 [16];
  undefined1 auVar9 [16];
  undefined1 in_vs45 [16];
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  float in_register_00010010;
  float in_register_00010014;
  float fVar13;
  float in_register_00010018;
  float fVar14;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [12];
  float fStack_84;
  undefined1 auStack_80 [112];
  
  uStack_98 = CONCAT44((((U64)(lbl_83214F38) >> 0) & 0xFFFFFFFF),(((U64)(lbl_83214F38) >> 32) & 0xFFFFFFFF));
  uStack_a0 = lbl_83214F30;
  pfVar5 = (float *)((int)&uStack_a0 + in_r0 & 0xfffffff0);
  iVar1 = 0;
  if (pfVar5[3] == in_register_00010014) {
    iVar1 = -1;
  }
  iVar2 = 0;
  if (pfVar5[3] == in_register_00010010) {
    iVar2 = -1;
  }
  iVar3 = 0;
  if (pfVar5[1] == in_register_00010010) {
    iVar3 = -1;
  }
  iVar4 = 0;
  if (*pfVar5 == in_register_00010010) {
    iVar4 = -1;
  }
  if (((iVar1 != -1 || iVar2 != -1) || iVar3 != -1) || iVar4 != -1) {
    fn_829C5C78(0xffffffff83214f20);
    fVar14 = in_register_00010018;
    fVar13 = in_register_00010014;
    fn_829C5C78(0xffffffff83214f44);
    fVar14 = in_register_00010014 * fVar13 + 0.0 + in_register_00010018 * fVar14;
    pfVar5 = (float *)((uint)(auStack_90 + in_r0) & 0xfffffff0);
    *pfVar5 = fVar14;
    pfVar5[1] = fVar14;
    pfVar5[2] = fVar14;
    pfVar5[3] = fVar14;
    dVar8 = (double)fn_82F65E18((double)fStack_84);
    vectorNegativeMultiplySubtractFloatingPoint(in_vs32,in_vs45,in_vs44);
    fn_8234E338(-(double)(float)dVar8,auStack_80);
    altv207_13(in_vs32,in_vs42);
    puVar6 = (undefined4 *)((uint)(auStack_80 + in_r0) & 0xfffffff0);
    uVar10 = puVar6[1];
    uVar11 = puVar6[2];
    uVar12 = puVar6[3];{ V16 _vt0 = vectorMultiplyAddFloatingPoint(in_vs42,in_vs44,in_vs43); memcpy(auVar9, &_vt0, 16); }
    vectorMultiplyAddFloatingPoint(in_vs45,in_vs32,auVar9);
    puVar7 = (undefined4 *)((int)&uStack_a0 + in_r0 & 0xfffffff0);
    *puVar7 = *puVar6;
    puVar7[1] = uVar10;
    puVar7[2] = uVar11;
    puVar7[3] = uVar12;
  }
  return;
}

