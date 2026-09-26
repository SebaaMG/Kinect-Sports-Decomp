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
extern unsigned int lbl_82132BC4;
extern unsigned int lbl_8323B4A0;


void fn_82DACE50(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined8 uVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  iVar1 = *(int *)(param_1 + 0x214);
  if (iVar1 != 0) {
    uVar6 = (ulonglong)*(ushort *)(iVar1 + 0xc) - 1;
    if (-1 < (longlong)uVar6) {
      lVar7 = (uVar6 & 0x3fffffff) << 2;
      do {
        if (*(int *)((int)lVar7 + *(int *)(iVar1 + 8)) != 0) {
          iVar5 = KeTlsGetValue(lbl_8323B4A0);
          puVar2 = *(undefined4 **)(iVar5 + 4);
          if (puVar2 < *(undefined4 **)(iVar5 + 0xc)) {
            *puVar2 = "TtsetMotionTypeCb";
            uVar4 = TBLr;
            puVar2[1] = (int)uVar4;
            *(undefined4 **)(iVar5 + 4) = puVar2 + 3;
          }
          piVar3 = *(int **)((int)lVar7 + *(int *)(iVar1 + 8));
          (**(code **)(*piVar3 + 0x10))(piVar3,param_1);
          iVar5 = KeTlsGetValue(lbl_8323B4A0);
          puVar2 = *(undefined4 **)(iVar5 + 4);
          if (puVar2 < *(undefined4 **)(iVar5 + 0xc)) {
            *puVar2 = &lbl_82132BC4;
            uVar4 = TBLr;
            puVar2[1] = (int)uVar4;
            *(undefined4 **)(iVar5 + 4) = puVar2 + 3;
          }
        }
        uVar6 = uVar6 - 1;
        lVar7 = lVar7 + -4;
      } while (-1 < (longlong)uVar6);
    }
  }
  return;
}

