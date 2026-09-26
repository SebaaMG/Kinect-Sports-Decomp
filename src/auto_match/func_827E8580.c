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
extern unsigned int *auStack_3c;
extern int fn_827D88A0();
extern int fn_82811400();
extern int fn_82F68CC0();
extern unsigned int uStack_40;


int * fn_827E8580(int *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uStack_40;
  undefined1 auStack_3c [36];
  
  fn_82811400(auStack_3c,0x10);
  uStack_40 = *param_2;
  fn_82F68CC0(auStack_3c,param_2 + 1,0x18);
  fn_827D88A0(param_1,&uStack_40);
  param_1[1] = 0;
  iVar1 = (**(code **)(*(int *)param_1[2] + 0xc))((int *)param_1[2],0xc,param_1 + 3);
  *param_1 = iVar1;
  *(int *)iVar1 = iVar1;
  *(int *)(*param_1 + 4) = *param_1;
  return param_1;
}

