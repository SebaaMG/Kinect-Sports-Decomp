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
extern int fn_82C3CE78();
extern int fn_82C3D138();
extern int fn_82C3D190();
extern int fn_82C3D240();
extern int fn_82C3D2A0();
extern int fn_82C3D4D0();
extern int fn_82C3D4E0();
extern int fn_82D7E470();


undefined8 fn_82C3D830(int param_1,undefined8 param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar3 = 0xffffffff80500003;
  if (*(int *)(param_1 + 4) == 2) {
    iVar1 = *(int *)(param_1 + 8);
    iVar2 = *(int *)(iVar1 + 0x14);
    if ((((((((iVar2 == 0x57564331) || (iVar2 == 0x574d5641)) || (iVar2 == 0x574d5633)) ||
           ((iVar2 == 0x574d5632 || (iVar2 == 0x574d5631)))) ||
          ((iVar2 == 0x57565032 || ((iVar2 == 0x574d5650 || (iVar2 == 0x574d5652)))))) ||
         (iVar2 == 0x4d503453)) || ((iVar2 == 0x4d503433 || (iVar2 == 0x4d503432)))) &&
       ((*(int *)(iVar1 + 8) != 0 &&
        ((*(int *)(iVar1 + 0xc) != 0 && (*(short *)(iVar1 + 0x12) != 0)))))) {
      param_3[9] = param_3;
      *param_3 = fn_82C3D4E0;
      param_3[1] = fn_82C3D190;
      uVar3 = 0;
      param_3[8] = 0;
      param_3[2] = fn_82C3D240;
      param_3[3] = fn_82C3D2A0;
      param_3[4] = fn_82C3D138;
      param_3[5] = fn_82D7E470;
      param_3[6] = fn_82D7E470;
      param_3[7] = fn_82C3D4D0;
      param_3[10] = fn_82C3CE78;
    }
  }
  return uVar3;
}

