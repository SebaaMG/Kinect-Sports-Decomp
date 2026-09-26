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
extern unsigned int *auStack_80;
extern unsigned int *auStack_90;
extern int fn_82696330();
extern int fn_826A79D8();


void fn_82741C18(longlong param_1,longlong param_2,float *param_3)

{
  undefined1 auStack_90 [8];
  double dStack_88;
  undefined1 auStack_80 [8];
  double dStack_78;
  undefined1 auStack_70 [8];
  double dStack_68;
  undefined1 auStack_60 [8];
  double dStack_58;
  undefined1 auStack_50 [8];
  double dStack_48;
  undefined1 auStack_40 [8];
  double dStack_38;
  
  dStack_88 = (double)*param_3;
  param_2 = param_2 + 0x78;
  auStack_90[0] = 3;
  param_1 = param_1 + 0x10;
  fn_826A79D8(param_1,param_2,0xffffffff8200befc,auStack_90);
  fn_82696330(auStack_90);
  dStack_78 = (double)param_3[3];
  auStack_80[0] = 3;
  fn_826A79D8(param_1,param_2,0xffffffff8200bef0,auStack_80);
  fn_82696330(auStack_80);
  dStack_68 = (double)param_3[1];
  auStack_70[0] = 3;
  fn_826A79D8(param_1,param_2,0xffffffff8201261c,auStack_70);
  fn_82696330(auStack_70);
  dStack_58 = (double)param_3[4];
  auStack_60[0] = 3;
  fn_826A79D8(param_1,param_2,0xffffffff8200bef8,auStack_60);
  fn_82696330(auStack_60);
  dStack_48 = (double)param_3[2];
  auStack_50[0] = 3;
  fn_826A79D8(param_1,param_2,0xffffffff82012618,auStack_50);
  fn_82696330(auStack_50);
  dStack_38 = (double)param_3[5];
  auStack_40[0] = 3;
  fn_826A79D8(param_1,param_2,0xffffffff82012614,auStack_40);
  fn_82696330(auStack_40);
  return;
}

