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
extern int fn_82CEA280();
extern int fn_82E17300();


void fn_82E1AC50(int *param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = fn_82CEA280(param_1 + 3,param_2,0xffffffffffffffff);
  if (iVar2 != -1) {
    iVar1 = *param_1;
    do {
      **(undefined4 **)(iVar1 + iVar2 * 8) = param_3;
      iVar1 = *param_1;
      iVar2 = *(int *)(iVar1 + iVar2 * 8 + 4);
    } while (iVar2 != -1);
  }
  fn_82E17300(param_1,param_2);
  return;
}

