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
extern int fn_82D401F8();
extern V16 vectorMaximumFloatingPoint();
extern V16 vectorMinimumFloatingPoint();


void fn_82D48790(double param_1,int param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined8 in_r0;
  int iVar3;
  int iVar4;
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
  
  if (*(char *)(param_2 + 0x40) == '\0') {
    (**(code **)(*(int *)**(undefined4 **)(param_2 + 0x44) + 0x1c))
              (param_1,(int *)**(undefined4 **)(param_2 + 0x44),param_3,param_4,param_5);
    iVar3 = 1;
    if (1 < *(int *)(param_2 + 0x48)) {
      iVar4 = 4;
      do {
        piVar1 = *(int **)(*(int *)(param_2 + 0x44) + iVar4);
        (**(code **)(*piVar1 + 0x1c))(param_1,piVar1,param_3);
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + 4;
        vectorMinimumFloatingPoint(in_vs32,in_vs44);
        vectorMaximumFloatingPoint(in_vs45,in_vs43);
        puVar2 = (undefined4 *)((int)in_r0 + (int)param_5 & 0xfffffff0);
        *puVar2 = in_register_000100a0;
        puVar2[1] = in_register_000100a4;
        puVar2[2] = in_register_000100a8;
        puVar2[3] = in_vr10;
        puVar2 = (undefined4 *)((int)in_r0 + (int)param_5 + 0x10 & 0xfffffff0);
        *puVar2 = in_register_00010090;
        puVar2[1] = in_register_00010094;
        puVar2[2] = in_register_00010098;
        puVar2[3] = in_vr9;
      } while (iVar3 < *(int *)(param_2 + 0x48));
    }
  }
  else {
    fn_82D401F8((double)(float)((double)*(float *)(param_2 + 0x10) + param_1),param_3,
                 param_2 + 0x20,param_2 + 0x30,param_5,param_5);
  }
  return;
}

