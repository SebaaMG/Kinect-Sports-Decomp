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
extern int fn_82CE4118();
extern int fn_82CE52E0();
extern int fn_82CE5410();
extern int fn_82CEAC20();
extern int fn_82E0DF70();
extern int fn_82E162A8();
extern int fn_82E16858();
extern int fn_82E168C0();
extern int fn_82E17CD8();
extern int fn_82E17DD0();
extern unsigned int iStack_5c;
extern unsigned int iStack_60;
extern unsigned int iStack_6c;
extern unsigned int iStack_70;
extern unsigned int uStack_58;
extern unsigned int uStack_68;


undefined8 fn_82E0BFD8(int *param_1,int *param_2,int param_3,int param_4)

{
  int iVar2;
  int iVar3;
  undefined8 uVar1;
  uint uVar4;
  int *piVar5;
  int iVar6;
  int iStack_70;
  int iStack_6c;
  uint uStack_68;
  int iStack_60;
  int iStack_5c;
  uint uStack_58;
  
  if (param_1[0x1f] != 0) {
    fn_82CE4118();
  }
  param_1[0x1f] = 0;
  fn_82E162A8(param_1[6],0);
  iVar6 = param_3 * 0x30 + param_1[8];
  iVar3 = *(int *)(iVar6 + 0x2c);
  if (param_4 == 0) {
    iVar2 = fn_82CE5410();
    param_4 = fn_82CE52E0(*(undefined4 *)(iVar2 + 0x10),iVar3);
    fn_82E0DF70(param_1[6],param_4);
  }
  iVar2 = (**(code **)(*param_2 + 0x10))(param_2,param_4,iVar3);
  if (iVar2 == iVar3) {
    iVar3 = 0;
    piVar5 = (int *)(*(int *)(iVar6 + 0x18) + param_4);
    uVar4 = *(int *)(iVar6 + 0x1c) - *(int *)(iVar6 + 0x18);
    if (0 < (longlong)
            ((longlong)((int)uVar4 >> 2) + (ulonglong)((int)uVar4 < 0 && (uVar4 & 3) != 0))) {
      do {
        if (*piVar5 != -1) {
          *(int *)(*piVar5 + param_4) = piVar5[1] + param_4;
        }
        iVar3 = iVar3 + 2;
        piVar5 = piVar5 + 2;
        uVar4 = *(int *)(iVar6 + 0x1c) - *(int *)(iVar6 + 0x18);
      } while (iVar3 < (int)(((int)uVar4 >> 2) + (uint)((int)uVar4 < 0 && (uVar4 & 3) != 0)));
    }
    iStack_70 = 0;
    iStack_6c = 0;
    uStack_68 = 0x80000000;
    fn_82E17CD8(iVar6,param_4,&iStack_70);
    iVar3 = 0;
    if (0 < iStack_6c) {
      iVar2 = 0;
      do {
        fn_82E16858(param_1[6],*(undefined4 *)(iVar2 + iStack_70),
                          *(undefined4 *)(iVar2 + iStack_70 + 4));
        iVar3 = iVar3 + 1;
        iVar2 = iVar2 + 8;
      } while (iVar3 < iStack_6c);
    }
    iVar3 = fn_82CE5410();
    iStack_6c = 0;
    if ((uStack_68 & 0x80000000) == 0) {
      (**(code **)(**(int **)(iVar3 + 0x10) + 0x10))
                (*(int **)(iVar3 + 0x10),iStack_70,uStack_68 & 0x3fffffff,8);
    }
    iStack_70 = 0;
    uStack_68 = 0x80000000;
    iStack_60 = 0;
    iStack_5c = 0;
    uStack_58 = 0x80000000;
    fn_82E17DD0(iVar6,param_4,&iStack_60);
    iVar3 = 0;
    if (0 < iStack_5c) {
      iVar6 = 0;
      do {
        fn_82E168C0(param_1[6],*(undefined4 *)(iVar6 + iStack_60),
                          *(undefined4 *)(iVar6 + iStack_60 + 4));
        iVar3 = iVar3 + 1;
        iVar6 = iVar6 + 8;
      } while (iVar3 < iStack_5c);
    }
    iVar3 = fn_82CE5410();
    iStack_5c = 0;
    if ((uStack_58 & 0x80000000) == 0) {
      (**(code **)(**(int **)(iVar3 + 0x10) + 0x10))
                (*(int **)(iVar3 + 0x10),iStack_60,uStack_58 & 0x3fffffff,8);
    }
    iStack_60 = 0;
    uStack_58 = 0x80000000;
    *(int *)(param_3 * 4 + param_1[9]) = param_4;
    iVar3 = param_1[7];
    if (((param_3 == *(int *)(iVar3 + 0x20)) && (-1 < *(int *)(iVar3 + 0x24))) &&
       (*(int *)(iVar3 + 0xc) < 3)) {
      (**(code **)(*param_1 + 0x3c))(param_1);
      iVar3 = fn_82CEAC20();
      *(int *)(param_1[7] + 0x24) = iVar3 - param_4;
    }
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

