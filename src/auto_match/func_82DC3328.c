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
extern int fn_82D7C120();
extern int fn_82D80C18();
extern int fn_82D80C30();
extern int fn_82DB06D0();
extern int fn_82DC9C20();


void fn_82DC3328(longlong param_1,int param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  
  if ((param_2 != 0) && (iVar1 = (**(code **)(**(int **)(param_2 + 0xc) + 0x20))(), iVar1 != 0xb)) {
    iVar1 = *(int *)(param_2 + 0x14);
    if ((*(int *)(iVar1 + 0x10) != 0) &&
       (((*(int *)(*(int *)(param_2 + 0x18) + 0x10) != 0 &&
         (iVar2 = fn_82DC9C20(param_1 + -0x40,iVar1), iVar2 == 1)) &&
        (iVar2 = fn_82D7C120((ulonglong)*(uint *)(param_2 + 0x14) + 0x10,
                              (ulonglong)*(uint *)(param_2 + 0x18) + 0x10), iVar2 != 0)))) {
      iVar1 = *(int *)(iVar1 + 8);
      if (iVar1 != 0) {
        *(int *)(iVar1 + 0x94) = *(int *)(iVar1 + 0x94) + 1;
        fn_82DB06D0();
        lVar3 = (ulonglong)*(uint *)(iVar1 + 0x94) - 1;
        *(int *)(iVar1 + 0x94) = (int)lVar3;
        if ((lVar3 == 0) && (*(char *)(iVar1 + 0x9c) == '\0')) {
          if (*(int *)(iVar1 + 0x8c) != 0) {
            fn_82D80C18(iVar1);
          }
          if ((*(int *)(iVar1 + 0xa4) == 1) && (*(int *)(iVar1 + 0x90) != 0)) {
            fn_82D80C30(iVar1);
          }
        }
      }
    }
  }
  return;
}

