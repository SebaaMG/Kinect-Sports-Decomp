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
extern unsigned int *auStack_70;
extern int fn_8267B890();
extern int fn_8267C498();
extern int fn_82687270();
extern int fn_8268B8E8();
extern int fn_826D6290();
extern int fn_826DFC10();
extern int fn_826F3CF0();
extern int fn_826F47F0();
extern unsigned int iStack_64;
extern unsigned int iStack_68;
extern unsigned int lbl_831E7E64;
extern unsigned int uStack_5c;


undefined4 *
fn_826E0920(undefined4 *param_1,int param_2,uint *param_3,undefined8 param_4,undefined8 param_5,
             uint param_6,undefined2 param_7,undefined2 param_8)

{
  int iVar1;
  int iVar3;
  int iVar4;
  undefined8 uVar2;
  uint auStack_70 [2];
  int iStack_68;
  int iStack_64;
  int *piStack_60;
  undefined4 uStack_5c;
  
  iVar4 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  iVar3 = fn_8267B890(lbl_831E7E64,0x20,0);
  if (iVar3 != 0) {
    iVar4 = fn_826DFC10();
  }
  if (iVar4 != 0) {
    fn_8268B8E8(iVar4 + 0x10,param_4);
    fn_8268B8E8(iVar4 + 0x1c,param_5);
    iVar3 = *(int *)(param_2 + 0x20);
    iVar1 = *(int *)(iVar3 + 0x4c);
    *(uint *)(iVar4 + 8) = param_6 & 0xffff;
    *(undefined2 *)(iVar4 + 0x14) = param_7;
    *(undefined2 *)(iVar4 + 0x16) = param_8;
    *(uint *)(iVar4 + 0xc) = -(uint)(iVar1 != 0) & iVar3 + 0x4cU;
    if ((*param_3 & 0xfff0000) == 0x60000) {
      *(undefined4 *)(iVar4 + 0x18) = 3;
    }
    auStack_70[0] = *param_3;
    uVar2 = fn_826F3CF0(&piStack_60,iVar4);
    uVar2 = fn_826F47F0(&iStack_68,param_2,auStack_70,uVar2);
    fn_826D6290(param_1,uVar2);
    if ((iStack_68 == 0) && (iStack_64 != 0)) {
      fn_82687270();
    }
    if (piStack_60 != (int *)0x0) {
      (**(code **)(*piStack_60 + 8))(piStack_60,uStack_5c);
    }
    fn_8267C498(iVar4);
  }
  return param_1;
}

