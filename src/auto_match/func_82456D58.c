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
extern unsigned int *auStack_20;
extern int fn_8227CB30();
extern int fn_82535298();
extern int fn_82536288();
extern int fn_82F63108();


void fn_82456D58(int param_1,int param_2)

{
  int iVar1;
  undefined4 auStack_20 [4];
  
  if (*(int *)(param_1 + 0x70) != 0) {
    if (*(int *)(*(int *)(param_1 + 0x70) + 0x1c) == 0) {
      if (*(int *)(param_2 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        fn_82F63108();
      }
      (**(code **)(**(int **)(param_2 + 0x10) + 4))();
    }
    else {
      fn_8227CB30(param_1 + 8);
      iVar1 = *(int *)(param_1 + 0x70);
      *(undefined4 *)(iVar1 + 0x3c) = 1;
      *(undefined4 *)(iVar1 + 0x48) = 0;
      auStack_20[0] = *(undefined4 *)(param_1 + 0x74);
      auStack_20[0] =
           fn_82535298(auStack_20,**(undefined4 **)(param_1 + 0x78),0xffffffff83296bc0,
                             0xffffffff83296bd0);
      fn_82536288(auStack_20);
    }
  }
  return;
}

