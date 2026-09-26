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
extern int fn_82D8D988();


void fn_82DA2970(int param_1,int *param_2)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  
  if (*param_2 != 0) {
    uVar3 = (ulonglong)*(uint *)(param_1 + 0x164) - 1;
    if (-1 < (longlong)uVar3) {
      lVar1 = (uVar3 & 0x3fffffff) * 4 + (ulonglong)*(uint *)(param_1 + 0x160);
      do {
        if ((int *)*(undefined4 *)lVar1 == param_2) {
          fn_82D8D988(param_1,param_2,1);
          iVar2 = *(int *)(param_1 + 0x164) + -1;
          *(int *)(param_1 + 0x164) = iVar2;
          if (iVar2 != (int)uVar3) {
            *(undefined4 *)((int)((uVar3 & 0xffffffff) << 2) + *(int *)(param_1 + 0x160)) =
                 *(undefined4 *)(iVar2 * 4 + *(int *)(param_1 + 0x160));
          }
          *(undefined1 *)(param_1 + 0x16c) = 1;
          return;
        }
        uVar3 = uVar3 - 1;
        lVar1 = lVar1 + -4;
      } while (-1 < (longlong)uVar3);
    }
    fn_82D8D988(param_1,param_2,0);
  }
  return;
}

