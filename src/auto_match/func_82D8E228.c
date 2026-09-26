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
extern int fn_82CE4118();
extern int fn_82CE5410();
extern unsigned int lbl_8212FC60;
extern unsigned int lbl_8214161C;
extern unsigned int lbl_8214162C;
extern unsigned int lbl_8214163C;
extern unsigned int lbl_8214164C;
extern unsigned int lbl_8214165C;
extern unsigned int lbl_8214166C;
extern unsigned int lbl_8214167C;


void fn_82D8E228(undefined4 *param_1)

{
  int iVar1;
  longlong lVar2;
  int *piVar3;
  
  *param_1 = &lbl_8214167C;
  param_1[2] = &lbl_8214166C;
  param_1[3] = &lbl_8214165C;
  piVar3 = param_1 + 6;
  param_1[4] = &lbl_8214164C;
  lVar2 = 6;
  do {
    if (*piVar3 != 0) {
      fn_82CE4118();
      *piVar3 = 0;
    }
    lVar2 = lVar2 + -1;
    piVar3 = piVar3 + 1;
  } while (lVar2 != 0);
  iVar1 = fn_82CE5410();
  piVar3 = *(int **)(iVar1 + 0x10);
  param_1[0xf] = 0;
  if ((param_1[0x10] & 0x80000000) == 0) {
    (**(code **)(*piVar3 + 0x10))(piVar3,param_1[0xe],param_1[0x10] & 0x3fffffff,4);
  }
  param_1[0xe] = 0;
  param_1[0x10] = 0x80000000;
  param_1[4] = &lbl_8214163C;
  param_1[3] = &lbl_8214161C;
  param_1[2] = &lbl_8214162C;
  *param_1 = &lbl_8212FC60;
  return;
}

