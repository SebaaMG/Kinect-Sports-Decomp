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
extern int fn_82E50BE8();
extern int fn_82E80A68();
extern int fn_82E80FD8();


undefined8 fn_82E81308(int param_1,ulonglong param_2)

{
  uint *puVar1;
  ulonglong uVar2;
  int iVar3;
  ulonglong uVar4;
  
  if (0x10000 < param_2) {
    return 0xffffffff80070057;
  }
  puVar1 = *(uint **)(param_1 + 0x10);
  if (puVar1 == (uint *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = (ulonglong)puVar1[1] + (ulonglong)*puVar1;
    if ((param_2 & 0xffffffff) <= (uVar4 & 0xffffffff)) goto LAB_82e813dc;
  }
  uVar2 = fn_82E50BE8(0x10,0,0,0,0);
  if ((uVar2 & 0xffffffff) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = fn_82E80FD8(uVar2,uVar4,(param_2 & 0xffffffff) - uVar4);
  }
  if (iVar3 == 0) {
    return 0xffffffff8007000e;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(int *)(param_1 + 0xc) = iVar3;
    *(int *)(param_1 + 0x14) = iVar3;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  else {
    *(int *)(*(int *)(param_1 + 0x10) + 0xc) = iVar3;
  }
  *(int *)(param_1 + 0x10) = iVar3;
LAB_82e813dc:
  *(int *)(param_1 + 4) = (int)param_2;
  if ((param_2 & 0xffffffff) < (ulonglong)*(uint *)(param_1 + 8)) {
    *(int *)(param_1 + 8) = (int)param_2;
    fn_82E80A68(param_1);
  }
  return 0;
}

