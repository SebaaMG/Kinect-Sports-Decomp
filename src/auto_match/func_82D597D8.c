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
extern int fn_82D58828();
extern unsigned int lbl_8212FC60;
extern unsigned int lbl_82138D78;


void fn_82D597D8(undefined4 *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int *piVar4;
  
  *param_1 = &lbl_82138D78;
  fn_82D58828();
  piVar4 = param_1 + 3;
  lVar2 = 8;
  do {
    lVar3 = 8;
    do {
      if (*piVar4 != 0) {
        fn_82CE4118();
      }
      lVar3 = lVar3 + -1;
      piVar4 = piVar4 + 1;
    } while (lVar3 != 0);
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  iVar1 = fn_82CE5410();
  piVar4 = *(int **)(iVar1 + 0x10);
  param_1[0x78a] = 0;
  if ((param_1[0x78b] & 0x80000000) == 0) {
    (**(code **)(*piVar4 + 0x10))(piVar4,param_1[0x789],param_1[0x78b] & 0x3fffffff,8);
  }
  param_1[0x789] = 0;
  param_1[0x78b] = 0x80000000;
  *param_1 = &lbl_8212FC60;
  return;
}

