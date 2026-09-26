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
extern int fn_82A52068();
extern int fn_82A6B4B0();
extern int fn_82A6C3A0();
extern int fn_82C2B590();
extern int fn_82C2B5C0();
extern int fn_82C2B7F0();


undefined8 fn_82C16A98(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 != (int *)0x0) {
    iVar1 = *param_1;
    if (iVar1 != 0) {
      fn_82A6C3A0(param_1 + 0x1e,*(undefined2 *)(iVar1 + 0x22));
    }
    if (param_1[0x5d] != 0) {
      iVar2 = 0;
      if (0 < param_1[0x5a]) {
        iVar3 = 0;
        do {
          if (*(int *)(iVar3 + param_1[0x5d]) != 0) {
            fn_82C2B590(*(int *)(iVar3 + param_1[0x5d]));
            *(undefined4 *)(iVar3 + param_1[0x5d]) = 0;
          }
          iVar2 = iVar2 + 1;
          iVar3 = iVar3 + 4;
        } while (iVar2 < param_1[0x5a]);
      }
    }
    if (param_1[0x5d] != 0) {
      fn_82C2B590();
      param_1[0x5d] = 0;
    }
    if (param_1[0x5e] != 0) {
      iVar2 = 0;
      if (0 < param_1[0x5a]) {
        iVar3 = 0;
        do {
          if (*(int *)(iVar3 + param_1[0x5e]) != 0) {
            fn_82C2B590(*(int *)(iVar3 + param_1[0x5e]));
            *(undefined4 *)(iVar3 + param_1[0x5e]) = 0;
          }
          iVar2 = iVar2 + 1;
          iVar3 = iVar3 + 4;
        } while (iVar2 < param_1[0x5a]);
      }
    }
    if (param_1[0x5e] != 0) {
      fn_82C2B590();
      param_1[0x5e] = 0;
    }
    if (param_1[0x30] != 0) {
      fn_82C2B590();
      param_1[0x30] = 0;
    }
    if (param_1[0x5f] != 0) {
      fn_82C2B590();
      param_1[0x5f] = 0;
    }
    if (param_1[0x61] != 0) {
      fn_82C2B590();
      param_1[0x61] = 0;
    }
    fn_82A52068(param_1,param_1[1]);
    if (iVar1 != 0) {
      fn_82C2B7F0(iVar1,param_1[1]);
      param_1[1] = 0;
    }
    if (param_1[0x6b] != 0) {
      fn_82A6B4B0();
      fn_82C2B590(param_1[0x6b]);
    }
    if (param_1[0x57] != 0) {
      fn_82C2B590();
    }
    if (param_1[0x56] != 0) {
      fn_82C2B590();
    }
    if (param_1[0x70] != 0) {
      fn_82C2B590();
      param_1[0x70] = 0;
    }
    if (param_1[0x74] != 0) {
      fn_82C2B590();
      param_1[0x74] = 0;
    }
    if (param_1[0x75] != 0) {
      fn_82C2B590();
      param_1[0x75] = 0;
    }
    if (iVar1 != 0) {
      fn_82C2B5C0(*param_1);
      *param_1 = 0;
    }
  }
  return 0;
}

