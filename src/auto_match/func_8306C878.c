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
extern int fn_8306D610();
extern int fn_8306DB60();
extern int fn_8306E0E0();


undefined8 fn_8306C878(int param_1,longlong *param_2,int param_3)

{
  longlong lVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  
  uVar4 = 0;
  if (param_2 == (longlong *)0x0) {
    uVar4 = 0xffffffff80070057;
  }
  else if (*(int *)(param_2 + 1) != *(int *)(param_1 + 0x1b38)) {
    *(int *)(param_1 + 0x1b38) = *(int *)(param_2 + 1);
    lVar1 = *param_2;
    RtlEnterCriticalSection(param_1 + 0x1b1c);
    plVar5 = (longlong *)0x0;
    iVar3 = 0;
    piVar2 = (int *)((int)param_2 + 0x34);
    do {
      if (*piVar2 == param_3) {
        plVar5 = param_2 + iVar3 * 0x38 + 6;
        *(undefined4 *)(param_1 + 0x1b40) = *(undefined4 *)(param_2 + iVar3 * 0x38 + 6);
        *(undefined4 *)(param_1 + 0x1b44) = *(undefined4 *)((int)param_2 + iVar3 * 0x1c0 + 0x34);
        *(undefined4 *)(param_1 + 0x1b48) = *(undefined4 *)(param_2 + iVar3 * 0x38 + 7);
        *(undefined4 *)(param_1 + 0x1b4c) = *(undefined4 *)((int)param_2 + iVar3 * 0x1c0 + 0x3c);
        *(undefined4 *)(param_1 + 0x1b50) = *(undefined4 *)(param_2 + iVar3 * 0x38 + 0x3c);
        break;
      }
      iVar3 = iVar3 + 1;
      piVar2 = piVar2 + 0x70;
    } while (iVar3 < 6);
    if (param_3 != *(int *)(param_1 + 0x1b3c)) {
      fn_8306D610(param_1 + 0x78);
      fn_8306E0E0(*(undefined4 *)(param_1 + 0x1b18));
    }
    *(int *)(param_1 + 0x1b3c) = param_3;
    fn_8306DB60(param_1 + 0x78,plVar5,lVar1 * 100000,param_1 + 4,param_1 + 0x34);
    RtlLeaveCriticalSection(param_1 + 0x1b1c);
  }
  return uVar4;
}

