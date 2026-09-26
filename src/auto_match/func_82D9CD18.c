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
extern int fn_82D80C18();
extern int fn_82D80C30();
extern int fn_82D88AE0();
extern int fn_82D8EA98();


void fn_82D9CD18(int param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_2 + 8);
  *(int *)(iVar1 + 0x94) = *(int *)(iVar1 + 0x94) + 1;
  fn_82D88AE0(iVar1,*(undefined4 *)(param_1 + 0x44));
  fn_82D8EA98(iVar1,param_1);
  lVar2 = (ulonglong)*(uint *)(iVar1 + 0x94) - 1;
  *(int *)(iVar1 + 0x94) = (int)lVar2;
  if ((lVar2 == 0) && (*(char *)(iVar1 + 0x9c) == '\0')) {
    if (*(int *)(iVar1 + 0x8c) != 0) {
      fn_82D80C18(iVar1);
    }
    if ((*(int *)(iVar1 + 0xa4) == 1) && (*(int *)(iVar1 + 0x90) != 0)) {
      fn_82D80C30(iVar1);
    }
  }
  return;
}

