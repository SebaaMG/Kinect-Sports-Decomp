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
extern unsigned int *auStack_30;
extern int fn_82A3B5D8();
extern int fn_82A3B768();
extern int fn_82A3CED8();
extern int fn_82A3D230();
extern int fn_82F691F0();


undefined8 fn_82A39F40(int *param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 auStack_30 [12];
  
  uVar1 = param_1[1];
  *(undefined1 *)((int)param_1 + 0x972) = 0;
  uVar2 = param_1[0x219] - uVar1;
  if (uVar2 < uVar1) {
    uVar1 = uVar2;
  }
  if ((*param_1 - param_1[0x10c8]) + *param_2 < (int)(uVar1 + (*param_2 - param_1[0x219]))) {
    return 0;
  }
  fn_82A3D230(param_1,0,param_1[7],param_1[8],auStack_30,0);
  fn_82A3CED8(param_1,0,0,auStack_30[0]);
  fn_82A3B5D8(param_1,0);
  fn_82A3B768(param_1);
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(param_1[2],0,0x40000);
}

