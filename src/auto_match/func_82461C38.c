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
extern int fn_8225F160();
extern int fn_8225F3C0();
extern int fn_82461CE0();
extern int fn_8249ABC0();
extern int fn_8249D008();
extern unsigned int lbl_821917C0;
extern unsigned int stack0x00000000;
extern V16 loadVectorLeftIndexed128();


void fn_82461C38(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  float *pfVar2;
  undefined8 in_r0;
  int iVar3;
  int iVar4;
  float in_register_00010000;
  float in_ACC;
  float in_register_00010008;
  float in_vr0;
  float in_register_00010440;
  float in_register_00010444;
  float in_register_00010448;
  float in_vr68;
  undefined1 auStack_40 [64];
  
  fn_8225F160();
  iVar3 = fn_8225F3C0();
  iVar4 = fn_8249ABC0();
  uVar1 = *(undefined4 *)(iVar4 + 0xec);
  *param_3 = lbl_821917C0;
  if (iVar3 < 2) {
    loadVectorLeftIndexed128(in_r0,ZEXT48(&stack0x00000000) - 0x50);
    pfVar2 = (float *)((uint)(auStack_40 + (int)in_r0) & 0xfffffff0);
    *pfVar2 = in_register_00010440 * in_register_00010000;
    pfVar2[1] = in_register_00010444 * in_ACC;
    pfVar2[2] = in_register_00010448 * in_register_00010008;
    pfVar2[3] = in_vr68 * in_vr0;
  }
  else {
    fn_8249D008(ZEXT48(&stack0x00000000) - 0x40,uVar1,param_2);
  }
  fn_82461CE0(param_1);
  return;
}

