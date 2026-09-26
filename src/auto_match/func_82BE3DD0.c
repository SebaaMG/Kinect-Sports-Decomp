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
extern int fn_82BE1C80();
extern int fn_82BE2308();
extern int fn_82BE31D0();
extern int fn_82BE5240();
extern int fn_82BEA200();
extern int fn_82BEA230();
extern int fn_82BEA938();
extern unsigned int lbl_8322B130;


undefined4 fn_82BE3DD0(char *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = fn_82BEA200(0xffffffff8322b13c,0xffffffff820e8ffc);
  if (iVar1 == 0) {
    return 0x69;
  }
  if (lbl_8322B130 == 0) {
    uVar2 = 200;
  }
  else {
    if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
      fn_82BE31D0(lbl_8322B130,1,0);
      iVar1 = fn_82BE1C80(lbl_8322B130,param_1);
      if (iVar1 == 0) {
        fn_82BE5240(lbl_8322B130,300,0xffffffff820e8fbc);
      }
      else {
        if (*(int *)(iVar1 + 0x50) != 0) {
          if (*(int *)(iVar1 + 0x10) != 0) {
            *(undefined4 *)(iVar1 + 0x10) = 0xe;
            fn_82BEA938(iVar1);
            fn_82BE2308();
            fn_82BEA230(0xffffffff8322b13c,0xffffffff820e8ffc);
            return *(undefined4 *)(iVar1 + 4);
          }
          fn_82BE5240(lbl_8322B130,0x12f,0xffffffff82196582);
          uVar2 = 0xce;
          goto LAB_82be3e20;
        }
        fn_82BE5240(lbl_8322B130,300,0xffffffff820e8fd0,param_1);
      }
      fn_82BEA230(0xffffffff8322b13c,0xffffffff820e8ffc);
      if (lbl_8322B130 != 0) {
        return *(undefined4 *)(lbl_8322B130 + 4);
      }
      return 200;
    }
    fn_82BE5240(lbl_8322B130,300,0xffffffff82196582);
    uVar2 = 300;
  }
LAB_82be3e20:
  fn_82BEA230(0xffffffff8322b13c,0xffffffff820e8ffc);
  return uVar2;
}

