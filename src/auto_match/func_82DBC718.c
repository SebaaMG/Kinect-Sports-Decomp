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
extern unsigned int fStack_10;
extern unsigned int fStack_c;
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82002C28;
extern unsigned int lbl_821425C8;
extern unsigned int stack0x00000000;
extern U64 storeVectorElementWordIndexed();


undefined8 fn_82DBC718(undefined8 param_1,int *param_2,longlong param_3,int param_4)

{
  float fVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  undefined1 in_vs43 [16];
  undefined1 in_vs45 [16];
  float fStack_10;
  float fStack_c;
  
  fVar6 = lbl_821425C8;
  fVar5 = lbl_82002C28;
  fVar4 = lbl_82002AE0;
  while( true ) {
    param_3 = param_3 + -1;
    if (param_3 < 0) {
      return 1;
    }
    lVar8 = ZEXT48(&stack0x00000000) - 0xc;
    lVar7 = ZEXT48(&stack0x00000000) - 0x10;
    iVar9 = *param_2 + param_4;
    fVar3 = *(float *)(iVar9 + 0xb0);
    if (fVar4 - *(float *)(iVar9 + 0xb0) < 0.0) {
      fVar3 = fVar4;
    }
    uVar2 = storeVectorElementWordIndexed(in_vs45,0,lVar8);
    *(undefined4 *)lVar8 = uVar2;
    uVar2 = storeVectorElementWordIndexed(in_vs43,0,lVar7);
    *(undefined4 *)lVar7 = uVar2;
    if ((*(ushort *)(iVar9 + 0xc) & 0x7f) < (*(ushort *)(iVar9 + 10) & 0x7f)) {
      fVar1 = *(float *)(iVar9 + 0xfc);
    }
    else {
      fVar1 = *(float *)(iVar9 + 0x10c);
    }
    if (fVar1 < (fStack_10 * fVar3 * fVar3 + fStack_c) * fVar5 - fVar6) break;
    param_2 = param_2 + 1;
  }
  return 0;
}

