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
extern int fn_82681B80();
extern int fn_82696330();
extern int fn_826972E0();


void fn_827459D8(longlong param_1,longlong param_2,double *param_3)

{
  longlong lVar1;
  undefined1 *puVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [64];
  
  puVar2 = auStack_90;
  lVar1 = param_2 + 0x78;
  lVar3 = 4;
  do {
    puVar2 = puVar2 + 0x10;
    *puVar2 = 0;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  param_1 = param_1 + 0x10;
  fn_82681B80(param_1,lVar1,0xffffffff821ce358,auStack_80);
  fn_82681B80(param_1,lVar1,0xffffffff821ce35c,auStack_70);
  fn_82681B80(param_1,lVar1,0xffffffff8200eaf0,auStack_60);
  fn_82681B80(param_1,lVar1,0xffffffff8200eae8,auStack_50);
  dVar4 = (double)fn_826972E0(auStack_50,param_2);
  dVar5 = (double)fn_826972E0(auStack_60,param_2);
  dVar6 = (double)fn_826972E0(auStack_70,param_2);
  dVar7 = (double)fn_826972E0(auStack_80,param_2);
  param_3[3] = dVar6 + dVar4;
  *param_3 = dVar7;
  puVar2 = auStack_40;
  param_3[1] = dVar6;
  lVar1 = 3;
  param_3[2] = dVar5 + dVar7;
  do {
    puVar2 = puVar2 + -0x10;
    fn_82696330(puVar2);
    lVar1 = lVar1 + -1;
  } while (-1 < lVar1);
  return;
}

