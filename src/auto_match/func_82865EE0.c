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
extern unsigned int *auStack_50;
extern unsigned int *auStack_70;
extern unsigned int *auStack_90;
extern unsigned int *auStack_a0;
extern int fn_82230110();
extern int fn_82230300();
extern int fn_82240378();
extern int fn_82336760();
extern int fn_82865FA8();
extern int fn_82F64020();


undefined8 fn_82865EE0(undefined8 param_1,int *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [32];
  undefined1 auStack_70 [32];
  undefined1 auStack_50 [80];
  
  *param_2 = *param_2 + 1;
  fn_82F64020(auStack_a0,9,0xffffffff8201fbec);
  uVar1 = fn_82230110(auStack_50,auStack_a0);
  uVar2 = fn_82230110(auStack_70,0xffffffff8201fbf4);
  uVar3 = fn_82865FA8(auStack_90,param_3,param_4);
  uVar2 = fn_82336760(uVar3,uVar2);
  uVar1 = fn_82336760(uVar2,uVar1);
  fn_82240378(param_1,uVar1);
  fn_82230300(auStack_90,1,0);
  fn_82230300(auStack_70,1,0);
  fn_82230300(auStack_50,1,0);
  return param_1;
}

