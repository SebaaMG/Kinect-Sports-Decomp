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
extern int fn_82F63C78();
extern int fn_82F664B0();
extern int fn_82F68048();
extern int fn_82F6E1C8();
extern int fn_82F6F960();


ulonglong fn_82F680A0(undefined8 param_1)

{
  int iVar3;
  ulonglong uVar1;
  int iVar4;
  undefined8 uVar2;
  
  iVar3 = fn_82F6F960();
  if (iVar3 == 0) {
LAB_82f680c4:
    uVar1 = 0xffffffff82168320;
  }
  else {
    if (*(int *)(iVar3 + 0x24) == 0) {
      iVar4 = fn_82F6E1C8(0x86,1);
      *(int *)(iVar3 + 0x24) = iVar4;
      if (iVar4 == 0) goto LAB_82f680c4;
    }
    uVar1 = (ulonglong)*(uint *)(iVar3 + 0x24);
    uVar2 = fn_82F68048(param_1);
    iVar3 = fn_82F664B0(uVar1,0x86,uVar2);
    if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
      fn_82F63C78(0,0,0,0,0);
    }
  }
  return uVar1;
}

