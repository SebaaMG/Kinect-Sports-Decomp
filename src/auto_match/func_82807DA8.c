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


void fn_82807DA8(int param_1,uint *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = 0;
  iVar1 = param_1 - (int)param_2;
  lVar3 = 4;
  do {
    if (*param_2 == 0) {
      *(undefined4 *)(iVar1 + (int)param_2) = 0;
      *(undefined1 *)(param_1 + 0x20 + iVar2) = 0;
    }
    else {
      *(uint *)(iVar1 + (int)param_2) = *param_2 & 0xfffffffc;
      *(byte *)(param_1 + 0x20 + iVar2) = ((byte)*param_2 & 3) << 3;
    }
    iVar2 = iVar2 + 1;
    param_2 = param_2 + 1;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  return;
}

