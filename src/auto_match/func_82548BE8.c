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
extern unsigned int *auStack_b0;
extern unsigned int *auStack_c0;
extern int fn_825493C8();
extern int fn_82F68CC0();
extern unsigned int stack0x00000060;
extern unsigned int uStack00000030;
extern unsigned int uStack00000038;
extern unsigned int uStack00000040;
extern unsigned int uStack00000048;
extern unsigned int uStack00000050;
extern unsigned int uStack_5c;
extern unsigned int uStack_64;


void fn_82548BE8(int param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined4 *puVar1;
  double dVar2;
  undefined8 uStack00000030;
  undefined8 uStack00000038;
  undefined8 uStack00000040;
  undefined8 uStack00000048;
  undefined8 uStack00000050;
  undefined8 in_stack_00000058;
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [76];
  undefined4 uStack_64;
  undefined4 uStack_5c;
  
  if (0 < (int)param_2) {
    puVar1 = (undefined4 *)(param_1 + 0x4c);
    uStack00000030 = param_4;
    uStack00000038 = param_5;
    uStack00000040 = param_6;
    uStack00000048 = param_7;
    uStack00000050 = param_8;
    do {
      uStack_5c = puVar1[1];
      uStack_64 = *puVar1;
      dVar2 = (double)(float)puVar1[-1];
      fn_82F68CC0(auStack_b0,puVar1 + -0x13,0x40);
      fn_82F68CC0(auStack_c0,&stack0x00000060,0x10);
      fn_825493C8(dVar2,puVar1[-3],param_3,param_4,param_5,param_6,param_7,param_8,
                        in_stack_00000058);
      param_2 = param_2 + -1;
      puVar1 = puVar1 + 0x18;
    } while (param_2 != 0);
  }
  return;
}

