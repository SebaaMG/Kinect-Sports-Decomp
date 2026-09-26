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
extern int fn_8282D0E0();
extern unsigned int iStack00000014;
extern unsigned int stack0x00000014;


longlong fn_828270A0(int param_1,longlong param_2,int param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  int iStack00000014;
  
  iStack00000014 = param_1;
  fn_8282D0E0(*(undefined4 *)(param_1 + 0xcc),3,&stack0x00000014);
  uVar4 = 0;
  lVar3 = (ulonglong)*(uint *)(iStack00000014 + 0xc4) + (ulonglong)*(uint *)(iStack00000014 + 0x1c);
  if (param_2 - 1U != 0) {
    iVar2 = 0;
    do {
      iVar1 = iVar2 + *(int *)(iStack00000014 + 0x114);
      uVar4 = uVar4 + 1;
      iVar2 = iVar2 + 0x21;
      lVar3 = (ulonglong)*(uint *)(iVar1 + 9) + lVar3;
    } while ((uVar4 & 0xffffffff) < (param_2 - 1U & 0xffffffff));
  }
  return (ulonglong)*(uint *)(*(int *)(iStack00000014 + 0xe8) + param_3 * 0xe + -10) + lVar3;
}

