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
extern int fn_82887B28();
extern int fn_82887BE8();
extern unsigned int iStack00000014;
extern unsigned int lbl_83212A18;
extern unsigned int lbl_83212A1C;
extern unsigned int lbl_83212A20;
extern unsigned int stack0x00000014;


void fn_82887C70(int param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4,
                  undefined1 param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  int iStack00000014;
  
  iVar1 = lbl_83212A1C;
  *(undefined4 *)(param_1 * 4 + lbl_83212A18) = param_2;
  *(undefined4 *)(param_1 * 4 + iVar1) = param_3;
  iStack00000014 = param_1;
  uVar2 = fn_82887BE8();
  puVar3 = (undefined1 *)fn_82887B28(uVar2,&stack0x00000014);
  iVar1 = lbl_83212A20;
  *puVar3 = param_4;
  *(undefined1 *)(iVar1 + param_1) = param_5;
  return;
}

