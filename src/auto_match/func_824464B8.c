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
extern unsigned int *auStack_40;
extern int fn_82440B28();
extern int fn_82440D08();
extern int fn_82440E68();
extern int fn_82441F88();
extern int fn_8252A1B0();


void fn_824464B8(int param_1)

{
  undefined8 uVar1;
  ulonglong auStack_40 [2];
  undefined1 auStack_30 [32];
  
  uVar1 = fn_82440E68(**(undefined4 **)(param_1 + 8),
                            (*(undefined4 **)(param_1 + 8))[1] + 0xff & 0xff);
  auStack_40[0] = (ulonglong)(uint)(*(undefined4 **)(param_1 + 8))[1] + 0xff & 0xff;
  fn_82440B28(uVar1,(double)((float)auStack_40[0] *
                                  *(float *)(*(int *)**(undefined4 **)(param_1 + 8) + 4)),auStack_30
                   );
  fn_82440D08(uVar1,auStack_40,**(undefined4 **)(param_1 + 8));
  fn_82441F88(param_1);
  if (**(int **)(param_1 + 4) != 0) {
    fn_8252A1B0(**(int **)(param_1 + 4),auStack_40,0);
  }
  return;
}

