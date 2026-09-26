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
extern int fn_822F16F0();
extern int fn_822F1AB8();
extern int fn_822F1BD0();
extern int fn_8265C9E0();
extern unsigned int lbl_821AE598;
extern unsigned int lbl_83265A28;


undefined4 * fn_822F15F8(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  if (*(int *)(*(int *)(param_2 + 0x10) + 0x178) == 0) {
    lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
    uVar2 = (-lbl_83265A28 & ~lbl_83265A28) >> 0x1f;
  }
  else {
    uVar2 = 1;
  }
  dVar3 = (double)fn_822F1BD0(param_2);
  dVar4 = (double)fn_822F1AB8(param_2);
  dVar5 = (double)fn_822F16F0();
  puVar1 = (undefined4 *)fn_8265C9E0(0x20);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1[1] = 1;
    puVar1[2] = 1;
    *puVar1 = &lbl_821AE598;
    if ((float *)(puVar1 + 3) != (float *)0x0) {
      puVar1[3] = (float)dVar5;
      puVar1[4] = (float)dVar4;
      puVar1[6] = uVar2;
      puVar1[5] = (float)dVar3;
      puVar1[7] = 0;
    }
  }
  param_1[1] = puVar1;
  *param_1 = puVar1 + 3;
  return param_1;
}

