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


void fn_829B7480(int *param_1)

{
  int iVar1;
  
  iVar1 = param_1[0x6a];
  if (*(int *)(iVar1 + 8) == 0) {
    if ((param_1[0x15] != 0) && (param_1[0x22] == 0)) {
      if ((param_1[0x17] == 0) || (param_1[0x1b] == 0)) {
        if (param_1[0x19] == 0) {
          *(undefined4 *)(*param_1 + 0x14) = 0x2e;
          (**(code **)*param_1)(param_1);
        }
        else {
          param_1[0x74] = *(int *)(iVar1 + 0x14);
        }
      }
      else {
        param_1[0x74] = *(int *)(iVar1 + 0x18);
        *(undefined4 *)(iVar1 + 8) = 1;
      }
    }
    (**(code **)param_1[0x71])(param_1);
    (**(code **)(param_1[0x6c] + 8))(param_1);
    if (param_1[0x11] == 0) {
      if (*(int *)(iVar1 + 0x10) == 0) {
        (**(code **)param_1[0x73])(param_1);
      }
      (**(code **)param_1[0x72])(param_1);
      if (param_1[0x15] != 0) {
        (**(code **)param_1[0x74])(param_1,*(undefined4 *)(iVar1 + 8));
      }
      (**(code **)param_1[0x6d])(param_1,-(*(int *)(iVar1 + 8) != 0) & 3);
      (**(code **)param_1[0x6b])(param_1,0);
    }
  }
  else {
    *(undefined4 *)(*param_1 + 0x14) = 0x30;
    (**(code **)*param_1)();
  }
  if (param_1[2] != 0) {
    *(undefined4 *)(param_1[2] + 0xc) = *(undefined4 *)(iVar1 + 0xc);
    *(uint *)(param_1[2] + 0x10) =
         ((uint)LZCOUNT(*(undefined4 *)(iVar1 + 8)) >> 5 ^ 1) + 1 + *(int *)(iVar1 + 0xc);
    if ((param_1[0x10] != 0) && (*(int *)(param_1[0x6e] + 0x14) == 0)) {
      *(uint *)(param_1[2] + 0x10) =
           ((uint)LZCOUNT(param_1[0x1b]) >> 5 ^ 1) + 1 + *(int *)(param_1[2] + 0x10);
    }
  }
  return;
}

