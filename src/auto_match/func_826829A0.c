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
extern int fn_826824B0();
extern int fn_82696330();


void fn_826829A0(int *param_1,uint *param_2,int param_3)

{
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [24];
  
  if (param_1[1] == 0) {
    auStack_40[0] = 3;
    auStack_30[0] = 10;
    (**(code **)(*param_1 + 0x28))
              (param_1,param_2,(ulonglong)*param_2 + 0x134,auStack_30,auStack_40);
    fn_82696330(auStack_30);
  }
  if (param_3 != 0) {
    *(uint *)(param_3 + 8) = *(int *)(param_3 + 8) + 1U & 0x8fffffff;
  }
  if (param_1[1] != 0) {
    fn_826824B0();
  }
  param_1[1] = param_3;
  return;
}

