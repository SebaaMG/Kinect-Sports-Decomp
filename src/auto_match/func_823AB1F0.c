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
extern int fn_8239D490();
extern int fn_8239D8B0();
extern unsigned int lbl_83276574;


undefined8 fn_823AB1F0(int *param_1,int param_2,undefined8 param_3,int param_4,int param_5)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (**(code **)(*param_1 + 0x84))(param_1,param_3);
  if (iVar1 == 0) {
    return 1;
  }
  param_1[0x1f] = 1;
  iVar1 = (**(code **)(*param_1 + 0x7c))(param_1,param_3);
  if (param_4 == iVar1) {
    if (param_1[0x19] == param_4) {
      iVar1 = 7;
LAB_823ab26c:
      param_1[0x1a] = 1;
      param_1[0x1b] = iVar1;
      return 1;
    }
  }
  else {
    iVar1 = (**(code **)(*param_1 + 0x6c))(param_1,param_3);
    if (iVar1 == 0) {
      if (param_1[0x19] == param_4) {
        iVar1 = 0;
        param_1[0x1c] = param_4;
        param_1[0x1d] = param_5;
        goto LAB_823ab26c;
      }
    }
    else {
      if (param_1[0x19] == param_4) {
        lVar2 = (ulonglong)
                (uint)(int)*(float *)(*(int *)((*(int **)**(undefined4 **)(param_2 + 8))[4] * 4 +
                                              **(int **)**(undefined4 **)(param_2 + 8)) + 0x20) + 1;
        fn_8239D490(param_2,0,lVar2);
        if (lbl_83276574 < (int)lVar2) {
          lbl_83276574 = (int)lVar2;
        }
        fn_8239D8B0(param_2,lVar2);
      }
      param_1[3] = param_4;
      param_1[5] = param_5;
    }
  }
  param_1[0xc] = 0;
  return 0;
}

