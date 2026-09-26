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
extern int fn_822ABA88();


longlong fn_82359AC8(int param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  lVar8 = 0;
  uVar1 = **(uint **)**(undefined4 **)(param_1 + 8);
  uVar7 = (ulonglong)uVar1;
  for (lVar6 = (longlong)((int)((*(uint **)**(undefined4 **)(param_1 + 8))[1] - uVar1) >> 2);
      lVar6 != 0; lVar6 = lVar6 + -1) {
    uVar5 = (ulonglong)*(uint *)uVar7;
    uVar3 = 0;
    uVar4 = (ulonglong)*(uint *)(*(uint *)uVar7 + 8);
    if (uVar4 != 0) {
      do {
        iVar2 = fn_822ABA88(uVar5);
        if (*(int *)(iVar2 + 0x74) != 0) {
          lVar8 = lVar8 + 1;
        }
        uVar3 = uVar3 + 1;
      } while ((uVar3 & 0xffffffff) < (uVar4 & 0xffffffff));
    }
    uVar7 = uVar7 + 4;
  }
  return lVar8;
}

