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
extern int fn_825603C8();


void fn_8245F280(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_1 + 0xa0);
  if (*(int *)(iVar1 + 0x180) == 0) {
    fn_825603C8(0,iVar1,1);
    *(undefined4 *)(iVar1 + 0x180) = 1;
  }
  iVar1 = *(int *)(param_1 + 200);
  *(undefined4 *)(iVar1 + 0x548) = 0;
  *(undefined4 *)(iVar1 + 0x544) = 1;
  lVar3 = 6;
  *(undefined4 *)(iVar1 + 0xb8) = 3;
  puVar2 = (undefined4 *)(iVar1 + 0x8c);
  *(undefined4 *)(iVar1 + 0xac) = 0xc;
  *(undefined4 *)(iVar1 + 0xb4) = 4;
  *(undefined4 *)(iVar1 + 0xa8) = 6;
  *(undefined4 *)(iVar1 + 0xc0) = 4;
  *(undefined4 *)(iVar1 + 0xbc) = 0;
  do {
    puVar2 = puVar2 + 1;
    *puVar2 = 0;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  *(undefined4 *)(iVar1 + 0xb0) = 0;
  return;
}

