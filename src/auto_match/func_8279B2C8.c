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
extern int fn_8279A8D8();
extern int fn_8279A9F8();
extern int fn_8279AA48();
extern int fn_8279ADE8();
extern int fn_8279AE60();
extern unsigned int lbl_820885C8;


void fn_8279B2C8(int param_1,float *param_2,int param_3)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  bool bVar9;
  float fVar10;
  char cVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  
  fVar2 = *param_2;
  fVar3 = *(float *)(param_1 + 0xf0);
  if ((((fVar2 != fVar3) || (param_2[2] != *(float *)(param_1 + 0xf8))) ||
      (param_2[1] != *(float *)(param_1 + 0xf4))) ||
     (bVar9 = false, param_2[3] != *(float *)(param_1 + 0xfc))) {
    bVar9 = true;
  }
  if (!bVar9) {
    return;
  }
  fVar4 = *(float *)(param_1 + 0xf8);
  fVar5 = *(float *)(param_1 + 0xfc);
  fVar6 = *(float *)(param_1 + 0xf4);
  fVar7 = param_2[3];
  fVar8 = param_2[2];
  *(float *)(param_1 + 0xf4) = param_2[1];
  *(float *)(param_1 + 0xf0) = fVar2;
  fVar10 = lbl_820885C8;
  *(float *)(param_1 + 0xf8) = fVar8;
  *(float *)(param_1 + 0xfc) = fVar7;
  uVar16 = (ulonglong)(fVar5 - fVar6);
  uVar14 = (longlong)(fVar4 - fVar3) & 0xffffffff;
  *(float *)(param_1 + 0x3c) = fVar2 + fVar10;
  *(float *)(param_1 + 0x40) = *(float *)(param_1 + 0xf4) + fVar10;
  *(float *)(param_1 + 0x44) = fVar8 - fVar10;
  *(float *)(param_1 + 0x48) = fVar7 - fVar10;
  if (param_3 != 1) {
    return;
  }
  bVar1 = *(byte *)(param_1 + 0x13c);
  uVar13 = (ulonglong)bVar1;
  uVar15 = (ulonglong)(*(float *)(param_1 + 0xf8) - *(float *)(param_1 + 0xf0));
  uVar12 = (longlong)(*(float *)(param_1 + 0xfc) - *(float *)(param_1 + 0xf4)) & 0xffffffff;
  if (((bVar1 & 0x30) == 0) &&
     (((uVar14 == (uVar15 & 0xffffffff) ||
       (((((*(byte *)(param_1 + 0x13d) & 8) == 0 &&
          ((uVar14 <= (uVar15 & 0xffffffff) || ((*(byte *)(param_1 + 0x98) & 0x20) == 0)))) &&
         ((bVar1 & 3) == 0)) && (cVar11 = fn_8279A8D8(param_1), cVar11 == '\0')))) &&
      (((uVar16 & 0xffffffff) == (uVar12 & 0xffffffff) ||
       (((uVar14 = (uVar13 & 0xffffffff) >> 2 & 3, uVar14 == 0 || (uVar14 == 1)) &&
        (((uVar16 & 0xffffffff) <= (uVar12 & 0xffffffff) ||
         ((*(byte *)(param_1 + 0x98) & 0x20) == 0)))))))))) {
    *(short *)(param_1 + 0x138) = *(short *)(param_1 + 0x138) + 1;
    uVar14 = fn_8279A9F8(param_1);
    if ((uVar14 & 0xffffffff) < (ulonglong)*(uint *)(param_1 + 0x4c)) {
      fn_8279ADE8(param_1,uVar14);
    }
    uVar14 = fn_8279AA48(param_1);
    if ((uVar14 & 0xffffffff) < (ulonglong)*(uint *)(param_1 + 0x38)) {
      fn_8279AE60(param_1,uVar14);
    }
    *(byte *)(param_1 + 0x98) = *(byte *)(param_1 + 0x98) | 1;
    return;
  }
  *(byte *)(param_1 + 0x13f) = *(byte *)(param_1 + 0x13f) | 2;
  return;
}

