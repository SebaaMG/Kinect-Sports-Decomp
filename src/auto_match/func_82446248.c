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
extern int fn_82441BD0();
extern int fn_8251F720();
extern int fn_8251FA58();
extern int fn_8265C9E0();
extern unsigned int lbl_821B9B64;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_83265A28;


undefined4 * fn_82446248(undefined4 *param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  
  fn_82441BD0(param_1,0xffffffff821b9b5c,0,0);
  *param_1 = &lbl_821B9B64;
  puVar2 = (undefined4 *)fn_8265C9E0(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = param_3;
    puVar2[2] = lbl_821CC160;
  }
  param_1[2] = puVar2;
  puVar2 = (undefined4 *)fn_8251F720(param_2,0);
  *(undefined4 *)(param_1[2] + 4) = puVar2[1];
  lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
  *(float *)(param_1[2] + 8) =
       ((float)puVar2[3] - (float)puVar2[2]) *
       ((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - lbl_821CA460) + (float)puVar2[2];
  if ((*(int *)param_1[1] != 0) && (iVar1 = *(int *)(*(int *)param_1[1] + 400), iVar1 != 0)) {
    *(undefined4 *)(**(int **)(iVar1 + 400) + 0x118) = 1;
  }
  *(undefined4 *)(param_1[1] + 0x28) = 0;
  iVar1 = *(int *)param_1[1];
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x1d0) == 0)) {
    *(undefined4 *)(iVar1 + 0x1d0) = 1;
  }
  *(undefined4 *)(param_1[1] + 0x2c) = 0;
  *(undefined4 *)(param_1[1] + 4) = *puVar2;
  fn_8251FA58();
  return param_1;
}

