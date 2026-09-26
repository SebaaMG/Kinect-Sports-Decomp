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
extern unsigned int *auStack_60;
extern int fn_82230110();
extern int fn_82230300();
extern int fn_8223B688();
extern int fn_82868378();
extern int fn_828684F8();
extern int fn_8286DA10();
extern int fn_82870F68();
extern int fn_82FE6608();


undefined8 fn_82866FD0(int param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_60 [32];
  undefined1 auStack_40 [40];
  
  uVar1 = fn_82FE6608();
  if ((int)uVar1 == 1) {
    (**(code **)(**(int **)(param_1 + 0x4a8) + 8))(*(int **)(param_1 + 0x4a8),10);
    (**(code **)(**(int **)(param_1 + 0x49c) + 8))(*(int **)(param_1 + 0x49c),2);
    (**(code **)(**(int **)(param_1 + 0x494) + 0x24))(*(int **)(param_1 + 0x494),10);
    (**(code **)(**(int **)(param_1 + 0x498) + 0x2c))(*(int **)(param_1 + 0x498),10);
    (**(code **)(**(int **)(param_1 + 0x490) + 0x1c))(*(int **)(param_1 + 0x490),10);
    fn_828684F8();
    fn_82870F68();
    uVar1 = 0x200a0000;
  }
  else {
    fn_82230110(auStack_60,0xffffffff82020d60);
    uVar2 = fn_8223B688(auStack_40,auStack_60);
    uVar3 = fn_82868378();
    fn_8286DA10(uVar3,uVar2,uVar1);
    fn_82230300(auStack_60,1,0);
    uVar1 = 0xffffffffa00a0000;
  }
  return uVar1;
}

