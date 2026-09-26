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
extern int fn_8263B758();
extern int fn_8263C538();
extern unsigned int uStack_22;
extern unsigned int uStack_26;


void fn_82838740(int param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined4 auStack_40 [6];
  undefined2 uStack_26;
  undefined2 uStack_22;
  
  *(int *)(param_1 + 0x34) = (int)param_2;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  uVar1 = fn_8263C538(param_2);
  *(undefined1 *)(param_1 + 0x30) = uVar1;
  fn_8263B758(param_2,0,auStack_40);
  *(undefined2 *)(param_1 + 0x24) = uStack_26;
  *(undefined4 *)(param_1 + 0x18) = auStack_40[0];
  *(undefined2 *)(param_1 + 0x26) = uStack_22;
  return;
}

