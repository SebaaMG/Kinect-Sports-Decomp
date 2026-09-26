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
extern int fn_8267C4F0();
extern unsigned int lbl_8200BD80;
extern unsigned int lbl_8200C4C4;
extern unsigned int lbl_8200C508;
extern unsigned int lbl_8200C518;


void fn_826D6A70(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = &lbl_8200C518;
  param_1[4] = &lbl_8200C508;
  if (*(int *)(param_1[8] + 0x74) < 2) {
    *(undefined1 *)(param_1[8] + 0x7c) = 1;
  }
  if (param_1[8] != 0) {
    fn_8267C4F0();
  }
  piVar1 = (int *)param_1[5];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1,param_1[6]);
  }
  param_1[4] = &lbl_8200C4C4;
  *param_1 = &lbl_8200BD80;
  return;
}

