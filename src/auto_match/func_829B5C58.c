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
extern int fn_829BAA90();


undefined4 * fn_829B5C58(int *param_1,int param_2,ulonglong param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  
  iVar1 = param_1[1];
  if (0x3b9ac9f0 < (uint)param_3) {
    *(undefined4 *)(*param_1 + 0x14) = 0x36;
    *(undefined4 *)(*param_1 + 0x18) = 3;
    (**(code **)*param_1)();
  }
  if ((param_3 & 7) != 0) {
    param_3 = (param_3 - (param_3 & 7)) + 8;
  }
  if ((param_2 < 0) || (1 < param_2)) {
    *(undefined4 *)(*param_1 + 0x14) = 0xe;
    *(int *)(*param_1 + 0x18) = param_2;
    (**(code **)*param_1)(param_1);
  }
  puVar4 = (undefined4 *)fn_829BAA90(param_1,param_3 + 0x10);
  if (puVar4 == (undefined4 *)0x0) {
    *(undefined4 *)(*param_1 + 0x14) = 0x36;
    *(undefined4 *)(*param_1 + 0x18) = 4;
    (**(code **)*param_1)(param_1);
  }
  iVar3 = (param_2 + 0xf) * 4;
  *(int *)(iVar1 + 0x4c) = (int)param_3 + *(int *)(iVar1 + 0x4c) + 0x10;
  uVar2 = *(undefined4 *)(iVar3 + iVar1);
  puVar4[1] = (int)param_3;
  puVar4[2] = 0;
  *puVar4 = uVar2;
  *(undefined4 **)(iVar3 + iVar1) = puVar4;
  return puVar4 + 4;
}

