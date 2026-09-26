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
extern int fn_82A1E0C0();
extern int fn_82A1E2C0();
extern int fn_82A1E338();
extern int fn_82A1E508();
extern int fn_82A1E658();


void fn_82FF8FB0(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined4 *param_4)

{
  ulonglong uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = fn_82A1E0C0(0,param_3[2],param_1,param_2,4,0);
  *param_4 = (int)uVar1;
  if ((uVar1 & 0xffffffff) != 0) {
    iVar2 = fn_82A1E508(uVar1,param_3[1]);
    uVar3 = *param_4;
    if (iVar2 != -1) {
      iVar2 = fn_82A1E338(uVar3,*param_3);
      uVar3 = *param_4;
      if (iVar2 != 0) {
        iVar2 = fn_82A1E2C0(uVar3);
        if (iVar2 != -1) {
          return;
        }
        uVar3 = *param_4;
      }
    }
    fn_82A1E658(uVar3);
  }
  *param_4 = 0;
  return;
}

