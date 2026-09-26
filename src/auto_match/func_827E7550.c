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
extern int fn_82517A50();
extern int fn_827D50C0();
extern int fn_827D50F8();
extern int fn_827D9DC0();
extern int fn_827D9DE8();
extern int fn_827E4218();


undefined8 fn_827E7550(int *param_1,uint *param_2)

{
  int iVar3;
  undefined8 uVar1;
  ulonglong uVar2;
  int *piVar4;
  
  piVar4 = param_1 + 5;
  iVar3 = fn_827D50F8(param_1[5]);
  if (iVar3 == 0) {
    uVar2 = fn_827D9DC0(param_1[2]);
    if (((uVar2 & 1) == 0) && (iVar3 = fn_827D9DE8(param_1[2]), iVar3 < 1)) {
      uVar2 = fn_827D9DC0(param_1[2]);
      if ((uVar2 & 2) == 0) {
        fn_827D50C0(*piVar4,6);
        return 6;
      }
      uVar1 = (**(code **)(*param_1 + 0x20))(param_1);
      fn_827E4218(uVar1,param_2);
      *(int **)(*param_2 + 0x24) = param_1;
      fn_827D50C0(*piVar4,0x3e5);
      *(int *)*param_2 = param_1[2];
      fn_82517A50((ulonglong)*param_2 + 4,piVar4);
      piVar4 = *(int **)(param_1[1] * 0x28 + param_1[8] + 0x74);
      uVar1 = (**(code **)(*piVar4 + 0x18))(piVar4,*param_2);
      if (((int)uVar1 != 0x3e5) && ((int)uVar1 != 0x3e4)) {
        return uVar1;
      }
      return 0;
    }
    uVar1 = 0x3e4;
  }
  else {
    uVar1 = 0x4c7;
  }
  return uVar1;
}

