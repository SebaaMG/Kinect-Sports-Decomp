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
extern int fn_823AA370();
extern int fn_823AA378();
extern int fn_828D45F8();
extern int fn_82C00470();


undefined8 fn_82BFEC78(int *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  double dVar3;
  int *piStack_30;
  int *piStack_2c;
  int aiStack_28 [10];
  
  piStack_2c = (int *)0x0;
  piStack_30 = (int *)0x0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  aiStack_28[0] = 0;
  uVar1 = (**(code **)(*param_1 + 0x74))(param_1,&piStack_2c);
  if (-1 < (int)uVar1) {
    if (piStack_2c != (int *)0x0) {
      uVar1 = (**(code **)(*piStack_2c + 0x3c))(piStack_2c,0,&piStack_30,0);
    }
    if (-1 < (int)uVar1) {
      if (piStack_30 != (int *)0x0) {
        uVar1 = (**(code **)(*piStack_30 + 0x5c))(piStack_30,aiStack_28);
      }
      if ((-1 < (int)uVar1) && (aiStack_28[0] != 0)) {
        uVar2 = fn_828D45F8();
        *param_2 = uVar2;
        uVar2 = fn_823AA370(aiStack_28[0]);
        param_2[1] = uVar2;
        dVar3 = (double)fn_82C00470(aiStack_28[0]);
        param_2[2] = (float)dVar3;
        uVar2 = fn_823AA378(aiStack_28[0]);
        param_2[3] = uVar2;
      }
    }
  }
  if (piStack_2c != (int *)0x0) {
    (**(code **)(*piStack_2c + 8))(piStack_2c);
    piStack_2c = (int *)0x0;
  }
  if (piStack_30 != (int *)0x0) {
    (**(code **)(*piStack_30 + 8))(piStack_30);
  }
  return uVar1;
}

