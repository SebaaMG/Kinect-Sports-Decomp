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
extern unsigned int lbl_8323B4A0;


void fn_82DAEB78(int param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined8 uVar3;
  int iVar4;
  ulonglong uVar5;
  int *piVar6;
  longlong lVar7;
  
  piVar6 = (int *)(param_1 + 0x180);
  uVar5 = (ulonglong)*(uint *)(param_1 + 0x184) - 1;
  if (-1 < (longlong)uVar5) {
    lVar7 = (uVar5 & 0x3fffffff) << 2;
    do {
      if (*(int *)(*piVar6 + (int)lVar7) != 0) {
        iVar4 = KeTlsGetValue(lbl_8323B4A0);
        puVar1 = *(undefined4 **)(iVar4 + 4);
        if (puVar1 < *(undefined4 **)(iVar4 + 0xc)) {
          *puVar1 = "TtpostCollCb";
          uVar3 = TBLr;
          puVar1[1] = (int)uVar3;
          *(undefined4 **)(iVar4 + 4) = puVar1 + 3;
        }
        piVar2 = *(int **)(*piVar6 + (int)lVar7);
        (**(code **)(*piVar2 + 4))(piVar2,param_1,param_2);
        iVar4 = KeTlsGetValue(lbl_8323B4A0);
        puVar1 = *(undefined4 **)(iVar4 + 4);
        if (puVar1 < *(undefined4 **)(iVar4 + 0xc)) {
          *puVar1 = &lbl_82132BC4;
          uVar3 = TBLr;
          puVar1[1] = (int)uVar3;
          *(undefined4 **)(iVar4 + 4) = puVar1 + 3;
        }
      }
      uVar5 = uVar5 - 1;
      lVar7 = lVar7 + -4;
    } while (-1 < (longlong)uVar5);
  }
  fn_82DAD5A8(piVar6);
  return;
}

