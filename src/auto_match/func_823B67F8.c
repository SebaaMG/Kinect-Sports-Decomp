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
extern int fn_823B6790();
extern int fn_823B6B30();


undefined8 fn_823B67F8(int param_1)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  
  iVar1 = fn_823B6790();
  if (((iVar1 != 0) && (*(int *)(param_1 + 0x50) == 0)) && (*(int *)(param_1 + 0x10) == 0)) {
    piVar2 = (int *)(*(int *)(param_1 + 0xc) + -0x68);
    if (*(int *)(param_1 + 0xc) == 0) {
      piVar2 = (int *)0x0;
    }
    iVar1 = (**(code **)(*piVar2 + 8))();
    cVar3 = (**(code **)(*(int *)(iVar1 + 0x144) + 0x3c))();
    if (((cVar3 == '\0') && (iVar1 = fn_823B6B30(param_1), iVar1 != 0)) &&
       (*(int *)(param_1 + 0x58) == 0)) {
      return 1;
    }
  }
  return 0;
}

