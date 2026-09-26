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
#define ZEXT48(x) ((U64)((U32)(x)))
extern int fn_82518120();
extern int fn_82F56D40();


int fn_82517ED8(int param_1,int param_2,uint param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 **ppuVar6;
  undefined4 *puStack_30;
  undefined4 *apuStack_2c [11];
  
  puStack_30 = *(undefined4 **)(param_2 + 0x28);
  iVar2 = fn_82518120();
  fn_82F56D40(apuStack_2c,iVar2,&puStack_30);
  if ((ZEXT48(apuStack_2c[0]) != (ulonglong)*(uint *)(iVar2 + 4)) &&
     (ZEXT48(apuStack_2c[0]) != 0xfffffffffffffff0)) {
    puVar4 = (undefined4 *)apuStack_2c[0][5];
    puVar5 = (undefined4 *)((undefined4 *)apuStack_2c[0][5])[1];
    while (*(char *)((int)puVar5 + 0x69) == '\0') {
      if ((uint)puVar5[4] < param_3) {
        puVar5 = (undefined4 *)puVar5[2];
      }
      else {
        puVar4 = puVar5;
        puVar5 = (undefined4 *)*puVar5;
      }
    }
    puVar5 = (undefined4 *)apuStack_2c[0][5];
    if ((puVar4 == puVar5) || (param_3 < (uint)puVar4[4])) {
      ppuVar6 = &puStack_30;
      puStack_30 = puVar5;
    }
    else {
      ppuVar6 = apuStack_2c;
    }
    puVar1 = *ppuVar6;
    if (((puVar1 != puVar5) && (puVar1[0x18] != 0)) &&
       (puVar5 = (undefined4 *)puVar1[0x18], puVar5 != (undefined4 *)0x0)) {
      iVar2 = param_1;
      if (puVar5 != puVar1 + 0x14) {
        iVar2 = 0;
      }
      apuStack_2c[0] = puVar4;
      uVar3 = (**(code **)*puVar5)(puVar5,iVar2);
      *(undefined4 *)(param_1 + 0x10) = uVar3;
      return param_1;
    }
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  return param_1;
}

