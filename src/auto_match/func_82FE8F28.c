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
extern unsigned int *auStack_38;
extern unsigned int *auStack_40;
extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern unsigned int fStack0000001c;
extern int fn_82F68CC0();
extern int fn_8300F160();
extern int fn_8300F208();
extern unsigned int lbl_832642E4;
extern unsigned int uStack_3c;
extern unsigned int uStack_3e;


void fn_82FE8F28(double param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int in_r0;
  undefined2 uVar2;
  undefined1 in_vs32 [16];
  undefined1 in_vs43 [16];
  undefined4 in_register_000103f0;
  float fStack0000001c;
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [2];
  undefined2 uStack_3e;
  undefined4 uStack_3c;
  undefined1 auStack_38 [56];
  
  fStack0000001c = (float)param_1;
  altv300_21(in_vs32,in_vs43);
  puVar1 = (undefined4 *)((uint)(auStack_50 + in_r0) & 0xfffffff0);
  *puVar1 = in_register_000103f0;
  puVar1[1] = in_register_000103f0;
  puVar1[2] = in_register_000103f0;
  puVar1[3] = in_register_000103f0;
  puVar1 = (undefined4 *)((uint)(auStack_60 + in_r0) & 0xfffffff0);
  *puVar1 = in_register_000103f0;
  puVar1[1] = in_register_000103f0;
  puVar1[2] = in_register_000103f0;
  puVar1[3] = in_register_000103f0;
  uStack_3e = 0xf;
  uStack_3c = param_2;
  fn_82F68CC0(auStack_38,auStack_60,0x18);
  uVar2 = fn_8300F160();
  fn_8300F208(lbl_832642E4,auStack_40,uVar2);
  return;
}

