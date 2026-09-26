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
extern int fn_827C1AF8();


void fn_827CF2F8(int param_1,int param_2,undefined8 param_3,int param_4)

{
  undefined1 uVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint *puVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  
  fn_827C1AF8(param_3,0,param_4,0,*(undefined4 *)(param_1 + 0xdc),
                    *(undefined4 *)(param_1 + 0x1c));
  uVar2 = *(uint *)(param_1 + 0x1c);
  uVar7 = (ulonglong)*(uint *)(param_1 + 0xdc);
  uVar4 = ((ulonglong)*(uint *)(param_2 + 0x1c) & 0x1fffffff) * 8 - (ulonglong)uVar2;
  if ((0 < (longlong)uVar4) && (0 < (int)*(uint *)(param_1 + 0xdc))) {
    puVar6 = (uint *)(param_4 + -4);
    do {
      puVar6 = puVar6 + 1;
      lVar8 = (ulonglong)*puVar6 + (ulonglong)uVar2;
      lVar5 = lVar8 + -1;
      uVar1 = *(undefined1 *)((int)lVar8 + -1);
      uVar9 = uVar4;
      uVar3 = uVar4 & 0xffffffff;
      while (uVar3 != 0) {
        lVar5 = lVar5 + 1;
        *(undefined1 *)lVar5 = uVar1;
        uVar9 = uVar9 - 1;
        uVar3 = uVar9;
      }
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  return;
}

