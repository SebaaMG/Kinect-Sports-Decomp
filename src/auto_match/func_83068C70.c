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
extern int fn_8305D7D0();
extern int fn_8306BE58();


undefined8 fn_83068C70(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = fn_8306BE58(0,(ulonglong)(uint)param_1[2] - 1);
  iVar2 = *param_1;
  if (0 < (int)lVar1) {
    do {
      iVar2 = *(int *)(iVar2 + 4);
      lVar1 = lVar1 + -1;
    } while (lVar1 != 0);
  }
  fn_8305D7D0(iVar2 + 0x10,param_4);
  return 1;
}

