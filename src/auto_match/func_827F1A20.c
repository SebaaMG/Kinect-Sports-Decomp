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
extern int fn_827F15D0();
extern int fn_827F4010();


void fn_827F1A20(undefined8 param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  iVar2 = (int)param_2;
  uVar6 = (ulonglong)*(ushort *)(iVar2 + 0xe8) - 1;
  if (-1 < (longlong)uVar6) {
    lVar4 = ((ulonglong)*(ushort *)(iVar2 + 0xe8) + 0x27) * 4 + param_2;
    do {
      if ((*(ushort *)((((uint)((uVar6 & 0xffffffff) >> 4) & 0xfff) + 0x77) * 2 + iVar2) >>
           ((uint)uVar6 & 0xf) & 1) == 0) {
        (**(code **)(*(int *)*(undefined4 *)lVar4 + 4))(param_1);
      }
      uVar6 = uVar6 - 1;
      lVar4 = lVar4 + -4;
    } while (-1 < (longlong)uVar6);
  }
  if ((*(ushort *)(iVar2 + 0xea) & 1) != 0) {
    lVar4 = (ulonglong)*(ushort *)(iVar2 + 0xe8) - 1;
    if (-1 < lVar4) {
      lVar5 = ((ulonglong)*(ushort *)(iVar2 + 0xe8) + 0x17) * 4 + param_2;
      do {
        iVar1 = *(int *)lVar5;
        iVar3 = fn_827F4010(((int *)lVar5)[0x10]);
        if (iVar3 != iVar1) {
          *(ushort *)(iVar2 + 0xea) = *(ushort *)(iVar2 + 0xea) & 0xfffe;
          break;
        }
        lVar4 = lVar4 + -1;
        lVar5 = lVar5 + -4;
      } while (-1 < lVar4);
    }
  }
  if (((*(ushort *)(iVar2 + 0xea) >> 1 & 1) == 0) || ((*(ushort *)(iVar2 + 0xea) & 1) == 0)) {
    fn_827F15D0(param_2);
  }
  *(undefined1 *)(iVar2 + 0x188) = 1;
  return;
}

