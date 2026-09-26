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
extern int fn_82CE6820();
extern int fn_83080BC0();


void fn_82D719C0(int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar3 = param_2 + 8;
  fn_83080BC0((double)*(float *)(param_1[3] + 0x50),(ulonglong)*(uint *)(*param_1 + 8) + 0x40,
                    param_2,puVar3);
  fn_83080BC0((double)*(float *)(param_1[3] + 0x50),
                    (ulonglong)*(uint *)(param_1[1] + 8) + 0x40);
  *param_3 = param_2;
  param_3[1] = param_2 + 4;
  param_3[4] = param_1[4];
  param_3[3] = param_1[3];
  uVar1 = ((undefined4 *)*param_1)[1];
  *param_2 = *(undefined4 *)*param_1;
  param_2[1] = uVar1;
  param_2[3] = *param_1;
  param_2[2] = puVar3;
  if (param_2 + 4 != (undefined4 *)0x0) {
    iVar2 = param_1[1];
    param_2[6] = param_2 + 0x18;
    param_2[7] = iVar2;
  }
  fn_82CE6820(param_3 + 8,puVar3,param_2 + 0x18);
  return;
}

