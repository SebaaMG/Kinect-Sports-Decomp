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
extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern int fn_82A1E0C0();
extern int fn_82A1E2C0();
extern int fn_82A2AA10();
extern unsigned int iStack00000014;
extern unsigned int lbl_831751CC;
extern unsigned int lbl_831751D0;


undefined8 fn_82BFAD38(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iStack00000014;
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [80];
  
  if (*(int *)(param_1 + 8) == 0) {
    iStack00000014 = param_1;
    puVar1 = (undefined4 *)(*(code *)lbl_831751D0)(8);
    if (puVar1 == (undefined4 *)0x0) {
      return 0;
    }
    *puVar1 = param_2;
    puVar1[1] = param_3;
    iVar2 = fn_82A1E0C0(0,0,0xffffffff82bfac40,puVar1,4,auStack_60);
    *(int *)(param_1 + 8) = iVar2;
    if (iVar2 != 0) {
      fn_82A2AA10(0x406d1388,0,4,auStack_50);
      fn_82A1E2C0(*(undefined4 *)(param_1 + 8));
      return 1;
    }
    (*(code *)lbl_831751CC)(puVar1);
  }
  return 0;
}

