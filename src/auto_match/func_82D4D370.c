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
extern unsigned int *auStack_260;
extern unsigned int *auStack_290;
extern unsigned int *auStack_2a0;
extern int fn_82DCDF98();
extern unsigned int lbl_82136AB4;
extern unsigned int lbl_82136AC4;
extern unsigned int lbl_82136AD4;
extern unsigned int lbl_821AAD20;
extern V16 vectorMaximumFloatingPoint();
extern V16 vectorMinimumFloatingPoint();


undefined4 * fn_82D4D370(undefined4 *param_1,undefined8 param_2,int *param_3,int *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined8 in_r0;
  int *piVar3;
  int iVar4;
  int iVar5;
  double dVar6;
  undefined1 in_vs32 [16];
  undefined1 in_vs43 [16];
  undefined1 in_vs44 [16];
  undefined1 in_vs45 [16];
  undefined4 in_register_00010090;
  undefined4 in_register_00010094;
  undefined4 in_register_00010098;
  undefined4 in_vr9;
  undefined4 in_register_000100a0;
  undefined4 in_register_000100a4;
  undefined4 in_register_000100a8;
  undefined4 in_vr10;
  undefined1 auStack_2a0 [16];
  undefined1 auStack_290 [48];
  undefined1 auStack_260 [608];
  
  iVar5 = 1;
  *(undefined2 *)((int)param_1 + 6) = 1;
  param_1[2] = &lbl_82136AB4;
  *param_1 = &lbl_82136AD4;
  param_1[2] = &lbl_82136AC4;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0x80000000;
  if (param_4[1] != 0) {
    piVar3 = (int *)(**(code **)(*param_3 + 0x14))(param_3,*(undefined4 *)*param_4,auStack_260);
    dVar6 = (double)lbl_821AAD20;
    (**(code **)(*piVar3 + 0x1c))
              (dVar6,piVar3,0xffffffff8323b1d0,*(code **)(*piVar3 + 0x1c),auStack_2a0);
    if (1 < param_4[1]) {
      iVar4 = 4;
      do {
        piVar3 = (int *)(**(code **)(*param_3 + 0x14))
                                  (param_3,*(undefined4 *)(iVar4 + *param_4),auStack_260);
        (**(code **)(*piVar3 + 0x1c))(dVar6,piVar3,0xffffffff8323b1d0);
        iVar1 = param_4[1];
        iVar5 = iVar5 + 1;
        iVar4 = iVar4 + 4;
        vectorMinimumFloatingPoint(in_vs32,in_vs44);
        vectorMaximumFloatingPoint(in_vs45,in_vs43);
        puVar2 = (undefined4 *)((uint)(auStack_2a0 + (int)in_r0) & 0xfffffff0);
        *puVar2 = in_register_000100a0;
        puVar2[1] = in_register_000100a4;
        puVar2[2] = in_register_000100a8;
        puVar2[3] = in_vr10;
        puVar2 = (undefined4 *)((uint)(auStack_290 + (int)in_r0) & 0xfffffff0);
        *puVar2 = in_register_00010090;
        puVar2[1] = in_register_00010094;
        puVar2[2] = in_register_00010098;
        puVar2[3] = in_vr9;
      } while (iVar5 < iVar1);
    }
    param_1[6] = param_4;
    fn_82DCDF98(param_2,auStack_2a0,param_1 + 2);
    param_1[6] = 0;
  }
  return param_1;
}

