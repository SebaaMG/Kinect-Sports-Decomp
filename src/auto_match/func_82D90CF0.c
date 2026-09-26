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
extern unsigned int *auStack_88;
extern int fn_82CE5410();
extern int fn_82D80C18();
extern int fn_82D80C30();
extern int fn_82D80C48();
extern int fn_82DBA1E0();
extern int fn_83088518();
extern int fn_830885D0();
extern int fn_83088640();
extern unsigned int iStack0000001c;
extern unsigned int iStack_48;
extern unsigned int iStack_4c;
extern unsigned int iStack_50;
extern unsigned int iStack_58;
extern unsigned int iStack_5c;
extern unsigned int iStack_60;
extern unsigned int iStack_64;
extern unsigned int iStack_70;
extern unsigned int iStack_74;
extern unsigned int iStack_80;
extern unsigned int iStack_84;
extern unsigned int stack0x0000001c;
extern unsigned int uStack_68;
extern unsigned int uStack_6c;
extern unsigned int uStack_78;
extern unsigned int uStack_7c;


void fn_82D90CF0(int param_1,int param_2)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  int iStack0000001c;
  int aiStack_90 [2];
  undefined1 auStack_88 [4];
  int iStack_84;
  int iStack_80;
  uint uStack_7c;
  uint uStack_78;
  int iStack_74;
  int iStack_70;
  uint uStack_6c;
  uint uStack_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  
  iStack0000001c = param_2;
  if (*(int *)(param_1 + 0x94) == 0) {
    iVar3 = *(int *)(param_2 + 0x10);
    *(undefined4 *)(param_1 + 0x94) = 1;
    if (iVar3 != 0) {
      uVar5 = *(uint *)(param_1 + 0x338);
      iStack_70 = 0;
      uStack_6c = 0;
      uStack_68 = 0x80000000;
      piVar2 = (int *)fn_82CE5410();
      uStack_68 = uVar5 | 0x80000000;
      iStack_70 = *piVar2;
      *piVar2 = (uVar5 * 8 + 0x7f & 0xffffff80) + iStack_70;
      iStack_80 = 0;
      uStack_7c = 0;
      uStack_78 = 0x80000000;
      uVar5 = *(uint *)(param_1 + 0x338);
      iStack_64 = iStack_70;
      piVar2 = (int *)fn_82CE5410();
      uStack_78 = uVar5 | 0x80000000;
      iStack_80 = *piVar2;
      *piVar2 = (uVar5 * 8 + 0x7f & 0xffffff80) + iStack_80;
      iStack_74 = iStack_80;
      if (*(uint *)(param_2 + 0x40) < *(uint *)(param_2 + 0x30)) {
        fn_82DBA1E0(*(undefined4 *)(param_1 + 0x78),&stack0x0000001c,1);
      }
      bVar1 = *(byte *)(param_2 + 0x3f);
      aiStack_90[0] = param_2 + 0x24;
      uVar5 = (uint)bVar1;
      iStack_5c = *(int *)(param_2 + 0x34) - ((uint)*(byte *)(param_2 + 0x3d) << (bVar1 & 0x3f));
      iStack_58 = *(int *)(param_2 + 0x38) - ((uint)*(byte *)(param_2 + 0x3e) << (bVar1 & 0x3f));
      iStack_60 = *(int *)(param_2 + 0x30) - ((uint)*(byte *)(param_2 + 0x3c) << (uVar5 & 0x3f));
      iStack_4c = ((uint)*(byte *)(param_2 + 0x4d) << (uVar5 & 0x3f)) + *(int *)(param_2 + 0x44);
      iStack_48 = ((uint)*(byte *)(param_2 + 0x4e) << (uVar5 & 0x3f)) + *(int *)(param_2 + 0x48);
      iStack_50 = ((uint)*(byte *)(param_2 + 0x4c) << (uVar5 & 0x3f)) + *(int *)(param_2 + 0x40);
      (**(code **)(**(int **)(param_1 + 0x58) + 0x2c))
                (*(int **)(param_1 + 0x58),aiStack_90,&iStack_60,1,&iStack_70,&iStack_80);
      if ((ulonglong)uStack_7c + (ulonglong)uStack_6c != 0) {
        fn_83088640(&iStack_70,&iStack_80);
        fn_830885D0(*(undefined4 *)(param_1 + 100),iStack_80,uStack_7c);
        fn_83088518(*(undefined4 *)(param_1 + 100),iStack_70,uStack_6c);
      }
      iVar3 = iStack_74;
      uStack_7c = -(uint)(iStack_80 != iStack_74) & uStack_7c;
      piVar2 = (int *)fn_82CE5410();
      *piVar2 = iVar3;
      iVar3 = fn_82CE5410();
      uStack_7c = 0;
      if ((uStack_78 & 0x80000000) == 0) {
        (**(code **)(**(int **)(iVar3 + 0x10) + 0x10))
                  (*(int **)(iVar3 + 0x10),iStack_80,uStack_78 & 0x3fffffff);
      }
      iVar3 = iStack_64;
      iStack_80 = 0;
      uStack_78 = 0x80000000;
      uStack_6c = -(uint)(iStack_70 != iStack_64) & uStack_6c;
      piVar2 = (int *)fn_82CE5410();
      *piVar2 = iVar3;
      iVar3 = fn_82CE5410();
      uStack_6c = 0;
      if ((uStack_68 & 0x80000000) == 0) {
        (**(code **)(**(int **)(iVar3 + 0x10) + 0x10))
                  (*(int **)(iVar3 + 0x10),iStack_70,uStack_68 & 0x3fffffff,8);
      }
      iStack_70 = 0;
      uStack_68 = 0x80000000;
    }
    lVar4 = (ulonglong)*(uint *)(param_1 + 0x94) - 1;
    *(int *)(param_1 + 0x94) = (int)lVar4;
    if ((lVar4 == 0) && (*(char *)(param_1 + 0x9c) == '\0')) {
      if (*(int *)(param_1 + 0x8c) != 0) {
        fn_82D80C18(param_1);
      }
      if ((*(int *)(param_1 + 0xa4) == 1) && (*(int *)(param_1 + 0x90) != 0)) {
        fn_82D80C30(param_1);
      }
    }
  }
  else {
    auStack_88[0] = 3;
    iStack_84 = param_2;
    fn_82D80C48(param_1,auStack_88);
  }
  return;
}

