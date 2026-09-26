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
extern int fn_82CFBC28();


undefined4 fn_82DF2F30(int param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x10)) {
    iVar4 = 0;
    do {
      uVar1 = *(uint *)(*(int *)(*(int *)(param_1 + 0xc) + iVar4) + 0x38);
      if (((uVar1 & 0xfffffffe) != 0) &&
         (iVar2 = fn_82CFBC28(uVar1 & 0xfffffffe,param_2), iVar2 == 0)) {
        return *(undefined4 *)(iVar3 * 4 + *(int *)(param_1 + 0xc));
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 4;
    } while (iVar3 < *(int *)(param_1 + 0x10));
  }
  return 0;
}

