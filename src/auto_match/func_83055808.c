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
extern int fn_830514A8();
extern int fn_83055310();


undefined8 fn_83055808(int *param_1,undefined4 *param_2,ulonglong *param_3,uint *param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  int iVar3;
  undefined8 uVar4;
  int *piVar5;
  
  piVar5 = param_1 + 0xe;
  *param_2 = param_1 + 6;
  RtlEnterCriticalSection(piVar5);
  if (((param_1[0x1d] & 0x8000000U) == 0) && (((uint)param_1[0x1d] >> 0x18 & 1) != 0)) {
    if (*(uint *)(param_1[0x18] + 0x84) < (uint)param_1[0x1a]) {
      *param_4 = *(uint *)(param_1[0x18] + 0x84);
    }
    else {
      *param_4 = param_1[0x1a];
    }
    uVar2 = (**(code **)(*param_1 + 0x2c))(param_1);
    *param_3 = uVar2;
    if ((param_1[0x24] != 0) &&
       (uVar1 = (longlong)param_1[0x1b] * (longlong)param_1[8] & 0xffffffff,
       (uint)param_1[0x24] + uVar1 <= uVar2)) {
      *param_3 = (uint)param_1[0x23] + uVar1;
    }
    iVar3 = fn_83055310(param_1,*param_3,*param_4);
    param_1[0x26] = param_1[0x26] + iVar3;
    fn_830514A8(param_1);
    uVar4 = *(undefined8 *)(param_1[0x18] + 0x50);
    *(byte *)(param_1 + 0x2e) = *(byte *)(param_1 + 0x2e) | 0x40;
    *(undefined8 *)(param_1 + 0x16) = uVar4;
    RtlLeaveCriticalSection(piVar5);
    uVar4 = 1;
  }
  else {
    RtlLeaveCriticalSection(piVar5);
    uVar4 = 0;
  }
  return uVar4;
}

