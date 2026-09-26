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
extern unsigned int *auStack_48;
extern unsigned int *auStack_50;
extern int fn_8265C9E0();
extern int fn_8288B760();
extern int fn_828B25C8();
extern int fn_828B27A8();
extern int fn_828B2D18();
extern int fn_828B4640();
extern int fn_828B4A58();
extern int fn_828B52D0();


void fn_828B2AE0(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  char cVar5;
  ulonglong uVar4;
  int *piVar6;
  undefined4 auStack_50 [2];
  undefined8 auStack_48 [9];
  
  auStack_48[0] = (**(code **)(*param_2 + 0x48))(param_2);
  piVar6 = (int *)(param_1 + 0xc);
  bVar3 = false;
  piVar1 = (int *)**(int **)(param_1 + 0xc);
  if (piVar1 != *(int **)(param_1 + 0xc)) {
    do {
      iVar2 = piVar1[2];
      cVar5 = fn_828B2D18(iVar2,auStack_48);
      if (cVar5 != '\0') {
        bVar3 = true;
        fn_828B4640(iVar2,param_2);
        break;
      }
      piVar1 = (int *)*piVar1;
    } while (piVar1 != (int *)*piVar6);
  }
  if (bVar3) goto LAB_828b2be4;
  cVar5 = fn_8288B760(param_2);
  if (cVar5 == '\0') {
    uVar4 = fn_8265C9E0(0x48);
    if ((uVar4 & 0xffffffff) == 0) goto LAB_828b2bd0;
    auStack_50[0] = fn_828B4A58(uVar4,param_1,param_2);
  }
  else {
    uVar4 = fn_8265C9E0(0x68);
    if ((uVar4 & 0xffffffff) == 0) {
LAB_828b2bd0:
      auStack_50[0] = 0;
    }
    else {
      auStack_50[0] = fn_828B52D0(uVar4,param_1,param_2);
    }
  }
  fn_828B27A8(piVar6,*piVar6,auStack_50);
LAB_828b2be4:
  fn_828B25C8(param_1);
  return;
}

