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
extern int fn_82F691F0();


void fn_827B36A8(int *param_1,uint param_2,int param_3,ulonglong param_4)

{
  int iVar1;
  int *piVar2;
  int *piVar4;
  int iVar5;
  ulonglong uVar3;
  undefined1 *puVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  
  if (param_2 < (uint)param_1[0xd]) {
    uVar8 = 0;
    piVar4 = (int *)(param_2 * 8 + param_1[0xc]);
    uVar9 = (ulonglong)(uint)piVar4[1];
    piVar4 = (int *)(param_1[9] + *piVar4 * 4);
    if (uVar9 != 0) {
      do {
        piVar2 = (int *)*piVar4;
        iVar1 = *piVar2;
        iVar5 = piVar2[3];
        while( true ) {
          uVar9 = uVar9 - 1;
          uVar8 = piVar2[2] + uVar8;
          if (uVar9 == 0) break;
          piVar4 = piVar4 + 1;
          piVar2 = (int *)*piVar4;
          if (*piVar2 != iVar1) break;
          iVar5 = piVar2[3] + iVar5;
        }
        iVar7 = (int)param_4;
        if (iVar5 != 0) {
          uVar3 = (ulonglong)((int)(uVar8 * 0x200 - iVar5) >> 9);
          if ((longlong)uVar3 < 0) {
            uVar3 = -uVar3;
          }
          if ((*param_1 == 1) && (uVar3 = uVar3 & 0x1ff, 0x100 < (uint)uVar3)) {
            uVar3 = 0x200 - uVar3;
          }
          if (0xff < (int)uVar3) {
            uVar3 = 0xff;
          }
          if (param_1[3] != 0) {
            uVar3 = (ulonglong)*(uint *)((int)((uVar3 & 0xffffffff) << 2) + param_1[2]);
          }
          if ((param_4 & 0xffffffff) != 0) {
            puVar6 = (undefined1 *)((iVar1 - param_1[0x13]) * iVar7 + param_3 + -1);
            uVar10 = param_4;
            do {
              puVar6 = puVar6 + 1;
              *puVar6 = (char)uVar3;
              uVar10 = uVar10 - 1;
            } while (uVar10 != 0);
          }
          iVar1 = iVar1 + 1;
        }
        if ((uVar9 & 0xffffffff) == 0) {
          return;
        }
        if (iVar1 < *piVar2) {
          uVar3 = (ulonglong)((int)(uVar8 * 0x200 | uVar8 >> 0x17) >> 9);
          if ((longlong)uVar3 < 0) {
            uVar3 = -uVar3;
          }
          if ((*param_1 == 1) && (uVar3 = uVar3 & 0x1ff, 0x100 < (uint)uVar3)) {
            uVar3 = 0x200 - uVar3;
          }
          if (0xff < (int)uVar3) {
            uVar3 = 0xff;
          }
          if (param_1[3] != 0) {
            uVar3 = (ulonglong)*(uint *)((int)((uVar3 & 0xffffffff) << 2) + param_1[2]);
          }
          if ((uVar3 & 0xffffffff) != 0) {
                    /* WARNING: Subroutine does not return */
            fn_82F691F0((iVar1 - param_1[0x13]) * iVar7 + param_3,uVar3,
                         (longlong)(*piVar2 - iVar1) * (longlong)iVar7);
          }
        }
      } while( true );
    }
  }
  return;
}

