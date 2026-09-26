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
extern unsigned int lbl_821AAD20;


void fn_82A023A8(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined1 in_vs42 [16];
  undefined1 in_vs43 [16];
  undefined4 in_register_000103f0;
  undefined4 in_register_000103f4;
  undefined4 in_register_000103f8;
  undefined4 in_vr63;
  
  iVar2 = param_3 * 0x1f0 + param_1;
  altv207_13(in_vs43,in_vs42);
  puVar1 = (undefined4 *)(param_2 * 0x10 + param_1 & 0xfffffff0);
  *puVar1 = in_register_000103f0;
  puVar1[1] = in_register_000103f4;
  puVar1[2] = in_register_000103f8;
  puVar1[3] = in_vr63;
  if (*(float *)(iVar2 + 0x49c) == lbl_821AAD20) {
    *(undefined4 *)((param_2 + 0x103c) * 4 + param_1) = 0;
    return;
  }
  *(uint *)((param_2 + 0x103c) * 4 + param_1) =
       ((uint)LZCOUNT(*(uint *)(iVar2 + 0x4f0) & 3) >> 5) + 1;
  return;
}

