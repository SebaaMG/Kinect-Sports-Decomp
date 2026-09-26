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


void fn_82A8BE08(uint *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  
  uVar6 = (ulonglong)*param_1 - 1;
  if ((longlong)uVar6 < 0) {
    return;
  }
  lVar2 = uVar6 * 0x60;
  do {
    lVar3 = 0xff;
    iVar1 = (int)lVar2;
    *(undefined4 *)(iVar1 + param_1[1] + 4) = 0xff;
    *(undefined4 *)(iVar1 + param_1[1] + 8) = 0xff;
    lVar8 = (ulonglong)*param_1 - 1;
    iVar7 = (int)uVar6;
    if (iVar7 < (int)lVar8) {
      lVar4 = lVar8 * 0x60;
      do {
        if ((ulonglong)*(uint *)((int)lVar4 + param_1[1]) == (uVar6 & 0xffffffff)) {
          *(int *)(iVar1 + param_1[1] + 4) = (int)lVar8;
          lVar3 = lVar8;
          break;
        }
        lVar8 = lVar8 + -1;
        lVar4 = lVar4 + -0x60;
      } while (iVar7 < (int)lVar8);
    }
    lVar8 = lVar8 + -1;
    if (iVar7 < (int)lVar8) {
      lVar4 = lVar8 - uVar6;
      lVar3 = lVar3 * 0x60;
      lVar5 = lVar8 * 0x60;
      do {
        if ((ulonglong)*(uint *)((int)lVar5 + param_1[1]) == (uVar6 & 0xffffffff)) {
          *(int *)((int)lVar3 + param_1[1] + 8) = (int)lVar8;
          lVar3 = lVar5;
        }
        lVar8 = lVar8 + -1;
        lVar5 = lVar5 + -0x60;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
    }
    uVar6 = uVar6 - 1;
    lVar2 = lVar2 + -0x60;
    if ((longlong)uVar6 < 0) {
      return;
    }
  } while( true );
}

