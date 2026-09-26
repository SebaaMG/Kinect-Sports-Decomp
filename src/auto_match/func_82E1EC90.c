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
extern int fn_82E1E9F0();
extern int fn_82E1EAE8();
extern int fn_82F68CC0();


void fn_82E1EC90(int param_1,undefined8 param_2,ulonglong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (*(char *)(param_1 + 10) != '\0') {
    if (*(char *)(param_1 + 0xc) == '\0') {
      fn_82E1E9F0(param_1,param_2,param_3);
    }
    else {
      uVar1 = (ulonglong)*(uint *)(param_1 + 0x40);
      uVar2 = (ulonglong)*(uint *)(param_1 + 0x44);
      if (*(char *)(param_1 + 0x5c) == '\0') {
        if (uVar1 <= (uVar2 + param_3 + 1 & 0xffffffff)) {
          fn_82E1EAE8(param_1);
        }
        if ((param_3 & 0xffffffff) < (ulonglong)*(uint *)(param_1 + 0x40)) {
          fn_82F68CC0((ulonglong)*(uint *)(param_1 + 0x4c) + (ulonglong)*(uint *)(param_1 + 0x44));
          *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + (int)param_3;
        }
        else {
          fn_82E1E9F0(param_1,param_2,param_3);
        }
        if ((ulonglong)*(uint *)(param_1 + 0x40) / 10 < (ulonglong)*(uint *)(param_1 + 0x44) / 9) {
          fn_82E1EAE8(param_1);
        }
      }
      else if (((uVar2 + param_3 + 1 & 0xffffffff) < uVar1) && ((param_3 & 0xffffffff) < uVar1)) {
        fn_82F68CC0(*(uint *)(param_1 + 0x4c) + uVar2);
        *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + (int)param_3;
      }
    }
  }
  return;
}

