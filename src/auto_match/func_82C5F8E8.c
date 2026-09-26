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
extern int fn_82C5E098();
extern int fn_82CA6768();


undefined8 fn_82C5F8E8(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0xe88) != 0) {
    return 0;
  }
  iVar1 = *(int *)(param_1 + 0x3cb0);
  if (iVar1 < 5) {
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0x3cac) = *(undefined4 *)(param_1 + 0x8c);
      goto LAB_82c5f980;
    }
    if (iVar1 == 4) {
      fn_82C5E098(param_1);
    }
    if (param_2 < 0x17) {
      return 0xfffffffffffffffd;
    }
  }
  else {
    iVar1 = fn_82C5E098();
    if (*(int *)(iVar1 + 0x3cb0) != 5) goto LAB_82c5f980;
    if (param_2 == 0) {
      return 0xfffffffffffffffd;
    }
  }
  uVar2 = fn_82CA6768(*(undefined4 *)(param_1 + 0x8c));
  *(undefined4 *)(param_1 + 0x3cac) = uVar2;
LAB_82c5f980:
  if ((*(int *)(param_1 + 0x3cd4) != 0) || (uVar2 = 1, *(int *)(param_1 + 0x98) == 0)) {
    uVar2 = 0;
  }
  *(undefined4 *)(param_1 + 0x3cb4) = uVar2;
  *(undefined4 *)(param_1 + 0xe88) = 1;
  return 0;
}

