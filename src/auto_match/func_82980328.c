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
extern unsigned int lbl_82005710;
extern unsigned int lbl_82005F78;


undefined8 fn_82980328(undefined8 param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  double dVar2;
  
  uVar1 = *param_3;
  if (uVar1 == 0) {
    uVar1 = (uint)(param_3[2] != 0);
  }
  else {
    if ((uVar1 != 1) && (2 < uVar1)) {
      if (uVar1 == 3) {
        dVar2 = *(double *)(param_3 + 2);
        if (dVar2 < lbl_82005710) {
          dVar2 = dVar2 - lbl_82005F78;
        }
        else {
          dVar2 = dVar2 + lbl_82005F78;
        }
        *param_2 = (uint)(longlong)dVar2;
        return 0;
      }
      return 0xffffffff80004005;
    }
    uVar1 = param_3[2];
  }
  *param_2 = uVar1;
  return 0;
}

