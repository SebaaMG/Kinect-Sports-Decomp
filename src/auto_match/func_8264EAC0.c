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
extern int fn_8264E490();
extern int fn_8264E8F0();
extern U64 storeWordConditionalIndexed();


void fn_8264EAC0(undefined4 *param_1)

{
  bool bVar1;
  uint *puVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  char in_RESERVE;
  byte in_cr0;
  
  puVar2 = (uint *)*param_1;
  uVar8 = ZEXT48(puVar2);
  do {
    if (puVar2[0xf] == 0) break;
    bVar1 = (0x1000000 << (param_1[1] & 0x3f) & puVar2[0xe]) == 0;
    in_cr0 = bVar1 << 1;
  } while (bVar1);
LAB_8264eb08:
  do {
    uVar6 = *puVar2;
    if (uVar6 == 0) {
      if (in_RESERVE != '\0') {
        uVar7 = storeWordConditionalIndexed(1,0,uVar8);
        *puVar2 = uVar7;
        in_cr0 = 2;
      }
      if (!(bool)(in_cr0 >> 1 & 1)) goto LAB_8264eb08;
    }
    else if (in_RESERVE != '\0') {
      uVar7 = storeWordConditionalIndexed((ulonglong)uVar6,0,uVar8);
      *puVar2 = uVar7;
      in_cr0 = 2;
    }
  } while (uVar6 != 0);
  sync(1);
  if (param_1[0x16] == param_1[0x15]) {
    sync(1);
    *puVar2 = 0;
  }
  else {
    puVar2[0xf] = puVar2[0xf] + 1;
    uVar6 = param_1[(param_1[0x16] & 3) + 0x17];
    param_1[0x16] = param_1[0x16] + 1;
    if ((int)puVar2[0xf] < 2) {
      uVar7 = param_1[1];
      puVar5 = (uint *)puVar2[0x12];
      puVar2[0x1a] = 0;
      puVar2[0xe] = 0x1000000 << (uVar7 & 0x3f);
      if (puVar5 == (uint *)0x0) {
        puVar5 = (uint *)(uVar6 + 4);
        puVar2[0x13] = uVar6;
      }
      else {
        puVar2[0x12] = 0;
      }
    }
    else {
      puVar5 = (uint *)puVar2[9];
    }
LAB_8264ebd4:
    do {
      while (uVar6 = puVar2[6], uVar6 < puVar2[7]) {
        uVar3 = puVar2[5];
        puVar5 = (uint *)puVar2[8];
        puVar2[6] = uVar6 + 1;
        sync(1);
LAB_8264ec4c:
        *puVar2 = 0;
        (*(code *)puVar2[4])(param_1,uVar3,puVar5,uVar6);
        puVar5 = (uint *)puVar2[9];
      }
      uVar6 = *puVar5;
      if ((uVar6 & 0x80000000) == 0) {
        puVar5 = puVar5 + 1;
        uVar7 = uVar6 >> 0x10 & 0x7fff;
        if ((puVar2[0x5a] & puVar2[0x59]) != 0) {
          uVar3 = puVar2[5];
          puVar2[8] = (uint)puVar5;
          puVar2[6] = 1;
          puVar2[7] = uVar6 & 0xffff;
          puVar2[9] = uVar7 + (int)puVar5;
          sync(1);
          uVar6 = 0;
          goto LAB_8264ec4c;
        }
        puVar5 = (uint *)(uVar7 + (int)puVar5);
        goto LAB_8264ebd4;
      }
      if (uVar6 == 0x8d000000) {
        puVar4 = puVar5 + 1;
        puVar5 = puVar5 + 2;
        puVar2[0x5a] = *puVar4;
        goto LAB_8264ebd4;
      }
      if (uVar6 == 0x8c000000) {
        puVar2[4] = puVar5[1];
        puVar4 = puVar5 + 2;
        puVar5 = puVar5 + 3;
        puVar2[5] = *puVar4;
        goto LAB_8264ebd4;
      }
      if ((uVar6 & 0xc0000000) != 0xc0000000) {
        uVar6 = puVar2[0x19];
        puVar2[0x18] = 1;
        puVar2[0x19] = uVar6 + 1;
        if (uVar6 + 1 == puVar2[0xf]) {
          puVar5 = (uint *)fn_8264E490(puVar5,uVar8);
          puVar2[0x18] = 0;
        }
        else {
          puVar2[9] = (uint)puVar5;
          sync(1);
          *puVar2 = 0;
          do {
            bVar1 = false;
          } while (puVar2[0x18] != 0);
LAB_8264ed1c:
          do {
            uVar6 = *puVar2;
            if (uVar6 == 0) {
              if (in_RESERVE != '\0') {
                uVar7 = storeWordConditionalIndexed(1,0,uVar8);
                *puVar2 = uVar7;
                bVar1 = true;
              }
              if (!bVar1) goto LAB_8264ed1c;
            }
            else if (in_RESERVE != '\0') {
              uVar7 = storeWordConditionalIndexed((ulonglong)uVar6,0,uVar8);
              *puVar2 = uVar7;
              bVar1 = true;
            }
          } while (uVar6 != 0);
          sync(1);
          puVar5 = (uint *)puVar2[9];
        }
        puVar2[0x19] = puVar2[0x19] - 1;
        goto LAB_8264ebd4;
      }
      if (uVar6 != 0xc0000000) {
        puVar5 = (uint *)(uVar6 + 4);
        goto LAB_8264ebd4;
      }
      puVar5 = (uint *)fn_8264E8F0(uVar8,param_1,puVar5);
    } while (puVar5 != (uint *)0x0);
  }
  return;
}

