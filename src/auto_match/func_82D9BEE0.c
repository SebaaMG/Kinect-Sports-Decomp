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
extern unsigned int lbl_8214183C;
extern unsigned int uStack_3a;
extern unsigned int uStack_50;


void fn_82D9BEE0(int param_1,int *param_2)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined1 uStack_50;
  undefined **ppuStack_40;
  undefined2 uStack_3a;
  
  uStack_3a = 1;
  ppuStack_40 = &lbl_8214183C;
  if (*param_2 != 0) {
    uVar6 = (ulonglong)*(uint *)(param_1 + 0x164) - 1;
    if (-1 < (longlong)uVar6) {
      lVar4 = (uVar6 & 0x1fffffff) * 8 + (ulonglong)*(uint *)(param_1 + 0x160) + 4;
      do {
        if ((int *)*(undefined4 *)lVar4 == param_2) {
          fn_82D8D988(param_1,param_2,uStack_50);
          lVar4 = (uVar6 & 0x1fffffff) * 8;
          piVar2 = *(int **)((int)lVar4 + *(int *)(param_1 + 0x160));
          if (piVar2 != (int *)0x0) {
            (**(code **)(*piVar2 + 0x1c))(piVar2,&ppuStack_40);
          }
          iVar5 = *(int *)(param_1 + 0x164) + -1;
          *(int *)(param_1 + 0x164) = iVar5;
          if (iVar5 != (int)uVar6) {
            uVar1 = *(uint *)(param_1 + 0x160);
            lVar4 = (ulonglong)uVar1 + lVar4;
            iVar3 = (int)lVar4;
            lVar7 = 2;
            do {
              *(undefined4 *)lVar4 =
                   *(undefined4 *)(((iVar5 * 8 + uVar1) - iVar3) + (int)(undefined4 *)lVar4);
              lVar4 = lVar4 + 4;
              lVar7 = lVar7 + -1;
            } while (lVar7 != 0);
          }
          *(undefined1 *)(param_1 + 0x16c) = 1;
          return;
        }
        uVar6 = uVar6 - 1;
        lVar4 = lVar4 + -8;
      } while (-1 < (longlong)uVar6);
    }
    fn_82D8D988(param_1,param_2,uStack_50);
  }
  return;
}

