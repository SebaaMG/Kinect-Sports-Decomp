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
#define TBLr 0
extern int fn_82DAD5A8();
extern unsigned int lbl_82132BC4;
extern unsigned int lbl_82141CF8;
extern unsigned int lbl_8323B4A0;


void fn_82DAE118(int param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  int iVar3;
  ulonglong uVar4;
  int *piVar5;
  longlong lVar6;
  
  piVar5 = (int *)(param_1 + 0x1a4);
  uVar4 = (ulonglong)*(uint *)(param_1 + 0x1a8) - 1;
  if (-1 < (longlong)uVar4) {
    lVar6 = (uVar4 & 0x3fffffff) << 2;
    do {
      if (*(int *)(*piVar5 + (int)lVar6) != 0) {
        iVar3 = KeTlsGetValue(lbl_8323B4A0);
        puVar1 = *(undefined4 **)(iVar3 + 4);
        if (puVar1 < *(undefined4 **)(iVar3 + 0xc)) {
          *puVar1 = &lbl_82141CF8;
          uVar2 = TBLr;
          puVar1[1] = (int)uVar2;
          *(undefined4 **)(iVar3 + 4) = puVar1 + 3;
        }
        puVar1 = *(undefined4 **)(*piVar5 + (int)lVar6);
        (**(code **)*puVar1)(puVar1,param_2);
        iVar3 = KeTlsGetValue(lbl_8323B4A0);
        puVar1 = *(undefined4 **)(iVar3 + 4);
        if (puVar1 < *(undefined4 **)(iVar3 + 0xc)) {
          *puVar1 = &lbl_82132BC4;
          uVar2 = TBLr;
          puVar1[1] = (int)uVar2;
          *(undefined4 **)(iVar3 + 4) = puVar1 + 3;
        }
      }
      uVar4 = uVar4 - 1;
      lVar6 = lVar6 + -4;
    } while (-1 < (longlong)uVar4);
  }
  fn_82DAD5A8(piVar5);
  return;
}

