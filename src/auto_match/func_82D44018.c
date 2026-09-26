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
extern unsigned int *auStack_30;
extern unsigned int lbl_821AAD20;
extern V16 loadVectorLeftIndexed128();
extern V16 vectorAddFloatingPoint();


void fn_82D44018(int *param_1,int param_2,undefined8 param_3)

{
  float *pfVar1;
  undefined8 in_r0;
  undefined1 in_vs32 [16];
  undefined1 in_vs45 [16];
  float in_register_000100a0;
  float in_register_000100a4;
  float in_register_000100a8;
  float in_vr10;
  float in_register_000100c0;
  float in_register_000100c4;
  float in_register_000100c8;
  float in_vr12;
  undefined1 auStack_30 [32];
  
  (**(code **)(*param_1 + 0x1c))((double)lbl_821AAD20,param_1,0xffffffff8323b1d0,param_3,auStack_30)
  ;
  vectorAddFloatingPoint(in_vs32,in_vs45);
  loadVectorLeftIndexed128(in_r0,0xffffffff82002c5c);
  pfVar1 = (float *)((int)in_r0 + param_2 & 0xfffffff0);
  *pfVar1 = in_register_000100c0 * in_register_000100a0;
  pfVar1[1] = in_register_000100c4 * in_register_000100a4;
  pfVar1[2] = in_register_000100c8 * in_register_000100a8;
  pfVar1[3] = in_vr12 * in_vr10;
  return;
}

