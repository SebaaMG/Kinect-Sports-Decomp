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
extern int fn_82E59440();
extern int fn_82E62670();
extern int fn_82E626B0();
extern int fn_82E626F0();
extern unsigned int iStack_34;


/* WARNING: Type propagation algorithm not settling */

longlong fn_82E76830(int param_1,ulonglong param_2)

{
  int *piVar1;
  longlong lVar2;
  int *piStack_40;
  int *piStack_3c;
  int *piStack_38;
  int iStack_34;
  int aiStack_30 [12];
  
  if ((param_2 & 0xffffffff) == 0) {
    lVar2 = -0x7ff8ffa9;
  }
  else {
    piStack_40 = (int *)0x0;
    piStack_3c = (int *)0x0;
    piStack_38 = (int *)0x0;
    lVar2 = fn_82E59440(param_2,0xffffffff820ed018,0xffffffff82154c58,&piStack_40);
    if (((-1 < lVar2) &&
        (lVar2 = (**(code **)*piStack_40)(piStack_40,0xffffffff82154c18,&piStack_3c), -1 < lVar2))
       && (lVar2 = (**(code **)(*piStack_3c + 0x10))(piStack_3c,0xffffffff82154aa8,0,&piStack_38),
          piVar1 = piStack_38, -1 < lVar2)) {
      aiStack_30[0] = 0;
      lVar2 = fn_82E626B0(piStack_38,aiStack_30);
      if (-1 < lVar2) {
        iStack_34 = 0;
        lVar2 = fn_82E626F0(piVar1,&iStack_34);
        if (-1 < lVar2) {
          if (aiStack_30[0] == iStack_34) {
            *(int *)(param_1 + 0x138) = aiStack_30[0];
          }
          else {
            *(undefined4 *)(param_1 + 0x138) = 0;
          }
          aiStack_30[1] = 0;
          lVar2 = fn_82E62670(piVar1,aiStack_30 + 1);
        }
      }
    }
    if (piStack_40 != (int *)0x0) {
      (**(code **)(*piStack_40 + 8))();
      piStack_40 = (int *)0x0;
    }
    if (piStack_3c != (int *)0x0) {
      (**(code **)(*piStack_3c + 8))();
      piStack_3c = (int *)0x0;
    }
    if (piStack_38 != (int *)0x0) {
      (**(code **)(*piStack_38 + 8))();
    }
  }
  return lVar2;
}

