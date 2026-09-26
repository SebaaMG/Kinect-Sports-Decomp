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
extern unsigned int *auStack_34;
extern int fn_82E5A200();
extern int fn_82E60688();
extern int fn_82E60E60();
extern int fn_82E62670();
extern int fn_82E628C8();
extern unsigned int uStack_38;


longlong fn_82E617F8(int *param_1,int *param_2,int *param_3)

{
  longlong lVar1;
  int *piStack_40;
  int *piStack_3c;
  uint uStack_38;
  uint auStack_34 [13];
  
  if (((param_1 == (int *)0x0) || (param_2 == (int *)0x0)) || (param_3 == (int *)0x0)) {
    return -0x7ff8ffa9;
  }
  piStack_40 = (int *)0x0;
  piStack_3c = (int *)0x0;
  lVar1 = (**(code **)(*param_2 + 0x1c))(param_2,0xffffffff82154b18,&piStack_40);
  if (((-1 < lVar1) && (lVar1 = fn_82E60688(param_1,piStack_40), -1 < lVar1)) &&
     ((lVar1 = (**(code **)(*param_2 + 0x1c))(param_2,0xffffffff820f8f08,&piStack_3c), -1 < lVar1 &&
      (lVar1 = fn_82E60E60(param_3,param_1,piStack_3c), -1 < lVar1)))) {
    auStack_34[0] = 0;
    lVar1 = (**(code **)(*param_1 + 0x1c))(param_1,0xffffffff8214c720,auStack_34);
    if (-1 < lVar1) {
      if ((auStack_34[0] & 0x80000000) != 0) {
        uStack_38 = 0;
        lVar1 = fn_82E62670(piStack_40,&uStack_38);
        if (lVar1 < 0) goto LAB_82e61974;
        uStack_38 = uStack_38 | 0x80000000;
        lVar1 = fn_82E628C8(piStack_40);
        if ((lVar1 < 0) || (lVar1 = fn_82E5A200(piStack_3c,piStack_40), lVar1 < 0))
        goto LAB_82e61974;
      }
      lVar1 = (**(code **)(*param_3 + 0x14))(param_3,piStack_40,0);
      if (-1 < lVar1) {
        lVar1 = (**(code **)(*param_3 + 0x14))(param_3,piStack_3c,0);
      }
    }
  }
LAB_82e61974:
  if (piStack_40 != (int *)0x0) {
    (**(code **)(*piStack_40 + 8))();
    piStack_40 = (int *)0x0;
  }
  if (piStack_3c != (int *)0x0) {
    (**(code **)(*piStack_3c + 8))();
  }
  return lVar1;
}

