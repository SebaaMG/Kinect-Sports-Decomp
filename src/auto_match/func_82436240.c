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
extern unsigned int *auStack_70;
extern int fn_82291F90();
extern int fn_82292100();
extern int fn_82358FD8();


void fn_82436240(int param_1,undefined8 param_2,uint *param_3,undefined8 param_4)

{
  int *piVar1;
  uint uVar2;
  undefined1 auStack_70 [112];
  
  piVar1 = *(int **)(param_1 + 0x40);
  if (piVar1[0x3e] == 0) {
    fn_82358FD8(*piVar1,auStack_70,0x20,0xffffffff821aa224);
    uVar2 = *param_3;
    fn_82292100(*(undefined4 *)(**(int **)(param_1 + 0x40) + 0xd4),param_2,(int)uVar2 / 100,
                    (ulonglong)uVar2 + (longlong)((int)uVar2 / 100) * -100,auStack_70,param_4);
  }
  else {
    uVar2 = *param_3;
    fn_82291F90(*(undefined4 *)(*piVar1 + 0xd4),param_2,(int)uVar2 / 100,
                    (ulonglong)uVar2 + (longlong)((int)uVar2 / 100) * -100,param_4);
  }
  return;
}

