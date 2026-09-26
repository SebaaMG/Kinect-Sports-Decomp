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
extern int fn_82F63BD8();
extern int fn_82F68CC0();


void fn_8223AB38(void)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar7 = 1;
  lVar5 = -0x3ffffbe9;
  fn_82F63BD8(2,0xffffffffc0000417,1,0,0);
  lVar3 = KeBugCheck(0x1e);
  if ((int)lVar3 == (int)lVar5) {
    return;
  }
  if ((int)lVar5 <= (int)lVar3) {
    lVar2 = uVar7 + 1;
    uVar6 = lVar5 + uVar7;
    for (uVar4 = lVar3 + uVar7; lVar2 = lVar2 + -1, lVar2 != 0 && (uVar4 & 3) != 0;
        uVar4 = uVar4 - 1) {
      uVar7 = uVar7 - 1;
      iVar1 = (int)uVar6;
      uVar6 = uVar6 - 1;
      *(undefined1 *)((int)uVar4 + -1) = *(undefined1 *)(iVar1 + -1);
    }
    uVar8 = (uVar7 & 0xffffffff) >> 2;
    if (uVar8 != 0) {
      if ((uVar6 & 3) == 0) {
        do {
          iVar1 = (int)uVar6;
          uVar6 = uVar6 - 4;
          *(undefined4 *)((int)uVar4 + -4) = *(undefined4 *)(iVar1 + -4);
          uVar4 = uVar4 - 4;
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
      }
      else {
        do {
          iVar1 = (int)uVar6;
          uVar4 = uVar4 - 4;
          uVar6 = uVar6 - 4;
          *(undefined4 *)uVar4 = *(undefined4 *)(iVar1 + -4);
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
      }
    }
    uVar7 = uVar7 & 3;
    if (uVar7 != 0) {
      do {
        iVar1 = (int)uVar6;
        uVar6 = uVar6 - 1;
        *(undefined1 *)((int)uVar4 + -1) = *(undefined1 *)(iVar1 + -1);
        uVar4 = uVar4 - 1;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
      return;
    }
    return;
  }
  fn_82F68CC0();
  return;
}

