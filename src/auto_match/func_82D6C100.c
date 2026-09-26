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
extern unsigned int *auStack_270;
extern unsigned int iStack_260;
extern unsigned int lbl_82132BC4;
extern unsigned int lbl_8213971C;
extern unsigned int lbl_8323B4A0;
extern unsigned int uStack_258;
extern unsigned int uStack_25c;


void fn_82D6C100(undefined4 *param_1,int *param_2,int *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined4 *puVar1;
  int iVar3;
  int *piVar4;
  undefined8 uVar2;
  int iVar5;
  char *pcVar6;
  undefined1 auStack_270 [16];
  int iStack_260;
  undefined4 uStack_25c;
  undefined4 uStack_258;
  undefined4 *puStack_254;
  undefined1 auStack_250 [592];
  
  iVar3 = KeTlsGetValue(lbl_8323B4A0);
  puVar1 = *(undefined4 **)(iVar3 + 4);
  if (puVar1 < *(undefined4 **)(iVar3 + 0xc)) {
    *puVar1 = &lbl_8213971C;
    uVar2 = TBLr;
    puVar1[1] = (int)uVar2;
    *(undefined4 **)(iVar3 + 4) = puVar1 + 3;
  }
  piVar4 = (int *)(**(code **)(*(int *)*param_1 + 0x10))();
  uStack_258 = param_1[2];
  iVar3 = *(int *)(*param_2 + 0xc);
  puStack_254 = param_1;
  uVar2 = (**(code **)(*piVar4 + 8))();
  iVar5 = (int)uVar2;
  while (iVar5 != -1) {
    pcVar6 = (char *)(**(code **)(*(int *)(param_3[3] + 0xc) + 4))
                               (auStack_270,param_3[3] + 0xc,param_3,param_2,param_1,piVar4,uVar2);
    if (*pcVar6 != '\0') {
      iStack_260 = (**(code **)(*piVar4 + 0x14))(piVar4,uVar2,auStack_250);
      uStack_25c = (undefined4)uVar2;
      (**(code **)((uint)*(byte *)((*(int *)(iStack_260 + 0xc) + 0xd) * 0x20 + *param_3 + iVar3) *
                   0x14 + *param_3 + 0x9ac))(&iStack_260,param_2,param_3,param_4,param_5);
    }
    uVar2 = (**(code **)(*piVar4 + 0xc))(piVar4,uVar2);
    iVar5 = (int)uVar2;
  }
  iVar3 = KeTlsGetValue(lbl_8323B4A0);
  puVar1 = *(undefined4 **)(iVar3 + 4);
  if (puVar1 < *(undefined4 **)(iVar3 + 0xc)) {
    *puVar1 = &lbl_82132BC4;
    uVar2 = TBLr;
    puVar1[1] = (int)uVar2;
    *(undefined4 **)(iVar3 + 4) = puVar1 + 3;
  }
  return;
}

