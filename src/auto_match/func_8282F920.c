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


void fn_8282F920(int param_1,uint *param_2,undefined4 *param_3)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar2 = 0;
  uVar4 = 1;
  if (*(int *)(param_1 + 0x28) == 0) {
    return;
  }
  do {
    *param_3 = param_2;
    uVar3 = *param_2;
    if (uVar3 == uVar4) {
      do {
        if (*(uint *)(param_1 + 0xac) <= uVar2) break;
        uVar2 = uVar2 + 1;
        param_2 = param_2 + 5;
        if (uVar2 < *(uint *)(param_1 + 0xac)) {
          uVar3 = *param_2;
        }
      } while (uVar3 == uVar4);
    }
    param_3 = param_3 + 1;
    bVar1 = *(uint *)(param_1 + 0x28) <= uVar4;
    uVar4 = uVar4 + 1;
    if (bVar1) {
      return;
    }
  } while( true );
}

