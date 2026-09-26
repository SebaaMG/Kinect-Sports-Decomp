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
extern unsigned int *auStack_30;
extern unsigned int *auStack_40;
extern int fn_82810280();
extern int fn_82810328();
extern int fn_82810530();
extern int fn_82862238();
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_832116B8;
extern unsigned int lbl_832116BC;


void fn_82863CD0(int param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  double dVar1;
  double dVar2;
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [48];
  
  fn_82862238((double)lbl_832116BC,*(undefined4 *)(param_1 + 4),*(undefined2 *)(param_1 + 8),
                    lbl_832116B8,param_4,0,auStack_40);
  fn_82810328(auStack_40,0xffffffff832116c0,auStack_30);
  dVar2 = (double)fn_82810280(param_2,auStack_30);
  dVar1 = (double)lbl_821AAD20;
  if (dVar1 < dVar2) {
    fn_82810530(param_2,param_2);
  }
  *(bool *)param_3 = dVar1 < dVar2;
  return;
}

