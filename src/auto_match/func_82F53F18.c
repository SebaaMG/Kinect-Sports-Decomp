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
extern int fn_82F53EA0();


void fn_82F53F18(uint *param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  
  puVar6 = (undefined4 *)param_1[1];
  if ((puVar6 <= param_2) || (bVar4 = true, param_2 < (undefined4 *)*param_1)) {
    bVar4 = false;
  }
  if (bVar4) {
    uVar1 = *param_1;
    if (puVar6 == (undefined4 *)param_1[2]) {
      fn_82F53EA0(param_1,1);
    }
    puVar6 = (undefined4 *)param_1[1];
    if (puVar6 == (undefined4 *)0x0) goto LAB_82f53fdc;
    uVar2 = *param_1;
    iVar3 = ((int)((int)param_2 - uVar1) >> 3) * 8;
    *puVar6 = *(undefined4 *)(iVar3 + uVar2);
    uVar5 = *(undefined4 *)(iVar3 + uVar2 + 4);
  }
  else {
    if (puVar6 == (undefined4 *)param_1[2]) {
      fn_82F53EA0(param_1,1);
    }
    puVar6 = (undefined4 *)param_1[1];
    if (puVar6 == (undefined4 *)0x0) goto LAB_82f53fdc;
    *puVar6 = *param_2;
    uVar5 = param_2[1];
  }
  puVar6[1] = uVar5;
LAB_82f53fdc:
  param_1[1] = param_1[1] + 8;
  return;
}

