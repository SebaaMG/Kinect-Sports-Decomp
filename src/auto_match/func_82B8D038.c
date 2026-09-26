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
extern int fn_82AA6648();
extern int fn_82ABE250();
extern int fn_82AD6090();
extern int fn_82B82D28();


undefined8
fn_82B8D038(int param_1,int *param_2,undefined4 *param_3,undefined4 *param_4,int *param_5,
             undefined8 param_6,int *param_7)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  int *piVar5;
  uint *puVar6;
  int iVar7;
  uint *puVar8;
  uint uVar9;
  int *piVar10;
  int iVar11;
  int *piVar12;
  int *piVar13;
  int iVar14;
  int *piVar15;
  int *piStack_90;
  int *piStack_8c;
  int aiStack_88 [34];
  
  iVar14 = *(int *)(param_1 + 0x70) + 1;
  *(int *)(param_1 + 0x70) = iVar14;
  param_2[-1] = iVar14;
  puVar6 = (uint *)fn_82ABE250(param_1,8,0x26);
  puVar3 = puVar6 + 1;
  puVar6[1] = (uint)puVar6 | 1;
  piVar13 = (int *)0x0;
  *puVar6 = (uint)puVar3 | 1;
  piVar10 = (int *)0x4;
  iVar7 = 0;
  piVar15 = param_2;
  do {
    if (piVar15 != param_7) {
      for (iVar1 = *piVar15; iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
        fn_82B82D28(iVar1,0,&piStack_8c,&piStack_90,aiStack_88,0,param_6,0);
        piVar15 = piStack_8c;
        iVar11 = iVar7;
        piVar5 = piVar10;
        piVar12 = piVar13;
        if (((aiStack_88[0] == 0) && ((piStack_8c[2] & 0x3f80U) == 0x3800)) &&
           (piStack_8c != param_7)) {
          if (piStack_8c[-1] != iVar14) {
            piStack_8c[-1] = iVar14;
            if ((*puVar3 & 1) == 0) {
              uVar9 = *puVar6 & 0xfffffffe;
              iVar7 = uVar9 - 4;
              if ((iVar7 == 0) || (*(uint *)(uVar9 + 8) < *(int *)(uVar9 + 4) + 1U))
              goto LAB_82b8d140;
            }
            else {
LAB_82b8d140:
              iVar7 = fn_82AD6090(puVar6,1);
            }
            iVar2 = *(int *)(iVar7 + 8);
            *(int *)(iVar7 + 8) = iVar2 + 1;
            *(int **)((iVar2 + 4) * 4 + iVar7) = piVar15;
          }
        }
        else {
          iVar11 = aiStack_88[0];
          piVar5 = piStack_90;
          piVar12 = piStack_8c;
          if ((piVar13 != (int *)0x0) &&
             (((piStack_8c != piVar13 || (aiStack_88[0] != iVar7)) ||
              (iVar11 = iVar7, piVar5 = piVar10, piVar12 = piVar13, piStack_90 != piVar10)))) {
            piVar13 = (int *)0x0;
            piVar10 = (int *)0x4;
            iVar7 = 0;
            for (iVar14 = *param_2; iVar14 != 0; iVar14 = *(int *)(iVar14 + 4)) {
              fn_82B82D28(iVar14,0,&piStack_90,&piStack_8c,aiStack_88,0,param_6,0);
              iVar1 = aiStack_88[0];
              piVar15 = piStack_8c;
              piVar5 = piStack_90;
              if ((piVar13 != (int *)0x0) &&
                 (((piStack_90 != piVar13 || (aiStack_88[0] != iVar7)) ||
                  (iVar1 = iVar7, piVar15 = piVar10, piVar5 = piVar13, piStack_8c != piVar10)))) {
                return 0;
              }
              piVar13 = piVar5;
              piVar10 = piVar15;
              iVar7 = iVar1;
            }
            goto LAB_82b8d29c;
          }
        }
        piVar10 = piVar5;
        iVar7 = iVar11;
        piVar13 = piVar12;
      }
    }
    if (((*puVar3 & 1) != 0) || (*puVar3 == 0)) {
LAB_82b8d29c:
      *param_3 = piVar13;
      *param_4 = piVar10;
      *param_5 = iVar7;
      return 1;
    }
    puVar4 = (uint *)(*puVar6 & 0xfffffffe);
    puVar8 = puVar4 + -1;
    uVar9 = puVar4[1] - 1;
    piVar15 = (int *)puVar8[puVar4[1] + 3];
    puVar4[1] = uVar9;
    if (uVar9 == 0) {
      *(uint *)(*puVar4 & 0xfffffffe) = *puVar8;
      *(uint *)(*puVar8 & 0xfffffffe) = *puVar4;
      fn_82AA6648(puVar6,puVar8,((ulonglong)puVar4[2] + 4 & 0x3fffffff) << 2);
    }
  } while( true );
}

