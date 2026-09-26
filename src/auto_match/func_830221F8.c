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
extern int fn_8303A930();
extern int fn_8303AA38();
extern unsigned int lbl_82005748;
extern unsigned int lbl_821AAD20;


undefined8 fn_830221F8(double param_1,int param_2)

{
  ulonglong uVar1;
  double dVar2;
  float afStack_30 [6];
  
  afStack_30[0] = lbl_821AAD20;
  dVar2 = (double)lbl_821AAD20;
  if ((dVar2 <= param_1) && (dVar2 = param_1, (double)lbl_82005748 < param_1)) {
    dVar2 = (double)lbl_82005748;
  }
  if (*(char *)(param_2 + 0x2d) != '\0') {
    *(float *)(param_2 + 0x14) = (float)dVar2;
    *(float *)(param_2 + 0x18) = (float)dVar2;
    *(undefined4 *)(param_2 + 0x1c) = 8;
    uVar1 = fn_8303A930(dVar2,param_2,*(undefined1 *)(param_2 + 0x24),afStack_30);
    *(char *)(param_2 + 0x25) = (char)uVar1;
    if ((uVar1 & 0xff) == 0) {
      fn_8303AA38((double)afStack_30[0],uVar1,param_2 + 4);
    }
    *(undefined1 *)(param_2 + 0x2d) = 0;
  }
  if (dVar2 != (double)*(float *)(param_2 + 0x18)) {
    *(float *)(param_2 + 0x18) = (float)dVar2;
    *(undefined4 *)(param_2 + 0x1c) = 0;
  }
  return 1;
}

