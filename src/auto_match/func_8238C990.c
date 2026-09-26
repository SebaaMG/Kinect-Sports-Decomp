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
extern int fn_822315A0();
extern int fn_82365BD8();
extern int fn_8236FB68();
extern int fn_82508078();
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_831DCD58;


void fn_8238C990(undefined8 param_1,int *param_2,int param_3,int param_4,undefined8 param_5,
                  int param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  float fVar1;
  int iVar4;
  undefined8 uVar2;
  longlong lVar3;
  int iVar5;
  double dVar6;
  double dVar7;
  undefined1 auStack_60 [96];
  
  if (param_6 < 0x18) {
    iVar5 = *(int *)(&lbl_831DCD58 + param_6 * 4);
  }
  else {
    iVar5 = 6;
  }
  if (iVar5 == 0) {
    iVar4 = (**(code **)(*param_2 + 0x9c))(param_2);
    if (iVar4 == 0) {
      dVar7 = (double)*(float *)(param_4 + 0x344);
      dVar6 = (double)(**(code **)(*param_2 + 0x74))(param_2);
      fVar1 = (float)(dVar6 + dVar7);
      if (lbl_821CA460 < (float)(dVar6 + dVar7)) {
        fVar1 = lbl_821CC160;
      }
      *(float *)(param_4 + 0x344) = fVar1;
    }
  }
  iVar4 = *param_2;
  uVar2 = fn_82365BD8(auStack_60,param_3);
  (**(code **)(iVar4 + 0x34))(param_1,param_2,uVar2,param_4,param_5,param_6,param_7,param_9);
  if (iVar5 != 0) {
    iVar5 = param_2[2];
    lVar3 = fn_8236FB68(10);
    if (lVar3 != 0) {
      fn_82508078(*(undefined4 *)(iVar5 + 0xa4),lVar3,0);
    }
  }
  if (*(int *)(param_3 + 4) != 0) {
    fn_822315A0();
  }
  return;
}

