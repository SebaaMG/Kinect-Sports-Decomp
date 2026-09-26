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
extern unsigned int lbl_821AAD20;


undefined8
fn_82AF4C78(undefined8 param_1,float *param_2,longlong param_3,float *param_4,longlong param_5)

{
  bool bVar1;
  bool bVar2;
  
  bVar2 = false;
  bVar1 = false;
  if ((int)param_3 != 0) {
    do {
      if (lbl_821AAD20 <= *param_2) {
        if (lbl_821AAD20 < *param_2) {
          bVar2 = true;
        }
      }
      else {
        bVar1 = true;
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  if ((int)param_5 != 0) {
    do {
      if (lbl_821AAD20 <= *param_4) {
        if (lbl_821AAD20 < *param_4) {
          bVar2 = true;
        }
      }
      else {
        bVar1 = true;
      }
      param_4 = param_4 + 1;
      param_5 = param_5 + -1;
    } while (param_5 != 0);
  }
  if ((bVar1) && (bVar2)) {
    return 1;
  }
  return 2;
}

