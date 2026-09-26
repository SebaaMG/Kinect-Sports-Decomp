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
extern unsigned int *auStack_38;
extern int fn_822315A0();
extern int fn_82264BB8();
extern int fn_8240BCE8();
extern int fn_824569A8();
extern int fn_82458910();
extern int fn_82508078();
extern unsigned int iStack_34;
extern unsigned int iStack_3c;
extern unsigned int iStack_40;
extern unsigned int lbl_821BA6F0;


void fn_8240C348(int *param_1,int param_2)

{
  undefined4 *puVar1;
  int *piVar3;
  undefined8 uVar2;
  int iVar4;
  int iStack_40;
  int iStack_3c;
  undefined1 auStack_38 [4];
  int iStack_34;
  
  piVar3 = (int *)(**(code **)(*param_1 + 8))();
  uVar2 = (**(code **)(*piVar3 + 0xc))(piVar3,param_2);
  fn_8240BCE8(param_1,3,param_2,uVar2);
  fn_82508078(*(undefined4 *)param_1[9],lbl_821BA6F0,0);
  fn_824569A8(param_1[0x3d]);
  piVar3 = (int *)(**(code **)(*param_1 + 8))(param_1);
  puVar1 = (undefined4 *)param_1[0x42];
  iVar4 = (**(code **)(*piVar3 + 0xc))(piVar3,param_2);
  (**(code **)(param_1[0x11] + 8))(param_1 + 0x11);
  (**(code **)(param_1[0x11] + 4))(param_1 + 0x11);
  fn_82458910(auStack_38,*puVar1,*(undefined4 *)(param_2 + 0x2c));
  fn_82458910(&iStack_40,*puVar1,*(undefined4 *)(iVar4 + 0x2c));
  fn_82264BB8(puVar1[0x16],*(undefined4 *)(iVar4 + 0x2c),*(int *)(iVar4 + 0x24) != 0,
                *(undefined4 *)(iStack_40 + 0xb0),*(undefined4 *)(iStack_40 + 0x60),
                *(undefined4 *)(iStack_40 + 0xd8),*(undefined4 *)(iStack_40 + 0xdc));
  if (iStack_3c != 0) {
    fn_822315A0();
  }
  if (iStack_34 != 0) {
    fn_822315A0();
  }
  return;
}

