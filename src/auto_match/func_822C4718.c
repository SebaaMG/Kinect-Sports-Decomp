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
extern int fn_822C52C0();
extern unsigned int lbl_821CC160;


void fn_822C4718(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,int param_6,undefined4 *param_7)

{
  int *piVar1;
  code *pcVar2;
  undefined4 *puVar3;
  int in_r0;
  undefined8 uVar4;
  undefined4 in_register_000104d0;
  undefined4 in_register_000104d4;
  undefined4 in_register_000104d8;
  undefined4 in_vr77;
  
  puVar3 = (undefined4 *)(in_r0 + param_6 & 0xfffffff0);
  *puVar3 = in_register_000104d0;
  puVar3[1] = in_register_000104d4;
  puVar3[2] = in_register_000104d8;
  puVar3[3] = in_vr77;
  piVar1 = *(int **)(*(int *)(*(int *)(param_2 + 0x14) + 0x8c0) + 0x1b4);
  pcVar2 = *(code **)(*piVar1 + 0x14);
  *param_7 = lbl_821CC160;
  uVar4 = (*pcVar2)(piVar1,param_4);
  fn_822C52C0(param_1,param_3,uVar4);
  return;
}

