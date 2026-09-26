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
extern int fn_8232ACF8();
extern int fn_82535298();
extern int fn_825354B8();
extern int fn_82536008();
extern int fn_82536288();


void fn_8232B210(int *param_1)

{
  int *piVar1;
  bool bVar2;
  int aiStack_30 [12];
  
  if (param_1[0x48] != 0) {
    fn_82536008();
    fn_82536288(param_1 + 0x48);
    param_1[0x48] = 0;
  }
  piVar1 = param_1 + *param_1 * 6 + 1;
  if (piVar1 == (int *)0x0) {
    bVar2 = false;
  }
  else {
    bVar2 = *piVar1 != 0;
  }
  if (bVar2) {
    aiStack_30[0] = *piVar1;
    if (param_1 + 0x4c == (int *)0x0) {
      aiStack_30[0] =
           fn_82535298(aiStack_30,*(undefined4 *)(param_1[0x50] + 0x84c),0xffffffff83296bc0,
                             0xffffffff83296bd0);
    }
    else {
      aiStack_30[0] =
           fn_825354B8(aiStack_30,param_1 + 0x4c,0,*(undefined4 *)(param_1[0x50] + 0x84c),
                             0xffffffff83296bc0,0xffffffff83296bd0);
    }
    fn_82536288(aiStack_30);
  }
  *param_1 = 0;
  param_1[0x58] = 1;
  if ((param_1[0x44] != 0) && (param_1[0x46] != 0)) {
    fn_8232ACF8(param_1[0x44],0);
    fn_8232ACF8(param_1[0x46],*param_1);
  }
  return;
}

