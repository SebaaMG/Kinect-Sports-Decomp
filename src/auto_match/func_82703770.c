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
extern unsigned int *auStack_40;
extern int fn_8267B890();
extern int fn_82687270();
extern int fn_826CDDC0();
extern int fn_826D4148();
extern int fn_826D90B0();
extern int fn_826D9C00();
extern int fn_826DC518();
extern int fn_826E4198();
extern int fn_826F3458();
extern int fn_82703090();
extern unsigned int uStack_34;


undefined8 fn_82703770(int param_1,int param_2,undefined8 param_3)

{
  int iVar4;
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined4 auStack_40 [2];
  int *piStack_38;
  undefined4 uStack_34;
  
  fn_826D90B0(&piStack_38,0xffffffff82196582,0,0,0,0);
  iVar4 = fn_826E4198(&piStack_38,0,0xffffffff82196582,*(undefined4 *)(param_1 + 0x14),0,0);
  if (iVar4 != 0) {
    fn_826D9C00(*(undefined4 *)(iVar4 + 0x20));
    fn_826F3458(param_2,iVar4);
    uVar1 = fn_8267B890(*(undefined4 *)(param_1 + 0x14),0x20,0);
    if ((uVar1 & 0xffffffff) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = fn_826DC518(uVar1,iVar4,*(undefined4 *)(param_2 + 8),
                                *(undefined4 *)(param_2 + 0x3c),0,
                                *(undefined4 *)(*(int *)(param_1 + 0x100) + 0x14),
                                *(undefined4 *)(param_1 + 0x14),1);
    }
    if ((uVar1 & 0xffffffff) != 0) {
      uVar2 = fn_8267B890(*(undefined4 *)(param_1 + 0x14),0x1d8,0);
      if ((uVar2 & 0xffffffff) == 0) {
        uVar3 = 0;
      }
      else {
        auStack_40[0] = 0x40000;
        uVar3 = fn_826D4148(uVar2,iVar4,uVar1,param_1,0,auStack_40,1);
      }
      fn_826CDDC0(uVar3,param_3);
      fn_82703090(param_1,param_3,uVar3);
      fn_82687270(uVar1);
      fn_82687270(iVar4);
      if (piStack_38 == (int *)0x0) {
        return uVar3;
      }
      (**(code **)(*piStack_38 + 8))(piStack_38,uStack_34);
      return uVar3;
    }
    fn_82687270(iVar4);
  }
  if (piStack_38 != (int *)0x0) {
    (**(code **)(*piStack_38 + 8))(piStack_38,uStack_34);
  }
  return 0;
}

