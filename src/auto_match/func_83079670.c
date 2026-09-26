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
extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern unsigned int *auStack_80;
extern int fn_8306E818();
extern int fn_8306E890();
extern int fn_8306ECE8();
extern int fn_83076028();
extern int fn_830763C8();
extern int fn_83076AD0();
extern int fn_8307DA20();
extern int fn_8307DA38();
extern int fn_8307DA68();
extern int fn_8307DAF8();
extern unsigned int lbl_8207F514;
extern unsigned int lbl_8207F51C;


void fn_83079670(undefined8 param_1,undefined8 param_2,float *param_3,float *param_4,
                  undefined8 param_5,char param_6)

{
  float *pfVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  double dVar4;
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [96];
  
  uVar3 = fn_8306E890((double)lbl_8207F51C,param_1);
  pfVar1 = param_4;
  if (param_6 != '\0') {
    pfVar1 = (float *)fn_8307DA20(auStack_80);
  }
  puVar2 = (undefined8 *)
           fn_8307DAF8(auStack_70,*(undefined8 *)pfVar1,(ulonglong)(uint)pfVar1[2] << 0x20,
                             *(undefined8 *)param_3,(ulonglong)(uint)param_3[2] << 0x20);
  puVar2 = (undefined8 *)
           fn_8307DA38(uVar3,auStack_80,*puVar2,(ulonglong)*(uint *)(puVar2 + 1) << 0x20);
  pfVar1 = (float *)fn_8307DA68(auStack_60,*(undefined8 *)param_3,
                                      (ulonglong)(uint)param_3[2] << 0x20,*puVar2,
                                      (ulonglong)*(uint *)(puVar2 + 1) << 0x20);
  *param_3 = *pfVar1;
  dVar4 = (double)lbl_8207F514;
  param_3[1] = pfVar1[1];
  param_3[2] = pfVar1[2];
  uVar3 = fn_8306E890(dVar4,param_1);
  dVar4 = (double)fn_8306E818((double)*param_3,(double)*param_4,uVar3);
  *param_3 = (float)dVar4;
  fn_8306ECE8();
  fn_830763C8(param_2);
  fn_83076AD0(*(undefined8 *)param_3,(ulonglong)(uint)param_3[2] << 0x20);
  fn_83076028();
  return;
}

