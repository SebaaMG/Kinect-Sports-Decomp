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
extern int fn_82311AB8();
extern int fn_825089A0();
extern int fn_82F622A8();
extern int fn_82F69290();
extern unsigned int lbl_821AD03C;


void fn_828AA110(int *param_1,int param_2)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  undefined8 *puVar6;
  uint uVar7;
  uint uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined **appuStack_20 [8];
  
  uVar8 = param_1[1] - *param_1 >> 4;
  if (0xfffffffU - param_2 < uVar8) {
    fn_82311AB8(appuStack_20,0xffffffff82196fd4);
    appuStack_20[0] = &lbl_821AD03C;
                    /* WARNING: Subroutine does not return */
    fn_82F69290(appuStack_20,0xffffffff821dd9dc);
  }
  uVar8 = uVar8 + param_2;
  uVar4 = param_1[2] - *param_1 >> 4;
  if (uVar4 < uVar8) {
    uVar7 = 0;
    if (uVar4 <= 0xfffffff - (uVar4 >> 1)) {
      uVar7 = (uVar4 >> 1) + uVar4;
    }
    if (uVar7 < uVar8) {
      uVar7 = uVar8;
    }
    if (uVar7 < 0x10000000) {
      if ((uint)(param_1[2] - *param_1 >> 4) < uVar7) {
        piVar5 = (int *)fn_825089A0();
        puVar6 = (undefined8 *)(**(code **)(*piVar5 + 0x24))(piVar5,uVar7 * 0x10,1);
        puVar1 = (undefined8 *)param_1[1];
        puVar9 = puVar6;
        for (puVar10 = (undefined8 *)*param_1; puVar10 != puVar1; puVar10 = puVar10 + 2) {
          if (puVar9 != (undefined8 *)0x0) {
            *puVar9 = *puVar10;
            puVar9[1] = puVar10[1];
          }
          puVar9 = puVar9 + 2;
        }
        iVar2 = *param_1;
        iVar3 = param_1[1];
        if (iVar2 != 0) {
          piVar5 = (int *)fn_825089A0();
          (**(code **)(*piVar5 + 0x28))(piVar5,iVar2);
        }
        *param_1 = (int)puVar6;
        param_1[2] = (int)(puVar6 + uVar7 * 2);
        param_1[1] = (int)(puVar6 + (iVar3 - iVar2 >> 4) * 2);
      }
      return;
    }
                    /* WARNING: Subroutine does not return */
    fn_82F622A8(0xffffffff82196fd4);
  }
  return;
}

