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
extern int fn_8257AC80();
extern int fn_8260D428();


int * fn_8257AB78(int *param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 **ppuVar7;
  undefined4 *puStack_40;
  undefined4 *apuStack_3c [15];
  
  iVar2 = fn_8257AC80(param_2,param_3);
  puVar1 = *(undefined4 **)(iVar2 * 8 + *(int *)(param_2 + 0x10));
  while( true ) {
    puVar4 = *(undefined4 **)(param_2 + 4);
    piVar5 = (int *)(iVar2 * 8 + *(int *)(param_2 + 0x10));
    puVar6 = puVar4;
    if ((undefined4 *)*piVar5 != puVar4) {
      puVar6 = *(undefined4 **)piVar5[1];
    }
    if (puVar1 == puVar6) {
      *param_1 = (int)puVar4;
      return param_1;
    }
    puVar4 = puVar1 + 2;
    puVar6 = param_3;
    if (0xf < (uint)param_3[5]) {
      puVar6 = (undefined4 *)*param_3;
    }
    puStack_40 = puVar1;
    iVar3 = fn_8260D428(puVar4,0,puVar1[6],puVar6,param_3[4]);
    if (-1 < iVar3) break;
    puVar1 = (undefined4 *)*puVar1;
  }
  if (0xf < (uint)puVar1[7]) {
    puVar4 = (undefined4 *)*puVar4;
  }
  iVar2 = fn_8260D428(param_3,0,param_3[4],puVar4,puVar1[6]);
  if (iVar2 < 0) {
    ppuVar7 = apuStack_3c;
    apuStack_3c[0] = *(undefined4 **)(param_2 + 4);
  }
  else {
    ppuVar7 = &puStack_40;
  }
  *param_1 = (int)*ppuVar7;
  return param_1;
}

