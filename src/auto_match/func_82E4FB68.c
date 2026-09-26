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
extern int fn_8265C940();
extern int fn_8265C990();
extern int fn_82E4E220();
extern int fn_82E4F2B8();
extern int fn_82EDE100();
extern int fn_82EDE770();
extern int fn_82EDE890();
extern int fn_82EDF308();
extern int fn_82EDF9F8();
extern int fn_82EDFFC0();
extern int fn_82F68CC0();
extern unsigned int stack0x00000030;
extern unsigned int uStack00000030;
extern unsigned int uStack00000038;


void fn_82E4FB68(int *param_1,int param_2,int param_3,int *param_4,undefined8 param_5,
                  undefined8 param_6,int param_7)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  int *piVar4;
  undefined8 uStack00000030;
  undefined8 uStack00000038;
  
  if (param_1 != (int *)0x0) {
    if (((param_2 == 0) || (param_3 == 0)) || (param_4 == (int *)0x0)) {
      *param_1 = 1;
    }
    else {
      *param_4 = 0;
      uStack00000030 = param_5;
      uStack00000038 = param_6;
      iVar2 = fn_8265C940(0x428,0x248c8000);
      *param_4 = iVar2;
      if (iVar2 == 0) {
        *param_1 = 2;
      }
      else {
        param_4[1] = 0;
        iVar2 = fn_8265C940(0x428,0x248c8000);
        param_4[1] = iVar2;
        if (iVar2 == 0) {
          *param_1 = 2;
          fn_8265C990(*param_4,0x248c8000);
          *param_4 = 0;
        }
        else {
          uVar3 = 0x28;
          if ((*(int *)(param_2 + 0x10) == 0) && (*(short *)(param_2 + 0xe) == 8)) {
            uVar3 = 0x428;
          }
          else if (*(int *)(param_2 + 0x10) == 3) {
            uVar3 = 0x34;
          }
          fn_82F68CC0(*param_4,param_2,uVar3);
          uVar3 = 0x28;
          if ((*(int *)(param_3 + 0x10) == 0) && (*(short *)(param_3 + 0xe) == 8)) {
            uVar3 = 0x428;
          }
          else if (*(int *)(param_3 + 0x10) == 3) {
            uVar3 = 0x34;
          }
          fn_82F68CC0(param_4[1],param_3,uVar3);
          param_4[0xe35] = 0;
          piVar4 = param_4 + 0xe41;
          fn_82EDFFC0(piVar4,&stack0x00000030);
          param_4[0xe20] = 0;
          iVar2 = 2;
          if (param_7 != 4) {
            iVar2 = param_7;
          }
          param_4[0xe4f] = iVar2;
          param_4[0xe53] = 0;
          param_4[0xe54] = 0;
          *param_1 = 0;
          if ((((*piVar4 == 0) && (param_4[0xe42] == 0)) && (param_4[0xe43] == 0)) &&
             (param_4[0xe44] == 0)) {
            param_4[0xe43] = *(int *)(param_2 + 4);
            uVar1 = (int)*(uint *)(param_2 + 8) >> 0x1f;
            param_4[0xe44] = (*(uint *)(param_2 + 8) ^ uVar1) - uVar1;
          }
          if ((param_4[0xe43] - *piVar4 == *(int *)(param_2 + 4)) &&
             (uVar1 = (int)*(uint *)(param_2 + 8) >> 0x1f,
             param_4[0xe44] - param_4[0xe42] == (*(uint *)(param_2 + 8) ^ uVar1) - uVar1)) {
            param_4[0xe45] = 0;
          }
          else {
            param_4[0xe45] = 1;
          }
          if ((*(int *)(param_2 + 0x10) == 0) || (*(int *)(param_2 + 0x10) == 3)) {
            fn_82EDE100(param_4);
            iVar2 = fn_82EDE770(*param_4,param_4);
            *param_1 = iVar2;
            if (iVar2 != 0) {
              return;
            }
          }
          iVar2 = fn_82E4E220(param_4);
          *param_1 = iVar2;
          if (iVar2 == 0) {
            iVar2 = fn_82EDE890(param_4);
            *param_1 = iVar2;
            if (iVar2 == 0) {
              fn_82EDF9F8(param_4);
              iVar2 = fn_82E4F2B8(param_4);
              *param_1 = iVar2;
              if (iVar2 == 0) {
                fn_82EDF308(param_4);
              }
            }
          }
        }
      }
    }
  }
  return;
}

