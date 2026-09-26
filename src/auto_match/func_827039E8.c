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
extern int fn_82703910();


undefined4 * fn_827039E8(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  
  iVar2 = param_1[1];
  if (*(int *)(iVar2 + 0x48) != *param_1) {
    param_1[3] = 0;
    *param_1 = *(int *)(iVar2 + 0x48);
  }
  iVar1 = param_1[3];
  puVar4 = *(undefined4 **)(iVar1 * 0xc + iVar2);
  if (puVar4 == (undefined4 *)0x0) {
    do {
      iVar1 = iVar1 + 1;
      param_1[3] = iVar1;
      if (5 < iVar1) break;
      puVar4 = *(undefined4 **)(iVar1 * 0xc + iVar2);
    } while (puVar4 == (undefined4 *)0x0);
    if (puVar4 == (undefined4 *)0x0) goto LAB_82703a98;
  }
  iVar2 = param_1[3] * 0xc + iVar2;
  if (puVar4 == *(undefined4 **)(iVar2 + 4)) {
    *(undefined4 *)(iVar2 + 4) = *puVar4;
  }
  *(undefined4 *)(param_1[3] * 0xc + param_1[1]) = *puVar4;
  *puVar4 = 0;
LAB_82703a98:
  piVar3 = (int *)(param_1[3] * 0xc + param_1[1]);
  if (*piVar3 == 0) {
    piVar3[1] = 0;
    *(undefined4 *)(param_1[3] * 0xc + param_1[1] + 8) = 0;
  }
  if (param_1[2] != 0) {
    fn_82703910(param_1[1]);
  }
  param_1[2] = (int)puVar4;
  return puVar4;
}

