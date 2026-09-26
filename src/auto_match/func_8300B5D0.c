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
extern unsigned int fStack_54;
extern unsigned int fStack_58;
extern int fn_82FF5400();
extern int fn_82FF59A8();
extern int fn_8300C760();
extern int fn_83036538();
extern unsigned int iStack_50;
extern unsigned int lbl_832642F4;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_5c;


undefined8
fn_8300B5D0(double param_1,int param_2,int param_3,undefined8 param_4,int param_5,
             undefined4 param_6)

{
  undefined4 *puVar1;
  int *piVar3;
  int iVar4;
  undefined8 uVar2;
  int *piStack_60;
  undefined4 uStack_5c;
  float fStack_58;
  float fStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  undefined1 uStack_48;
  
  puVar1 = *(undefined4 **)(param_2 + 0x7c);
  do {
    if (puVar1 == (undefined4 *)0x0) {
LAB_8300b62c:
      piVar3 = (int *)fn_8300C760(param_2 + 0x7c);
      if (piVar3 == (int *)0x0) {
        uVar2 = 2;
      }
      else {
        fn_83036538(piVar3,param_2);
LAB_8300b644:
        if (piVar3[2] != 0) {
          fStack_54 = (float)param_1;
          fn_82FF5400(param_1,lbl_832642F4,piVar3[2],0x10000);
        }
        if (piVar3[2] == 0) {
          fStack_58 = (float)piVar3[3];
          fStack_54 = (float)param_1;
          if (((double)fStack_58 != param_1) && (param_5 != 0)) {
            uStack_5c = 0x10000;
            uStack_48 = 1;
            piStack_60 = piVar3;
            iStack_50 = param_5;
            uStack_4c = param_6;
            iVar4 = fn_82FF59A8(lbl_832642F4,&piStack_60,1,0);
            piVar3[2] = iVar4;
            return 1;
          }
          (**(code **)*piVar3)(param_1,piVar3,0x10000);
        }
        uVar2 = 1;
      }
      return uVar2;
    }
    if (puVar1[1] == param_3) {
      piVar3 = puVar1 + 2;
      if (piVar3 != (int *)0x0) goto LAB_8300b644;
      goto LAB_8300b62c;
    }
    puVar1 = (undefined4 *)*puVar1;
  } while( true );
}

