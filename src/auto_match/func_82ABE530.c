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
extern int fn_82636118();


void fn_82ABE530(int param_1,ulonglong param_2,ulonglong param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  
  iVar2 = fn_82636118(*(undefined4 *)(param_1 + 0x300));
  uVar4 = param_2 + 1;
  if ((uVar4 & 0xffffffff) <= (param_3 & 0xffffffff)) {
    do {
      iVar3 = fn_82636118(*(undefined4 *)(param_1 + 0x300),uVar4);
      uVar1 = *(uint *)(iVar3 + 4) >> 0xc & 0xf;
      if ((uVar1 != (*(uint *)(iVar2 + 4) >> 0xc & 0xf)) && ((uVar1 == 1 || (uVar1 == 5)))) break;
      uVar4 = uVar4 + 1;
    } while ((uVar4 & 0xffffffff) <= (param_3 & 0xffffffff));
    if (((uVar4 & 0xffffffff) <= (param_3 & 0xffffffff)) &&
       ((param_2 & 0xffffffff) <= (param_3 & 0xffffffff))) {
      do {
        iVar2 = fn_82636118(*(undefined4 *)(param_1 + 0x300),param_2);
        if ((*(uint *)(iVar2 + 4) & 0xf000) == 0x5000) {
          *(uint *)(iVar2 + 4) = *(uint *)(iVar2 + 4) & 0xffff0bff | 0x1000;
        }
        param_2 = param_2 + 1;
      } while ((param_2 & 0xffffffff) <= (param_3 & 0xffffffff));
    }
  }
  return;
}

