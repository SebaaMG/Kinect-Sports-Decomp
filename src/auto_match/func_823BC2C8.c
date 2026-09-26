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
extern int fn_822315A0();
extern int fn_823B9360();
extern int fn_8265CA20();
extern unsigned int lbl_821B5E94;


void fn_823BC2C8(undefined4 *param_1)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  
  *param_1 = &lbl_821B5E94;
  cVar1 = *(char *)((int)*(int **)(param_1[9] + 4) + 0x19);
  piVar3 = *(int **)(param_1[9] + 4);
  while (cVar1 == '\0') {
    fn_823B9360(param_1 + 8,piVar3[2]);
    piVar2 = (int *)*piVar3;
    if (piVar3[5] != 0) {
      fn_822315A0();
    }
    fn_8265CA20(piVar3);
    piVar3 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0x19);
  }
  *(undefined4 *)(param_1[9] + 4) = param_1[9];
  *(undefined4 *)param_1[9] = param_1[9];
  *(undefined4 *)(param_1[9] + 8) = param_1[9];
  param_1[10] = 0;
  fn_8265CA20(param_1[9]);
  return;
}

