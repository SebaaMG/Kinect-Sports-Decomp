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
extern int fn_82FA5D50();
extern int fn_82FA62E0();


int fn_82FA6430(undefined8 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = (param_2 - 0xc6cU) - (param_2 - 0xc6cU & 3);
  if ((0xb < uVar3) && (uVar3 < 0x40000001)) {
    iVar1 = fn_82FA62E0();
    iVar4 = iVar1 + 0xc60;
    *(uint *)(iVar1 + 0xc64) = uVar3 - (uVar3 & 3) & 0xfffffffc | 1;
    iVar2 = fn_82FA5D50(iVar1,iVar4);
    iVar1 = (*(uint *)(iVar2 + 0xc64) & 0xfffffffc) + iVar4;
    *(int *)(iVar1 + 4) = iVar4;
    *(undefined4 *)(iVar1 + 8) = 2;
    return iVar2;
  }
  return 0;
}

