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
extern unsigned int *auStack_90;
extern int fn_826826A8();
extern int fn_826828D8();
extern int fn_82683270();
extern int fn_82695DA0();
extern int fn_82696330();
extern unsigned int iStack_60;
extern unsigned int iStack_68;
extern unsigned int lbl_8200579C;
extern unsigned int uStack_64;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;
extern unsigned int uStack_74;


undefined8 fn_8269F680(int *param_1,int *param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar5;
  undefined8 uVar4;
  ulonglong uVar6;
  longlong lVar7;
  uint *puVar8;
  undefined1 auStack_90 [16];
  undefined **ppuStack_80;
  undefined1 *puStack_7c;
  int *piStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined1 uStack_6c;
  int iStack_68;
  uint uStack_64;
  int iStack_60;
  
  if (*param_2 == 0) {
    uVar4 = 0;
  }
  else {
    auStack_90[0] = 0;
    iVar5 = (**(code **)(*param_1 + 0x5c))();
    uVar1 = param_3[1];
    if (0 < (int)uVar1) {
      uVar6 = (ulonglong)uVar1 - 1;
      if (-1 < (longlong)uVar6) {
        puVar8 = (uint *)(iVar5 + 8);
        lVar7 = (uVar6 & 0xfffffff) << 4;
        do {
          uVar2 = *puVar8;
          uVar3 = *param_3;
          *puVar8 = uVar2 + 0x10;
          if (*(uint *)(iVar5 + 0x10) <= uVar2 + 0x10) {
            fn_826826A8(puVar8);
          }
          if (*puVar8 != 0) {
            fn_82695DA0(*puVar8,lVar7 + (ulonglong)uVar3);
          }
          uVar6 = uVar6 - 1;
          lVar7 = lVar7 + -0x10;
        } while (-1 < (longlong)uVar6);
      }
    }
    piStack_78 = param_1 + 0x1a;
    puStack_7c = auStack_90;
    uStack_6c = 0;
    uStack_74 = 0;
    uStack_70 = 0;
    ppuStack_80 = &lbl_8200579C;
    iStack_60 = (*(int *)(iVar5 + 8) - *(int *)(iVar5 + 0xc) >> 4) + *(int *)(iVar5 + 0x1c) * 0x20 +
                -0x20;
    iStack_68 = iVar5;
    uStack_64 = uVar1;
    (**(code **)(*(int *)*param_2 + 0x28))((int *)*param_2,&ppuStack_80,param_2[1],0);
    fn_826828D8(&ppuStack_80);
    if (0 < (int)uVar1) {
      fn_82683270(iVar5 + 8,(ulonglong)uVar1);
    }
    fn_82696330(auStack_90);
    uVar4 = 1;
  }
  return uVar4;
}

