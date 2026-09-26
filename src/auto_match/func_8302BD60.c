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
extern int fn_8302BCE0();


undefined8 fn_8302BD60(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  char cVar2;
  
  if ((((param_2 != 0) || (param_3 != 0)) || (param_4 != 0)) || (*(int *)(param_1 + 0x18) != 0)) {
    cVar2 = fn_8302BCE0(param_1);
    if (cVar2 == '\0') {
      return 2;
    }
    iVar1 = *(int *)(param_1 + 0x18);
    *(int *)(iVar1 + 0xc) = param_2;
    *(int *)(iVar1 + 0x10) = param_3;
    *(int *)(iVar1 + 0x14) = param_4;
  }
  return 1;
}

