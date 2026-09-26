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
extern unsigned int *auStack_250;
extern unsigned int lbl_82132BC4;
extern unsigned int lbl_8213971C;
extern unsigned int lbl_8323B4A0;
extern unsigned int uStack_258;
extern unsigned int uStack_25c;
extern unsigned int uStack_260;


void fn_82D6BFD8(int param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined4 uVar1;
  undefined8 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  longlong lVar6;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined4 uStack_258;
  undefined4 *puStack_254;
  undefined1 auStack_250 [592];
  
  iVar3 = KeTlsGetValue(lbl_8323B4A0);
  puVar5 = *(undefined4 **)(iVar3 + 4);
  if (puVar5 < *(undefined4 **)(iVar3 + 0xc)) {
    *puVar5 = &lbl_8213971C;
    uVar2 = TBLr;
    puVar5[1] = (int)uVar2;
    *(undefined4 **)(iVar3 + 4) = puVar5 + 3;
  }
  piVar4 = (int *)(**(code **)(*(int *)*param_2 + 0x10))();
  uStack_258 = param_2[2];
  lVar6 = (ulonglong)*(uint *)(param_1 + 0x10) - 1;
  puStack_254 = param_2;
  if (-1 < lVar6) {
    puVar5 = (undefined4 *)(*(int *)(param_1 + 0xc) + -4);
    do {
      uVar1 = puVar5[1];
      uStack_260 = (**(code **)(*piVar4 + 0x14))(piVar4,uVar1,auStack_250);
      puVar5 = puVar5 + 2;
      uStack_25c = uVar1;
      (**(code **)(*(int *)*puVar5 + 0x14))
                ((int *)*puVar5,&uStack_260,param_3,param_4,param_5,param_6);
      lVar6 = lVar6 + -1;
    } while (-1 < lVar6);
  }
  iVar3 = KeTlsGetValue(lbl_8323B4A0);
  puVar5 = *(undefined4 **)(iVar3 + 4);
  if (puVar5 < *(undefined4 **)(iVar3 + 0xc)) {
    *puVar5 = &lbl_82132BC4;
    uVar2 = TBLr;
    puVar5[1] = (int)uVar2;
    *(undefined4 **)(iVar3 + 4) = puVar5 + 3;
  }
  return;
}

