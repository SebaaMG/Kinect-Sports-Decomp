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
extern int fn_829333E0();
extern int fn_82AC6560();
extern int fn_82B467D8();
extern unsigned int stack0x00000000;


undefined4 fn_82B46830(undefined8 param_1,int param_2,ulonglong param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  float *pfVar4;
  int aiStack_90 [4];
  undefined4 auStack_80 [32];
  
  piVar3 = (int *)(&stack0x00000000 + -0x90);
  if ((param_3 & 0xffffffff) != 0) {
    pfVar4 = (float *)(param_2 + -4);
    do {
      puVar1 = (undefined4 *)fn_82AC6560(param_1,0x40,0x13);
      fn_829333E0(&stack0x00000000 + -0x80);
      puVar1[1] = 0xf;
      puVar1[4] = 3;
      *puVar1 = auStack_80[0];
      pfVar4 = pfVar4 + 1;
      *(double *)(puVar1 + 6) = (double)*pfVar4;
      iVar2 = fn_82B467D8(param_1,puVar1,0,0xffffffff8204e254);
      *piVar3 = iVar2;
      param_3 = param_3 - 1;
      piVar3 = (int *)(iVar2 + 0xc);
    } while (param_3 != 0);
  }
  return 0;
}

