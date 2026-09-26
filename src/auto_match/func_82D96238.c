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
extern int fn_82CE4040();


void fn_82D96238(int param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  uint *puVar4;
  
  lVar3 = 2;
  puVar4 = (uint *)(param_1 + 0x14);
  do {
    if (*puVar4 == 0) {
      uVar2 = *(uint *)(param_1 + 0x18) ^ *(uint *)(param_1 + 0x14);
      if ((uVar2 != 0) && (iVar1 = *(int *)(uVar2 + 8), iVar1 != 0)) {
        *puVar4 = *(uint *)(iVar1 + 0x24);
        fn_82CE4040();
      }
    }
    lVar3 = lVar3 + -1;
    puVar4 = puVar4 + 1;
  } while (lVar3 != 0);
  return;
}

