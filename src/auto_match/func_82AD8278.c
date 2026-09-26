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
extern int fn_82ABE250();
extern int fn_82AD5F68();
extern int fn_82AD6008();
extern int fn_82AD7E28();
extern int fn_82B41D68();
extern int fn_82B82D28();
extern unsigned int uStack_70;


undefined8
fn_82AD8278(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,int param_7)

{
  uint *puVar1;
  uint uVar2;
  bool bVar3;
  uint *puVar7;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar8;
  undefined8 uVar6;
  int iVar9;
  int *piVar10;
  uint uStack_70;
  int aiStack_6c [27];
  
  puVar7 = (uint *)fn_82ABE250(param_1,8,8);
  puVar1 = puVar7 + 1;
  puVar7[1] = (uint)puVar7 | 1;
  *puVar7 = (uint)puVar1 | 1;
  piVar10 = *(int **)(param_7 + 0x14);
  if ((((uint)piVar10 & 1) == 0) && (piVar10 != (int *)0x0)) {
    do {
      if ((piVar10[2] & 0x3f80U) == 0x3800) {
        if ((*piVar10 == 0) || (bVar3 = true, *(int *)(*piVar10 + 4) == 0)) {
          bVar3 = false;
        }
        if (bVar3) {
          uVar4 = fn_82B41D68(param_1,piVar10,param_5,0,1);
          uVar5 = fn_82B41D68(param_1,piVar10,param_6,0,1);
          if ((uVar4 & 0xffffffff) != (uVar5 & 0xffffffff)) {
            if ((*puVar1 & 1) == 0) {
              uVar2 = *puVar7 & 0xfffffffe;
              iVar8 = uVar2 - 4;
              if ((iVar8 == 0) || (*(uint *)(uVar2 + 8) < *(int *)(uVar2 + 4) + 1U))
              goto LAB_82ad837c;
            }
            else {
LAB_82ad837c:
              iVar8 = fn_82AD6008(puVar7,1);
            }
            iVar9 = *(int *)(iVar8 + 8) * 0x24 + iVar8;
            *(int *)(iVar8 + 8) = *(int *)(iVar8 + 8) + 1;
            *(int **)(iVar9 + 0x24) = piVar10;
            *(uint *)(iVar9 + 0x20) = *(uint *)(iVar9 + 0x20) & 0xfffffff0 | 9;
            fn_82B82D28(uVar4,0,iVar9 + 0x10,&uStack_70,aiStack_6c,0,piVar10,0);
            *(uint *)(iVar9 + 0x18) = uStack_70 | 0xe4;
            if (aiStack_6c[0] == 0) {
              fn_82B82D28(uVar5,0,iVar9 + 0x14,&uStack_70,aiStack_6c,0,piVar10,0);
              *(uint *)(iVar9 + 0x1c) = uStack_70 | 0xe4;
              if (aiStack_6c[0] == 0) goto LAB_82ad842c;
            }
            fn_82AD5F68(puVar7);
            break;
          }
        }
      }
LAB_82ad842c:
      piVar10 = *(int **)(((uint)piVar10 & 0xfffffffe) + 0x28);
      if ((((uint)piVar10 & 1) != 0) || (piVar10 == (int *)0x0)) break;
    } while( true );
  }
  if (((*puVar1 & 1) == 0) && (*puVar1 != 0)) {
    fn_82AD7E28(param_1,puVar7,param_3,param_4,param_7,0);
    fn_82AD5F68(puVar7);
    uVar6 = 1;
    *puVar7 = *(uint *)(param_1 + 0x3d0);
    *(uint **)(param_1 + 0x3d0) = puVar7;
  }
  else {
    uVar6 = 0;
  }
  return uVar6;
}

