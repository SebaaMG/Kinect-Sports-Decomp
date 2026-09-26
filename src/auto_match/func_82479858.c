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
extern int fn_82281530();
extern int fn_82281868();
extern int fn_822819E0();


void fn_82479858(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = fn_82281530(*(undefined4 *)(*(int *)(param_1 + 4) + 0x14));
  if (iVar1 == 0) {
    iVar2 = *(int *)(param_1 + 4) + 0x20;
    iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x14);
    if (*(int *)(iVar1 + 0x10) == 0) {
      if (*(int *)(iVar1 + 8) != 0) {
        fn_822819E0(iVar1,iVar2);
      }
    }
    else {
      fn_82281868(iVar1,iVar2,0);
    }
  }
  return;
}

