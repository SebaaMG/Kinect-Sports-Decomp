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
extern int fn_82552038();


undefined4 * fn_82551B18(undefined4 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  uint uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  
  puVar5 = param_3 + -1;
  uVar8 = (int)param_3 - (int)param_2 >> 3;
  iVar2 = (int)puVar5 - (int)param_2 >> 3;
  puVar9 = param_2 + ((int)param_3 - (int)param_2 >> 4) + (uint)((int)uVar8 < 0 && (uVar8 & 1) != 0)
  ;
  puVar3 = param_2;
  if (0x28 < iVar2) {
    uVar8 = iVar2 + 1;
    uVar8 = ((int)uVar8 >> 3) + (uint)((int)uVar8 < 0 && (uVar8 & 7) != 0);
    fn_82552038(param_2,param_2 + uVar8,param_2 + uVar8 * 2);
    fn_82552038(puVar9 + -(uVar8 & 0x1fffffff),puVar9,puVar9 + uVar8);
    fn_82552038(puVar5 + (uVar8 & 0xfffffff) * -2,puVar5 + -(uVar8 & 0x1fffffff),puVar5);
    puVar3 = param_2 + uVar8;
    puVar5 = puVar5 + -(uVar8 & 0x1fffffff);
  }
  fn_82552038(puVar3,puVar9,puVar5);
  puVar3 = puVar9 + 1;
  for (; ((param_2 < puVar9 && (*(int *)((int)puVar9 + 4) <= *(int *)((int)puVar9 + -4))) &&
         (*(int *)((int)puVar9 + -4) <= *(int *)((int)puVar9 + 4))); puVar9 = puVar9 + -1) {
  }
  puVar5 = puVar9;
  puVar4 = puVar3;
  if (puVar3 < param_3) {
    do {
      puVar4 = puVar3;
      if ((*(int *)((int)puVar3 + 4) < *(int *)((int)puVar9 + 4)) ||
         (*(int *)((int)puVar9 + 4) < *(int *)((int)puVar3 + 4))) break;
      puVar3 = puVar3 + 1;
      puVar4 = puVar3;
    } while (puVar3 < param_3);
  }
LAB_82551c5c:
  do {
    puVar10 = puVar9;
    puVar7 = puVar5;
    if (puVar3 < param_3) {
      if (*(int *)((int)puVar3 + 4) <= *(int *)((int)puVar9 + 4)) {
        if (*(int *)((int)puVar3 + 4) < *(int *)((int)puVar9 + 4)) goto joined_r0x82551c68;
        uVar6 = *puVar4;
        *(undefined4 *)puVar4 = *(undefined4 *)puVar3;
        *(undefined4 *)((int)puVar4 + 4) = *(undefined4 *)((int)puVar3 + 4);
        *puVar3 = uVar6;
        goto LAB_82551c54;
      }
    }
    else {
joined_r0x82551c68:
      for (; param_2 < puVar5; puVar5 = puVar5 + -1) {
        puVar9 = puVar7 + -1;
        if (*(int *)((int)puVar10 + 4) <= *(int *)((int)puVar7 + -4)) {
          if (*(int *)((int)puVar10 + 4) < *(int *)((int)puVar7 + -4)) break;
          puVar10 = puVar10 + -1;
          uVar6 = *puVar10;
          *puVar10 = *puVar9;
          *puVar9 = uVar6;
        }
        puVar7 = puVar9;
      }
      if (puVar5 == param_2) {
        if (puVar3 == param_3) {
          *param_1 = puVar10;
          param_1[1] = puVar4;
          return param_1;
        }
        if (puVar4 != puVar3) {
          uVar6 = *puVar10;
          *(undefined4 *)puVar10 = *(undefined4 *)puVar4;
          *(undefined4 *)((int)puVar10 + 4) = *(undefined4 *)((int)puVar4 + 4);
          *puVar4 = uVar6;
        }
        puVar9 = puVar10 + 1;
        uVar6 = *puVar10;
        *(undefined4 *)puVar10 = *(undefined4 *)puVar3;
        *(undefined4 *)((int)puVar10 + 4) = *(undefined4 *)((int)puVar3 + 4);
        *puVar3 = uVar6;
LAB_82551c54:
        puVar4 = puVar4 + 1;
      }
      else {
        puVar7 = puVar5 + -1;
        if (puVar3 == param_3) {
          puVar9 = puVar10 + -1;
          if (puVar7 != puVar9) {
            uVar6 = *puVar7;
            *(undefined4 *)puVar7 = *(undefined4 *)puVar9;
            *(undefined4 *)((int)puVar5 + -4) = *(undefined4 *)((int)puVar10 + -4);
            *puVar9 = uVar6;
          }
          puVar1 = puVar4 + -1;
          uVar6 = *puVar9;
          *(undefined4 *)puVar9 = *(undefined4 *)puVar1;
          *(undefined4 *)((int)puVar10 + -4) = *(undefined4 *)((int)puVar4 + -4);
          *puVar1 = uVar6;
          puVar5 = puVar7;
          puVar4 = puVar1;
          goto LAB_82551c5c;
        }
        uVar6 = *puVar3;
        *(undefined4 *)puVar3 = *(undefined4 *)puVar7;
        *(undefined4 *)((int)puVar3 + 4) = *(undefined4 *)((int)puVar5 + -4);
        *puVar7 = uVar6;
        puVar9 = puVar10;
        puVar5 = puVar7;
      }
    }
    puVar3 = puVar3 + 1;
  } while( true );
}

