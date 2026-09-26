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
extern int fn_82BE5240();
extern int fn_82BE5340();
extern int fn_82BE5350();
extern int fn_82BE5378();
extern int fn_82BF4628();


undefined8 fn_82BEA4D0(int param_1,undefined8 param_2)

{
  undefined4 *puVar2;
  int *piVar3;
  undefined8 uVar1;
  
  if ((*(int *)(param_1 + 0x3c) == 0) || (*(int *)(param_1 + 0x40) == 0)) {
    fn_82BE5240(param_1,0x130,0xffffffff82196582);
    uVar1 = 0;
  }
  else {
    for (puVar2 = (undefined4 *)fn_82BE5340(); puVar2 != (undefined4 *)0x0;
        puVar2 = (undefined4 *)*puVar2) {
      if (puVar2[2] != 0) {
        fn_82BF4628(puVar2[2],param_2);
      }
    }
    fn_82BE5340(*(undefined4 *)(param_1 + 0x40));
    while (*(int *)(*(int *)(param_1 + 0x40) + 8) != 0) {
      piVar3 = (int *)fn_82BE5378();
      (**(code **)(*piVar3 + 4))(piVar3,param_2);
      fn_82BE5350(*(undefined4 *)(param_1 + 0x40));
    }
    uVar1 = 1;
  }
  return uVar1;
}

