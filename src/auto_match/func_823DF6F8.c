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
extern int fn_82359698();
extern int fn_8236B578();
extern int fn_8236BB40();
extern int fn_823C3D28();
extern int fn_823D1358();


void fn_823DF6F8(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 8);
  if (*(int *)(*(int *)(iVar1 + 0x4b0) + 0xd4) == 0) {
    if (*(int *)(iVar1 + 0x9a0) == 0) {
      fn_82359698(iVar1,2);
    }
    else {
      iVar2 = fn_8236BB40(iVar1);
      if (iVar2 != 0) {
        fn_823D1358(iVar1);
      }
    }
  }
  else {
    iVar2 = fn_8236B578(iVar1);
    if (iVar2 != 0) {
      fn_823C3D28(iVar1);
    }
  }
  return;
}

