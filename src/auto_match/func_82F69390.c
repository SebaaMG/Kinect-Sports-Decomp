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
extern int fn_82F68CC0();


void fn_82F69390(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  longlong lVar3;
  undefined4 *puVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar6 = 0xa40;
  if (param_1 == param_2) {
    return;
  }
  if (param_2 <= param_1) {
    lVar3 = 0xa41;
    uVar5 = param_2 + 0xa40;
    for (puVar4 = (undefined4 *)(param_1 + 0xa40); lVar3 = lVar3 + -1,
        lVar3 != 0 && ((uint)puVar4 & 3) != 0; puVar4 = (undefined4 *)((int)puVar4 + -1)) {
      uVar6 = uVar6 - 1;
      puVar2 = (undefined1 *)(uVar5 - 1);
      uVar5 = uVar5 - 1;
      *(undefined1 *)((int)puVar4 + -1) = *puVar2;
    }
    uVar7 = (uVar6 & 0xffffffff) >> 2;
    if (uVar7 != 0) {
      if ((uVar5 & 3) == 0) {
        do {
          puVar1 = (undefined4 *)(uVar5 - 4);
          uVar5 = uVar5 - 4;
          puVar4[-1] = *puVar1;
          puVar4 = puVar4 + -1;
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
      }
      else {
        do {
          puVar4 = puVar4 + -1;
          puVar1 = (undefined4 *)(uVar5 - 4);
          uVar5 = uVar5 - 4;
          *puVar4 = *puVar1;
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
      }
    }
    uVar6 = uVar6 & 3;
    if (uVar6 != 0) {
      do {
        puVar2 = (undefined1 *)(uVar5 - 1);
        uVar5 = uVar5 - 1;
        *(undefined1 *)((int)puVar4 + -1) = *puVar2;
        puVar4 = (undefined4 *)((int)puVar4 + -1);
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
      return;
    }
    return;
  }
  fn_82F68CC0();
  return;
}

