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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
#define _iStack00000028 ((*(U64*)&iStack00000028))
extern unsigned int iStack00000020;
extern unsigned int iStack00000028;
extern unsigned int uStack0000002c;


void fn_828C4508(undefined8 *param_1,uint param_2,ulonglong param_3,undefined8 param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  int iStack00000020;
  int iStack00000028;
  uint uStack0000002c;
  
  uVar7 = param_3 & 0xffffffff;
  if (param_2 != uVar7) {
    lVar4 = uVar7 - param_2;
    iStack00000020 = (int)(param_3 >> 0x20);
    iStack00000028 = (int)((ulonglong)param_4 >> 0x20);
    iVar2 = iStack00000028;
    uStack0000002c = (uint)param_4;
    uVar3 = uStack0000002c;
    _iStack00000028 = param_4;
    do {
      uVar7 = uVar7 - 1;
      uVar5 = (uVar7 & 0xffffffff) >> 2;
      if (*(uint *)(iStack00000020 + 8) <= uVar5) {
        uVar5 = uVar5 - *(uint *)(iStack00000020 + 8);
      }
      uVar3 = uVar3 - 1;
      uVar1 = *(uint *)(iVar2 + 8);
      uVar6 = uVar3 >> 2;
      _iStack00000028 = CONCAT44(iStack00000028,uVar3);
      if (uVar1 <= uVar6) {
        uVar6 = uVar6 - uVar1;
      }
      *(undefined4 *)(*(int *)(uVar6 * 4 + *(int *)(iVar2 + 4)) + (uVar3 & 3) * 4) =
           *(undefined4 *)
            (*(int *)((int)((uVar5 & 0xffffffff) << 2) + *(int *)(iStack00000020 + 4)) +
            (int)((uVar7 & 3) << 2));
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    *param_1 = _iStack00000028;
    return;
  }
  *param_1 = param_4;
  return;
}

