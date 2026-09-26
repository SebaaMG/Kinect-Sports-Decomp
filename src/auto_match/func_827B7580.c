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
extern int fn_827B56E0();
extern int fn_827B5FA8();


void fn_827B7580(int param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  ulonglong uVar11;
  undefined4 *puVar12;
  int *piVar13;
  
  uVar11 = 0;
  if (*(int *)(param_1 + 8) != 0) {
    puVar12 = (undefined4 *)(param_1 + 0x38);
    do {
      if (puVar12[4] != 0) {
        cVar4 = fn_827B56E0(param_1,param_2,uVar11);
        if (cVar4 != '\0') {
          uVar1 = puVar12[4];
          piVar13 = (int *)(param_1 + 0x2c);
          fn_827B5FA8(piVar13,uVar1,0x20);
          *(undefined4 *)(param_1 + 0x30) = uVar1;
          lVar5 = 0;
          uVar8 = 0;
          if (*(int *)(param_1 + 0x1c) != 0) {
            iVar7 = 0;
            do {
              puVar9 = (undefined4 *)
                       (*(int *)((uVar8 >> 4 & 0xffffffc) + *(int *)(param_1 + 0x28)) +
                       (uVar8 & 0x3f) * 0x1c);
              if ((ulonglong)(uint)puVar9[6] == (uVar11 & 0xffffffff)) {
                lVar5 = lVar5 + 1;
                uVar1 = *puVar9;
                puVar10 = (undefined4 *)(iVar7 + *piVar13);
                iVar7 = iVar7 + 0x18;
                puVar10[1] = puVar9[1];
                *puVar10 = uVar1;
                uVar1 = puVar9[4];
                uVar2 = puVar9[3];
                uVar3 = puVar9[5];
                puVar10[2] = puVar9[2];
                puVar10[3] = uVar2;
                puVar10[4] = uVar1;
                puVar10[5] = uVar3;
              }
              uVar8 = uVar8 + 1;
            } while (uVar8 < *(uint *)(param_1 + 0x1c));
          }
          lVar6 = (ulonglong)*(uint *)(param_1 + 0x2b8) + 8;
          if ((ulonglong)*(uint *)(param_1 + 0x2b8) == 0) {
            lVar6 = 0;
          }
          (**(code **)(*(int *)*puVar12 + 0xc))((int *)*puVar12,0,lVar5,*piVar13,lVar6);
        }
        puVar12[4] = 0;
      }
      uVar11 = uVar11 + 1;
      puVar12 = puVar12 + 5;
    } while ((uVar11 & 0xffffffff) < (ulonglong)*(uint *)(param_1 + 8));
  }
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x2c4) = 0;
  *(undefined4 *)(param_1 + 0x2c8) = 0;
  *(undefined4 *)(param_1 + 0x2cc) = 0;
  return;
}

