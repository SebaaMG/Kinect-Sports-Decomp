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
extern int fn_8289D8D0();
extern int fn_828B0528();
extern int fn_828B0ED0();


undefined8 fn_828B1340(undefined8 param_1)

{
  char cVar3;
  int iVar1;
  uint uVar2;
  
  cVar3 = fn_828B0528();
  if (cVar3 != '\0') {
    iVar1 = fn_8289D8D0(param_1);
    uVar2 = fn_828B0ED0((ulonglong)*(uint *)(*(int *)(*(int *)(iVar1 + 100) + 0x18) + 0x4c) + 0x38
                          ,0,0);
    if ((uVar2 < 8) && (uVar2 != 0)) {
      return 1;
    }
  }
  return 0;
}

