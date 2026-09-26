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
extern unsigned int *auStack_444;
extern unsigned int *auStack_470;
extern unsigned int *auStack_50;
extern int fn_82230300();
extern int fn_82230360();
extern int fn_8225C590();
extern int fn_8225D1F8();
extern int fn_8225D288();
extern int fn_823AB478();
extern int fn_82486B08();
extern int fn_82A1DD38();
extern unsigned int uStack_44c;
extern unsigned int uStack_450;


void fn_8247D1F0(int param_1,int param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_470 [32];
  undefined4 uStack_450;
  undefined4 uStack_44c;
  undefined1 auStack_444 [1012];
  undefined1 auStack_50 [80];
  
  fn_82486B08(&uStack_450);
  uVar1 = fn_8225C590();
  fn_82230300(auStack_470,0,0);
  fn_82230360(auStack_470,0xffffffff821a9340,8);
  uVar2 = (**(code **)(**(int **)(param_2 + 0x8c0) + 0x60))();
  fn_8225D288(uVar1,auStack_470,uVar2);
  uVar3 = fn_823AB478();
  uStack_44c = (undefined4)uVar3;
  uStack_450 = 1;
  fn_82A1DD38(auStack_444,uVar2,1000);
  fn_82A1DD38((ulonglong)*(uint *)(param_1 + 0x6c) + 0x838,&uStack_450,0x420);
  fn_8225D1F8(uVar1,uVar3);
  fn_82230300(auStack_470,1,0);
  fn_82230300(auStack_50,1,0);
  return;
}

