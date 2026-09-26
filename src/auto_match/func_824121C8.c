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
extern unsigned int fStack_34;
extern int fn_82230110();
extern int fn_82230300();
extern int fn_82250A18();
extern int fn_822CD140();
extern int fn_8236D0D0();
extern int fn_824180B0();
extern int fn_8241CE30();
extern int fn_82539560();
extern unsigned int lbl_832975B0;
extern unsigned int stack0x00000020;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;


void fn_824121C8(undefined8 param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  double dVar7;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined1 auStack_50 [28];
  float fStack_34;
  
  uStack_60 = 0;
  uStack_5c = 0;
  iVar5 = **(int **)(param_2 + 0x24);
  uStack_58 = 0;
  iVar6 = iVar5 + 0x149c;
  if (*(int *)(param_2 + 0x2c) == 4) {
    fVar1 = *(float *)(iVar5 + 0x888);
    fVar2 = *(float *)(iVar5 + 0x884);
    fVar3 = *(float *)(iVar5 + 0x880);
    fVar4 = *(float *)(iVar5 + 0x87c);
  }
  else {
    if (*(int *)(param_2 + 0x80) == 0) goto LAB_824122e0;
    *(undefined4 *)(param_2 + 0x80) = 0;
    iVar5 = **(int **)(param_2 + 0x24);
    fVar1 = *(float *)(iVar5 + 0x878);
    fVar2 = *(float *)(iVar5 + 0x874);
    iVar6 = iVar5 + 0x1498;
    fVar3 = *(float *)(iVar5 + 0x870);
    fVar4 = *(float *)(iVar5 + 0x86c);
  }
  dVar7 = (double)fn_82539560(param_1,(double)fVar4,(double)fVar3,(double)fVar2,(double)fVar1);
  fn_82230110(auStack_50,0xffffffff821b8218);
  fStack_34 = (float)dVar7;
  fn_8236D0D0(&uStack_60,auStack_50);
  fn_82230300(auStack_50,1,0);
  fn_824180B0(*(undefined4 *)(param_2 + 0x24),iVar6,&stack0x00000020,&uStack_60);
  iVar5 = lbl_832975B0;
  if (lbl_832975B0 == 0) {
    iVar5 = fn_82250A18();
  }
  if (*(char *)(iVar5 + 4) != '\0') {
    fn_8241CE30(param_1,*(undefined4 *)(param_2 + 0x24),param_2,2);
  }
LAB_824122e0:
  fn_822CD140(&uStack_60);
  return;
}

