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
extern int fn_82517978();
extern int fn_82674428();


void fn_826744A0(uint *param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  bool bVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  puVar5 = (undefined4 *)param_1[1];
  if ((puVar5 <= param_2) || (bVar4 = true, param_2 < (undefined4 *)*param_1)) {
    bVar4 = false;
  }
  if (bVar4) {
    uVar1 = *param_1;
    if (puVar5 == (undefined4 *)param_1[2]) {
      fn_82674428(param_1,1);
    }
    puVar5 = (undefined4 *)param_1[1];
    puVar6 = (undefined4 *)(((int)((int)param_2 - uVar1) >> 3) * 8 + *param_1);
    if (puVar5 == (undefined4 *)0x0) goto LAB_8267456c;
    *puVar5 = 0;
    puVar5[1] = 0;
    uVar2 = puVar6[1];
    uVar3 = *puVar6;
  }
  else {
    if (puVar5 == (undefined4 *)param_1[2]) {
      fn_82674428(param_1,1);
    }
    puVar5 = (undefined4 *)param_1[1];
    if (puVar5 == (undefined4 *)0x0) goto LAB_8267456c;
    *puVar5 = 0;
    puVar5[1] = 0;
    uVar2 = param_2[1];
    uVar3 = *param_2;
  }
  fn_82517978(puVar5,uVar3,uVar2,0);
LAB_8267456c:
  param_1[1] = param_1[1] + 8;
  return;
}

