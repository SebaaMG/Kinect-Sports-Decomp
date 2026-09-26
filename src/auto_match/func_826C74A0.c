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
extern int fn_82698F98();
extern int fn_826994A8();
extern int fn_8269D728();
extern int fn_826A17F0();
extern int fn_826BD928();
extern int fn_82703C40();


undefined8 fn_826C74A0(int *param_1,int *param_2,int param_3)

{
  int iVar2;
  undefined8 uVar1;
  byte bVar3;
  int *piVar4;
  
  piVar4 = param_1 + 0x2a;
  iVar2 = fn_826994A8(piVar4,param_2[5]);
  if (iVar2 != -1) {
    fn_826A17F0(param_3,param_2);
    iVar2 = (**(code **)(*(int *)(param_3 + 0x68) + 8))(param_3 + 0x68);
    if (iVar2 == 2) {
      iVar2 = (**(code **)(param_2[0x1a] + 8))(param_2 + 0x1a);
      if (iVar2 == 2) {
        iVar2 = fn_826BD928(param_2 + 0x1a);
        bVar3 = *(byte *)(iVar2 + 0x1cc);
        iVar2 = fn_826BD928(param_3 + 0x68);
        if ((bVar3 >> 5 & 1) == 0) {
          bVar3 = *(byte *)(iVar2 + 0x1cc) & 0xdf;
        }
        else {
          bVar3 = *(byte *)(iVar2 + 0x1cc) | 0x20;
        }
        *(byte *)(iVar2 + 0x1cc) = bVar3;
      }
    }
    (**(code **)(*param_2 + 0x78))(param_2);
    (**(code **)(*param_1 + 0x40))(param_1);
    fn_82703C40();
    fn_8269D728(param_3,param_2);
    uVar1 = fn_826994A8(piVar4,param_2[5]);
    if ((int)uVar1 != -1) {
      fn_82698F98(piVar4,uVar1,param_3);
      *(uint *)(param_1[0x28] + 0xb00) = *(uint *)(param_1[0x28] + 0xb00) | 0x400;
      return 1;
    }
  }
  return 0;
}

