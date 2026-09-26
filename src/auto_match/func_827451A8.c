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
extern unsigned int *auStack_40;
extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern int fn_82696330();
extern int fn_826A79D8();


void fn_827451A8(longlong param_1,longlong param_2,double *param_3)

{
  undefined1 auStack_70 [8];
  double dStack_68;
  undefined1 auStack_60 [8];
  double dStack_58;
  undefined1 auStack_50 [8];
  double dStack_48;
  undefined1 auStack_40 [8];
  double dStack_38;
  
  dStack_68 = *param_3;
  param_2 = param_2 + 0x78;
  auStack_70[0] = 3;
  param_1 = param_1 + 0x10;
  fn_826A79D8(param_1,param_2,0xffffffff821ce358,auStack_70);
  fn_82696330(auStack_70);
  dStack_58 = param_3[1];
  auStack_60[0] = 3;
  fn_826A79D8(param_1,param_2,0xffffffff821ce35c,auStack_60);
  fn_82696330(auStack_60);
  auStack_50[0] = 3;
  dStack_48 = param_3[2] - *param_3;
  fn_826A79D8(param_1,param_2,0xffffffff8200eaf0,auStack_50);
  fn_82696330(auStack_50);
  auStack_40[0] = 3;
  dStack_38 = param_3[3] - param_3[1];
  fn_826A79D8(param_1,param_2,0xffffffff8200eae8,auStack_40);
  fn_82696330(auStack_40);
  return;
}

