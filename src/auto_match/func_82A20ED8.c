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
extern int fn_8265C940();
extern int fn_82A20570();
extern unsigned int lbl_8315D2EC;


longlong fn_82A20ED8(int *param_1,int param_2,ulonglong param_3)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int *piVar4;
  
  RtlEnterCriticalSection(param_1 + 3);
  piVar4 = param_1 + 1;
  iVar1 = param_1[1];
  lVar2 = fn_82A20570(param_1,piVar4,param_1 + 2,(param_3 & 0xffffffff) >> 0x10);
  if (lVar2 == 0) {
    for (; 0xffff < (param_3 & 0xffffffff); param_3 = param_3 - 0x10000) {
      iVar3 = fn_8265C940(0x38,lbl_8315D2EC);
      if (iVar3 == 0) {
        *piVar4 = iVar1;
        lVar2 = 8;
        break;
      }
      *(int *)(iVar3 + 0x18) = param_2;
      *(undefined4 *)(iVar3 + 0x1c) = 0x10000;
      param_2 = param_2 + 0x10000;
      *(int *)(*piVar4 * 4 + *param_1) = iVar3;
      *piVar4 = *piVar4 + 1;
    }
  }
  RtlLeaveCriticalSection(param_1 + 3);
  return lVar2;
}

