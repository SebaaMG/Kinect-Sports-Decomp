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
extern int fn_827F3A60();
extern int fn_827F3AB0();


longlong fn_827F0748(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  longlong lVar8;
  
  iVar1 = (int)param_1;
  uVar6 = (ulonglong)*(ushort *)(iVar1 + 0xe0);
  if (uVar6 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = uVar6 - 1;
    uVar7 = 0;
    if (-1 < lVar2) {
      lVar8 = (uVar6 + 7) * 4 + param_1;
      uVar7 = 0;
      do {
        uVar3 = fn_827F3AB0(*(undefined4 *)((*(ushort *)lVar8 + 0x28) * 4 + iVar1));
        if (uVar7 < uVar3) {
          uVar7 = uVar3;
        }
        lVar2 = lVar2 + -1;
        lVar8 = lVar8 + -4;
      } while (-1 < lVar2);
    }
    iVar4 = (**(code **)(**(int **)(iVar1 + 4) + 8))();
    iVar5 = fn_827F3A60(param_1);
    lVar2 = (longlong)iVar5 * (longlong)(int)(*(ushort *)(iVar1 + 0xe6) - 1) +
            (longlong)(int)(uint)*(ushort *)(iVar1 + 0xe4) *
            (longlong)(int)((iVar4 + 0xfU & 0xfffffff0) + uVar7);
  }
  return lVar2;
}

