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
extern int fn_82996970();


ulonglong fn_8299BCA8(longlong param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint uVar5;
  
  iVar1 = (int)param_1;
  uVar4 = 0;
  uVar5 = 0;
  uVar6 = 0;
  if (*(int *)(iVar1 + 0xc) != 0) {
    lVar7 = 0;
    lVar3 = param_1 + 0x450;
    do {
      uVar8 = (ulonglong)**(uint **)(*(int *)((int)param_1 + 0x18) + (int)lVar7) & 0xfff00000;
      iVar2 = fn_82996970(uVar8);
      iVar1 = (int)param_1;
      if (((iVar2 != 0) || ((uVar8 & 0xffffffff) == 0x72100000)) ||
         ((uVar8 & 0xffffffff) == 0x11000000)) {
        if (0xb < (uVar4 & 0xffffffff)) {
          return 0xffffffffffffffff;
        }
        lVar3 = lVar3 + 4;
        *(undefined4 *)lVar3 = (int)uVar6;
        uVar4 = uVar4 + 1;
      }
      uVar5 = (uint)uVar4;
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 4;
    } while ((uVar6 & 0xffffffff) < (ulonglong)*(uint *)(iVar1 + 0xc));
  }
  *(uint *)(iVar1 + 0x484) = uVar5;
  return (ulonglong)(uint)(1 << (uVar5 & 0x3f));
}

