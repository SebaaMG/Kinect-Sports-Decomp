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
extern int fn_82CE5410();
extern int fn_82CE6310();
extern int fn_82CEDE90();
extern int fn_82CF6018();
extern int fn_82CF6150();
extern unsigned int iStack_a4;
extern unsigned int iStack_ac;
extern unsigned int iStack_b0;
extern unsigned int uStack_a0;


void fn_82CF3E08(int *param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  int *piVar8;
  longlong lVar9;
  uint *puVar10;
  int iStack_b0;
  int iStack_ac;
  undefined1 *puStack_a8;
  int iStack_a4;
  uint uStack_a0;
  
  fn_82CF6150(&puStack_a8);
  fn_82CEDE90(param_2,0xffffffff821331a0,param_1[6],param_1[7],*(undefined4 *)(*param_1 + 4));
  iStack_ac = 0;
  if (0 < param_1[1]) {
    iStack_b0 = 0;
    do {
      lVar9 = 0;
      piVar8 = (int *)(iStack_b0 + *param_1);
      if (0 < piVar8[1]) {
        iVar5 = 0;
        do {
          iVar4 = iVar5 + *piVar8;
          fn_82CEDE90(param_2,0xffffffff82133090,*(undefined4 *)(iVar5 + *piVar8),lVar9,
                        *(undefined4 *)(iVar4 + 0x18),*(undefined4 *)(iVar4 + 0xc));
          iVar1 = param_1[3];
          iVar2 = *(int *)(iVar4 + 0x20);
          puVar10 = (uint *)(*(int *)(iVar4 + 0x1c) + iVar1);
          iVar4 = fn_82CE5410();
          if ((uStack_a0 & 0x3fffffff) == 0) {
            uVar6 = (uStack_a0 & 0x3fffffff) << 1;
            if (uVar6 < 2) {
              uVar6 = 1;
            }
            fn_82CE6310(*(undefined4 *)(iVar4 + 0x14),&puStack_a8,uVar6,1);
          }
          iStack_a4 = 1;
          *puStack_a8 = 0;
          while (puVar10 < (uint *)(iVar2 + iVar1)) {
            puVar3 = (undefined1 *)*puVar10;
            switch(*puVar3) {
            case 0x45:
              puStack_a8[iStack_a4 + -3] = 0;
              iStack_a4 = iStack_a4 + -2;
              fn_82CEDE90(param_2,0xffffffff821330f0,puStack_a8,(ulonglong)*puVar10 + 2,puVar10[1]
                            ,puVar10[2]);
              break;
            case 0x46:
            case 0x4f:
            case 0x50:
            case 0x70:
              goto switchD_82cf3f78_caseD_46;
            default:
              goto switchD_82cf3f78_caseD_47;
            case 0x4c:
              fn_82CEDE90(param_2,0xffffffff82133108,puStack_a8,puVar3 + 2,puVar10[1],puVar10[2]);
              fn_82CEDE90(param_2,0xffffffff82133124,puStack_a8,(ulonglong)puVar10[3] + 2,
                            puVar10[1],puVar10[2]);
              fn_82CF6018(&puStack_a8);
              puVar10 = puVar10 + 4;
              goto switchD_82cf3f78_caseD_46;
            case 0x4d:
              fn_82CEDE90(param_2,0xffffffff8213315c,puStack_a8,puVar3 + 1,
                            (double)(float)puVar10[1]);
              puVar10 = puVar10 + 2;
              goto switchD_82cf3f78_caseD_46;
            case 0x4e:
              puVar10 = puVar10 + 1;
              goto switchD_82cf3f78_caseD_46;
            case 0x53:
              puStack_a8[iStack_a4 + -3] = 0;
              iStack_a4 = iStack_a4 + -2;
              fn_82CEDE90(param_2,0xffffffff82133124,puStack_a8,(ulonglong)*puVar10 + 2,puVar10[1]
                            ,puVar10[2]);
              fn_82CF6018(&puStack_a8);
              break;
            case 0x54:
              fn_82CEDE90(param_2,0xffffffff821330d4,puStack_a8,puVar3 + 2,puVar10[1],puVar10[2]);
              fn_82CF6018(&puStack_a8);
              break;
            case 0x6c:
              puStack_a8[iStack_a4 + -3] = 0;
              iStack_a4 = iStack_a4 + -2;
              fn_82CEDE90(param_2,0xffffffff82133140,puStack_a8,(ulonglong)*puVar10 + 2,puVar10[1]
                            ,puVar10[2]);
              break;
            case 0x6d:
              uVar7 = 0xffffffff82133170;
              if ((puVar10[2] & 0x80000000) == 0) {
                uVar7 = 0xffffffff82133178;
              }
              fn_82CEDE90(param_2,0xffffffff82133180,puStack_a8,uVar7,puVar3 + 1,puVar10[1],
                            puVar10[2] & 0x7fffffff);
            }
            puVar10 = puVar10 + 3;
switchD_82cf3f78_caseD_46:;}
          lVar9 = lVar9 + 1;
          iVar5 = iVar5 + 0x24;
        } while ((int)lVar9 < piVar8[1]);
      }
      iStack_ac = iStack_ac + 1;
      iStack_b0 = iStack_b0 + 0xc;
    } while (iStack_ac < param_1[1]);
  }
switchD_82cf3f78_caseD_47:
  iVar5 = fn_82CE5410();
  iStack_a4 = 0;
  if ((uStack_a0 & 0x80000000) == 0) {
    (**(code **)(**(int **)(iVar5 + 0x14) + 0x10))
              (*(int **)(iVar5 + 0x14),puStack_a8,uStack_a0 & 0x3fffffff,1);
  }
  return;
}

