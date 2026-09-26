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
extern int fn_82A1C098();
extern int fn_82A1DD38();


undefined8 fn_8225DA70(int param_1,undefined8 param_2,uint param_3,int *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 **ppuVar5;
  int iVar6;
  undefined4 *puStack_30;
  undefined4 *apuStack_2c [11];
  
  puVar2 = (undefined4 *)(*(undefined4 **)(param_1 + 0x4c))[1];
  puStack_30 = *(undefined4 **)(param_1 + 0x4c);
  while (puVar4 = puVar2, *(char *)((int)puVar4 + 0x15) == '\0') {
    if ((uint)puVar4[3] < param_3) {
      puVar2 = (undefined4 *)puVar4[2];
    }
    else {
      puVar2 = (undefined4 *)*puVar4;
      puStack_30 = puVar4;
    }
  }
  if ((puStack_30 == *(undefined4 **)(param_1 + 0x4c)) || (param_3 < (uint)puStack_30[3])) {
    apuStack_2c[0] = *(undefined4 **)(param_1 + 0x4c);
    ppuVar5 = apuStack_2c;
  }
  else {
    ppuVar5 = &puStack_30;
  }
  if (*ppuVar5 != *(undefined4 **)(param_1 + 0x4c)) {
    iVar1 = (*ppuVar5)[4];
    iVar3 = 0;
    iVar6 = *(int *)(iVar1 + 0x404);
    if (((iVar6 == 0) && (*(uint *)(iVar1 + 0x40c) < 3)) &&
       (iVar3 = fn_82A1C098(iVar1 + 1000), iVar3 == 0)) {
      iVar6 = 1;
    }
    if (param_4 != (int *)0x0) {
      *param_4 = iVar3;
    }
    if (iVar6 != 0) {
      fn_82A1DD38(param_2,iVar1,1000);
      return 1;
    }
  }
  return 0;
}

