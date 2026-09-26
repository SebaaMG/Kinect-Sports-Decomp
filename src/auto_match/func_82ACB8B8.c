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


undefined8 fn_82ACB8B8(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  
  for (uVar1 = *(uint *)(param_1 + 4); ((uVar1 & 1) == 0 && (uVar1 != 0));
      uVar1 = *(uint *)((uVar1 & 0xfffffffe) + 4)) {
    uVar2 = 0;
    if (*(uint *)(uVar1 + 8) != 0) {
      piVar3 = (int *)(uVar1 + 0x10);
      do {
        if (*piVar3 == param_2) {
          return 1;
        }
        uVar2 = uVar2 + 1;
        piVar3 = piVar3 + 1;
      } while (uVar2 < *(uint *)(uVar1 + 8));
    }
  }
  return 0;
}

