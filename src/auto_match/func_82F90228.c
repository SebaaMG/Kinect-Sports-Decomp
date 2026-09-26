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
extern unsigned int *auStack_1f;
extern int fn_82F90378();
extern int fn_82F93778();
extern unsigned int stack0x00000014;
extern unsigned int uStack00000014;
extern unsigned int uStack0000001c;
extern unsigned int uStack00000024;
extern unsigned int uStack_18;
extern unsigned int uStack_20;


void fn_82F90228(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  undefined4 uStack00000014;
  undefined4 uStack0000001c;
  undefined4 uStack00000024;
  undefined1 uStack_20;
  undefined1 auStack_1f [3];
  undefined1 *puStack_1c;
  undefined1 uStack_18;
  
  puStack_1c = &uStack_20;
  uStack_18 = uStack_20;
  uStack00000014 = param_1;
  uStack0000001c = param_2;
  uStack00000024 = param_3;
  puVar1 = (undefined1 *)fn_82F93778(auStack_1f,&stack0x00000014);
  fn_82F90378(uStack00000014,uStack0000001c,uStack00000024,*puVar1,uStack_18);
  return;
}

