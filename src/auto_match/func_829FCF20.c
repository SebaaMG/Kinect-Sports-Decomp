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
extern unsigned int *auStack_10;
extern unsigned int fStack_8;
extern unsigned int lbl_82015BD4;
extern unsigned int lbl_8207F190;


double fn_829FCF20(int param_1,int param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  float fVar3;
  int in_r0;
  undefined1 in_vs42 [16];
  undefined1 in_vs43 [16];
  undefined4 in_register_000103f0;
  undefined4 in_register_000103f4;
  undefined4 in_register_000103f8;
  undefined4 in_vr63;
  undefined1 auStack_10 [8];
  float fStack_8;
  
  uVar1 = *(uint *)(param_2 * 0x4b50 + param_1 + 0x50);
  altv207_13(in_vs43,in_vs42);
  puVar2 = (undefined4 *)((uint)(auStack_10 + in_r0) & 0xfffffff0);
  *puVar2 = in_register_000103f0;
  puVar2[1] = in_register_000103f4;
  puVar2[2] = in_register_000103f8;
  puVar2[3] = in_vr63;
  fVar3 = fStack_8 * lbl_8207F190 * lbl_82015BD4;
  return (double)(fVar3 * fVar3 * (float)uVar1);
}

