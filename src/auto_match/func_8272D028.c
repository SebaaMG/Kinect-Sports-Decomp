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
extern int fn_8267C4F0();
extern int fn_8269D480();
extern int fn_82711878();
extern int fn_82712008();


void fn_8272D028(int *param_1)

{
  int iVar2;
  longlong lVar1;
  char cVar3;
  
  iVar2 = (**(code **)(*param_1 + 0x40))();
  if (iVar2 != 0) {
    lVar1 = (**(code **)(*(int *)(iVar2 + 8) + 0xc))(iVar2 + 8,0x1b);
    if (lVar1 != 0) {
      cVar3 = fn_82712008(lVar1,param_1);
      if (cVar3 != '\0') {
        fn_82711878(lVar1);
      }
      fn_8267C4F0(lVar1);
    }
  }
  iVar2 = (**(code **)(*param_1 + 0x40))(param_1);
  if (iVar2 != 0) {
    *(uint *)(iVar2 + 0xb00) = *(uint *)(iVar2 + 0xb00) | 0x400;
  }
  fn_8269D480(param_1);
  return;
}

