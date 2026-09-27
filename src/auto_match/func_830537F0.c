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
extern unsigned int *auStack_10;
extern int fn_83053048();
extern int fn_830541F8();


undefined8 fn_830537F0(int param_1)

{
  int iVar1;
  undefined1 auStack_10;
  
  if (*(int *)(param_1 + 0xb8) == 0) {
    return 0;
  }
  iVar1 = *(int *)(param_1 + 0xb0);
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 0xc) == 0) {
      *(undefined4 *)(param_1 + 0xb0) = 0;
      *(undefined4 *)(param_1 + 0xb4) = 0;
    }
    else {
      *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(iVar1 + 0xc);
    }
    *(int *)(param_1 + 0xb8) = *(int *)(param_1 + 0xb8) + -1;
  }
  if ((*(uint *)(iVar1 + 0x30) & 0xe0000000) != 0x20000000) {
    *(uint *)(iVar1 + 0x30) = *(uint *)(iVar1 + 0x30) & 0x1fffffff | 0x40000000;
    if (*(int *)(param_1 + 0xbc) == 0) {
      *(int *)(param_1 + 0xbc) = iVar1;
      *(undefined4 *)(iVar1 + 0xc) = 0;
    }
    else {
      *(int *)(iVar1 + 0xc) = *(int *)(param_1 + 0xbc);
      *(int *)(param_1 + 0xbc) = iVar1;
    }
    auStack_10 = 0;
    fn_83053048(iVar1,param_1 + 0x18,*(undefined4 *)(*(int *)(param_1 + 0x60) + 0x80),1,
                      &auStack_10);
    return 1;
  }
  fn_830541F8(param_1,iVar1);
  return 1;
}

