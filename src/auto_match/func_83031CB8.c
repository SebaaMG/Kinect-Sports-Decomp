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
extern unsigned int *auStack_100;
extern unsigned int *auStack_e0;
extern int fn_82F68CC0();
extern int fn_83032B08();
extern int fn_83032B40();
extern int fn_83032D88();
extern int fn_83033910();
extern int fn_830339D8();
extern int fn_83033B60();
extern int fn_83033C00();
extern int fn_83033C70();
extern int fn_83033D28();
extern int fn_83033DC8();
extern unsigned int iStack_f0;


undefined8 fn_83031CB8(int param_1,int *param_2)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  int aiStack_110 [4];
  undefined1 auStack_100 [16];
  int iStack_f0;
  undefined1 auStack_e0 [120];
  undefined1 *puStack_68;
  
  iVar2 = *param_2;
  uVar9 = 1;
  fn_83033C00(aiStack_110,param_2,param_1);
  iVar8 = *(int *)(param_1 + 0x7c);
  iVar7 = 0;
  iVar6 = *(int *)(param_1 + 0x80) - iVar8;
  if (iVar8 != *(int *)(param_1 + 0x80)) {
    do {
      piVar3 = *(int **)(iVar8 + 4);
      fn_82F68CC0(auStack_e0,param_2,0x88);
      if (iVar2 == 1) {
        fn_830339D8(auStack_100,puStack_68);
        if (iVar6 >> 3 == 1) {
          iVar4 = fn_83033C70(param_1,*(undefined4 *)(puStack_68 + 0x10));
          if (iVar4 != 0) {
            fn_83032B08();
          }
          bVar1 = iStack_f0 != 0;
          iStack_f0 = iVar4;
          if (bVar1) {
            fn_83032D88();
          }
LAB_83031de4:
          puStack_68 = auStack_100;
          uVar9 = (**(code **)(*piVar3 + 0x18))(piVar3,auStack_e0);
        }
        else {
          iVar5 = fn_83032B40();
          iVar4 = iStack_f0;
          bVar1 = iStack_f0 != 0;
          iStack_f0 = iVar5;
          if (bVar1) {
            fn_83032D88(iVar4);
          }
          if (iStack_f0 == 0) {
            uVar9 = 0x34;
          }
          else {
            uVar9 = fn_83033B60(param_1,auStack_100,auStack_e0,aiStack_110);
            if ((int)uVar9 == 1) goto LAB_83031de4;
          }
        }
        fn_83033910(auStack_100);
      }
      else {
        uVar9 = (**(code **)(*piVar3 + 0x18))(piVar3,auStack_e0);
      }
      if ((int)uVar9 != 1) break;
      iVar8 = iVar8 + 8;
      iVar7 = iVar7 + 1;
    } while (iVar8 != *(int *)(param_1 + 0x80));
  }
  if (iVar2 == 1) {
    if (iVar7 == 0) {
      uVar9 = fn_83033DC8(param_1,param_2);
    }
    else {
      if (aiStack_110[0] == 0) {
        return uVar9;
      }
      uVar9 = fn_83033D28(param_1);
    }
  }
  if (aiStack_110[0] != 0) {
    fn_83032D88();
  }
  return uVar9;
}

