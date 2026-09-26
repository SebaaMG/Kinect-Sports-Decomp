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
extern unsigned int *auStack_4c;
extern int fn_826400A0();
extern int fn_82F68CC0();
extern unsigned int uStack_50;


void fn_826405E0(int param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,ulonglong param_7,longlong param_8)

{
  int iVar1;
  int in_stack_00000054;
  undefined4 uStack_50;
  undefined4 auStack_4c [19];
  
  iVar1 = fn_826400A0(param_1,param_2,-param_3,param_4,param_5,param_7,in_stack_00000054,
                        auStack_4c);
  if (iVar1 == 0) {
    fn_82F68CC0(uStack_50,(longlong)(int)param_3 * (longlong)in_stack_00000054 + param_8,
                 (longlong)(int)param_4 * (longlong)in_stack_00000054);
    fn_82F68CC0(auStack_4c[0],param_6,
                 (longlong)(int)((-(uint)((param_7 & 4) != 0) & 2) + 2) * (longlong)(int)param_5 +
                 3U & 0xfffffffc);
    *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_1 + 0x3554);
  }
  return;
}

