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
extern int fn_8239DC80();


void fn_8239DBB0(uint *param_1,undefined4 *param_2)

{
  uint uVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  puVar4 = (undefined4 *)param_1[1];
  if ((puVar4 <= param_2) || (bVar2 = true, param_2 < (undefined4 *)*param_1)) {
    bVar2 = false;
  }
  if (bVar2) {
    uVar1 = *param_1;
    if (puVar4 == (undefined4 *)param_1[2]) {
      fn_8239DC80(param_1);
    }
    puVar4 = (undefined4 *)param_1[1];
    if (puVar4 == (undefined4 *)0x0) goto LAB_8239dc58;
    uVar3 = *(undefined4 *)(((int)((int)param_2 - uVar1) >> 2) * 4 + *param_1);
  }
  else {
    if (puVar4 == (undefined4 *)param_1[2]) {
      fn_8239DC80(param_1);
    }
    puVar4 = (undefined4 *)param_1[1];
    if (puVar4 == (undefined4 *)0x0) goto LAB_8239dc58;
    uVar3 = *param_2;
  }
  *puVar4 = uVar3;
LAB_8239dc58:
  param_1[1] = param_1[1] + 4;
  return;
}

