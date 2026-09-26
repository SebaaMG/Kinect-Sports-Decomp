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
extern int fn_8265C9E0();
extern int fn_82B8F788();
extern unsigned int lbl_820DC948;


undefined4 * fn_82B98258(undefined4 *param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  
  fn_82B8F788(param_1,param_2,0,1);
  *param_1 = &lbl_820DC948;
  uVar3 = (ulonglong)(uint)param_1[0x11] + 1 & 0xfffffffe;
  param_1[0x22] = 0;
  param_1[0x23] = (int)uVar3;
  param_1[0x25] = 0;
  param_1[0x24] = 0;
  param_1[0x26] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 1;
  uVar3 = uVar3 - ((ulonglong)(uint)param_1[0xf] & 0xfffffffe);
  param_1[0x21] = (int)((ulonglong)(uint)param_1[0xf] & 0xfffffffe);
  param_1[0x27] = (int)uVar3;
  lVar1 = (uVar3 & 0xfffffff) << 4;
  if (0xfffffff < (uVar3 & 0xffffffff)) {
    lVar1 = -1;
  }
  iVar2 = fn_8265C9E0(lVar1);
  param_1[0x20] = iVar2;
  if (iVar2 == 0) {
    param_1[0x29] = 0;
  }
  uVar3 = (ulonglong)*(uint *)(param_2 + 4) - 0x1828004b;
  if (uVar3 == 0) {
LAB_82b98330:
    param_1[0x2a] = 0;
    param_1[0x2b] = 8;
  }
  else {
    if ((uVar3 & 0xffffffff) != 1) {
      uVar3 = (ulonglong)*(uint *)(param_2 + 4) - 0x1a20004b;
      if ((uVar3 & 0xffffffff) == 0) goto LAB_82b98330;
      if ((uVar3 & 0xffffffff) != 1) {
        return param_1;
      }
    }
    param_1[0x2b] = 0;
    param_1[0x2a] = 8;
  }
  return param_1;
}

