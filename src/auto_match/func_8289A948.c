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


void fn_8289A948(longlong param_1,longlong param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  iVar1 = (int)param_1;
  iVar2 = (int)(param_1 + 0x1c);
  if ((*(int *)(iVar1 + 0x20) == 9) && (*(int *)(param_3 + 4) == 7)) {
    *(undefined4 *)(iVar1 + 0x20) = 7;
    lVar5 = param_1 + 0x24;
    lVar4 = 4;
    *(undefined4 *)(iVar1 + 0x34) = *(undefined4 *)(param_3 + 0xc);
    do {
      if (4 < *(uint *)(iVar2 + 0x18)) {
        uVar3 = fn_8265C9E0(*(undefined4 *)(param_3 + 0xc));
                    /* WARNING: Subroutine does not return */
        fn_82F691F0(uVar3,0,*(undefined4 *)(param_3 + 0xc));
      }
      *(undefined4 *)lVar5 = 0;
      lVar4 = lVar4 + -1;
      lVar5 = lVar5 + 4;
    } while (lVar4 != 0);
  }
  else {
    *(undefined4 *)(iVar2 + 4) = *(undefined4 *)(param_3 + 4);
  }
  if (*(int *)(iVar2 + 4) == 7) {
    iVar1 = (int)((param_2 + 2U & 0x3fffffff) << 2);
    if (*(uint *)(iVar2 + 0x18) < 5) {
      *(undefined4 *)(iVar1 + iVar2) = *(undefined4 *)(param_3 + 8);
    }
    else {
      fn_82F68CC0(*(undefined4 *)(iVar1 + iVar2),*(undefined4 *)(param_3 + 8));
    }
  }
  else if (*(int *)(iVar2 + 4) == 8) {
    fn_82897ED8((param_2 + 2U & 0x3fffffff) * 4 + param_1 + 0x1c,param_3 + 8);
  }
  else {
    *(undefined4 *)((int)((param_2 + 2U & 0xffffffff) << 2) + iVar2) = *(undefined4 *)(param_3 + 8);
  }
  return;
}

