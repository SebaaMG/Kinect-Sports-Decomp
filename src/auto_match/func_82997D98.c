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


undefined8 fn_82997D98(int param_1,uint *param_2,uint param_3)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  longlong lVar5;
  
  uVar2 = 0;
  if (param_3 != 0) {
    do {
      bVar1 = true;
      iVar3 = 0;
      lVar5 = 4;
      puVar4 = param_2;
      do {
        if (*(int *)((param_1 - (int)param_2) + (int)puVar4) !=
            *(int *)((uVar2 * 4 + iVar3) * 4 + -0x7cea41c0)) {
          bVar1 = (bool)((ulonglong)*puVar4 == 0xffffffffffffffff & bVar1);
        }
        iVar3 = iVar3 + 1;
        puVar4 = puVar4 + 1;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
      if (bVar1) {
        return 1;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < param_3);
  }
  return 0;
}

