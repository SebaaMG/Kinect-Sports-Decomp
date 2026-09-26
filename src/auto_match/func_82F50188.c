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
extern int fn_82F4F578();
extern int fn_82F4FBE8();
extern int fn_82F4FD98();
extern int fn_82F538A0();
extern int fn_82F538B0();
extern int fn_82F538E0();
extern int fn_82F53900();
extern int fn_82F53928();
extern int fn_82F53958();
extern int fn_82F53970();


void fn_82F50188(int param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  double dVar3;
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [48];
  
  fn_82F53970((ulonglong)*(uint *)(param_1 + 0xcf0) + 0x1040,0);
  fn_82F4FBE8(param_1,param_2);
  dVar3 = (double)fn_82F4FD98(param_1,param_2);
  *(float *)(param_1 + 0xc94) = (float)dVar3;
  fn_82F4F578(param_2);
  lVar2 = 0;
  do {
    fn_82F538A0(auStack_40,param_2,lVar2);
    fn_82F53900((ulonglong)*(uint *)(param_1 + 0xcf0) + 0x850,lVar2);
    fn_82F538B0(auStack_30,param_2,lVar2);
    fn_82F53928((ulonglong)*(uint *)(param_1 + 0xcf0) + 0x850,lVar2);
    uVar1 = fn_82F538E0(param_2,lVar2);
    fn_82F53958((ulonglong)*(uint *)(param_1 + 0xcf0) + 0x850,lVar2,uVar1);
    lVar2 = lVar2 + 1;
  } while ((int)lVar2 < 0x19);
  return;
}

