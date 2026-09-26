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
extern int fn_82A8DC48();
extern int fn_82A8ECE8();
extern unsigned int lbl_82002AE0;


void fn_82A8FDF8(longlong param_1,int param_2,undefined8 param_3,longlong param_4,int param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(param_2 + 0x30);
  uVar2 = *(uint *)(param_2 + 0x2c);
  uVar3 = *(uint *)(param_2 + 0x28);
  fn_82A8DC48();
  *(undefined4 *)(param_5 + 0xc) = lbl_82002AE0;
  fn_82A8ECE8(param_1 + 4,param_2 + 0x34,param_3,
                    (ulonglong)uVar1 + (ulonglong)uVar2 + (ulonglong)uVar3 + param_4,param_5 + 0x10)
  ;
  return;
}

