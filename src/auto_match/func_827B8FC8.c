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
extern int fn_827B7AE0();
extern int fn_827B7BF8();
extern int fn_827B7D10();
extern int fn_827B8C60();


undefined8 fn_827B8FC8(int param_1,ulonglong param_2,undefined8 param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  bool bVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar8;
  undefined8 uVar7;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined4 *puVar11;
  uint uVar12;
  
  uVar1 = *(uint *)(param_1 + 0x38);
  puVar2 = *(undefined4 **)(param_1 + 0x34);
  uVar12 = 0;
  puVar11 = (undefined4 *)(param_1 + 0x30);
  do {
    if (puVar2 == puVar11) break;
    if ((*(ushort *)(puVar2 + 8) & 0x8000) == 0) {
      if ((param_2 & 0xffffffff) <= (ulonglong)*(ushort *)(puVar2 + 9)) goto LAB_827b903c;
      puVar8 = (undefined4 *)fn_827B7D10(param_1,puVar2);
      if (puVar8 != (undefined4 *)0x0) {
        if ((param_2 & 0xffffffff) <= (ulonglong)*(ushort *)(puVar8[2] + 0x1c)) goto LAB_827b9044;
        break;
      }
    }
    uVar12 = uVar12 + 1;
    puVar2 = (undefined4 *)puVar2[1];
  } while (uVar12 <= uVar1 >> 1);
  puVar8 = *(undefined4 **)(param_1 + 0x34);
  do {
    if (puVar8 == puVar11) {
      return 0;
    }
    if ((*(ushort *)(puVar8 + 8) & 0x8000) == 0) {
      iVar3 = puVar8[7];
      uVar9 = 0;
      puVar2 = puVar8;
      if (puVar8 != (undefined4 *)(iVar3 + 8)) {
        do {
          if ((*(ushort *)(puVar2 + 8) & 0x8000) != 0) break;
          puVar5 = puVar2;
          puVar6 = puVar2;
          if (puVar2 != puVar8) {
            for (; puVar5 != puVar11; puVar5 = (undefined4 *)*puVar5) {
              if (puVar6 == puVar11) {
                bVar4 = false;
                goto LAB_827b90dc;
              }
              puVar6 = (undefined4 *)puVar6[1];
            }
            bVar4 = true;
LAB_827b90dc:
            if (!bVar4) break;
          }
          if ((param_2 & 0xffffffff) <= (ulonglong)*(ushort *)(puVar2 + 9)) goto LAB_827b903c;
          uVar9 = *(ushort *)(puVar2 + 9) + uVar9;
          if ((((ulonglong)*(ushort *)(iVar3 + 6) != 0) &&
              (puVar2 == *(undefined4 **)(iVar3 + 0x14))) &&
             (uVar10 = *(ushort *)(iVar3 + 6) + uVar9,
             (param_2 & 0xffffffff) <= (uVar10 & 0xffffffff))) {
            *(undefined2 *)(iVar3 + 6) = 0;
            uVar9 = uVar10;
          }
          if ((param_2 & 0xffffffff) <= (uVar9 & 0xffffffff)) {
            fn_827B7BF8(param_1,puVar8,puVar2);
            goto LAB_827b9044;
          }
          puVar2 = (undefined4 *)puVar2[4];
        } while (puVar2 != (undefined4 *)(iVar3 + 8));
      }
    }
    puVar8 = (undefined4 *)puVar8[1];
  } while( true );
LAB_827b903c:
  puVar8 = puVar2;
  fn_827B7AE0(param_1,puVar8);
LAB_827b9044:
  uVar7 = fn_827B8C60(param_1,param_2,param_3,puVar8);
  return uVar7;
}

