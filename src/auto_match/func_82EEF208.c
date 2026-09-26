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
extern int fn_82EEDA80();
extern int fn_82EEDD60();
extern int fn_82EEE258();
extern int fn_82F41920();


longlong fn_82EEF208(int *param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
                      int param_5,longlong param_6)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = fn_82EEDD60();
  if (-1 < lVar1) {
    fn_82F41920(*param_4);
    lVar1 = (**(code **)(*param_1 + 0x24))
                      (param_1,-(ulonglong)(param_6 != 0) & 0x20000 | 0x800,*param_4);
    if (-1 < lVar1) {
      if ((int)lVar1 == 0) {
        if (((param_5 != 0) && (param_1[0x1c] != 0)) &&
           (iVar2 = fn_82EEDA80(param_1 + 2,0), -1 < iVar2)) {
          param_1[0x1c] = param_1[0x1c] + -1;
        }
        lVar1 = fn_82EEE258(param_1,*param_4);
        if (-1 < lVar1) {
          fn_82F41920(*param_4);
        }
      }
      else {
        lVar1 = -0x7fffbffb;
      }
    }
  }
  return lVar1;
}

