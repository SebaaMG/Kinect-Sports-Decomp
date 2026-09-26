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
extern int fn_8229E260();
extern int fn_82535298();
extern int fn_82536288();
extern int (*lbl_8327677C)();


void fn_823520F0(double param_1,int param_2)

{
  int *piVar1;
  bool bVar2;
  int aiStack_20 [2];
  
  *(float *)(param_2 + 0x368) = (float)(param_1 + (double)*(float *)(param_2 + 0x368));
  if (*(int *)(param_2 + 0x3e4) != 0) {
    if (lbl_8327677C != (code *)0x0) {
      (*lbl_8327677C)(0xffffffff821b215c,0xffffffff821b1fb8,0x8fd);
    }
    *(undefined4 *)(param_2 + 0x3e4) = 0;
  }
  if (*(int *)(param_2 + 0x338) != 0) {
    if (*(float *)(param_2 + 0x368) < *(float *)(param_2 + 0x33c)) {
      return;
    }
    fn_8229E260();
    *(undefined4 *)(param_2 + 0x338) = 0;
  }
  piVar1 = (int *)(param_2 + 0x360);
  if (piVar1 == (int *)0x0) {
    bVar2 = false;
  }
  else {
    bVar2 = *piVar1 != 0;
  }
  if (bVar2) {
    aiStack_20[0] = *piVar1;
    aiStack_20[0] =
         fn_82535298(aiStack_20,*(undefined4 *)(*(int *)(param_2 + 0x14) + 0x84c),
                           0xffffffff83296bc0,0xffffffff83296bd0);
    fn_82536288(aiStack_20);
  }
  if (*(int *)(param_2 + 8) != 9) {
    *(int *)(param_2 + 0xc) = *(int *)(param_2 + 8);
    *(undefined4 *)(param_2 + 8) = 9;
  }
  return;
}

