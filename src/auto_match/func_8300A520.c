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
extern unsigned int fStack_44;
extern unsigned int fStack_48;
extern int fn_82FF5400();
extern int fn_82FF59A8();
extern unsigned int iStack_40;
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_832642F4;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_4c;


undefined8 fn_8300A520(int param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int *piVar3;
  double dVar4;
  int *piStack_50;
  undefined4 uStack_4c;
  float fStack_48;
  float fStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  undefined1 uStack_38;
  
  puVar1 = *(undefined4 **)(param_1 + 0x7c);
  while( true ) {
    if (puVar1 == (undefined4 *)0x0) {
      return 1;
    }
    if (puVar1[1] == param_2) break;
    puVar1 = (undefined4 *)*puVar1;
  }
  piVar3 = puVar1 + 2;
  if (piVar3 == (int *)0x0) {
    return 1;
  }
  dVar4 = (double)lbl_821AAD20;
  if (puVar1[4] != 0) {
    fStack_44 = lbl_821AAD20;
    fn_82FF5400(dVar4,lbl_832642F4,puVar1[4],0x10000,param_4,param_3,param_4,0);
  }
  if (puVar1[4] != 0) {
    return 1;
  }
  fStack_48 = (float)puVar1[5];
  fStack_44 = (float)dVar4;
  if (((double)fStack_48 != dVar4) && (iStack_40 = (int)param_3, iStack_40 != 0)) {
    uStack_3c = (undefined4)param_4;
    uStack_4c = 0x10000;
    uStack_38 = 1;
    piStack_50 = piVar3;
    uVar2 = fn_82FF59A8(lbl_832642F4,&piStack_50,1,0);
    puVar1[4] = uVar2;
    return 1;
  }
  (**(code **)*piVar3)(dVar4,piVar3,0x10000);
  return 1;
}

