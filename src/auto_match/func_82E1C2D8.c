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
extern int fn_82E1C150();


void fn_82E1C2D8(int *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int *piVar2;
  
  if ((*(char *)(param_1 + 2) != '\0') || (iVar1 = fn_82E1C150(), -1 < iVar1)) {
    piVar2 = param_1 + 3;
    if (0xf < (uint)param_1[8]) {
      piVar2 = (int *)*piVar2;
    }
    (**(code **)(*param_1 + 0x1c))(param_1,param_2,param_3,piVar2,(ulonglong)(uint)param_1[7] + 1);
  }
  return;
}

