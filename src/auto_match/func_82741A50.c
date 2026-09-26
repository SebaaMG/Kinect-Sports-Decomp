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
extern int fn_82681B80();
extern int fn_8268CC00();
extern int fn_82696330();
extern int fn_826972E0();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821AAD20;


float * fn_82741A50(float *param_1,longlong param_2,longlong param_3)

{
  char cVar1;
  longlong lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined1 auStack_50 [80];
  
  fn_8268CC00();
  lVar2 = param_3 + 0x78;
  auStack_50[0] = 0;
  param_2 = param_2 + 0x10;
  cVar1 = fn_82681B80(param_2,lVar2,0xffffffff8200befc,auStack_50);
  dVar5 = (double)lbl_82002AE0;
  if (cVar1 == '\0') {
    *param_1 = lbl_82002AE0;
  }
  else {
    dVar3 = (double)fn_826972E0(auStack_50,param_3);
    *param_1 = (float)dVar3;
  }
  cVar1 = fn_82681B80(param_2,lVar2,0xffffffff8200bef0,auStack_50);
  dVar3 = (double)lbl_821AAD20;
  if (cVar1 == '\0') {
    param_1[3] = lbl_821AAD20;
  }
  else {
    dVar4 = (double)fn_826972E0(auStack_50,param_3);
    param_1[3] = (float)dVar4;
  }
  cVar1 = fn_82681B80(param_2,lVar2,0xffffffff8201261c,auStack_50);
  if (cVar1 == '\0') {
    param_1[1] = (float)dVar3;
  }
  else {
    dVar4 = (double)fn_826972E0(auStack_50,param_3);
    param_1[1] = (float)dVar4;
  }
  cVar1 = fn_82681B80(param_2,lVar2,0xffffffff8200bef8,auStack_50);
  if (cVar1 == '\0') {
    param_1[4] = (float)dVar5;
  }
  else {
    dVar5 = (double)fn_826972E0(auStack_50,param_3);
    param_1[4] = (float)dVar5;
  }
  cVar1 = fn_82681B80(param_2,lVar2,0xffffffff82012618,auStack_50);
  if (cVar1 == '\0') {
    param_1[2] = (float)dVar3;
  }
  else {
    dVar5 = (double)fn_826972E0(auStack_50,param_3);
    param_1[2] = (float)dVar5;
  }
  cVar1 = fn_82681B80(param_2,lVar2,0xffffffff82012614,auStack_50);
  if (cVar1 == '\0') {
    param_1[5] = (float)dVar3;
  }
  else {
    dVar5 = (double)fn_826972E0(auStack_50,param_3);
    param_1[5] = (float)dVar5;
  }
  fn_82696330(auStack_50);
  return param_1;
}

