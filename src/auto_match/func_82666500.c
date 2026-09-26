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
extern unsigned int *auStack_14;
extern unsigned int *auStack_1c;
extern int fn_82666C38();
extern int fn_82668D40();
extern int fn_82668D80();
extern unsigned int uStack00000014;
extern unsigned int uStack_18;


void fn_82666500(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 uStack00000014;
  undefined1 auStack_1c [4];
  undefined4 uStack_18;
  undefined1 auStack_14 [4];
  undefined1 auStack_10 [16];
  
  uStack00000014 = param_1;
  puVar2 = (undefined4 *)fn_82668D80(auStack_1c,param_1);
  uVar1 = *puVar2;
  puVar2 = (undefined4 *)fn_82668D40(auStack_14,uStack00000014);
  uStack_18 = *puVar2;
  fn_82666C38(auStack_10,uStack00000014,uStack_18,uVar1);
  return;
}

