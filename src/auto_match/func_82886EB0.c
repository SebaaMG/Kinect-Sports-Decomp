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
extern unsigned int lbl_83212A1C;


byte fn_82886EB0(int param_1,int param_2,ulonglong param_3)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  iVar1 = *(int *)(param_2 * 4 + param_1);
  uVar3 = (ulonglong)*(uint *)(iVar1 + 4);
  uVar2 = 1 << (*(uint *)(param_2 * 4 + lbl_83212A1C) & 0x3f);
  uVar5 = (ulonglong)uVar2;
  uVar4 = (uVar2 >> 2) + uVar3;
  if (uVar5 <= (uVar4 & 0xffffffff)) {
    uVar4 = uVar4 - uVar5;
  }
  if (uVar3 < (uVar4 & 0xffffffff)) {
    if ((param_3 & 0xffffffff) < uVar3) {
      return 0;
    }
  }
  else if (uVar3 <= (param_3 & 0xffffffff)) goto LAB_82886f0c;
  if ((uVar4 & 0xffffffff) < (param_3 & 0xffffffff)) {
    return 0;
  }
LAB_82886f0c:
  uVar3 = (ulonglong)*(uint *)(iVar1 + 8);
  uVar4 = (uVar2 >> 1) + uVar3;
  if (uVar5 <= (uVar4 & 0xffffffff)) {
    uVar4 = uVar4 - uVar5;
  }
  if ((uVar4 & 0xffffffff) <= uVar3) {
    if ((param_3 & 0xffffffff) < uVar3) {
      return -(param_3 < uVar4) & 1;
    }
    return 1;
  }
  if ((uVar3 <= (param_3 & 0xffffffff)) && ((param_3 & 0xffffffff) < (uVar4 & 0xffffffff))) {
    return 1;
  }
  return 0;
}

