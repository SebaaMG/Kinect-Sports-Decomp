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
extern int fn_82A3FF60();
extern int fn_82A4F4E0();
extern int fn_82A68C48();
extern int fn_82A68C70();
extern int fn_82A68E28();


longlong fn_82A511A0(undefined4 *param_1,undefined4 param_2,int param_3,undefined8 param_4,
                      undefined8 param_5)

{
  ulonglong uVar1;
  int iVar2;
  longlong lVar3;
  
  param_1[1] = param_3;
  *param_1 = param_2;
  uVar1 = fn_82A3FF60(0xffffffff83219d50,0x1c,0x20970005,0);
  if ((uVar1 & 0xffffffff) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = fn_82A68C48(uVar1,param_4,param_5,*(undefined4 *)(param_3 + 0x3c));
  }
  param_1[2] = iVar2;
  if (iVar2 == 0) {
    lVar3 = -0x7ff8fff2;
  }
  else {
    lVar3 = fn_82A68C70((double)*(float *)(param_3 + 0x48));
    if ((lVar3 < 0) && (iVar2 = param_1[2], iVar2 != 0)) {
      fn_82A68E28(iVar2);
      fn_82A4F4E0(iVar2);
      param_1[2] = 0;
    }
  }
  return lVar3;
}

