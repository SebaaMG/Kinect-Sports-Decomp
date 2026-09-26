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
extern unsigned int lbl_832645F0;
extern unsigned int lbl_832645F4;


undefined8
fn_83013A98(int param_1,int param_2,undefined8 param_3,undefined8 param_4,undefined4 *param_5,
             undefined8 param_6)

{
  uint uVar1;
  int *piVar3;
  undefined8 uVar2;
  undefined4 *puVar4;
  
  for (piVar3 = lbl_832645F0;
      (piVar3 != lbl_832645F4 && (*piVar3 != (param_2 * 0x1000 + param_1) * 0x10 + 4));
      piVar3 = piVar3 + 2) {
  }
  uVar1 = -(uint)((lbl_832645F4 != piVar3) != 0);
  puVar4 = (undefined4 *)(uVar1 & (uint)(piVar3 + 1));
  if (puVar4 != (undefined4 *)0x0) {
    piVar3 = (int *)(*(code *)*puVar4)(0xffffffff831bc7fc,uVar1,param_3,
                                       -(uint)(lbl_832645F4 != piVar3));
    *param_5 = piVar3;
    if (piVar3 != (int *)0x0) {
      uVar2 = (**(code **)(*piVar3 + 0x14))(piVar3,0xffffffff831bc7fc,param_3,param_4,param_6);
      if ((int)uVar2 == 1) {
        return uVar2;
      }
      (**(code **)(*(int *)*param_5 + 4))((int *)*param_5,0xffffffff831bc7fc);
      *param_5 = 0;
    }
  }
  return 2;
}

