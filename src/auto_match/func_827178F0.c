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
extern int fn_82696BC8();
extern int fn_8269FD90();


undefined8 fn_827178F0(int param_1,int param_2,int *param_3,undefined8 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  char cVar4;
  
  if ((*(uint *)(*param_3 + 0xc) >> 0x1d & 1) != 0) {
    iVar1 = *(int *)(param_1 + -0x68);
    uVar3 = fn_8269FD90(param_1 + -0x68,param_3);
    cVar4 = (**(code **)(iVar1 + 0x100))(param_1 + -0x68,uVar3,param_4,0);
    if (cVar4 != '\0') {
      return 1;
    }
  }
  iVar1 = *(int *)(param_1 + 0x54);
  if (iVar1 == 0) {
    if ((param_2 == 0) || (*param_3 != *(int *)(*(int *)(param_2 + 0x78) + 0x134))) {
      iVar1 = *(int *)(param_1 + 4);
      if ((iVar1 != 0) &&
         (cVar4 = (**(code **)(*(int *)(iVar1 + 0x10) + 0x10))(iVar1 + 0x10,param_2,param_3,param_4)
         , cVar4 != '\0')) {
        return 1;
      }
      if ((param_2 == 0) || (*param_3 != *(int *)(*(int *)(param_2 + 0x78) + 0xfc))) {
        return 0;
      }
      uVar2 = *(undefined4 *)(*(int *)(param_2 + 0x78) + 0x2a0);
    }
    else {
      uVar2 = *(undefined4 *)(param_1 + 4);
    }
    fn_82696BC8(param_4,uVar2);
    return 1;
  }
  uVar3 = (**(code **)(*(int *)(iVar1 + 0x10) + 0x10))(iVar1 + 0x10,param_2,param_3,param_4);
  return uVar3;
}

