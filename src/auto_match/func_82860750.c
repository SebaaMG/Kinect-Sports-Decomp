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
extern unsigned int fStack_58;
extern unsigned int fStack_5c;
extern unsigned int fStack_60;
extern unsigned int fStack_68;
extern unsigned int fStack_6c;
extern unsigned int fStack_70;
extern int fn_8280AD30();
extern int fn_82810360();
extern int fn_8285A808();
extern int fn_8285A830();


undefined8 fn_82860750(int param_1,undefined8 param_2,float *param_3)

{
  int *piVar1;
  int iVar3;
  int *piVar4;
  undefined8 uVar2;
  uint uVar5;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float afStack_50 [20];
  
  iVar3 = fn_8285A808();
  piVar4 = (int *)fn_8285A830(param_1,param_2);
  if (*(int *)(iVar3 + 0x94) != 0) {
    fn_8280AD30(iVar3 + 0x10,param_3,afStack_50);
    param_3 = afStack_50;
  }
  if (*(short *)(param_1 + 0x44) != 0) {
    uVar5 = 0;
    do {
      piVar1 = *(int **)(uVar5 * 4 + *(int *)(param_1 + 0x40));
      if (*piVar1 != -1) {
        fn_82810360(piVar1 + 1,&fStack_70);
        fn_82810360(piVar1 + 4,&fStack_60);
        if ((((fStack_70 <= *param_3) && (*param_3 <= fStack_60)) && (fStack_6c <= param_3[1])) &&
           (((param_3[1] <= fStack_5c && (fStack_68 <= param_3[2])) && (param_3[2] <= fStack_58))))
        {
          *piVar4 = (int)piVar1;
          goto LAB_8286086c;
        }
      }
      uVar5 = uVar5 + 1 & 0xffff;
    } while (uVar5 < *(ushort *)(param_1 + 0x44));
  }
  if (*(int *)(iVar3 + 0x90) == 0) {
    uVar2 = 0;
  }
  else {
    *piVar4 = *(int *)(iVar3 + 0x90);
LAB_8286086c:
    uVar2 = 1;
  }
  return uVar2;
}

