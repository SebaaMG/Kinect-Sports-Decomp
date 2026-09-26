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
extern int fn_8267BE38();
extern int fn_827A5378();
extern int fn_827A7148();
extern int fn_827A7218();
extern int fn_827A7548();


void fn_827A7FD0(longlong param_1)

{
  int iVar1;
  int *piVar2;
  longlong lVar3;
  
  lVar3 = param_1 + 4;
  fn_827A5378(lVar3);
  iVar1 = fn_827A7548(param_1,lVar3);
  piVar2 = (int *)(-(uint)(iVar1 != 0) & iVar1 + 0xcU);
  if (piVar2 != (int *)0x0) {
    iVar1 = *piVar2;
    if (iVar1 != 0) {
      fn_827A7148(iVar1);
      fn_8267BE38(iVar1);
    }
    fn_827A7218(param_1,lVar3);
  }
  return;
}

