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
extern int fn_82E4FE40();
extern int fn_82E58BE8();


undefined8 fn_82EEB088(int param_1,int param_2,char param_3,undefined2 *param_4)

{
  int *piVar1;
  undefined8 uVar2;
  int aiStack_40 [16];
  
  uVar2 = 0;
  if (param_4 == (undefined2 *)0x0) {
    uVar2 = 0xffffffff80004003;
  }
  else {
    *param_4 = 1;
    while (*(int **)(param_1 + 0xe0) != (int *)0x0) {
      piVar1 = (int *)**(int **)(param_1 + 0xe0);
      if ((*piVar1 == param_2) && (*(char *)(piVar1 + 1) == param_3)) {
        *param_4 = *(undefined2 *)((int)piVar1 + 6);
        return 0;
      }
      aiStack_40[0] = 0;
      fn_82E58BE8(param_1,aiStack_40);
      if (aiStack_40[0] != 0) {
        fn_82E4FE40();
      }
    }
  }
  return uVar2;
}

