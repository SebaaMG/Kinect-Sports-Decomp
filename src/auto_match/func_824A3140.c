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
extern unsigned int *auStack_50;
extern int fn_82230300();
extern int fn_824A32F8();
extern int fn_8260D428();
extern int fn_8265CA20();


undefined4 * fn_824A3140(undefined4 *param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined1 auStack_50 [80];
  
  puVar6 = (undefined4 *)(param_3 + 0xc);
  uVar5 = 1;
  puVar2 = *(undefined4 **)(param_2 + 4);
  puVar7 = (undefined4 *)(*(undefined4 **)(param_2 + 4))[1];
  while (*(char *)((int)puVar7 + 0x31) == '\0') {
    puVar2 = puVar7 + 3;
    if (0xf < (uint)puVar7[8]) {
      puVar2 = (undefined4 *)*puVar2;
    }
    uVar5 = fn_8260D428(puVar6,0,*(undefined4 *)(param_3 + 0x1c),puVar2,puVar7[7]);
    uVar5 = (uVar5 & 0xffffffff) >> 0x1f;
    puVar2 = puVar7;
    if (uVar5 == 0) {
      puVar7 = (undefined4 *)puVar7[2];
    }
    else {
      puVar7 = (undefined4 *)*puVar7;
    }
  }
  puVar7 = puVar2;
  if (uVar5 != 0) {
    if (puVar2 == (undefined4 *)**(undefined4 **)(param_2 + 4)) {
      uVar5 = 1;
      goto LAB_824a31e0;
    }
    if (*(char *)((int)puVar2 + 0x31) == '\0') {
      puVar7 = (undefined4 *)*puVar2;
      if (*(char *)((int)puVar7 + 0x31) == '\0') {
        puVar4 = (undefined4 *)puVar7[2];
        while (puVar1 = puVar4, *(char *)((int)puVar1 + 0x31) == '\0') {
          puVar7 = puVar1;
          puVar4 = (undefined4 *)puVar1[2];
        }
      }
      else {
        puVar4 = (undefined4 *)puVar2[1];
        puVar7 = puVar2;
        while ((puVar1 = puVar4, *(char *)((int)puVar1 + 0x31) == '\0' &&
               (puVar7 == (undefined4 *)*puVar1))) {
          puVar7 = puVar1;
          puVar4 = (undefined4 *)puVar1[1];
        }
        if (*(char *)((int)puVar7 + 0x31) == '\0') {
          puVar7 = puVar1;
        }
      }
    }
    else {
      puVar7 = (undefined4 *)puVar2[2];
    }
  }
  puVar4 = puVar6;
  if (0xf < *(uint *)(param_3 + 0x20)) {
    puVar4 = (undefined4 *)*puVar6;
  }
  iVar3 = fn_8260D428(puVar7 + 3,0,puVar7[7],puVar4,*(undefined4 *)(param_3 + 0x1c));
  if (-1 < iVar3) {
    fn_82230300(puVar6,1,0);
    fn_8265CA20(param_3);
    *param_1 = puVar7;
    *(undefined1 *)(param_1 + 1) = 0;
    return param_1;
  }
LAB_824a31e0:
  puVar2 = (undefined4 *)fn_824A32F8(auStack_50,param_2,uVar5,puVar2,param_3);
  *(undefined1 *)(param_1 + 1) = 1;
  *param_1 = *puVar2;
  return param_1;
}

