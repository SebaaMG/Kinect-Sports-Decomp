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
extern unsigned int fStack_24;
extern unsigned int fStack_28;
extern int fn_8226B7E0();
extern int fn_8226C7C0();
extern unsigned int uStack_30;


void fn_8227AC58(int param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  float fStack_28;
  float fStack_24;
  longlong lStack_20;
  
  uVar3 = fn_8226C7C0(*(undefined4 *)(param_1 + 0xf0),param_2,&uStack_30,0);
  uVar3 = fn_8226C7C0(uVar3,param_3,&fStack_28,0);
  iVar1 = (int)(((U64)(uStack_30) >> 32) & 0xFFFFFFFF);
  iVar2 = (int)(((U64)(uStack_30) >> 0) & 0xFFFFFFFF);
  lStack_20 = (longlong)(int)fStack_28;
  uStack_30 = (longlong)iVar1;
  fn_8226B7E0(uVar3,iVar2,(ulonglong)(uint)(int)fStack_28 - 1,iVar1,
                    (ulonglong)(uint)(int)fStack_24 - 1,0x18);
  return;
}

