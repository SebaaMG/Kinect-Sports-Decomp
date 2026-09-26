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
extern int fn_82CE4040();
extern int fn_82CE4118();
extern int fn_82D88AE0();
extern int fn_82D8EAD8();
extern int fn_82D95890();
extern int fn_82DA6530();
extern int fn_82DA6A58();
extern int fn_82DA6BA8();


undefined1 * fn_82D890C8(undefined1 *param_1,int param_2,int *param_3)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_30 [4];
  int *piStack_2c;
  
  if (*(int *)(param_2 + 0x94) == 0) {
    *(undefined4 *)(param_2 + 0x94) = 1;
    iVar1 = (**(code **)(*param_3 + 0x18))(param_3);
    if ((iVar1 == 1) && (*(int *)(param_3[0x11] + 8) == param_2)) {
      fn_82D88AE0(param_2);
    }
    fn_82CE4040(param_3);
    fn_82D8EAD8(param_2,param_3,1);
    fn_82D95890(param_3,param_2);
    fn_82CE4118(param_3);
    lVar2 = (ulonglong)*(uint *)(param_2 + 0x94) - 1;
    *(int *)(param_2 + 0x94) = (int)lVar2;
    if ((lVar2 == 0) && (*(char *)(param_2 + 0x9c) == '\0')) {
      if (*(int *)(param_2 + 0x8c) != 0) {
        *(undefined4 *)(param_2 + 0x8c) = 0;
        fn_82DA6BA8(*(undefined4 *)(param_2 + 0x88));
      }
      if ((*(int *)(param_2 + 0xa4) == 1) && (*(int *)(param_2 + 0x90) != 0)) {
        *(undefined4 *)(param_2 + 0x90) = 0;
        fn_82DA6A58(*(undefined4 *)(param_2 + 0x88));
      }
    }
    *param_1 = 1;
  }
  else {
    auStack_30[0] = 9;
    piStack_2c = param_3;
    fn_82DA6530(*(undefined4 *)(param_2 + 0x88),auStack_30);
    *param_1 = 0;
  }
  return param_1;
}

