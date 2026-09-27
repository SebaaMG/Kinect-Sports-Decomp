extern int *piRam83265048;
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
extern unsigned int *auStack_50;
extern int fn_8304FED0();
extern int iRam8326504c;
extern int iRam83265050;
extern unsigned int uStack_38;


undefined8
fn_8304F290(undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4,
             undefined8 param_5,char param_6)

{
  int *piVar1;
  undefined8 uVar2;
  int *piVar3;
  int iVar4;
  char acStack_60;
  undefined1 auStack_50 [24];
  uint uStack_38;

  if (param_3 != 0) {
    *(undefined1 *)(param_3 + 0x11) = 0;
  }
  acStack_60 = param_6;
  uVar2 = (**(code **)(*piRam83265048 + 4))
                    (piRam83265048,param_2,param_4,param_3,&acStack_60,auStack_50);
  if ((int)uVar2 == 1) {
    if ((uStack_38 < (uint)(iRam83265050 - iRam8326504c >> 2)) &&
       (piVar1 = *(int **)(uStack_38 * 4 + iRam8326504c), piVar1 != (int *)0x0)) {
      piVar3 = (int *)(**(code **)(*piVar1 + 0x18))(piVar1,auStack_50,param_4,param_5);
      if (piVar3 != (int *)0x0) {
        if (acStack_60 == '\0') {
          iVar4 = fn_8304FED0(piVar3,param_2,param_3,param_4);
          if (iVar4 != 1) {
            (**(code **)(*piVar3 + 0xc))(piVar3);
            return 2;
          }
        }
        else {
          piVar3[0x1d] = piVar3[0x1d] | 0x4000000;
        }
        return 1;
      }
      if (acStack_60 != '\0') {
        (**(code **)(*(int *)piVar1[0x20] + 4))((int *)piVar1[0x20],auStack_50);
      }
    }
    uVar2 = 2;
  }
  return uVar2;
}
