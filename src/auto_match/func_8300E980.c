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
extern int fn_82F65350();
extern int fn_8300E568();
extern int fn_8300E790();
extern float lbl_8209AB30;
extern unsigned int lbl_8217BB90;


undefined4 fn_8300E980(uint *param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  int iVar1;
  int iVar2;
  double dVar3;
  
  if ((param_4 & 0xffffffff) == (ulonglong)*param_1) {
    if (*(char *)((int)param_1 + 10) == '\0') {
      iVar1 = fn_8300E568(param_1,param_1[1]);
    }
    else {
      iVar1 = fn_8300E790(param_1,param_3,param_4);
    }
    if (iVar1 != 0) {
      if ((*(ushort *)(param_1 + 2) < 100) || (*(ushort *)(iVar1 + 10) < 100)) {
        dVar3 = (double)(longlong)
                        (int)((uint)*(ushort *)(iVar1 + 10) * (uint)*(ushort *)(param_1 + 2)) *
                lbl_8209AB30;
        iVar2 = fn_82F65350();
        if (dVar3 <= (double)(longlong)iVar2 * lbl_8217BB90) {
          return 0;
        }
      }
      return *(undefined4 *)(iVar1 + 4);
    }
  }
  return 0;
}

