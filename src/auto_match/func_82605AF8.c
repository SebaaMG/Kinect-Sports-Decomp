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
extern unsigned int *auStack_40;
extern int fn_82605F88();
extern unsigned int lbl_821CC160;
extern unsigned int stack0x00000000;
extern V16 loadVectorLeftIndexed128();


void fn_82605AF8(uint *param_1,undefined8 param_2,int param_3)

{
  undefined2 uVar1;
  uint uVar2;
  float *pfVar3;
  float *pfVar4;
  undefined8 in_r0;
  uint uVar5;
  double dVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float in_register_000100d0;
  float in_register_000100d4;
  float in_register_000100d8;
  float in_vr13;
  undefined1 auStack_40 [64];
  
  uVar5 = *param_1;
  uVar2 = param_1[1];
  if (uVar5 < uVar2) {
    dVar6 = (double)lbl_821CC160;
    do {
      if (dVar6 < (double)*(float *)(uVar5 + 0x270)) {
        pfVar3 = (float *)((int)in_r0 + param_3 & 0xfffffff0);
        fVar7 = pfVar3[1];
        fVar8 = pfVar3[2];
        fVar9 = pfVar3[3];
        uVar1 = *(undefined2 *)(uVar5 + 2);
        loadVectorLeftIndexed128(in_r0,ZEXT48(&stack0x00000000) - 0x50);
        pfVar4 = (float *)((uint)(auStack_40 + (int)in_r0) & 0xfffffff0);
        *pfVar4 = *pfVar3 * in_register_000100d0;
        pfVar4[1] = fVar7 * in_register_000100d4;
        pfVar4[2] = fVar8 * in_register_000100d8;
        pfVar4[3] = fVar9 * in_vr13;
        fn_82605F88(param_2,uVar1,uVar5 + 0x2b0,ZEXT48(&stack0x00000000) - 0x40,4);
      }
      uVar5 = uVar5 + 0x560;
    } while (uVar5 < uVar2);
  }
  return;
}

