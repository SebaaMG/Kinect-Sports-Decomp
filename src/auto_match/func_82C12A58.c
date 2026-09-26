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
extern int fn_82C026A8();
extern int fn_82C12850();
extern int fn_82F68CC0();


undefined8 fn_82C12A58(int param_1,undefined4 *param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  int *piVar5;
  int aiStack_40 [16];
  
  plVar1 = *(longlong **)(param_1 + 0x14);
  uVar3 = 0;
  aiStack_40[0] = 0;
  piVar5 = (int *)0x0;
  if ((*(int *)((int)plVar1 + 0x44) != 0) || (uVar3 = fn_82C12850(plVar1), -1 < (int)uVar3)) {
    piVar5 = *(int **)((int)plVar1 + 0x44);
    *(undefined4 *)((int)plVar1 + 0x44) = *(undefined4 *)(piVar5[5] + 4);
  }
  if (-1 < (int)uVar3) {
    aiStack_40[0] = *piVar5;
    uVar4 = fn_82C026A8(*(undefined4 *)(plVar1 + 7),*plVar1,*(undefined4 *)((int)plVar1 + 0x34),
                            aiStack_40,*(undefined4 *)((int)plVar1 + 0x3c));
    if ((uVar4 & 0xffffffff) == 0x80500000) {
      uVar3 = 0xffffffff80500000;
    }
    else {
      if (((uVar4 & 0xffffffff) != 0) && (aiStack_40[0] != 0)) {
        if (aiStack_40[0] != *piVar5) {
          fn_82F68CC0(*piVar5,aiStack_40[0],uVar4);
        }
        piVar5[1] = (int)uVar4;
        *(longlong *)(piVar5 + 2) = *plVar1;
        *param_2 = piVar5;
        *plVar1 = (uVar4 & 0xffffffff) + *plVar1;
        return uVar3;
      }
      uVar3 = 0xffffffff80500001;
    }
  }
  if (piVar5 != (int *)0x0) {
    iVar2 = *(int *)(param_1 + 0x14);
    *(undefined4 *)(piVar5[5] + 4) = *(undefined4 *)(iVar2 + 0x44);
    *(int **)(iVar2 + 0x44) = piVar5;
  }
  return uVar3;
}

