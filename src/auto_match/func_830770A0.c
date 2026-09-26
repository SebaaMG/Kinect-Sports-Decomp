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
extern unsigned int *auStack_70;
extern unsigned int *auStack_80;
extern int fn_82539560();
extern int fn_8306D698();
extern int fn_8306E818();
extern int fn_8306ED30();
extern int fn_8306ED98();
extern int fn_8306EDB0();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_821AAD20;


void fn_830770A0(int param_1,char param_2,float *param_3,float *param_4)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [112];
  
  if (param_2 == '\0') {
    fn_8306D698(auStack_70,*(undefined4 *)(param_1 + 0x10),0x10);
    fn_8306D698(auStack_80,*(undefined4 *)(param_1 + 0x10),0x11);
    uVar2 = 0x12;
    puVar1 = auStack_70;
  }
  else {
    fn_8306D698(auStack_80,*(undefined4 *)(param_1 + 0x10),0xc);
    fn_8306D698(auStack_70,*(undefined4 *)(param_1 + 0x10),0xd);
    uVar2 = 0xe;
    puVar1 = auStack_80;
  }
  fn_8306D698(puVar1,*(undefined4 *)(param_1 + 0x10),uVar2);
  fn_8306ED30();
  fn_8306EDB0();
  fn_8306ED30();
  fn_8306EDB0();
  uVar2 = fn_8306ED98();
  uVar2 = fn_82539560(uVar2,(double)lbl_82002C5C,(double)lbl_82002AE0,(double)lbl_821AAD20);
  dVar4 = (double)(float)((double)*param_4 * (double)*(float *)(param_1 + 0x24) +
                         (double)(float)((double)*param_3 * (double)*(float *)(param_1 + 0x20)));
  dVar3 = (double)fn_8306E818((double)*param_3,
                               (double)(float)(dVar4 / (double)(float)((double)*(float *)(param_1 +
                                                                                         0x24) +
                                                                      (double)*(float *)(param_1 +
                                                                                        0x20))),
                               uVar2);
  *param_3 = (float)dVar3;
  *param_4 = -(float)((double)*(float *)(param_1 + 0x20) * dVar3 - dVar4) /
             *(float *)(param_1 + 0x24);
  return;
}

