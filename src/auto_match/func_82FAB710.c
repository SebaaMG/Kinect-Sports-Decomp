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
extern int fn_82FA7A48();
extern int fn_82FAA820();
extern int fn_82FAAF20();
extern int fn_82FAB2F8();
extern unsigned int lbl_831BC768;
extern unsigned int lbl_83264230;
extern unsigned int uStack_48;


void fn_82FAB710(undefined8 param_1,int param_2,int param_3,longlong param_4)

{
  uint uVar1;
  undefined4 uVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *piStack_50;
  int *piStack_4c;
  undefined4 uStack_48;
  
  piStack_50 = (int *)0x0;
  piStack_4c = (int *)0x0;
  param_4 = -param_4;
  uStack_48 = 0;
  if ((int)*(uint *)(param_2 + 0xc) < 0) {
    param_4 = (ulonglong)*(uint *)(param_2 + 0xc) + param_4;
  }
  fn_82FAA820(param_2,&piStack_50,-param_4);
  if (param_3 != 0) {
    fn_82FAA820(param_3,&piStack_50,-1 - (ulonglong)*(uint *)(param_3 + 0xc));
  }
  piVar4 = piStack_4c;
  piVar3 = piStack_50;
  if (piStack_50 != piStack_4c) {
    piVar6 = piStack_50 + 2;
    do {
      if (piVar6[-1] == 0) {
        uVar1 = ((undefined4 *)*piVar6)[5];
        uVar2 = *(undefined4 *)*piVar6;
        fn_82FAAF20(param_1);
        if ((uVar1 >> 0x1e & 1) != 0) {
          fn_82FAB2F8(param_1,uVar2,1);
        }
      }
      else if (piVar6[-1] == 1) {
        fn_82FA7A48(lbl_83264230,*piVar6);
      }
      piVar5 = piVar6 + 1;
      piVar6 = piVar6 + 3;
    } while (piVar5 != piVar4);
  }
  if (piVar3 != (int *)0x0) {
    fn_82FA5190(lbl_831BC768,piVar3);
  }
  return;
}

