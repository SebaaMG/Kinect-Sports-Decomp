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
extern int fn_82FABF68();
extern int fn_82FAD100();
extern int fn_82FAD5B0();
extern int fn_82FB72B0();
extern int fn_82FB8C80();


undefined8 fn_82FB7468(int param_1,undefined8 param_2,undefined8 param_3,int *param_4)

{
  undefined8 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 auStack_40 [16];
  
  piVar3 = (int *)(param_1 + 0x40);
  fn_82FAD100(piVar3);
  uVar1 = fn_82FABF68(param_1,param_2,param_3);
  if (((int)uVar1 == 1) && (uVar1 = fn_82FB8C80(param_1 + 0x5c), (int)uVar1 == 1)) {
    iVar2 = fn_82FB72B0(param_1);
    *param_4 = iVar2;
    if ((iVar2 == 0) || (*(int *)(iVar2 + 0x40) == 0)) {
      uVar1 = 2;
    }
    else {
      auStack_40[0] = *(undefined4 *)(param_1 + 0x44);
      *(int *)(param_1 + 0x50) = iVar2;
      (**(code **)(*piVar3 + 4))(piVar3,auStack_40,0);
      if (*(int *)(param_1 + 0xc) == 0) {
        uVar1 = fn_82FAD5B0(piVar3);
      }
    }
  }
  return uVar1;
}

