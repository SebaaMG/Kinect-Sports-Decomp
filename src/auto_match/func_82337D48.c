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
extern int fn_82250A18();
extern unsigned int lbl_832975B0;


uint fn_82337D48(int param_1)

{
  int iVar1;
  char cVar2;
  
  iVar1 = lbl_832975B0;
  if (lbl_832975B0 == 0) {
    iVar1 = fn_82250A18();
  }
  if ((*(char *)(iVar1 + 4) != '\0') && (*(int **)(param_1 + 0x168) != (int *)0x0)) {
    iVar1 = (**(code **)(**(int **)(param_1 + 0x168) + 8))();
    cVar2 = (**(code **)(*(int *)(iVar1 + 0x5dc) + 0x3c))();
    return (uint)(cVar2 != '\0');
  }
  return *(uint *)(*(int *)(param_1 + 0x1a0) + 0x184);
}

