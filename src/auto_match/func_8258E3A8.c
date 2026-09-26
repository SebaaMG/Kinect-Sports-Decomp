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
extern int fn_8260D428();


undefined4 * fn_8258E3A8(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 **ppuVar4;
  undefined4 *puVar5;
  undefined4 *puStack_40;
  undefined4 *apuStack_3c [15];
  
  puVar5 = *(undefined4 **)(param_2 + 4);
  puVar3 = (undefined4 *)(*(undefined4 **)(param_2 + 4))[1];
  while (*(char *)((int)puVar3 + 0x31) == '\0') {
    puVar2 = param_3;
    if (0xf < (uint)param_3[5]) {
      puVar2 = (undefined4 *)*param_3;
    }
    iVar1 = fn_8260D428(puVar3 + 3,0,puVar3[7],puVar2,param_3[4]);
    if (iVar1 < 0) {
      puVar3 = (undefined4 *)puVar3[2];
    }
    else {
      puVar5 = puVar3;
      puVar3 = (undefined4 *)*puVar3;
    }
  }
  puStack_40 = puVar5;
  if (puVar5 != *(undefined4 **)(param_2 + 4)) {
    puVar3 = puVar5 + 3;
    if (0xf < (uint)puVar5[8]) {
      puVar3 = (undefined4 *)*puVar3;
    }
    iVar1 = fn_8260D428(param_3,0,param_3[4],puVar3,puVar5[7]);
    if (-1 < iVar1) {
      ppuVar4 = &puStack_40;
      goto LAB_8258e474;
    }
  }
  ppuVar4 = apuStack_3c;
  apuStack_3c[0] = *(undefined4 **)(param_2 + 4);
LAB_8258e474:
  *param_1 = *ppuVar4;
  return param_1;
}

