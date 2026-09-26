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
extern int fn_82881EE8();
extern int fn_8289D8D0();
extern int fn_8289DAD0();
extern int fn_8289F2E0();
extern int fn_828ACCE8();
extern int fn_828B1340();


bool fn_828A0960(undefined8 param_1,undefined8 param_2)

{
  char cVar3;
  int iVar2;
  longlong lVar1;
  bool bVar4;
  
  cVar3 = fn_828B1340();
  if ((((cVar3 == '\0') && (iVar2 = fn_8289D8D0(param_1), iVar2 != 0)) &&
      (cVar3 = fn_8289DAD0(), cVar3 != '\0')) &&
     ((cVar3 = fn_828ACCE8(param_1), cVar3 != '\0' &&
      (iVar2 = fn_8289F2E0(param_1,param_2), iVar2 == 0)))) {
    lVar1 = fn_82881EE8(param_2);
    bVar4 = lVar1 != 0;
  }
  else {
    bVar4 = false;
  }
  return bVar4;
}

