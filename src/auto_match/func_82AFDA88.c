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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern int fn_82AA6648();
extern int fn_82ABE250();
extern int fn_82ABE5F8();
extern int fn_82AD18C0();
extern int fn_82AD1918();
extern int fn_82AD6090();
extern int fn_82AF87E0();
extern int fn_82B82D28();
extern unsigned int iStack_5c;
extern unsigned int iStack_60;
extern unsigned int iStack_70;
extern unsigned int uStack_6c;


void fn_82AFDA88(int param_1,uint param_2,ulonglong param_3,uint *param_4)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  uint *puVar6;
  int iVar7;
  int iVar8;
  uint *puVar9;
  uint uVar10;
  int *piVar11;
  int iStack_70;
  undefined4 uStack_6c;
  int aiStack_68 [2];
  int iStack_60;
  int iStack_5c;
  
  puVar6 = (uint *)fn_82ABE250(param_1,8,0x1c);
  puVar4 = puVar6 + 1;
  puVar6[1] = (uint)puVar6 | 1;
  *puVar6 = (uint)puVar4 | 1;
  do {
    piVar11 = (int *)(param_2 + 0x2c);
    for (uVar10 = 0; uVar10 < (*(uint *)(param_2 + 8) >> 0x13 & 7); uVar10 = uVar10 + 1) {
      iVar7 = *piVar11;
      fn_82B82D28(iVar7,param_3,aiStack_68,&uStack_6c,&iStack_70,
                        *(undefined4 *)(param_2 + 0x1c),0,1);
      uVar5 = *(uint *)(aiStack_68[0] + 8) >> 7 & 0x7f;
      if (uVar5 == 2) {
        iStack_5c = iVar7;
        if (aiStack_68[0] != *(int *)(iVar7 + 0xc)) {
          iVar7 = fn_82AD1918(param_1,aiStack_68[0],uStack_6c,iStack_70);
        }
        iStack_60 = iVar7;
        if ((param_4[1] & 1) == 0) {
          uVar5 = *param_4 & 0xfffffffe;
          iVar7 = uVar5 - 4;
          if ((iVar7 == 0) || (*(uint *)(uVar5 + 8) < *(int *)(uVar5 + 4) + 1U)) goto LAB_82afdb78;
        }
        else {
LAB_82afdb78:
          iVar7 = fn_82AF87E0(param_4,1);
        }
        iVar8 = *(int *)(iVar7 + 8);
        *(int *)(iVar7 + 8) = iVar8 + 1;
        *(ulonglong *)((iVar8 + 2) * 8 + iVar7) = CONCAT44(iStack_60,iStack_5c);
      }
      else if ((uVar5 == 1) && (iStack_70 == 0)) {
        if (((int)param_3 != 0) || (aiStack_68[0] != *(int *)(iVar7 + 0xc))) {
          iVar7 = fn_82AD18C0(param_1,aiStack_68[0],uStack_6c);
        }
        if ((*puVar4 & 1) == 0) {
          uVar5 = *puVar6 & 0xfffffffe;
          iVar8 = uVar5 - 4;
          if ((iVar8 == 0) || (*(uint *)(uVar5 + 8) < *(int *)(uVar5 + 4) + 1U)) goto LAB_82afdc0c;
        }
        else {
LAB_82afdc0c:
          iVar8 = fn_82AD6090(puVar6,1);
        }
        iVar1 = *(int *)(iVar8 + 8);
        *(int *)(iVar8 + 8) = iVar1 + 1;
        *(int *)((iVar1 + 4) * 4 + iVar8) = iVar7;
      }
      piVar11 = piVar11 + 1;
    }
    if (((*puVar4 & 1) != 0) || (*puVar4 == 0)) {
      *puVar6 = *(uint *)(param_1 + 0x3d0);
      *(uint **)(param_1 + 0x3d0) = puVar6;
      return;
    }
    puVar2 = (uint *)(*puVar6 & 0xfffffffe);
    puVar9 = puVar2 + -1;
    uVar10 = puVar2[1] - 1;
    puVar3 = (uint *)puVar9[puVar2[1] + 3];
    puVar2[1] = uVar10;
    if (uVar10 == 0) {
      *(uint *)(*puVar2 & 0xfffffffe) = *puVar9;
      *(uint *)(*puVar9 & 0xfffffffe) = *puVar2;
      fn_82AA6648(puVar6,puVar9,((ulonglong)puVar2[2] + 4 & 0x3fffffff) << 2);
    }
    param_2 = puVar3[3];
    param_3 = (ulonglong)(*puVar3 >> 5) & 3;
    if (puVar3[4] == 0) {
      puVar9 = (uint *)(param_2 + 4);
      for (puVar2 = *(uint **)(param_2 + 4); puVar2 != puVar3; puVar2 = (uint *)puVar2[2]) {
        puVar9 = puVar2 + 2;
      }
      *puVar9 = puVar2[2];
      fn_82ABE5F8(param_1,puVar3,0x14,0x1a);
    }
  } while( true );
}

