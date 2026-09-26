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
extern int fn_8269A4E8();
extern int fn_8269B8B8();
extern int fn_8269D300();
extern int fn_8269D380();


void fn_8269D480(int *param_1)

{
  int iVar1;
  char cVar2;
  
  iVar1 = (**(code **)(*param_1 + 0x40))();
  fn_8269B8B8(param_1,iVar1);
  if (*(int **)(iVar1 + 0xa08) == param_1) {
    *(undefined4 *)(iVar1 + 0xa08) = 0;
  }
  fn_8269A4E8(param_1);
  cVar2 = fn_8269D300(iVar1,param_1);
  if (cVar2 != '\0') {
    fn_8269D380(iVar1);
  }
  if (param_1[0x20] != 0) {
    *(undefined4 *)(param_1[0x20] + 4) = 0;
  }
  return;
}

