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
extern int fn_82694D70();
extern int fn_82695608();
extern int fn_82696958();
extern int fn_8269AEB8();
extern int fn_8269B718();
extern int fn_8269FD90();
extern int fn_82701D38();
extern int fn_82703F00();


undefined8 fn_826A05B8(int *param_1,int param_2,int *param_3,char *param_4,undefined8 param_5)

{
  bool bVar1;
  char cVar5;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  byte bVar6;
  int *piVar7;
  
  cVar5 = fn_8269AEB8(param_3,0);
  if (cVar5 != '\0') {
    piVar7 = param_1 + -0x1a;
    uVar2 = fn_8269FD90(piVar7,param_3);
    cVar5 = (**(code **)(param_1[-0x1a] + 0xfc))(piVar7,uVar2,param_4,0);
    if (cVar5 != '\0') {
      return 1;
    }
    if ((int)uVar2 == 0x57) {
      iVar3 = (**(code **)(*piVar7 + 0x5c))(piVar7);
      if (*(char *)(*(int *)(iVar3 + 0x78) + 0x2a4) == '\x01') {
        uVar2 = (**(code **)(*piVar7 + 0x5c))(piVar7);
        cVar5 = fn_82695608(param_4,uVar2);
        if (cVar5 == '\0') {
          bVar6 = *(byte *)((int)param_1 + -2) & 0xfd;
        }
        else {
          bVar6 = *(byte *)((int)param_1 + -2) | 2;
        }
        *(byte *)((int)param_1 + -2) = bVar6;
        if ((*(byte *)((int)param_1 + -2) & 2) == 0) {
          uVar2 = (**(code **)(*piVar7 + 0x40))(piVar7);
          fn_82703F00(uVar2,piVar7);
        }
        else {
          uVar2 = (**(code **)(*piVar7 + 0x40))(piVar7);
          fn_82701D38(uVar2,piVar7);
        }
      }
    }
    else if (((int)uVar2 == 0x58) &&
            (iVar3 = (**(code **)(*piVar7 + 0x5c))(piVar7),
            *(char *)(*(int *)(iVar3 + 0x78) + 0x2a4) == '\x01')) {
      uVar2 = (**(code **)(*piVar7 + 0x5c))(piVar7);
      uVar4 = fn_82695608(param_4,uVar2);
      if ((uVar4 & 0xff) != ((uint)param_1[9] >> 2 & 1)) {
        if ((uVar4 & 0xff) == 0) {
          uVar4 = param_1[9] & 0xfffffffb;
        }
        else {
          uVar4 = param_1[9] | 4;
        }
        param_1[9] = uVar4;
        uVar2 = (**(code **)(*piVar7 + 0x40))(piVar7);
        fn_8269B718(piVar7,uVar2);
        if ((param_1[-0x12] != 0) && ((*(uint *)(param_1[-0x12] + 0x8c) >> 2 & 1) == 0)) {
          (**(code **)(*piVar7 + 0x10c))(piVar7);
        }
      }
    }
  }
  if (*(byte *)(param_2 + 0x7c) < 7) {
    if (*(int *)(*param_3 + 4) == 0) {
      fn_82694D70();
    }
    bVar1 = *(int *)(*(int *)(*(int *)(param_2 + 0x78) + 0x134) + 4) == *(int *)(*param_3 + 4);
  }
  else {
    bVar1 = *param_3 == *(int *)(*(int *)(param_2 + 0x78) + 0x134);
  }
  if ((bVar1) && (*param_4 != '\n')) {
    iVar3 = *param_1;
    uVar2 = fn_82696958(param_4,0);
    (**(code **)(iVar3 + 0x34))(param_1,param_2 + 0x78,uVar2);
  }
  iVar3 = (**(code **)(param_1[-0x1a] + 0xe4))(param_1 + -0x1a);
  if (iVar3 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (**(code **)(*(int *)(iVar3 + 0x10) + 0xc))
                      (iVar3 + 0x10,param_2,param_3,param_4,param_5);
  }
  return uVar2;
}

