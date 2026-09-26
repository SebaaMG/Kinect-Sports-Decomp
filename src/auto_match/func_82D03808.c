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


void fn_82D03808(undefined1 *param_1,int param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  if (((param_3 & 0xf) == 0) && ((*(uint *)(param_3 - 0xc) >> 1 & 1) != 0)) {
    for (iVar1 = *(int *)(param_2 + 0xa8); iVar1 != param_2 + 0xa4; iVar1 = *(int *)(iVar1 + 4)) {
      uVar3 = *(uint *)(iVar1 + 0x10);
      if ((uVar3 <= param_3) && (param_3 < *(uint *)(iVar1 + 0x14))) {
        uVar2 = *(uint *)(iVar1 + 0x14) - 0x10;
        if (uVar3 != uVar2) {
          do {
            if (uVar3 == param_3 - 0x10) {
              *param_1 = 1;
              return;
            }
            uVar3 = (*(uint *)(uVar3 + 4) & 0xfffffffc) + uVar3;
          } while (uVar3 != uVar2);
          *param_1 = 0;
          return;
        }
        break;
      }
    }
  }
  *param_1 = 0;
  return;
}

