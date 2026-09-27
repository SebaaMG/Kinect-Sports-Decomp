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
extern unsigned int *auStack_c0;
extern unsigned int *auStack_cc;
extern int fn_8267B890();
extern int fn_8267BED0();
extern int fn_8267C498();
extern int fn_826EB5F0();
extern int fn_826EE248();
extern int fn_826EE368();
extern int fn_826EEFE8();
extern int fn_8275FD10();
extern int fn_82760648();
extern int fn_82760B00();
extern int fn_827629D8();
extern int fn_82783F98();
extern int fn_827840E8();
extern int fn_827842B8();
extern unsigned int lbl_82002C28;
extern unsigned int lbl_8200571C;
extern float lbl_82021534;
extern unsigned int lbl_831E7E64;
extern unsigned int uStack_d0;


void fn_82763388(double param_1,undefined8 param_2,int *param_3,undefined8 param_4,int param_5)

{
  ulonglong uVar1;
  int iVar3;
  int iVar4;
  undefined8 uVar2;
  double dVar5;
  double dVar6;
  undefined4 uStack_d0;
  undefined4 auStack_cc [3];
  undefined1 auStack_c0 [32];
  char cStack_a0;
  
  if (param_3[8] == 0) {
    uVar1 = fn_8267B890(lbl_831E7E64,0x3b4,0);
    if ((uVar1 & 0xffffffff) == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = fn_826EEFE8(uVar1,lbl_831E7E64);
    }
    auStack_cc[0] = 0x83;
    dVar6 = (double)(float)((double)lbl_8200571C / param_1);
    dVar5 = (double)((float)((double)*(float *)(param_5 + 0x10) * dVar6) * lbl_82021534);
    iVar4 = fn_8267BED0(param_3,0x70,auStack_cc);
    if (iVar4 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = fn_826EE248(dVar6,dVar5);
    }
    param_3[8] = iVar4;
    iVar4 = iVar3 + 8;
    fn_827842B8(iVar4);
    fn_82783F98(dVar5,iVar4);
    *(byte *)(iVar3 + 0x4c) = *(byte *)(param_3 + 9) >> 3 & 1;
    if ((*(byte *)(param_3 + 9) & 0x10) != 0) {
      fn_826EB5F0(param_2,param_3[8],param_3 + 1);
    }
    fn_82760648(auStack_c0,param_3);
    uStack_d0 = 0;
    uVar2 = (**(code **)(*param_3 + 0x24))(param_3,&uStack_d0);
    dVar6 = (double)lbl_82002C28;
    while (cStack_a0 != '\x01') {
      if (cStack_a0 == '\x02') {
        fn_827840E8((double)(float)(dVar5 * dVar6),iVar4);
        fn_826EE368(param_3[8],iVar4,uVar2,uStack_d0,0,param_5);
        fn_827842B8(iVar4);
        if (cStack_a0 != '\x01') {
          if (cStack_a0 == '\x02') {
            fn_8275FD10();
          }
          else {
            fn_82760B00(auStack_c0);
          }
        }
      }
      else {
        fn_827629D8(auStack_c0,iVar4);
      }
    }
    fn_827840E8((double)(float)(dVar5 * dVar6),iVar4);
    fn_826EE368(param_3[8],iVar4,uVar2,uStack_d0,0,param_5);
    fn_8267C498(iVar3);
  }
  return;
}

