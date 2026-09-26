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
extern int fn_827D50F8();
extern int fn_827E4218();


undefined8 fn_827E5CB8(int *param_1,uint *param_2)

{
  int *piVar1;
  code *pcVar2;
  int iVar4;
  undefined8 uVar3;
  
  iVar4 = fn_827D50F8(param_1[5]);
  if (iVar4 == 0) {
    uVar3 = (**(code **)(*param_1 + 0x20))(param_1);
    fn_827E4218(uVar3,param_2);
    *(int **)(*param_2 + 0x24) = param_1;
    *(int *)*param_2 = param_1[2];
    fn_82517A50((ulonglong)*param_2 + 4,param_1 + 5);
    if (param_1[0xc] == 0) {
      piVar1 = *(int **)(param_1[1] * 0x28 + param_1[8] + 0x74);
      pcVar2 = *(code **)(*piVar1 + 8);
    }
    else {
      if (param_1[0xc] != 1) {
        return 0x57;
      }
      piVar1 = *(int **)(param_1[1] * 0x28 + param_1[8] + 0x74);
      pcVar2 = *(code **)(*piVar1 + 0x10);
    }
    uVar3 = (*pcVar2)(piVar1,*param_2);
    if (((int)uVar3 == 0x3e5) || ((int)uVar3 == 0x3e4)) {
      uVar3 = 0;
    }
  }
  else {
    uVar3 = 0x4c7;
  }
  return uVar3;
}

