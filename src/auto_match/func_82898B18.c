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
extern int fn_8265C9E0();
extern int fn_82897ED8();
extern int fn_82F68CC0();
extern int fn_82F691F0();


void fn_82898B18(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  
  iVar1 = (int)param_1;
  iVar2 = (int)param_3;
  if ((*(int *)(iVar1 + 4) == 9) && (*(int *)(iVar2 + 4) == 7)) {
    *(undefined4 *)(iVar1 + 4) = 7;
    lVar7 = param_1 + 8;
    lVar6 = 4;
    *(undefined4 *)(iVar1 + 0x18) = *(undefined4 *)(iVar2 + 0x18);
    do {
      if (4 < *(uint *)(iVar1 + 0x18)) {
        uVar5 = fn_8265C9E0(*(undefined4 *)(iVar2 + 0x18));
                    /* WARNING: Subroutine does not return */
        fn_82F691F0(uVar5,0,*(undefined4 *)(iVar2 + 0x18));
      }
      *(undefined4 *)lVar7 = 0;
      lVar6 = lVar6 + -1;
      lVar7 = lVar7 + 4;
    } while (lVar6 != 0);
  }
  else {
    *(undefined4 *)(iVar1 + 4) = *(undefined4 *)(iVar2 + 4);
  }
  if (*(int *)(iVar1 + 4) == 7) {
    iVar3 = (int)((param_4 + 2U & 0x3fffffff) << 2);
    iVar4 = (int)((param_2 + 2U & 0x3fffffff) << 2);
    if (*(uint *)(iVar1 + 0x18) < 5) {
      *(undefined4 *)(iVar4 + iVar1) = *(undefined4 *)(iVar3 + iVar2);
    }
    else {
      fn_82F68CC0(*(undefined4 *)(iVar4 + iVar1),*(undefined4 *)(iVar3 + iVar2));
    }
  }
  else if (*(int *)(iVar1 + 4) == 8) {
    fn_82897ED8((param_2 + 2U & 0x3fffffff) * 4 + param_1,
                  (param_4 + 2U & 0x3fffffff) * 4 + param_3);
  }
  else {
    *(undefined4 *)((int)((param_2 + 2U & 0xffffffff) << 2) + iVar1) =
         *(undefined4 *)((int)((param_4 + 2U & 0xffffffff) << 2) + iVar2);
  }
  return;
}

