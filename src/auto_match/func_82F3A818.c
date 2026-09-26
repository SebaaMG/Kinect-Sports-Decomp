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
extern unsigned int *auStack_40;
extern int fn_82EE3128();
extern int fn_82F39FE0();
extern unsigned int lbl_82162C1C;
extern unsigned int lbl_831B9FE8;


longlong fn_82F3A818(ulonglong param_1,ulonglong param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint auStack_40 [16];
  
  uVar4 = param_1 & 0xffffffff;
  uVar2 = 0;
  uVar5 = param_1;
  while ((iVar1 = (int)uVar5, uVar4 != 0 &&
         ((ulonglong)*(uint *)(iVar1 + 4) <= (param_2 & 0xffffffff)))) {
    if ((param_2 & 0xffffffff) < (ulonglong)(*(uint *)(iVar1 + 4) + 0x14)) goto LAB_82f3a8e8;
    uVar4 = (ulonglong)*(uint *)(iVar1 + 0x121c);
    uVar2 = uVar5;
    uVar5 = uVar4;
  }
  auStack_40[0] = 0;
  if ((param_1 & 0xffffffff) == 0) {
    *(undefined ***)(param_3 + 0x14) = &lbl_82162C1C;
    if (*(int *)(param_3 + 0x18) == 0) {
      fn_82EE3128(param_3 + 0x14,0);
    }
    lVar3 = -0x7fff0001;
  }
  else {
    lVar3 = (**(code **)*(undefined4 *)param_1)(param_1,auStack_40);
    if (lVar3 < 0) {
      *(undefined ***)(param_3 + 0x14) = &lbl_82162C1C;
      if (*(int *)(param_3 + 0x18) == 0) {
        fn_82EE3128(param_3 + 0x14,0);
      }
    }
    else {
      *(int *)(auStack_40[0] + 4) = (int)((param_2 & 0xffffffff) / 0x14) * 0x14;
      if ((uVar2 & 0xffffffff) != 0) {
        *(uint *)((int)uVar2 + 0x121c) = auStack_40[0];
      }
      *(int *)(auStack_40[0] + 0x121c) = iVar1;
      uVar5 = (ulonglong)auStack_40[0];
LAB_82f3a8e8:
      param_2 = param_2 - *(uint *)((int)uVar5 + 4);
      iVar1 = (int)((param_2 & 0xffffffff) >> 3) + (int)uVar5;
      *(byte *)(iVar1 + 0xe8) = (&lbl_831B9FE8)[(uint)param_2 & 7] | *(byte *)(iVar1 + 0xe8);
      fn_82F39FE0(param_2 * 0xdc + uVar5 + 0xec,param_3);
      *(undefined ***)(param_3 + 0x14) = &lbl_82162C1C;
      if (*(int *)(param_3 + 0x18) == 0) {
        fn_82EE3128(param_3 + 0x14,0);
      }
      lVar3 = 0;
    }
  }
  return lVar3;
}

