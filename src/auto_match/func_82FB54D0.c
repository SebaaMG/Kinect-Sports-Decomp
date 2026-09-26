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
extern unsigned int *auStack_58;
extern int fn_82FA5060();
extern int fn_82FA9410();
extern int fn_82FAB710();
extern int fn_82FABE80();
extern int fn_82FAD510();
extern int fn_82FB40B0();
extern int fn_82FB4990();
extern int fn_82FB6240();
extern unsigned int iStack_4c;
extern unsigned int iStack_50;
extern unsigned int iStack_5c;
extern unsigned int lbl_831BC768;


int fn_82FB54D0(int param_1,int *param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined1 uVar1;
  int iVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int *piStack_60;
  int iStack_5c;
  undefined1 auStack_58 [8];
  int iStack_50;
  int iStack_4c;
  
  iVar2 = param_2[1];
  uVar3 = fn_82FA9410(iVar2,*param_4);
  iVar7 = param_4[1];
  uVar1 = *(undefined1 *)(param_4 + 3);
  uVar4 = fn_82FA5060(lbl_831BC768,0x54);
  if ((uVar4 & 0xffffffff) != 0) {
    iVar5 = fn_82FB40B0(uVar4,uVar3,param_1,param_3,uVar1);
    if (iVar5 == 0) {
      return 0;
    }
    piVar6 = (int *)fn_82FB6240(param_1 + 0x54);
    if (piVar6 != (int *)0x0) {
      *piVar6 = iVar5;
      *(int *)(iVar5 + 0x48) = iVar7 + (int)uVar3;
      iVar7 = fn_82FABE80(param_3);
      if (iVar7 != 0) {
        *(undefined4 *)(iVar7 + 0xc) = 0;
      }
      iStack_5c = *param_2;
      iStack_50 = *(int *)(iStack_5c + 4);
      iStack_4c = 0;
      if (iStack_50 != 0) {
        do {
          iVar7 = iStack_50;
          iStack_50 = iVar7;
          if (iVar7 == param_2[1]) break;
          iStack_50 = *(int *)(iVar7 + 4);
          iStack_4c = iVar7;
        } while (iStack_50 != 0);
      }
      fn_82FAD510(&piStack_60,iStack_5c,&iStack_50,iVar5);
      piVar6 = (int *)0x0;
      if ((piStack_60 != (int *)0x0) && (piVar6 = piStack_60, *(char *)(piStack_60 + 4) == '\0')) {
        piVar6 = (int *)(**(code **)(*piStack_60 + 0xc))
                                  (piStack_60,piStack_60[5],&iStack_5c,auStack_58);
      }
      fn_82FAB710(*(undefined4 *)(param_1 + 0x38),iVar2,piVar6,*(undefined4 *)(iVar5 + 0xc));
      return iVar5;
    }
    fn_82FB4990(iVar5);
  }
  return 0;
}

