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
extern int fn_82BFFF08();
extern unsigned int lbl_82002AE0;
extern float lbl_82002C5C;
extern unsigned int lbl_821AAD20;


undefined8 fn_82C001C0(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  
  fVar7 = lbl_821AAD20;
  fVar1 = *(float *)(param_1 + 0x84);
  fVar3 = fVar1 * *(float *)(param_1 + 0x8c);
  fVar2 = *(float *)(param_1 + 0x88);
  fVar4 = (float)*(uint *)(param_1 + 0x7c);
  fVar5 = (float)*(uint *)(param_1 + 0x80);
  if (fVar3 / fVar2 <= fVar4 / fVar5) {
    fVar4 = (fVar5 * fVar3) / fVar4;
    fVar5 = (fVar2 - fVar4) * lbl_82002C5C;
    fVar2 = fVar4 + fVar5;
    fVar3 = lbl_821AAD20;
  }
  else {
    fVar4 = ((fVar4 * fVar2) / fVar5) / *(float *)(param_1 + 0x8c);
    fVar3 = (fVar1 - fVar4) * lbl_82002C5C;
    fVar1 = fVar3 + fVar4;
    fVar5 = lbl_821AAD20;
  }
  lVar9 = (longlong)(int)fVar2;
  *(float *)(param_1 + 0x9c) = lbl_821AAD20;
  lVar8 = (longlong)(int)fVar5;
  *(float *)(param_1 + 0xa0) = fVar7;
  *(float *)(param_1 + 0xb4) = fVar7;
  *(int *)(param_1 + 100) = (int)fVar5;
  lVar11 = (longlong)(int)fVar1;
  *(float *)(param_1 + 0xc4) = fVar7;
  lVar10 = (longlong)(int)fVar3;
  *(float *)(param_1 + 0xd8) = fVar7;
  uVar6 = lbl_82002AE0;
  *(undefined4 *)(param_1 + 0xb0) = lbl_82002AE0;
  *(undefined4 *)(param_1 + 200) = uVar6;
  *(float *)(param_1 + 0xa4) = (float)lVar11;
  *(float *)(param_1 + 0xe0) = (float)lVar11;
  *(int *)(param_1 + 0x68) = (int)fVar1;
  *(float *)(param_1 + 0xf4) = (float)lVar11;
  *(int *)(param_1 + 0x60) = (int)fVar3;
  *(undefined4 *)(param_1 + 0xdc) = uVar6;
  *(int *)(param_1 + 0x6c) = (int)fVar2;
  *(undefined4 *)(param_1 + 0xec) = uVar6;
  *(float *)(param_1 + 0xf0) = fVar7;
  *(undefined4 *)(param_1 + 0x100) = uVar6;
  *(float *)(param_1 + 0x90) = (float)lVar10;
  *(float *)(param_1 + 0xb8) = (float)lVar10;
  *(float *)(param_1 + 0x94) = (float)lVar8;
  *(float *)(param_1 + 0xa8) = (float)lVar8;
  *(float *)(param_1 + 0xbc) = (float)lVar9;
  *(float *)(param_1 + 0xcc) = (float)lVar10;
  *(float *)(param_1 + 0xd0) = (float)lVar9;
  *(float *)(param_1 + 0xe4) = (float)lVar8;
  *(float *)(param_1 + 0xf8) = (float)lVar9;
  *(undefined4 *)(param_1 + 0x104) = uVar6;
  fn_82BFFF08();
  return 0;
}

