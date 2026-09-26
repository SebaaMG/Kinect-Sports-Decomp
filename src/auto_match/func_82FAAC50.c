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
extern int fn_82FA5190();
extern int fn_82FA9A38();
extern int fn_82FAE2B8();
extern unsigned int iStack_50;
extern unsigned int lbl_831BC768;
extern unsigned int uStack_40;


int fn_82FAAC50(int param_1,undefined4 *param_2,undefined8 param_3,int *param_4)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iStack_50;
  int *piStack_48;
  int *piStack_44;
  undefined4 uStack_40;
  
  *param_4 = 0;
  piStack_48 = (int *)0x0;
  piStack_44 = (int *)0x0;
  uStack_40 = 0;
  if (*(int *)(param_2[1] + 0x40) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(*(int *)(param_2[1] + 0x40) + 0x60);
  }
  fn_82FAE2B8(uVar1,param_3,&piStack_48);
  if ((int)piStack_44 - (int)piStack_48 >> 2 == 0) {
    iVar4 = 3;
  }
  else if (*piStack_48 == 0) {
    iVar4 = 2;
  }
  else {
    iVar4 = 1;
    piVar3 = piStack_48;
    if (piStack_48 != piStack_44) {
      do {
        iVar2 = fn_82FA9A38(param_2[1],*(undefined4 *)(param_1 + 8),*param_2,0,0,*piVar3,0,0);
        if ((iVar2 == 1) && ((iVar4 == 1 || (iStack_50 < *param_4)))) {
          *param_4 = iStack_50;
          iVar4 = 0;
        }
        piVar3 = piVar3 + 1;
      } while (piVar3 != piStack_44);
    }
  }
  if (piStack_48 != (int *)0x0) {
    piStack_44 = piStack_48;
    fn_82FA5190(lbl_831BC768);
  }
  return iVar4;
}

