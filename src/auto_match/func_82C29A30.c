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
extern int fn_82C10AD0();
extern int fn_82C10B28();
extern int fn_82C295B0();
extern int fn_82C2A470();


undefined8 fn_82C29A30(int param_1,ulonglong param_2,ulonglong param_3,undefined4 *param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong *puVar7;
  ulonglong *apuStack_40 [16];
  
  iVar1 = *(int *)(param_1 + 0x2c);
  apuStack_40[0] = (ulonglong *)0x0;
  if (param_2 < *(ulonglong *)(iVar1 + 0x28)) {
    uVar4 = 0xffffffff80500008;
  }
  else {
    lVar6 = 0;
    uVar5 = 0;
    piVar2 = *(int **)(*(int *)(iVar1 + 0x10) + 8);
    if (piVar2 != (int *)0x0) {
      iVar3 = *piVar2;
      lVar6 = *(longlong *)(iVar3 + 8);
      uVar5 = (ulonglong)*(uint *)(iVar3 + 4);
    }
    if (uVar5 + lVar6 < (param_3 & 0xffffffff) + param_2) {
      uVar4 = 0xffffffff805000d4;
    }
    else {
      uVar4 = fn_82C10AD0(*(undefined4 *)(iVar1 + 0x30),0x1e,0x30,apuStack_40);
      if (-1 < (int)uVar4) {
        puVar7 = apuStack_40[0] + -1;
        lVar6 = 6;
        do {
          puVar7 = puVar7 + 1;
          *puVar7 = 0;
          lVar6 = lVar6 + -1;
        } while (lVar6 != 0);
        *apuStack_40[0] = param_2;
        *(int *)(apuStack_40[0] + 3) = (int)param_3;
        *(undefined4 *)((int)apuStack_40[0] + 0x1c) = *(undefined4 *)(apuStack_40[0] + 3);
        *(ulonglong **)(apuStack_40[0] + 4) = apuStack_40[0];
        uVar4 = fn_82C2A470(param_1,apuStack_40[0]);
        if ((-1 < (int)uVar4) && (uVar4 = fn_82C295B0(param_1,param_2,param_3), -1 < (int)uVar4))
        {
          *param_4 = apuStack_40[0];
          return uVar4;
        }
      }
      if (apuStack_40[0] != (ulonglong *)0x0) {
        fn_82C10B28(*(undefined4 *)(iVar1 + 0x30),0x1e,apuStack_40);
      }
    }
  }
  return uVar4;
}

