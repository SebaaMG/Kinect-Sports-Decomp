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
extern int fn_82961218();


undefined8 fn_829619B8(int param_1)

{
  uint *puVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  
  if ((*(ushort *)(param_1 + 0xca) < 0x200) &&
     (puVar1 = *(uint **)(param_1 + 0x104), (*puVar1 & 0xfff00000) != 0)) {
    uVar3 = 0;
    if (puVar1[1] != 0) {
      iVar4 = 0;
      do {
        if (*(int *)(*(int *)(*(int *)(puVar1[2] + iVar4) * 4 + *(int *)(param_1 + 0x14)) + 8) != -1
           ) {
          uVar2 = fn_82961218();
          if (-1 < (int)uVar2) {
            return 0;
          }
          return uVar2;
        }
        uVar3 = uVar3 + 1;
        iVar4 = iVar4 + 4;
      } while (uVar3 < puVar1[1]);
    }
  }
  return 0;
}

