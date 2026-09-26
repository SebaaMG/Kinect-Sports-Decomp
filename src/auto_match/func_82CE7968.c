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
extern int fn_82CE5410();
extern int fn_82CE63B0();
extern unsigned int iStack_40;
extern unsigned int lbl_8323B468;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;


void fn_82CE7968(void)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  int *piVar6;
  int iStack_40;
  uint uStack_3c;
  uint uStack_38;
  
  iStack_40 = 0;
  piVar6 = &lbl_8323B468;
  uVar3 = 0;
  uStack_38 = 0x80000000;
  uStack_3c = 0;
  iVar2 = lbl_8323B468;
  if (lbl_8323B468 != 0) {
    do {
      if ((**(int **)(iVar2 + 0xc) == 0) && (*(code **)(iVar2 + 4) != (code *)0x0)) {
        iVar1 = (**(code **)(iVar2 + 4))();
        if (iVar1 != 0) {
          **(int **)(iVar2 + 0xc) = iVar1;
          uVar3 = (ulonglong)uStack_3c;
          goto LAB_82ce79d8;
        }
        iVar1 = fn_82CE5410();
        if (uStack_3c == (uStack_38 & 0x3fffffff)) {
          fn_82CE63B0(*(undefined4 *)(iVar1 + 0xc),&iStack_40,4);
        }
        *(int *)(uStack_3c * 4 + iStack_40) = iVar2;
        uStack_3c = uStack_3c + 1;
        iVar2 = *(int *)(iVar2 + 8);
        *(undefined4 *)(*piVar6 + 8) = 0;
        *piVar6 = iVar2;
        uVar3 = (ulonglong)uStack_3c;
      }
      else {
LAB_82ce79d8:
        piVar6 = (int *)(iVar2 + 8);
        iVar2 = *(int *)(iVar2 + 8);
      }
    } while (iVar2 != 0);
    iVar2 = (int)uVar3;
    while (iVar2 != 0) {
      uVar4 = uVar3 - 1;
      if (-1 < (longlong)uVar4) {
        lVar5 = (uVar4 & 0x3fffffff) << 2;
        do {
          iVar2 = *(int *)((int)lVar5 + iStack_40);
          iVar1 = (**(code **)(iVar2 + 4))();
          if (iVar1 == 0) {
LAB_82ce7a4c:
            uVar3 = (ulonglong)uStack_3c;
          }
          else {
            **(int **)(iVar2 + 0xc) = iVar1;
            *piVar6 = iVar2;
            piVar6 = (int *)(iVar2 + 8);
            uVar3 = (ulonglong)uStack_3c - 1;
            uStack_3c = (uint)uVar3;
            if (uStack_3c != (uint)uVar4) {
              *(undefined4 *)((int)lVar5 + iStack_40) =
                   *(undefined4 *)((int)((uVar3 & 0xffffffff) << 2) + iStack_40);
              goto LAB_82ce7a4c;
            }
          }
          uVar4 = uVar4 - 1;
          lVar5 = lVar5 + -4;
        } while (-1 < (longlong)uVar4);
      }
      iVar2 = (int)uVar3;
    }
  }
  iVar2 = fn_82CE5410();
  uStack_3c = 0;
  if ((uStack_38 & 0x80000000) == 0) {
    (**(code **)(**(int **)(iVar2 + 0xc) + 0x10))
              (*(int **)(iVar2 + 0xc),iStack_40,uStack_38 & 0x3fffffff,4);
  }
  return;
}

