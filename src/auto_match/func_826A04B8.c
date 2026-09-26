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


undefined8 fn_826A04B8(int param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar4;
  uint uVar1;
  uint uVar2;
  int iVar3;
  int *piVar5;
  
  cVar4 = fn_8269AEB8(param_3,0);
  if (cVar4 != '\0') {
    piVar5 = (int *)(param_1 + -0x68);
    uVar1 = fn_8269FD90(piVar5,param_3);
    if (((uVar1 != 0xffffffff) && ((int)uVar1 < 0x20)) &&
       (uVar2 = (**(code **)(*piVar5 + 0xf8))(piVar5), (uVar2 & 1 << (uVar1 & 0x3f)) != 0)) {
      if (uVar1 != 0x1f) {
        return 0;
      }
      *(uint *)(param_1 + 0x24) = *(uint *)(param_1 + 0x24) & 0xfffff9ff;
      return 1;
    }
  }
  iVar3 = (**(code **)(*(int *)(param_1 + -0x68) + 0xe4))(param_1 + -0x68);
  if (iVar3 != 0) {
    *(uint *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 1U & 0x8fffffff;
    cVar4 = (**(code **)(*(int *)(iVar3 + 0x10) + 0x18))(iVar3 + 0x10,param_2,param_3);
    if (cVar4 != '\0') {
      fn_826824B0(iVar3);
      return 1;
    }
    fn_826824B0(iVar3);
  }
  return 0;
}

