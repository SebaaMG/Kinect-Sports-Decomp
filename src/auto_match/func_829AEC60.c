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
extern int fn_829AE7D8();
extern int fn_829AF110();


void fn_829AEC60(int param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined4 *puVar3;
  ulonglong uVar4;
  
  lVar2 = fn_829AF110();
  uVar1 = *(uint *)(param_1 + 0x5bc);
  *(uint *)(param_1 + 0x5c0) = uVar1;
  if (0 < (int)lVar2) {
    do {
      if (uVar1 != 0) {
        puVar3 = (undefined4 *)(param_2 + -4);
        uVar4 = (ulonglong)uVar1;
        do {
          puVar3 = puVar3 + 1;
          fn_829AE7D8(param_1,*puVar3,0);
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}

