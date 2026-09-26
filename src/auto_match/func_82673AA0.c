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
extern int fn_82526B90();
extern int fn_82671AC8();
extern int fn_82671B90();
extern int fn_826737C8();


void fn_82673AA0(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = fn_82526B90(param_2,0xffffffff82002d38);
  if (iVar2 == 0) {
    if ((*(uint *)(param_3 + 4) >> 6 & 1) == 0) {
      uVar1 = *(undefined4 *)(param_3 + 8);
    }
    else {
      uVar1 = **(undefined4 **)(param_3 + 8);
    }
    fn_826737C8((double)(float)*(double *)(param_3 + 0x18),
                  (double)(float)*(double *)(param_3 + 0x28),
                  (double)(float)*(double *)(param_3 + 0x38),
                  (double)(float)*(double *)(param_3 + 0x48),param_1,uVar1);
  }
  else {
    iVar2 = fn_82526B90(param_2,0xffffffff82002d24);
    if (iVar2 == 0) {
      if ((*(uint *)(param_3 + 4) >> 6 & 1) == 0) {
        uVar1 = *(undefined4 *)(param_3 + 8);
      }
      else {
        uVar1 = **(undefined4 **)(param_3 + 8);
      }
      fn_82671AC8((double)(float)*(double *)(param_3 + 0x18),
                    (double)(float)*(double *)(param_3 + 0x28),
                    (double)(float)*(double *)(param_3 + 0x38),
                    (double)(float)*(double *)(param_3 + 0x48),param_1,uVar1);
    }
    else {
      iVar2 = fn_82526B90(param_2,0xffffffff82002d0c);
      if (iVar2 == 0) {
        if ((*(uint *)(param_3 + 4) >> 6 & 1) == 0) {
          uVar1 = *(undefined4 *)(param_3 + 8);
        }
        else {
          uVar1 = **(undefined4 **)(param_3 + 8);
        }
        fn_82671B90(param_1,uVar1);
      }
    }
  }
  return;
}

