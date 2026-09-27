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
extern unsigned int *auStack_40;
extern int fn_8306ED30();
extern int fn_83075D30();
extern int fn_83075D80();
extern unsigned int lbl_821AAD20;


void fn_8306DA38(int param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  int in_r0;
  longlong lVar2;
  undefined1 in_vs32 [16];
  undefined1 in_vs35 [16];
  undefined4 in_register_000103f0;
  undefined4 in_register_000103f4;
  undefined4 in_register_000103f8;
  undefined4 in_vr63;
  undefined1 auStack_40 [1];
  
  fn_83075D30(auStack_40,param_2,0);
  altv207_13(in_vs32,in_vs35);
  lVar2 = 0;
  puVar1 = (undefined4 *)(in_r0 + param_1 + 0x1a60 & 0xfffffff0);
  *puVar1 = in_register_000103f0;
  puVar1[1] = in_register_000103f4;
  puVar1[2] = in_register_000103f8;
  puVar1[3] = in_vr63;
  *(undefined4 *)(param_1 + 0x1a64) = lbl_821AAD20;
  do {
    fn_83075D30(auStack_40,param_2,lVar2);
    fn_8306ED30();
    fn_83075D80(param_2,lVar2);
    lVar2 = lVar2 + 1;
  } while ((int)lVar2 < 0x14);
  return;
}

