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
extern int fn_822B54F8();
extern int fn_822B6788();
extern int fn_823369B0();
extern int fn_82526C70();
extern int fn_8265C9E0();
extern float lbl_82192604;
extern unsigned int lbl_821B0C78;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_83265A28;


undefined4 * fn_82336A70(undefined4 *param_1,undefined8 param_2)

{
  float fVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  
  fn_822B54F8();
  *param_1 = &lbl_821B0C78;
  uVar2 = fn_8265C9E0(0x1a0);
  if ((uVar2 & 0xffffffff) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = fn_823369B0(uVar2,param_1,param_2);
  }
  param_1[0x68] = uVar3;
  lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
  fVar1 = ((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - lbl_821CA460) * lbl_82192604 +
          lbl_821CA460;
  iVar4 = fn_822B6788(param_1);
  if (iVar4 == 0) {
    uVar5 = 0xffffffff821b0c2c;
  }
  else {
    uVar5 = 0xffffffff821b0c38;
  }
  fn_82526C70((ulonglong)(uint)param_1[0x68] + 0x60,0x20,uVar5,(int)fVar1);
  return param_1;
}

