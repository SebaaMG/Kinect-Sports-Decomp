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
extern int fn_82A3F758();
extern int fn_82E4FE40();
extern int fn_82E50BE8();
extern int fn_82E57AA0();
extern int fn_82F64CE0();


undefined8 fn_82E57F48(int param_1,undefined8 param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  undefined8 uVar5;
  
  if (*(uint *)(param_1 + 0xb0) < 0xffff) {
    lVar2 = fn_82F64CE0(param_2);
    if ((lVar2 + 1U & 0x7fffffff) << 1 < 0x100) {
      lVar2 = fn_82F64CE0(param_2);
      uVar3 = fn_82E50BE8((lVar2 + 1U & 0x7f) << 1,0,0,0,0);
      if (uVar3 == 0) {
        uVar5 = 0xffffffff8007000e;
      }
      else {
        uVar1 = lVar2 + 1U & 0x7f;
        if (uVar1 < 0x80000000) {
          uVar5 = fn_82A3F758(uVar3,uVar1,param_2);
        }
        else {
          uVar5 = 0xffffffff80070057;
        }
        if (-1 < (int)uVar5) {
          iVar4 = fn_82E57AA0(param_1 + 0x48,uVar3,0);
          if (iVar4 == 0) {
            uVar5 = 0xffffffff8007000e;
          }
          else {
            uVar3 = 0;
          }
        }
        if ((uVar3 & 0xffffffff) != 0) {
          fn_82E4FE40(uVar3);
        }
      }
    }
    else {
      uVar5 = 0xffffffff80070057;
    }
  }
  else {
    uVar5 = 0xffffffffc00d3a9a;
  }
  return uVar5;
}

