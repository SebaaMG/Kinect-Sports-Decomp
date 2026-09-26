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
extern unsigned int *auStack_110;
extern unsigned int *auStack_30;
extern unsigned int *auStack_50;
extern unsigned int *auStack_70;
extern unsigned int *auStack_90;
extern unsigned int *auStack_b0;
extern unsigned int *auStack_d0;
extern unsigned int *auStack_f0;
extern int fn_82230110();
extern int fn_82230300();
extern int fn_822315A0();
extern int fn_822E52D8();
extern int fn_822E5340();
extern int fn_822E5F48();
extern int fn_82399C38();
extern unsigned int iStack_11c;
extern unsigned int iStack_120;


void fn_822F1D80(int param_1)

{
  int iVar1;
  undefined1 *puVar2;
  int iStack_120;
  int iStack_11c;
  undefined1 auStack_110 [32];
  undefined1 auStack_f0 [32];
  undefined1 auStack_d0 [32];
  undefined1 auStack_b0 [32];
  undefined1 auStack_90 [32];
  undefined1 auStack_70 [32];
  undefined1 auStack_50 [32];
  undefined1 auStack_30 [32];
  
  fn_822E5F48(&iStack_120,*(undefined4 *)(param_1 + 0xc));
  if (*(int *)(*(int *)(param_1 + 0x10) + 0x178) == 2) {
    if (*(int *)(*(int *)(*(int *)(param_1 + 0x10) + 0x2e0) + 0x68) == 0) {
      fn_82230110(auStack_70,0xffffffff821ae564);
      fn_822E52D8(*(undefined4 *)(param_1 + 0xc),auStack_70);
      fn_82230300(auStack_70,1,0);
    }
    fn_82230110(auStack_30,0xffffffff821ae13c);
    fn_822E5340(*(undefined4 *)(param_1 + 0xc),auStack_30);
    puVar2 = auStack_30;
  }
  else if (*(int *)(iStack_120 + 0xc) == 0) {
    iVar1 = fn_82399C38();
    if (iVar1 == 0) {
      fn_82230110(auStack_f0,0xffffffff821ae550);
      fn_822E52D8(*(undefined4 *)(param_1 + 0xc),auStack_f0);
      puVar2 = auStack_f0;
    }
    else {
      fn_82230110(auStack_110,0xffffffff821ae530);
      fn_822E52D8(*(undefined4 *)(param_1 + 0xc),auStack_110);
      puVar2 = auStack_110;
    }
    fn_82230300(puVar2,1,0);
    fn_82230110(auStack_b0,0xffffffff821ae114);
    fn_822E5340(*(undefined4 *)(param_1 + 0xc),auStack_b0);
    puVar2 = auStack_b0;
  }
  else {
    iVar1 = fn_82399C38();
    if (iVar1 == 0) {
      fn_82230110(auStack_d0,0xffffffff821ae51c);
      fn_822E52D8(*(undefined4 *)(param_1 + 0xc),auStack_d0);
      puVar2 = auStack_d0;
    }
    else {
      fn_82230110(auStack_90,0xffffffff821ae4fc);
      fn_822E52D8(*(undefined4 *)(param_1 + 0xc),auStack_90);
      puVar2 = auStack_90;
    }
    fn_82230300(puVar2,1,0);
    fn_82230110(auStack_50,0xffffffff821ae0e8);
    fn_822E5340(*(undefined4 *)(param_1 + 0xc),auStack_50);
    puVar2 = auStack_50;
  }
  fn_82230300(puVar2,1,0);
  *(undefined4 *)(param_1 + 0x34) = 1;
  if (iStack_11c != 0) {
    fn_822315A0();
  }
  return;
}

