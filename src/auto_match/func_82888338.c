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
extern int fn_82887E90();
extern int fn_828886B8();


void fn_82888338(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  int iVar7;
  longlong lVar8;
  
  fn_828886B8();
  iVar1 = fn_82887E90(0xffffffff83212a50);
  uVar5 = (ulonglong)*(uint *)(iVar1 + 0x13fc);
  if (0 < (int)*(uint *)(iVar1 + 0x13fc)) {
    iVar1 = *(int *)(iVar1 + 0x1400);
    do {
      puVar6 = (undefined4 *)(iVar1 + 0x194);
      lVar8 = 0x33;
      do {
        puVar6[-0x32] = 0;
        puVar6 = puVar6 + 1;
        *puVar6 = 0;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
      iVar4 = 0x2ca;
      do {
        iVar7 = 0;
        lVar8 = 0x33;
        do {
          iVar3 = iVar4 + -0x231 + iVar7;
          iVar2 = iVar4 + iVar7;
          iVar7 = iVar7 + 1;
          *(undefined4 *)(iVar3 * 4 + iVar1) = 0;
          *(undefined4 *)(iVar2 * 4 + iVar1) = 0;
          lVar8 = lVar8 + -1;
        } while (lVar8 != 0);
        iVar4 = iVar4 + 0x33;
      } while (iVar4 < 0x4fb);
      uVar5 = uVar5 - 1;
      iVar1 = iVar1 + 0x13ec;
    } while (uVar5 != 0);
  }
  return;
}

