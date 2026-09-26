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
extern int fn_82E0A0F8();
extern int fn_82E0A398();
extern int fn_82E0BA38();
extern int fn_82E0C5E0();


undefined4 * fn_82E0CEB8(undefined4 *param_1,int *param_2)

{
  int iVar1;
  ulonglong uVar2;
  int *piVar4;
  undefined8 uVar3;
  undefined4 uVar5;
  
  if (param_2[0x1e] == 0) {
    uVar5 = fn_82E0A0F8(param_2);
  }
  else {
    uVar5 = *(undefined4 *)(param_2[0x1e] + 0x34);
  }
  *param_1 = uVar5;
  iVar1 = *param_2;
  param_1[1] = 0;
  (**(code **)(iVar1 + 0x28))(param_2);
  uVar2 = fn_82E0A398();
  if ((uVar2 & 0xffffffff) != 0) {
    fn_82E0C5E0(param_2,uVar2);
  }
  piVar4 = (int *)fn_82E0BA38(param_2);
  iVar1 = *piVar4;
  uVar3 = (**(code **)(*param_2 + 0x18))(param_2);
  uVar5 = (**(code **)(iVar1 + 0x10))(piVar4,uVar3);
  param_1[1] = uVar5;
  return param_1;
}

