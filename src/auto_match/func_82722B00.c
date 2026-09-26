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
extern int fn_8267C4F0();
extern int fn_82722928();
extern int fn_82722980();
extern int fn_8279A690();


int fn_82722B00(int *param_1)

{
  int iVar3;
  int iVar4;
  int *piVar5;
  ulonglong uVar1;
  ulonglong uVar2;
  ushort uVar6;
  
  iVar3 = *(int *)(param_1[0x28] + 0x114);
  if (iVar3 == 0) {
    iVar3 = fn_8279A690();
    if ((*(ushort *)(param_1[0x27] + 0x50) >> 3 & 1) != 0) {
      *(ushort *)(iVar3 + 0x68) = *(ushort *)(iVar3 + 0x68) | 1;
    }
    if ((*(ushort *)(param_1[0x27] + 0x50) >> 5 & 1) != 0) {
      *(ushort *)(iVar3 + 0x68) = *(ushort *)(iVar3 + 0x68) | 2;
    }
    iVar4 = (**(code **)(*param_1 + 0x40))(param_1);
    piVar5 = (int *)(*(code *)**(undefined4 **)(iVar4 + 8))();
    uVar1 = (**(code **)(*piVar5 + 0xc))(piVar5,0x18);
    fn_82722928(iVar3,uVar1);
    iVar4 = (**(code **)(*param_1 + 0x40))(param_1);
    piVar5 = (int *)(*(code *)**(undefined4 **)(iVar4 + 8))();
    uVar2 = (**(code **)(*piVar5 + 0xc))(piVar5,0x19);
    fn_82722980(iVar3,uVar2);
    if ((*(byte *)(param_1 + 0x32) & 1) == 0) {
      uVar6 = *(ushort *)(iVar3 + 0x68) & 0xfffb;
    }
    else {
      uVar6 = *(ushort *)(iVar3 + 0x68) | 4;
    }
    *(ushort *)(iVar3 + 0x68) = uVar6;
    if ((uVar2 & 0xffffffff) != 0) {
      fn_8267C4F0(uVar2);
    }
    if ((uVar1 & 0xffffffff) != 0) {
      fn_8267C4F0(uVar1);
    }
  }
  return iVar3;
}

