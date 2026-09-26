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
extern int fn_8288B760();


void fn_82247000(int *param_1)

{
  char cVar3;
  int iVar1;
  int *piVar2;
  
  cVar3 = fn_8288B760();
  if (cVar3 == '\0') {
    iVar1 = (**(code **)(*param_1 + 4))(param_1);
    piVar2 = (int *)(iVar1 + 0x9c);
  }
  else {
    iVar1 = (**(code **)(*param_1 + 4))(param_1);
    piVar2 = (int *)(iVar1 + 0x48);
  }
  (**(code **)(*piVar2 + 0x3c))();
  return;
}

