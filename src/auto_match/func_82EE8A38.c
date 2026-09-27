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
extern int fn_82A1BB18();
extern int fn_82A1F2F8();
extern int fn_82E2D9C0();
extern int fn_82E58CA8();
extern int fn_82E660E0();
extern int fn_82F65320();
extern unsigned int uStack_108;
extern unsigned int uStack_10c;
extern unsigned int uStack_110;
extern unsigned int uStack_28;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;
extern unsigned int uStack_34;


undefined8 fn_82EE8A38(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int * apiStack_120;
  struct { undefined4 first; undefined4 second; } stack_pair_110;

  undefined4 uStack_108;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  piVar1 = *(int **)(param_1 + 0x20);
  stack_pair_110.first = 0;
  stack_pair_110.second = 0;
  uStack_108 = 0;
  uStack_28 = 0;
  uStack_2c = 0;
  uStack_30 = 0;
  uStack_34 = 0;
  uVar2 = fn_82A1BB18();
  *(undefined4 *)(param_1 + 0x14) = uVar2;
  (**(code **)(*piVar1 + 4))(piVar1);
  fn_82E58CA8(&stack_pair_110.first,4,0);
  (**(code **)(**(int **)(param_1 + 0x1c) + 0x1c))();
  fn_82A1F2F8();
  fn_82F65320();
  do {
    (**(code **)(**(int **)(param_1 + 0x1c) + 0x10))(*(int **)(param_1 + 0x1c),&apiStack_120);
    if (apiStack_120 != (int *)0x0) {
      if (*(int *)(param_1 + 0x18) != 0) {
        (**(code **)(*apiStack_120 + 8))();
        apiStack_120 = (int *)0x0;
LAB_82ee8b74:
        (**(code **)(**(int **)(param_1 + 0x1c) + 0x20))();
        (**(code **)(*piVar1 + 8))(piVar1);
        thunk_FUN_82e58aac(&stack_pair_110.first);
        fn_82E2D9C0(&stack_pair_110.first);
        return 0;
      }
      if (apiStack_120[6] == 0) {
        fn_82E660E0();
      }
      else {
        (**(code **)(**(int **)(param_1 + 0x1c) + 0x18))(*(int **)(param_1 + 0x1c),apiStack_120);
      }
      (**(code **)(*apiStack_120 + 8))();
      apiStack_120 = (int *)0x0;
    }
    if ((*(int *)(param_1 + 0x18) != 0) ||
       ((**(code **)(**(int **)(param_1 + 0x1c) + 0x34))(*(int **)(param_1 + 0x1c),&stack_pair_110.first),
       *(int *)(param_1 + 0x18) != 0)) goto LAB_82ee8b74;
  } while( true );
}

