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
extern unsigned int *auStack_30;
extern int fn_8225F160();
extern int fn_8248C3D8();
extern int fn_824BF608();
extern unsigned int lbl_821CA460;
extern unsigned int lbl_8326B908;


undefined8 fn_824BE400(double param_1,undefined4 *param_2)

{
  int iVar1;
  ulonglong uVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined1 auStack_30 [48];
  
  if (param_2[0x151] == 0) {
    iVar1 = fn_8225F160();
    uVar3 = *(uint *)(iVar1 + 0x68);
  }
  else {
    uVar3 = 3;
  }
  iVar1 = param_2[0x143];
  if (uVar3 < iVar1 + 1U) {
    return 0;
  }
  puVar6 = param_2 + 9;
  puVar5 = (undefined4 *)param_2[10];
  puVar4 = (undefined4 *)param_2[9];
  puVar7 = puVar4;
  if (puVar4 != puVar5) {
    do {
      if (((float)puVar7[9] < (float)puVar4[9]) && (puVar4[8] == iVar1)) {
        puVar7 = puVar4;
      }
      puVar4 = puVar4 + 10;
    } while (puVar4 != puVar5);
    if ((puVar7 != puVar5) && (lbl_8326B908 - lbl_821CA460 <= (float)puVar7[9])) {
      if (param_1 < (double)(float)puVar7[1]) {
        return 0;
      }
      goto LAB_824be4cc;
    }
  }
  uVar2 = 0;
  puVar4 = (undefined4 *)param_2[10];
  for (puVar5 = (undefined4 *)*puVar6; puVar5 != puVar4; puVar5 = puVar5 + 10) {
    if (puVar5[8] == iVar1) {
      uVar2 = uVar2 + 1;
    }
  }
  if ((ulonglong)(uint)param_2[0x2b] / (ulonglong)uVar3 == 0) {
    return 0;
  }
  if ((uVar2 & 0xffffffff) < (ulonglong)(uint)param_2[0x2b] / (ulonglong)uVar3) {
    return 1;
  }
  puVar7 = (undefined4 *)param_2[10];
  for (puVar5 = (undefined4 *)*puVar6; puVar5 != (undefined4 *)param_2[10]; puVar5 = puVar5 + 10) {
    if ((iVar1 == puVar5[8]) && ((puVar7 == puVar4 || ((float)puVar5[1] < (float)puVar7[1])))) {
      puVar7 = puVar5;
    }
  }
  if (puVar7 == puVar4) {
    return 0;
  }
  if (param_1 <= (double)(float)puVar7[1]) {
    return 0;
  }
LAB_824be4cc:
  fn_8248C3D8(*param_2,*puVar7);
  fn_824BF608(auStack_30,puVar6,puVar7);
  return 1;
}

