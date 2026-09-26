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
extern int fn_82CE4118();
extern int fn_82D40590();
extern int fn_82D8F620();
extern int fn_82D912B0();
extern int fn_82DA6530();
extern int fn_82DA6A58();
extern int fn_82DA6BA8();
extern int fn_82DACAE8();
extern int fn_82DAD8A8();


undefined1 * fn_82D81240(undefined1 *param_1,int param_2,int *param_3)

{
  longlong lVar1;
  undefined1 auStack_40 [4];
  int *piStack_3c;
  
  if (*(int *)(param_2 + 0x94) == 0) {
    *(undefined4 *)(param_2 + 0x94) = 1;
    fn_82D912B0(param_2,param_3);
    fn_82DAD8A8(param_2,param_3);
    fn_82DACAE8(param_3);
    *(undefined1 *)(param_2 + 0x9d) = 0;
    fn_82D8F620(param_2,param_3);
    if (param_3[0x15] != 0) {
      fn_82D40590(param_3 + 0xc);
    }
    if (*(short *)(param_3 + 1) == 0) {
      (**(code **)(*param_3 + 0x14))(param_3);
    }
    fn_82CE4118(param_3);
    *(undefined1 *)(param_2 + 0x9d) = 1;
    lVar1 = (ulonglong)*(uint *)(param_2 + 0x94) - 1;
    *(int *)(param_2 + 0x94) = (int)lVar1;
    if ((lVar1 == 0) && (*(char *)(param_2 + 0x9c) == '\0')) {
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
    auStack_40[0] = 2;
    piStack_3c = param_3;
    fn_82DA6530(*(undefined4 *)(param_2 + 0x88),auStack_40);
    *param_1 = 0;
  }
  return param_1;
}

