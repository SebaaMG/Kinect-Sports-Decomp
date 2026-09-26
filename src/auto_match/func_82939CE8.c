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
extern unsigned int *auStack_4e0;
extern int fn_82937A60();
extern int fn_82F691F0();


undefined8 fn_82939CE8(int param_1,undefined8 *param_2)

{
  undefined1 auStack_4e0 [1248];
  
  *(undefined8 *)(param_1 + 0x10) = *param_2;
  *(undefined8 *)(param_1 + 0x18) = param_2[1];
  *(undefined8 *)(param_1 + 0x20) = param_2[2];
  *(undefined8 *)(param_1 + 0x28) = param_2[3];
  if (*(int *)(param_1 + 0x5c) != 0) {
    fn_82937A60(param_1,0xffffffff82031bfc,0xffffffff82032180);
    return 0xffffffffffffffff;
  }
  *(undefined4 *)(param_1 + 0x5c) = 1;
  if (*(int **)(param_1 + 0x80) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x80) + 8))();
    *(undefined4 *)(param_1 + 0x80) = 0;
  }
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(auStack_4e0,0,0x43c);
}

