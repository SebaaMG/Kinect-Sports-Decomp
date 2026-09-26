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
extern unsigned int *auStack_68;
extern int fn_82CE5410();
extern int fn_82D80C18();
extern int fn_82D80C30();
extern int fn_82D80C48();
extern int fn_82D9A040();
extern int fn_82D9A160();
extern int fn_82F68B74();
extern int fn_83088518();
extern int fn_830885D0();
extern int fn_83088640();
extern int fn_83096038();
extern int fn_83096040();
extern unsigned int iStack_34;
extern unsigned int iStack_40;
extern unsigned int iStack_44;
extern unsigned int iStack_50;
extern unsigned int iStack_64;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_60;


void fn_82D8CD68(longlong param_1,int param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int in_r0;
  int iVar4;
  int *piVar5;
  int iVar6;
  longlong lVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int aiStack_70 [2];
  undefined1 auStack_68 [4];
  int iStack_64;
  undefined4 uStack_60;
  int iStack_50;
  uint uStack_4c;
  uint uStack_48;
  int iStack_44;
  int iStack_40;
  uint uStack_3c;
  uint uStack_38;
  int iStack_34;
  
  param_1 = param_1 + 0xb0;
  puVar2 = (undefined4 *)(in_r0 + param_2 & 0xfffffff0);
  uVar8 = puVar2[1];
  uVar9 = puVar2[2];
  uVar10 = puVar2[3];
  puVar3 = (undefined4 *)(in_r0 + (int)param_1 & 0xfffffff0);
  *puVar3 = *puVar2;
  puVar3[1] = uVar8;
  puVar3[2] = uVar9;
  puVar3[3] = uVar10;
  puVar2 = (undefined4 *)(param_2 + 0x10U & 0xfffffff0);
  uVar8 = puVar2[1];
  uVar9 = puVar2[2];
  uVar10 = puVar2[3];
  puVar3 = (undefined4 *)((int)param_1 + 0x10U & 0xfffffff0);
  *puVar3 = *puVar2;
  puVar3[1] = uVar8;
  puVar3[2] = uVar9;
  puVar3[3] = uVar10;
  iVar4 = fn_82F68B74();
  iVar6 = *(int *)(iVar4 + 8);
  if (iVar6 != 0) {
    if ((ulonglong)*(uint *)(iVar6 + 0x98) + (ulonglong)*(uint *)(iVar6 + 0x94) == 0) {
      *(int *)(*(int *)(iVar4 + 8) + 0x94) = *(int *)(*(int *)(iVar4 + 8) + 0x94) + 1;
      uVar1 = *(uint *)(*(int *)(iVar4 + 8) + 0x33c);
      iStack_40 = 0;
      uStack_3c = 0;
      uStack_38 = 0x80000000;
      piVar5 = (int *)fn_82CE5410();
      uStack_38 = uVar1 | 0x80000000;
      iStack_40 = *piVar5;
      *piVar5 = (uVar1 * 8 + 0x7f & 0xffffff80) + iStack_40;
      uVar1 = *(uint *)(*(int *)(iVar4 + 8) + 0x33c);
      iStack_50 = 0;
      uStack_4c = 0;
      uStack_48 = 0x80000000;
      iStack_34 = iStack_40;
      piVar5 = (int *)fn_82CE5410();
      uStack_48 = uVar1 | 0x80000000;
      iStack_50 = *piVar5;
      aiStack_70[0] = iVar4 + 0x24;
      *piVar5 = (uVar1 * 8 + 0x7f & 0xffffff80) + iStack_50;
      iStack_44 = iStack_50;
      if (*(int *)(*(int *)(*(int *)(iVar4 + 8) + 0x58) + 0x10) != 0) {
        fn_83096038();
      }
      piVar5 = *(int **)(*(int *)(iVar4 + 8) + 0x58);
      (**(code **)(*piVar5 + 0x28))(piVar5,aiStack_70,param_1,1,&iStack_40,&iStack_50);
      if ((uStack_3c != 0) || (uStack_4c != 0)) {
        fn_83088640(&iStack_40,&iStack_50);
        fn_830885D0(*(undefined4 *)(*(int *)(iVar4 + 8) + 100),iStack_50,uStack_4c);
        fn_83088518(*(undefined4 *)(*(int *)(iVar4 + 8) + 100),iStack_40,uStack_3c);
        fn_82D9A160(iVar4);
      }
      if (*(int *)(*(int *)(*(int *)(iVar4 + 8) + 0x58) + 0x10) != 0) {
        fn_83096040();
      }
      fn_82D9A040(iVar4,param_1);
      if (*(int *)(*(int *)(iVar4 + 8) + 0x5c) != 0) {
        piVar5 = *(int **)(*(int *)(iVar4 + 8) + 0x5c);
        (**(code **)(*piVar5 + 0x14))(piVar5,0);
      }
      iVar6 = *(int *)(iVar4 + 8);
      lVar7 = (ulonglong)*(uint *)(iVar6 + 0x94) - 1;
      *(int *)(iVar6 + 0x94) = (int)lVar7;
      if ((lVar7 == 0) && (*(char *)(iVar6 + 0x9c) == '\0')) {
        if (*(int *)(iVar6 + 0x8c) != 0) {
          fn_82D80C18(iVar6);
        }
        if ((*(int *)(iVar6 + 0xa4) == 1) && (*(int *)(iVar6 + 0x90) != 0)) {
          fn_82D80C30(iVar6);
        }
      }
      iVar6 = iStack_44;
      uStack_4c = -(uint)(iStack_50 != iStack_44) & uStack_4c;
      piVar5 = (int *)fn_82CE5410();
      *piVar5 = iVar6;
      iVar6 = fn_82CE5410();
      uStack_4c = 0;
      if ((uStack_48 & 0x80000000) == 0) {
        (**(code **)(**(int **)(iVar6 + 0x10) + 0x10))
                  (*(int **)(iVar6 + 0x10),iStack_50,uStack_48 & 0x3fffffff);
      }
      iVar6 = iStack_34;
      iStack_50 = 0;
      uStack_48 = 0x80000000;
      uStack_3c = -(uint)(iStack_40 != iStack_34) & uStack_3c;
      piVar5 = (int *)fn_82CE5410();
      *piVar5 = iVar6;
      iVar6 = fn_82CE5410();
      uStack_3c = 0;
      if ((uStack_38 & 0x80000000) == 0) {
        (**(code **)(**(int **)(iVar6 + 0x10) + 0x10))
                  (*(int **)(iVar6 + 0x10),iStack_40,uStack_38 & 0x3fffffff,8);
      }
    }
    else {
      uStack_60 = (undefined4)param_1;
      auStack_68[0] = 0x11;
      iStack_64 = iVar4;
      fn_82D80C48(iVar6,auStack_68);
    }
  }
  return;
}

