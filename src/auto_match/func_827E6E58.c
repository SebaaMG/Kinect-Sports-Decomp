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
extern int fn_827D50B8();
extern int fn_827D50C0();
extern int fn_827D9DD8();


ulonglong fn_827E6E58(int param_1,int param_2)

{
  int iVar2;
  ulonglong uVar1;
  
  if (*(int *)(param_2 + 0x20) == 0) {
    if (*(int *)(param_1 + 0x34) <= *(int *)(param_1 + 0x3c)) {
      fn_827D9DD8(*(undefined4 *)(param_1 + 8));
      iVar2 = fn_827D50B8(*(undefined4 *)(param_1 + 0x14));
      if ((iVar2 != 0x3e5) &&
         (iVar2 = fn_827D50B8(*(undefined4 *)(param_1 + 0x14)), iVar2 != 0x3e4)) {
        uVar1 = fn_827D50B8(*(undefined4 *)(param_1 + 0x14));
        return uVar1;
      }
      return 0;
    }
  }
  else {
    fn_827D50C0(*(undefined4 *)(param_1 + 0x14));
    iVar2 = (*(int *)(param_1 + 0x34) - *(int *)(param_1 + 0x38)) + *(int *)(param_1 + 0x3c);
    *(int *)(param_1 + 0x3c) = iVar2;
    if (*(int *)(param_1 + 0x34) <= iVar2) {
      fn_827D9DD8(*(undefined4 *)(param_1 + 8));
      return (ulonglong)*(uint *)(param_2 + 0x20);
    }
  }
  return 0x3e5;
}

