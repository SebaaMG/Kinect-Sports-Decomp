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
extern int fn_82898540();
extern int fn_82898C40();


undefined8 fn_8289A0E0(int param_1)

{
  int iVar1;
  char cVar2;
  
  if ((*(int **)(param_1 + 0x20) == (int *)0x0) ||
     (iVar1 = (**(code **)(**(int **)(param_1 + 0x20) + 0xc))(), iVar1 == 0)) {
    if ((*(int **)(param_1 + 0x20) != (int *)0x0) &&
       (iVar1 = (**(code **)(**(int **)(param_1 + 0x20) + 0x10))(), iVar1 != 0)) {
      return 1;
    }
  }
  else if (*(int *)(iVar1 + 4) != 0) {
    if (*(char *)(*(int *)(iVar1 + 4) + 0x26) != '\0') {
      return 1;
    }
    cVar2 = fn_82898540(param_1);
    if ((cVar2 == '\0') && (cVar2 = fn_82898C40(iVar1 + 0xc,0,param_1 + 4,0), cVar2 != '\0')) {
      return 1;
    }
    return 0;
  }
  return 0;
}

