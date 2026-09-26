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
extern unsigned int *auStack_34;
extern unsigned int *auStack_50;
extern unsigned int *auStack_74;
extern unsigned int *auStack_90;
extern int fn_82230110();
extern int fn_82230300();
extern int fn_822C1730();
extern int fn_82417F58();


void fn_82417FC0(ulonglong param_1,undefined8 param_2)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 auStack_90 [28];
  undefined1 auStack_74 [36];
  undefined1 auStack_50 [28];
  undefined1 auStack_34 [36];
  
  if ((((param_1 & 0xffffffff) == (ulonglong)*(uint *)(*(int *)param_1 + 0x2b20)) &&
      (iVar1 = fn_82417F58(), iVar1 != 0)) &&
     (iVar1 = fn_82417F58(param_1), *(int *)(iVar1 + 0x24) != 0)) {
    fn_82230110(auStack_90,0xffffffff821b829c);
    fn_82230110(auStack_74,0xffffffff821b8294);
    fn_822C1730(param_2,auStack_90);
    fn_82230300(auStack_74,1,0);
    puVar2 = auStack_90;
  }
  else {
    fn_82230110(auStack_50,0xffffffff821b829c);
    fn_82230110(auStack_34,0xffffffff821b82a8);
    fn_822C1730(param_2,auStack_50);
    fn_82230300(auStack_34,1,0);
    puVar2 = auStack_50;
  }
  fn_82230300(puVar2,1,0);
  return;
}

