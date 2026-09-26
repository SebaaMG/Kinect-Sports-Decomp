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
extern int fn_82773B90();


bool fn_827747B0(int param_1,undefined8 param_2,int param_3)

{
  int *piVar1;
  char cVar2;
  
  cVar2 = fn_82773B90(param_2,param_3);
  if (cVar2 != '\0') {
    piVar1 = *(int **)(param_3 + 0xc);
    *(int *)(*piVar1 + 4) = piVar1[1];
    *(int *)piVar1[1] = *piVar1;
    *piVar1 = *(int *)(param_1 + 0x740);
    piVar1[1] = param_1 + 0x740;
    *(int **)(*(int *)(param_1 + 0x740) + 4) = piVar1;
    *(int **)(param_1 + 0x740) = piVar1;
  }
  return cVar2 != '\0';
}

