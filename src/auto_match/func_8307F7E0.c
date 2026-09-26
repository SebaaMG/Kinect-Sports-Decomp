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
extern unsigned int lbl_82186EF0;
extern unsigned int uStack_10;
extern unsigned int uStack_4;
extern unsigned int uStack_8;
extern unsigned int uStack_c;
extern V16 vectorMultiplyAddFloatingPoint();


uint fn_8307F7E0(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int in_r0;
  undefined1 in_vs32 [16];
  undefined1 in_vs44 [16];
  undefined1 in_vs45 [16];
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uStack_10;
  uint uStack_c;
  uint uStack_8;
  uint uStack_4;
  
  puVar1 = (undefined4 *)((uint)(&lbl_82186EF0 + in_r0) & 0xfffffff0);
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  uVar5 = puVar1[3];
  vectorMultiplyAddFloatingPoint(in_vs44,in_vs45,in_vs32);
  puVar2 = (undefined4 *)((int)&uStack_10 + in_r0 & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar3;
  puVar2[2] = uVar4;
  puVar2[3] = uVar5;
  return (((((uStack_4 & 0xffffc0) << 8 | uStack_8 & 0x3fff) & 0xffffc0) << 8 | uStack_c & 0x3fff) &
         0x3fffffc0) << 2 | uStack_10 >> 6 & 0xff;
}

