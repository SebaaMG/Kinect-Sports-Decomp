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
extern int fn_8248F890();
extern int fn_824944A0();
extern int fn_82494B00();
extern int fn_824985E8();


void fn_82494648(int param_1,int *param_2)

{
  ulonglong uVar1;
  int *apiStack_20 [2];
  
  if (*(int *)(*param_2 + 0x10) != 0) {
    fn_824944A0(apiStack_20,*(undefined4 *)(*(int *)(param_1 + 4) + 4),
                  *(undefined4 *)(*(int *)(param_1 + 4) + 8),param_2);
    if (apiStack_20[0] == *(int **)(*(int *)(param_1 + 4) + 8)) {
      uVar1 = fn_8248F890(0x68);
      if ((uVar1 & 0xffffffff) == 0) {
        apiStack_20[0] = (int *)0x0;
      }
      else {
        apiStack_20[0] =
             (int *)fn_824985E8(uVar1,param_2,*(undefined4 *)(*(int *)(param_1 + 4) + 0x14));
      }
      (**(code **)(*apiStack_20[0] + 0xc))((double)**(float **)(param_1 + 8));
      fn_82494B00((ulonglong)*(uint *)(param_1 + 4) + 4,apiStack_20);
    }
    else {
      (**(code **)(*(int *)*apiStack_20[0] + 0xc))((double)**(float **)(param_1 + 8));
    }
  }
  return;
}

