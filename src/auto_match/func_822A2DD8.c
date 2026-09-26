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
extern int fn_822A2FE8();
extern unsigned int lbl_821CC160;
extern unsigned int lbl_831CE850;


void fn_822A2DD8(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[0xaa] = 0;
  param_1[0xa9] = 0;
  if (param_2 == 1) {
    fn_822A2FE8();
  }
  iVar1 = *param_1;
  if ((((iVar1 == 2) || (iVar1 == 3)) || (iVar1 == 4)) ||
     (((iVar1 == 5 || (iVar1 == 6)) || (iVar2 = lbl_821CC160, iVar1 == 7)))) {
    iVar2 = *(int *)(param_1[iVar1 * 4 + 0x89] + param_1[0xa9] * 8 + 4);
  }
  param_1[0x87] = iVar2;
  param_1[6] = lbl_831CE850;
  return;
}

