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
extern int fn_8232C528();
extern int fn_8232CBD8();


void fn_8232C490(undefined8 param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = *(int *)(*(int *)(param_2 + 4) + 0x27c);
  if (iVar1 == 0) {
    return;
  }
  if (*(int *)(*(int *)(param_2 + 4) + 0x7a4) == 0) {
    if (*(int *)(iVar1 + 0x5c0) == *(int *)(iVar1 + 0x6c4)) {
      uVar2 = 1;
    }
    else {
      if (*(int *)(iVar1 + 0x7a4) == 0) goto LAB_8232c500;
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 5;
  }
  fn_8232C528(param_2,uVar2);
LAB_8232c500:
  fn_8232CBD8(param_1,*(undefined4 *)(param_2 + 100));
  return;
}

