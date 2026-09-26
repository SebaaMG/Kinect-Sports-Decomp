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
extern int fn_82C2A470();
extern int fn_82C2AA40();


void fn_82C2AEC0(int param_1,ulonglong param_2,ulonglong param_3,undefined4 *param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong *puVar6;
  ulonglong *apuStack_40 [16];
  
  iVar1 = *(int *)(param_1 + 0x2c);
  apuStack_40[0] = (ulonglong *)0x0;
  if (param_2 < *(ulonglong *)(iVar1 + 0x28)) {
    iVar3 = -0x7faffff8;
  }
  else {
    lVar5 = 0;
    uVar4 = 0;
    piVar2 = *(int **)(*(int *)(iVar1 + 0x10) + 4);
    if (piVar2 != (int *)0x0) {
      iVar3 = *piVar2;
      lVar5 = *(longlong *)(iVar3 + 8);
      uVar4 = (ulonglong)*(uint *)(iVar3 + 4);
    }
    if (uVar4 + lVar5 < (param_3 & 0xffffffff) + param_2) {
      iVar3 = -0x7fafff2c;
    }
    else {
      iVar3 = fn_82C10AD0(*(undefined4 *)(iVar1 + 0x30),0x1f,0x30,apuStack_40);
      if (iVar3 < 0) goto LAB_82c2b004;
      puVar6 = apuStack_40[0] + -1;
      lVar5 = 6;
      do {
        puVar6 = puVar6 + 1;
        *puVar6 = 0;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
      *apuStack_40[0] = param_2;
      *(int *)((int)apuStack_40[0] + 0x1c) = (int)param_3;
      *(undefined4 *)(apuStack_40[0] + 4) = *(undefined4 *)((int)apuStack_40[0] + 0x1c);
      *(undefined4 *)(apuStack_40[0] + 3) = 0;
      iVar3 = fn_82C10AD0(*(undefined4 *)(iVar1 + 0x30),0x1f,
                                *(undefined4 *)((int)apuStack_40[0] + 0x1c),
                                (int)apuStack_40[0] + 0x2c);
      if (((iVar3 < 0) || (iVar3 = fn_82C2A470(param_1,apuStack_40[0]), iVar3 < 0)) ||
         (iVar3 = fn_82C2AA40(param_1,param_2,param_3,apuStack_40[0]), iVar3 < 0))
      goto LAB_82c2b004;
      *param_4 = apuStack_40[0];
    }
  }
  if (-1 < iVar3) {
    return;
  }
LAB_82c2b004:
  do {
    iVar3 = fn_82C10B28(*(undefined4 *)(iVar1 + 0x30),0x1f,apuStack_40);
  } while (iVar3 < 0);
  return;
}

