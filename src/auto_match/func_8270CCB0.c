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
extern int fn_8270C708();


ulonglong fn_8270CCB0(int param_1,ulonglong param_2,undefined8 param_3)

{
  uint uVar1;
  ulonglong uVar2;
  
  if (*(int *)(param_1 + 0x10) == 1) {
    if ((int)param_3 == 1) {
      uVar1 = *(uint *)(param_1 + 0x18);
      uVar2 = (param_2 & 0xffffffff) + (ulonglong)*(uint *)(param_1 + 0x14);
      if ((uVar2 & 0xffffffff) <= (ulonglong)uVar1) {
        *(int *)(param_1 + 0x14) = (int)uVar2;
        return (*(longlong *)(param_1 + 0x20) - (ulonglong)uVar1) + (uVar2 & 0xffffffff);
      }
      *(undefined4 *)(param_1 + 0x18) = 0;
      param_3 = 0;
      param_2 = (*(longlong *)(param_1 + 0x20) - (ulonglong)uVar1) +
                (ulonglong)*(uint *)(param_1 + 0x14) + param_2;
    }
    else {
      if ((int)param_3 != 0) goto LAB_8270cd88;
      uVar1 = *(uint *)(param_1 + 0x18);
      if (((ulonglong)uVar1 - *(longlong *)(param_1 + 0x20)) + param_2 <= (ulonglong)uVar1) {
        *(uint *)(param_1 + 0x14) = ((int)param_2 - (int)*(longlong *)(param_1 + 0x20)) + uVar1;
        return param_2;
      }
      *(undefined4 *)(param_1 + 0x18) = 0;
    }
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  else {
LAB_8270cd88:
    fn_8270C708(param_1);
  }
  uVar2 = (**(code **)(**(int **)(param_1 + 8) + 0x3c))(*(int **)(param_1 + 8),param_2,param_3);
  *(ulonglong *)(param_1 + 0x20) = uVar2;
  return uVar2;
}

