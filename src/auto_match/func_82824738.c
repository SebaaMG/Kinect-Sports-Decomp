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
extern int fn_8257A9F0();
extern int fn_82822F60();
extern int fn_828233A8();
extern int fn_828252E8();
extern unsigned int stack0x0000001c;
extern unsigned int uStack0000001c;


bool fn_82824738(int param_1,undefined8 param_2,int *param_3)

{
  int iVar1;
  undefined4 uStack0000001c;
  int aiStack_30 [12];
  
  uStack0000001c = (undefined4)param_2;
  fn_828233A8(param_1 + 0x3a4,aiStack_30,0xffffffff828245e8,param_2);
  if (aiStack_30[0] == 0) {
    fn_8257A9F0(*(undefined4 *)(param_1 + 0x3bc),&stack0x0000001c);
    *param_3 = ((*(int **)(param_1 + 0x3bc))[1] - **(int **)(param_1 + 0x3bc) >> 2) + -1;
    iVar1 = fn_828252E8(param_1,0x18);
    *(int *)(iVar1 + 0x10) = param_1;
    *(int *)(iVar1 + 0x14) = *param_3;
    fn_82822F60(param_1 + 0x3a4,iVar1,0xffffffff828244e8);
  }
  else {
    *param_3 = *(int *)(aiStack_30[0] + 0x14);
  }
  return aiStack_30[0] == 0;
}

