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
extern unsigned int *auStack_20;
extern int fn_82D89BD8();
extern unsigned int stack0x00000000;
extern U64 storeVectorElementWordIndexed();
extern V16 loadVectorLeftIndexed128();


void fn_82DFBF08(undefined8 param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  float *pfVar3;
  undefined8 in_r0;
  ulonglong uVar4;
  undefined1 in_vs45 [16];
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float in_register_000100c0;
  float in_register_000100c4;
  float in_register_000100c8;
  float in_vr12;
  undefined1 auStack_20 [16];
  
  uVar4 = ZEXT48(&stack0x00000000);
  iVar1 = *(int *)(param_3 + 0x18);
  pfVar3 = (float *)(iVar1 + 0x1c0U & 0xfffffff0);
  fVar5 = *pfVar3;
  fVar6 = pfVar3[1];
  fVar7 = pfVar3[2];
  fVar8 = pfVar3[3];
  uVar2 = storeVectorElementWordIndexed(in_vs45,0,uVar4 - 0x30);
  *(undefined4 *)(uVar4 - 0x30) = uVar2;
  loadVectorLeftIndexed128(in_r0,uVar4 - 0x30);
  pfVar3 = (float *)((uint)(auStack_20 + (int)in_r0) & 0xfffffff0);
  *pfVar3 = fVar5 * in_register_000100c0;
  pfVar3[1] = fVar6 * in_register_000100c4;
  pfVar3[2] = fVar7 * in_register_000100c8;
  pfVar3[3] = fVar8 * in_vr12;
  fn_82D89BD8(iVar1);
  (**(code **)(*(int *)(iVar1 + 0xe0) + 0x44))(iVar1 + 0xe0,uVar4 - 0x20);
  return;
}

