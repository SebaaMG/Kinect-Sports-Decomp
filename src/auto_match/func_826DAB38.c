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


int fn_826DAB38(int *param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = param_3 * 0xc + *param_1;
  piVar3 = (int *)(iVar2 + 8);
  if ((*piVar3 != -2) && (iVar1 = param_3, *(int *)(iVar2 + 0xc) == param_3)) {
    while( true ) {
      if ((piVar3[1] == param_3) && (*(int *)(piVar3[2] + 8) == *param_2)) {
        return iVar1;
      }
      iVar1 = *piVar3;
      if (iVar1 == -1) break;
      piVar3 = (int *)(iVar1 * 0xc + *param_1 + 8);
    }
  }
  return -1;
}

