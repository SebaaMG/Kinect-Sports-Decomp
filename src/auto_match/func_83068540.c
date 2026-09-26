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
extern int fn_8265CA20();
extern int fn_83065C58();
extern int fn_8306AB80();
extern unsigned int lbl_8217E8A8;
extern unsigned int lbl_8217E8BC;


void fn_83068540(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = param_1[0x11];
  *param_1 = &lbl_8217E8BC;
  while (iVar1 != 0) {
    iVar1 = *(int *)(iVar1 + 4);
    fn_83065C58();
  }
  puVar2 = (undefined4 *)param_1[0xf];
  if (puVar2 != (undefined4 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  puVar2 = (undefined4 *)param_1[0x10];
  if (puVar2 != (undefined4 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  fn_8265CA20(param_1[0x1c]);
  for (puVar2 = (undefined4 *)param_1[0x1a]; puVar2 != (undefined4 *)0x0;
      puVar2 = (undefined4 *)puVar2[2]) {
    puVar2[3] = 0;
    *puVar2 = 0;
  }
  for (puVar2 = (undefined4 *)param_1[0x15]; puVar2 != (undefined4 *)0x0;
      puVar2 = (undefined4 *)puVar2[2]) {
    puVar2[3] = 0;
    *puVar2 = 0;
  }
  *param_1 = &lbl_8217E8A8;
  if (param_1[3] != 0) {
    fn_8306AB80(param_1[3],param_1);
  }
  return;
}

