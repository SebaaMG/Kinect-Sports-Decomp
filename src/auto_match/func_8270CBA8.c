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


ulonglong fn_8270CBA8(int param_1,ulonglong param_2,undefined8 param_3)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  if (*(int *)(param_1 + 0x10) == 1) {
    if ((int)param_3 == 1) {
      uVar1 = *(uint *)(param_1 + 0x14);
      uVar3 = (ulonglong)*(uint *)(param_1 + 0x18);
      uVar2 = uVar1 + param_2;
      if ((uVar2 & 0xffffffff) <= uVar3) {
        *(int *)(param_1 + 0x14) = (int)uVar2;
        return ((*(ulonglong *)(param_1 + 0x20) & 0xffffffff) - uVar3) + uVar2;
      }
      *(undefined4 *)(param_1 + 0x18) = 0;
      param_3 = 0;
      *(undefined4 *)(param_1 + 0x14) = 0;
      param_2 = ((*(ulonglong *)(param_1 + 0x20) & 0xffffffff) - uVar3) + (ulonglong)uVar1 + param_2
      ;
      goto LAB_8270cc80;
    }
    if ((int)param_3 == 0) {
      uVar1 = *(uint *)(param_1 + 0x18);
      if (((param_2 & 0xffffffff) - *(longlong *)(param_1 + 0x20)) + (ulonglong)uVar1 <=
          (ulonglong)uVar1) {
        *(uint *)(param_1 + 0x14) = (uVar1 - (int)*(longlong *)(param_1 + 0x20)) + (int)param_2;
        return param_2;
      }
      *(undefined4 *)(param_1 + 0x18) = 0;
      *(undefined4 *)(param_1 + 0x14) = 0;
      goto LAB_8270cc80;
    }
  }
  fn_8270C708(param_1);
LAB_8270cc80:
  uVar1 = (**(code **)(**(int **)(param_1 + 8) + 0x38))(*(int **)(param_1 + 8),param_2,param_3);
  *(longlong *)(param_1 + 0x20) = (longlong)(int)uVar1;
  return (ulonglong)uVar1;
}

