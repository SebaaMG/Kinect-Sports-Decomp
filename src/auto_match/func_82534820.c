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
extern unsigned int *auStack_40;
extern int fn_822A8928();
extern int fn_82864848();
extern int fn_82864898();
extern unsigned int lbl_8327F878;


bool fn_82534820(ulonglong param_1)

{
  undefined4 uVar1;
  int iVar2;
  bool bVar3;
  undefined1 auStack_40 [40];
  
  uVar1 = lbl_8327F878;
  if ((param_1 & 0xffffffff) == 0) {
    bVar3 = false;
  }
  else {
    fn_82864848(auStack_40);
    iVar2 = fn_822A8928(uVar1,1,param_1,auStack_40);
    bVar3 = iVar2 == 0;
    fn_82864898(auStack_40);
  }
  return bVar3;
}

