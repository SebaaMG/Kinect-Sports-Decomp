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
extern int fn_8305D670();
extern int fn_8305D680();
extern int fn_83061680();


void fn_83061790(int param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar3;
  longlong lVar2;
  longlong lVar4;
  longlong lVar5;
  
  lVar5 = 0;
  iVar3 = fn_8305D680(param_2);
  if (0 < iVar3) {
    do {
      iVar3 = fn_8305D680(param_2);
      lVar4 = 0;
      if ((int)lVar5 != iVar3 + -1) {
        lVar4 = lVar5 + 1;
      }
      lVar4 = fn_8305D670(param_2,lVar4);
      uVar1 = *(uint *)(param_1 + 0x2c);
      lVar2 = fn_8305D670(param_2,lVar5);
      fn_83061680(lVar2 * 0x18 + (ulonglong)*(uint *)(param_1 + 0x2c),
                        lVar4 * 0x18 + (ulonglong)uVar1,param_2);
      lVar5 = lVar5 + 1;
      iVar3 = fn_8305D680(param_2);
    } while ((int)lVar5 < iVar3);
  }
  return;
}

