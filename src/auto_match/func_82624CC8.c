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
extern int fn_828EA268();


void fn_82624CC8(int param_1,longlong param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  
  if ((int)param_2 != 0) {
    puVar5 = (uint *)(param_1 + 0x10);
    do {
      uVar1 = puVar5[-4];
      if ((uVar1 == 0) || (uVar1 == 1)) {
        uVar1 = fn_828EA268(puVar5[-1]);
        *puVar5 = uVar1;
      }
      else if (uVar1 < 3) {
        uVar1 = 0;
        uVar2 = 0;
        uVar3 = 1;
        uVar4 = 0;
        if (*puVar5 != 0) {
          do {
            uVar4 = uVar4 + 1;
            uVar2 = uVar3 | uVar1;
            uVar3 = uVar3 << 1;
            uVar1 = uVar2;
          } while (uVar4 < *puVar5);
        }
        puVar5[1] = uVar2;
      }
      param_2 = param_2 + -1;
      puVar5 = puVar5 + 6;
    } while (param_2 != 0);
  }
  return;
}

