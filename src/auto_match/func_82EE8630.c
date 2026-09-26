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
extern int fn_82E4FE40();
extern int fn_82E50EA0();
extern int fn_82EE9F80();
extern unsigned int lbl_8215FF7C;


void fn_82EE8630(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  iVar1 = param_1[0x14];
  *param_1 = &lbl_8215FF7C;
  while (iVar1 != 0) {
    piVar2 = (int *)param_1[0x15];
    param_1[0x14] = param_1[0x14] + -1;
    iVar1 = *piVar2;
    piVar3 = (int *)piVar2[1];
    *piVar3 = iVar1;
    *(int **)(iVar1 + 4) = piVar3;
    (**(code **)piVar2[-1])(piVar2 + -1,0);
    fn_82E4FE40(piVar2 + -1);
    iVar1 = param_1[0x14];
  }
  fn_82EE9F80(param_1[0x28]);
  param_1[0x28] = 0;
  fn_82E50EA0(param_1 + 0x17);
  return;
}

