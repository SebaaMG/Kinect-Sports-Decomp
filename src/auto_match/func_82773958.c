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
extern int fn_8267B890();
extern int fn_8267BE38();
extern int fn_82F68CC0();
extern unsigned int lbl_831E7E64;


undefined8 fn_82773958(int *param_1,uint param_2)

{
  int iVar1;
  
  if (((uint)param_1[1] < param_2) && ((uint)param_1[3] <= param_2)) {
    iVar1 = fn_8267B890(lbl_831E7E64,param_2 * 2 + 2,0);
    if (iVar1 == 0) {
      return 0;
    }
    if (*param_1 != 0) {
      fn_82F68CC0(iVar1,*param_1,((ulonglong)(uint)param_1[1] + 1 & 0x7fffffff) << 1);
    }
    *(undefined2 *)(param_2 * 2 + iVar1) = 0;
    if ((*param_1 != param_1[2]) && (*param_1 != 0)) {
      fn_8267BE38();
    }
    *param_1 = iVar1;
  }
  else if (*param_1 != 0) {
    *(undefined2 *)(param_2 * 2 + *param_1) = 0;
  }
  param_1[1] = param_2;
  return 1;
}

