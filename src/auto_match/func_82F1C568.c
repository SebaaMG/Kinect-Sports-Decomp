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


void fn_82F1C568(int param_1)

{
  bool bVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined2 *puVar8;
  
  iVar4 = 0;
  iVar3 = 1;
  do {
    if (iVar3 < 8) {
      iVar6 = 8 - iVar3;
      puVar8 = (undefined2 *)((iVar3 + iVar4) * 2 + param_1 + -2);
      iVar5 = iVar3;
      do {
        iVar7 = iVar4 + iVar5;
        iVar5 = iVar5 + 1;
        iVar7 = iVar7 * 2;
        uVar2 = *(undefined2 *)(iVar7 + param_1);
        *(undefined2 *)(iVar7 + param_1) = puVar8[8];
        puVar8 = puVar8 + 8;
        *puVar8 = uVar2;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    iVar4 = iVar4 + 8;
    bVar1 = iVar3 < 7;
    iVar3 = iVar3 + 1;
  } while (bVar1);
  return;
}

