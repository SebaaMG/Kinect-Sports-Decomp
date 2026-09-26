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
extern int fn_823E14E8();
extern int fn_8265CA20();
extern int fn_8265CAA0();
extern unsigned int lbl_821B6A48;


void fn_823DFE58(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  *param_1 = &lbl_821B6A48;
  puVar1 = *(undefined4 **)(param_1[2] + 4);
  while (*(char *)((int)puVar1 + 0xa5) == '\0') {
    fn_823E14E8(param_1 + 1,puVar1[2]);
    puVar2 = (undefined4 *)*puVar1;
    fn_8265CA20(puVar1);
    puVar1 = puVar2;
  }
  *(undefined4 *)(param_1[2] + 4) = param_1[2];
  *(undefined4 *)param_1[2] = param_1[2];
  *(undefined4 *)(param_1[2] + 8) = param_1[2];
  param_1[3] = 0;
  fn_8265CAA0(param_1[5]);
  fn_8265CAA0(param_1[6]);
  puVar1 = *(undefined4 **)(param_1[2] + 4);
  while (*(char *)((int)puVar1 + 0xa5) == '\0') {
    fn_823E14E8(param_1 + 1,puVar1[2]);
    puVar2 = (undefined4 *)*puVar1;
    fn_8265CA20(puVar1);
    puVar1 = puVar2;
  }
  *(undefined4 *)(param_1[2] + 4) = param_1[2];
  *(undefined4 *)param_1[2] = param_1[2];
  *(undefined4 *)(param_1[2] + 8) = param_1[2];
  param_1[3] = 0;
  fn_8265CA20(param_1[2]);
  return;
}

