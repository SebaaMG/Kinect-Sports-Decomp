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
extern unsigned int stack0x00000000;
extern U64 storeVectorElementWordIndexed();
extern V16 loadVectorLeftIndexed128();
extern V16 vectorSubtractFloatingPoint();


void fn_82CEC1F8(int param_1)

{
  undefined4 uVar1;
  float *pfVar2;
  int iVar3;
  undefined8 in_r0;
  longlong lVar4;
  undefined1 in_vs33 [16];
  undefined1 in_vs52 [16];
  undefined1 in_vs56 [16];
  undefined1 in_vs57 [16];
  undefined1 in_vs58 [16];
  undefined1 in_vs59 [16];
  undefined1 in_vs62 [16];
  float in_register_00010120;
  float in_register_00010124;
  float in_register_00010128;
  float in_vr18;
  float in_register_00010150;
  float in_register_00010154;
  float in_register_00010158;
  float in_vr21;
  float in_register_00010160;
  float in_register_00010164;
  float in_register_00010168;
  float in_vr22;
  float in_register_00010170;
  float in_register_00010174;
  float in_register_00010178;
  float in_vr23;
  
  lVar4 = ZEXT48(&stack0x00000000) - 0x10;
  vectorSubtractFloatingPoint(in_vs62,in_vs33);
  vectorSubtractFloatingPoint(in_vs59,in_vs58);
  vectorSubtractFloatingPoint(in_vs57,in_vs56);
  uVar1 = storeVectorElementWordIndexed(in_vs52,0,lVar4);
  *(undefined4 *)lVar4 = uVar1;
  loadVectorLeftIndexed128(in_r0,ZEXT48(&stack0x00000000) - 0x10);
  iVar3 = (int)in_r0;
  pfVar2 = (float *)(iVar3 + param_1 & 0xfffffff0);
  *pfVar2 = in_register_00010170 * in_register_00010120;
  pfVar2[1] = in_register_00010174 * in_register_00010124;
  pfVar2[2] = in_register_00010178 * in_register_00010128;
  pfVar2[3] = in_vr23 * in_vr18;
  pfVar2 = (float *)(iVar3 + param_1 + 0x10 & 0xfffffff0);
  *pfVar2 = in_register_00010160 * in_register_00010120;
  pfVar2[1] = in_register_00010164 * in_register_00010124;
  pfVar2[2] = in_register_00010168 * in_register_00010128;
  pfVar2[3] = in_vr22 * in_vr18;
  pfVar2 = (float *)(iVar3 + param_1 + 0x20 & 0xfffffff0);
  *pfVar2 = in_register_00010150 * in_register_00010120;
  pfVar2[1] = in_register_00010154 * in_register_00010124;
  pfVar2[2] = in_register_00010158 * in_register_00010128;
  pfVar2[3] = in_vr21 * in_vr18;
  return;
}

