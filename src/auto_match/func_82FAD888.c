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
extern int fn_82FA9530();
extern int fn_82FA9920();
extern int fn_82FAD390();
extern int fn_82FAE168();
extern int fn_82FAE648();
extern unsigned int iStack_40;


undefined8 fn_82FAD888(int *param_1,int param_2,undefined8 param_3,undefined4 *param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  int iStack_40;
  int aiStack_3c [15];
  
  iVar1 = param_1[1];
  iStack_40 = 0;
  uVar5 = 0;
  aiStack_3c[0] = iVar1;
  if (*(int *)(iVar1 + 0x40) != 0) {
    uVar5 = *(undefined4 *)(*(int *)(iVar1 + 0x40) + 0x60);
    iVar2 = fn_82FAE648(uVar5,param_2,param_3,&iStack_40);
    if (iVar2 != 1) {
      *param_4 = 0;
      return 2;
    }
  }
  if ((((*(ushort *)(param_2 + 0x14) & 0x1000) == 0) || (iStack_40 != 0)) ||
     (uVar6 = 1, (*(ushort *)(param_2 + 0x14) & 0xe000) == 0x2000)) {
    uVar6 = 0;
  }
  uVar3 = fn_82FA9920(iVar1,iStack_40,param_2,uVar6);
  *param_4 = uVar3;
  (**(code **)(*param_1 + 4))(param_1,aiStack_3c,iStack_40);
  iVar2 = *(int *)(aiStack_3c[0] + 4);
  if (iVar2 != 0) {
    aiStack_3c[0] = iVar2;
    iVar4 = fn_82FAE168(uVar5);
    *(int *)(iVar2 + 0xc) = iVar4 - iStack_40;
    fn_82FA9530(iVar1);
    uVar5 = fn_82FAD390(param_1);
    *param_4 = uVar5;
  }
  return 1;
}

