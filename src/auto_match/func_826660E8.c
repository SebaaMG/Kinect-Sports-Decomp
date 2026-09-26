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
extern int fn_8265CF70();
extern int fn_8265D3F0();
extern int fn_8265FE68();
extern int fn_8265FE98();
extern int fn_82660870();
extern int fn_82668DC0();
extern int fn_82668E40();
extern int fn_8266AE20();
extern int fn_82BA02A8();
extern unsigned int uStack0000001c;


void fn_826660E8(int *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *piStack00000014;
  uint uStack0000001c;
  
  piStack00000014 = param_1;
  uStack0000001c = param_2;
  uVar1 = fn_8265FE68(param_1);
  if (uVar1 < uStack0000001c) {
    fn_82660870(piStack00000014);
  }
  else {
    uVar1 = fn_8265D3F0(piStack00000014);
    if (uVar1 < uStack0000001c) {
      iVar2 = fn_8265FE98(piStack00000014 + 3,uStack0000001c,0);
      fn_8266AE20(piStack00000014,*piStack00000014,piStack00000014[1],iVar2);
      iVar3 = fn_8265CF70(piStack00000014);
      if (*piStack00000014 != 0) {
        fn_82668DC0(piStack00000014,*piStack00000014,piStack00000014[1]);
        fn_82668E40(piStack00000014 + 3,*piStack00000014,
                          piStack00000014[2] - *piStack00000014 >> 2);
      }
      fn_82BA02A8(piStack00000014);
      piStack00000014[2] = iVar2 + uStack0000001c * 4;
      piStack00000014[1] = iVar2 + iVar3 * 4;
      *piStack00000014 = iVar2;
    }
  }
  return;
}

