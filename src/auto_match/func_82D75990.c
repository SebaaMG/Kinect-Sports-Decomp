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
extern unsigned int *auStack_80;
extern unsigned int *auStack_b8;
extern unsigned int *auStack_c0;
extern int fn_82CE6820();
extern int fn_82DD9BD0();
extern unsigned int iStack_9c;
extern unsigned int iStack_a0;
extern unsigned int uStack_90;
extern unsigned int uStack_94;
extern unsigned int uStack_98;


void fn_82D75990(int param_1,int param_2,int param_3,undefined4 param_4,undefined8 param_5)

{
  undefined1 auStack_c0 [8];
  undefined1 auStack_b8 [24];
  int iStack_a0;
  int iStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined1 auStack_80 [104];
  
  uStack_90 = *(undefined4 *)(param_1 + 8);
  uStack_98 = 0;
  iStack_a0 = param_2;
  iStack_9c = param_3;
  uStack_94 = param_4;
  fn_82CE6820(auStack_80,*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_3 + 8));
  fn_82DD9BD0(&iStack_a0,auStack_c0,auStack_b8,param_1 + 0xc,param_1 + 0x30,param_1 + 0x20,
                    param_5);
  return;
}

