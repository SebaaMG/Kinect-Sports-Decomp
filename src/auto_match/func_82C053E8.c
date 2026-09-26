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
extern int fn_8265C990();
extern int fn_82A1E658();


undefined8 fn_82C053E8(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar3 = 0;
  if (param_1[0xb] != -1) {
    uVar3 = (**(code **)(*param_1 + 0x7c))();
  }
  if (((param_1[0xb] != -1) && ((param_1[0x1e] & 4U) == 0)) &&
     (iVar2 = fn_82A1E658(), iVar2 < 0)) {
    uVar3 = (**(code **)(*param_1 + 0x20))(param_1);
  }
  piVar1 = (int *)param_1[0x21];
  while (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x1c))(piVar1,param_1 + 0x21);
    (**(code **)(*piVar1 + 8))(piVar1);
    piVar1 = (int *)param_1[0x21];
  }
  if (param_1[0x1f] != 0) {
    fn_8265C990(param_1[0x1f],0x208c800a);
  }
  (**(code **)(*param_1 + 0x70))(param_1);
  return uVar3;
}

