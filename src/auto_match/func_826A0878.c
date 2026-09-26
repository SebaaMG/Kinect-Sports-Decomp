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
extern int fn_826824B0();
extern int fn_8269AEB8();
extern int fn_8269FD90();


undefined8 fn_826A0878(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar5;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar1;
  int *piVar6;
  
  cVar5 = fn_8269AEB8(param_3,0);
  if (cVar5 != '\0') {
    piVar6 = (int *)(param_1 + -0x68);
    uVar2 = fn_8269FD90(piVar6,param_3);
    if (((uVar2 != 0xffffffff) && ((int)uVar2 < 0x20)) &&
       (uVar3 = (**(code **)(*piVar6 + 0xf8))(piVar6), (uVar3 & 1 << (uVar2 & 0x3f)) != 0)) {
      return 1;
    }
  }
  iVar4 = (**(code **)(*(int *)(param_1 + -0x68) + 0xe4))(param_1 + -0x68);
  if (iVar4 == 0) {
    uVar1 = 0;
  }
  else {
    *(uint *)(iVar4 + 8) = *(int *)(iVar4 + 8) + 1U & 0x8fffffff;
    uVar1 = (**(code **)(*(int *)(iVar4 + 0x10) + 0x24))(iVar4 + 0x10,param_2,param_3,param_4);
    fn_826824B0(iVar4);
  }
  return uVar1;
}

