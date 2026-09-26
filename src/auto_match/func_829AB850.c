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
extern int fn_829B6CA8();


undefined8 fn_829AB850(int *param_1)

{
  int iVar1;
  
  iVar1 = param_1[5];
  if (((iVar1 == 0xcd) || (iVar1 == 0xce)) && (param_1[0x10] == 0)) {
    if ((uint)param_1[0x23] < (uint)param_1[0x1d]) {
      *(undefined4 *)(*param_1 + 0x14) = 0x43;
      (**(code **)*param_1)(param_1);
    }
    (**(code **)(param_1[0x6a] + 4))(param_1);
    param_1[5] = 0xd2;
  }
  else if (iVar1 == 0xcf) {
    param_1[5] = 0xd2;
  }
  else if (iVar1 != 0xd2) {
    *(undefined4 *)(*param_1 + 0x14) = 0x14;
    *(int *)(*param_1 + 0x18) = param_1[5];
    (**(code **)*param_1)(param_1);
  }
  iVar1 = *(int *)(param_1[0x6e] + 0x14);
  while( true ) {
    if (iVar1 != 0) {
      (**(code **)(param_1[6] + 0x18))(param_1);
      fn_829B6CA8(param_1);
      return 1;
    }
    iVar1 = (**(code **)param_1[0x6e])(param_1);
    if (iVar1 == 0) break;
    iVar1 = *(int *)(param_1[0x6e] + 0x14);
  }
  return 0;
}

