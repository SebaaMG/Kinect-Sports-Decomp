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
extern int fn_82877520();
extern int fn_82A1E658();
extern int iRam00000004;


void fn_8286A108(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(param_1 + 0x424);
  while (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 4);
    iVar3 = iVar1;
    if (iVar2 == *(int *)(param_1 + 0x424)) {
      *(int *)(param_1 + 0x424) = iVar1;
      iVar3 = iRam00000004;
    }
    iRam00000004 = iVar3;
    fn_82A1E658(*(undefined4 *)(iVar2 + 0x1c));
    fn_82877520(iVar2);
    iVar2 = iVar1;
  }
  return;
}

