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
extern int fn_825089A0();
extern int fn_8265C9E0();
extern int fn_82899700();
extern int fn_82F691F0();
extern unsigned int lbl_82023BA4;
extern unsigned int lbl_82197140;


undefined4 * fn_8289D7E8(undefined4 *param_1,ulonglong param_2)

{
  undefined8 uVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined1 auStack_40 [64];
  
  *param_1 = &lbl_82023BA4;
  param_1[1] = &lbl_82197140;
  param_1[2] = 7;
  param_1[3] = 0;
  param_1[4] = (int)param_2;
  if ((param_2 & 0xffffffff) < 5) {
    param_1[3] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    *(undefined1 *)(param_1 + 9) = 0;
    param_1[10] = 0;
    *(undefined1 *)(param_1 + 0xb) = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xf] = 0;
    piVar2 = (int *)fn_825089A0();
    uVar3 = (**(code **)(*piVar2 + 0x24))(piVar2,0x20,1);
    param_1[0xe] = uVar3;
    *(undefined4 *)uVar3 = uVar3;
    *(undefined4 *)(param_1[0xe] + 4) = param_1[0xe];
    fn_82899700(param_1 + 0x11,auStack_40,auStack_40[0]);
    return param_1;
  }
  uVar1 = fn_8265C9E0(param_2);
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(uVar1,0,param_2);
}

