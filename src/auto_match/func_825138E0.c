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
extern int fn_822315A0();
extern int fn_8223AAC0();
extern int fn_82248B90();


undefined4 * fn_825138E0(undefined4 *param_1,int param_2,uint param_3)

{
  undefined4 uVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 **ppuVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puStack_40;
  undefined4 *apuStack_3c [15];
  
  puVar6 = *(undefined4 **)(param_2 + 8);
  puVar4 = (undefined4 *)puVar6[1];
  puStack_40 = puVar6;
  while (puVar3 = puVar4, *(char *)((int)puVar3 + 0x19) == '\0') {
    if ((uint)puVar3[3] < param_3) {
      puVar4 = (undefined4 *)puVar3[2];
    }
    else {
      if ((*(char *)((int)puVar6 + 0x19) != '\0') && (param_3 < (uint)puVar3[3])) {
        puVar6 = puVar3;
      }
      puVar4 = (undefined4 *)*puVar3;
      puStack_40 = puVar3;
    }
  }
  if (*(char *)((int)puVar6 + 0x19) == '\0') {
    puVar4 = (undefined4 *)*puVar6;
  }
  else {
    puVar4 = *(undefined4 **)(*(int *)(param_2 + 8) + 4);
  }
  while (*(char *)((int)puVar4 + 0x19) == '\0') {
    if (param_3 < (uint)puVar4[3]) {
      puVar6 = puVar4;
      puVar4 = (undefined4 *)*puVar4;
    }
    else {
      puVar4 = (undefined4 *)puVar4[2];
    }
  }
  iVar7 = 0;
  if (puStack_40 != puVar6) {
    do {
      iVar7 = iVar7 + 1;
      fn_82248B90(&puStack_40);
    } while (puStack_40 != puVar6);
    if (iVar7 != 0) {
      puStack_40 = *(undefined4 **)(param_2 + 8);
      puVar6 = (undefined4 *)(*(undefined4 **)(param_2 + 8))[1];
      while (*(char *)((int)puVar6 + 0x19) == '\0') {
        if ((uint)puVar6[3] < param_3) {
          puVar6 = (undefined4 *)puVar6[2];
        }
        else {
          puStack_40 = puVar6;
          puVar6 = (undefined4 *)*puVar6;
        }
      }
      if ((puStack_40 == *(undefined4 **)(param_2 + 8)) || (param_3 < (uint)puStack_40[3])) {
        ppuVar5 = apuStack_3c;
        apuStack_3c[0] = *(undefined4 **)(param_2 + 8);
      }
      else {
        ppuVar5 = &puStack_40;
      }
      puVar6 = *ppuVar5;
      *param_1 = 0;
      param_1[1] = 0;
      iVar7 = puVar6[5];
      uVar1 = puVar6[4];
      if (iVar7 == 0) {
        return param_1;
      }
      cVar2 = fn_8223AAC0(iVar7);
      if (cVar2 == '\0') {
        return param_1;
      }
      if (param_1[1] != 0) {
        fn_822315A0();
      }
      param_1[1] = iVar7;
      *param_1 = uVar1;
      return param_1;
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}

