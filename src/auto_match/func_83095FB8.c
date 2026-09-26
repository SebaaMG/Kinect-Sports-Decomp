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
extern int fn_82CE5410();
extern int fn_82CEFB30();
extern int fn_82CEFBD0();


void fn_83095FB8(int param_1,undefined8 param_2)

{
  int iVar2;
  ulonglong uVar1;
  undefined4 uVar3;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    iVar2 = fn_82CE5410();
    uVar1 = (**(code **)(**(int **)(iVar2 + 0x10) + 4))(*(int **)(iVar2 + 0x10),0x1c);
    if ((uVar1 & 0xffffffff) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = fn_82CEFBD0(uVar1,param_2);
    }
    *(undefined4 *)(param_1 + 0x10) = uVar3;
    fn_82CEFB30(param_1 + 8);
  }
  return;
}

