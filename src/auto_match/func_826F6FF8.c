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
extern int fn_8267B890();
extern int fn_8267C4F0();
extern int fn_82687270();
extern int fn_826D90B0();
extern int fn_826DC518();
extern int fn_826DEB00();
extern int fn_826E4198();
extern int fn_826F3458();
extern int fn_826F5070();
extern unsigned int lbl_831E7E64;
extern unsigned int uStack_4c;


undefined8
fn_826F6FF8(int param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4,int param_5)

{
  undefined4 uVar1;
  ulonglong uVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  undefined8 uVar6;
  int *piStack_50;
  undefined4 uStack_4c;
  
  uVar6 = 0;
  iVar5 = 0;
  if (param_5 == 0) {
    uVar2 = fn_8267B890(lbl_831E7E64,0x54,0);
    if ((uVar2 & 0xffffffff) == 0) {
      param_5 = 0;
      iVar5 = param_5;
    }
    else {
      lVar4 = (ulonglong)*(uint *)(param_1 + 0x100) + 8;
      if ((ulonglong)*(uint *)(param_1 + 0x100) == 0) {
        lVar4 = 0;
      }
      param_5 = fn_826F5070(uVar2,*(undefined4 *)(*(int *)(param_1 + 0x6c) + 0x14),lVar4,0);
      iVar5 = param_5;
    }
  }
  if ((param_2 & 0xffffffff) != 0) {
    fn_826D90B0(&piStack_50,param_4,0,0,0,0);
    uVar1 = *(undefined4 *)(param_1 + 0x14);
    iVar3 = fn_826E4198(&piStack_50,2,param_4,uVar1,0,0);
    if (iVar3 == 0) {
      if (piStack_50 != (int *)0x0) {
        (**(code **)(*piStack_50 + 8))(piStack_50,uStack_4c);
      }
      if (iVar5 != 0) {
        fn_8267C4F0(iVar5);
      }
      return 0;
    }
    fn_826DEB00(*(undefined4 *)(iVar3 + 0x20),0,param_2,param_3);
    fn_826F3458(param_5,iVar3);
    uVar2 = fn_8267B890(uVar1,0x20,0);
    if ((uVar2 & 0xffffffff) == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = fn_826DC518(uVar2,iVar3,*(undefined4 *)(param_5 + 8),
                                *(undefined4 *)(param_5 + 0x3c),0,
                                *(undefined4 *)(*(int *)(param_1 + 0x100) + 0x14),uVar1,1);
    }
    fn_82687270(iVar3);
    if (piStack_50 != (int *)0x0) {
      (**(code **)(*piStack_50 + 8))(piStack_50,uStack_4c);
    }
  }
  if (iVar5 != 0) {
    fn_8267C4F0(iVar5);
  }
  return uVar6;
}

