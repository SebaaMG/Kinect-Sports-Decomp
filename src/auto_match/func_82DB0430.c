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
extern unsigned int *auStack_310;
extern unsigned int *auStack_5d0;
extern unsigned int *auStack_610;
extern unsigned int *auStack_650;
extern unsigned int *auStack_658;
extern unsigned int *auStack_660;
extern int fn_82D7C3D8();
extern int fn_82D7C6F8();
extern int fn_82D7CE78();
extern int fn_82D909F0();
extern unsigned int iStack_65c;


void fn_82DB0430(int *param_1,int *param_2,int *param_3)

{
  uint uVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  undefined1 auStack_660 [4];
  int iStack_65c;
  undefined4 auStack_658 [2];
  undefined1 auStack_650 [64];
  undefined1 auStack_610 [64];
  undefined1 auStack_5d0 [704];
  undefined1 auStack_310 [784];
  
  iVar5 = (int)*(char *)(param_1 + 4) + (int)param_1;
  iVar4 = (int)*(char *)(param_2 + 4) + (int)param_2;
  if (((*(char *)(iVar5 + 0xe8) != '\x05') && (*(char *)(iVar4 + 0xe8) != '\x05')) &&
     (*(int *)(iVar5 + 0xcc) != *(int *)(iVar4 + 0xcc))) {
    fn_82D909F0(*(undefined4 *)(iVar5 + 8),iVar5,iVar4);
  }
  if ((*(short *)(*(uint *)(iVar5 + 0xcc) + 0x20) != -1) ||
     (uVar1 = *(uint *)(iVar4 + 0xcc), *(short *)(*(uint *)(iVar4 + 0xcc) + 0x20) == -1)) {
    uVar1 = *(uint *)(iVar5 + 0xcc);
  }
  auStack_660[0] = 0;
  piVar2 = param_1;
  if (*(int *)(*param_1 + 0xc) == 0xf) {
    piVar2 = (int *)fn_82D7C6F8(param_1,auStack_650,auStack_5d0,4,auStack_660);
  }
  piVar3 = param_2;
  if (*(int *)(*param_2 + 0xc) == 0xf) {
    piVar3 = (int *)fn_82D7C6F8(param_2,auStack_610,auStack_310,4,auStack_660);
  }
  fn_82D7C3D8(piVar2,piVar3,param_3,auStack_658,&iStack_65c);
  piVar7 = param_1;
  piVar6 = piVar3;
  if (iStack_65c != 0) {
    piVar7 = param_2;
    param_2 = param_1;
    piVar6 = piVar2;
    piVar2 = piVar3;
  }
  piVar3 = *(int **)((*(char *)(iVar5 + 0x8c) * 8 + (int)*(char *)(iVar4 + 0x8c) + 3) * 4 + *param_3
                    );
  (**(code **)(*piVar3 + 0xc))(piVar3,piVar7,param_2,param_3);
  fn_82D7CE78((ulonglong)uVar1 + 0x58,piVar7,piVar2,param_2,piVar6,auStack_660[0],
                    auStack_658[0],param_3);
  return;
}

