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
extern int fn_82522FF0();
extern int fn_82CE09D0();
extern int fn_82CE0BE8();
extern unsigned int uStack_11c;
extern unsigned int uStack_120;
extern unsigned int uStack_12c;
extern unsigned int uStack_130;


void fn_82459CD0(double *param_1)

{
  int iVar1;
  undefined4 uVar2;
  double dVar3;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  
  dVar3 = (double)fn_82522FF0();
  if (param_1[1] <= dVar3 - *param_1) {
    uVar2 = 0xc;
  }
  else {
    uStack_11c = *(undefined4 *)(param_1 + 4);
    uStack_130 = 0;
    uStack_120 = 1;
    uStack_12c = 0;
    iVar1 = fn_82CE09D0(0,0,&uStack_120,0,&uStack_130);
    if (iVar1 != -1) {
      if (iVar1 < 1) {
        return;
      }
      iVar1 = fn_82CE0BE8(*(undefined4 *)(param_1 + 4),&uStack_120);
      if (iVar1 != 0) {
        uVar2 = 8;
        goto LAB_82459d6c;
      }
    }
    uVar2 = 0xd;
  }
LAB_82459d6c:
  *(undefined4 *)((int)param_1 + 0x84) = uVar2;
  return;
}

