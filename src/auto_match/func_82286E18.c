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
extern int fn_8251FA58();
extern int fn_82544F40();
extern int fn_82545810();
extern int fn_8262FEC8();
extern int fn_8265CA20();


int * fn_82286E18(int *param_1,ulonglong param_2)

{
  int iVar1;
  
  if (*param_1 != 0) {
    fn_8251FA58();
    *param_1 = 0;
  }
  iVar1 = param_1[0x2c];
  if (iVar1 != 0) {
    fn_82544F40();
    fn_82545810(iVar1);
    if (*(int *)(iVar1 + 8) != 0) {
      fn_8262FEC8();
      *(undefined4 *)(iVar1 + 8) = 0;
    }
    if (*(int *)(iVar1 + 4) != 0) {
      fn_8262FEC8();
      *(undefined4 *)(iVar1 + 4) = 0;
    }
    fn_8265CA20(iVar1);
  }
  if ((param_2 & 1) != 0) {
    fn_8265CA20(param_1);
  }
  return param_1;
}

