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
extern int fn_82CEBE20();
extern unsigned int stack0x00000000;
extern V16 loadVectorLeftIndexed128();


void fn_82DE6268(double param_1,float *param_2)

{
  undefined4 *puVar1;
  undefined8 in_r0;
  undefined4 in_register_000100d0;
  undefined4 in_register_000100d4;
  undefined4 in_register_000100d8;
  undefined4 in_vr13;
  undefined1 auStack_20 [32];
  
  param_2[1] = (float)((double)*param_2 * param_1);
  loadVectorLeftIndexed128(in_r0,ZEXT48(&stack0x00000000) - 0x30);
  puVar1 = (undefined4 *)((uint)(auStack_20 + (int)in_r0) & 0xfffffff0);
  *puVar1 = in_register_000100d0;
  puVar1[1] = in_register_000100d4;
  puVar1[2] = in_register_000100d8;
  puVar1[3] = in_vr13;
  fn_82CEBE20(param_2 + 8,ZEXT48(&stack0x00000000) - 0x20);
  return;
}

