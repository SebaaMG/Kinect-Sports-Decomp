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
extern unsigned int *auStack_60;
extern int fn_828F6FA8();
extern int fn_829379A8();
extern int fn_82941320();
extern unsigned int lbl_8315B5D8;
extern unsigned int lbl_8315B5E4;


void fn_82947448(int param_1,ulonglong param_2,int param_3,undefined8 param_4,undefined8 param_5,
                  undefined4 *param_6)

{
  ulonglong uVar1;
  undefined1 auStack_60 [96];
  
  if ((param_2 & 0x2000) == 0) {
    fn_82941320(param_1,param_2,param_4,param_5,0);
  }
  else {
    fn_828F6FA8(auStack_60,0x20,0xffffffff820357f0,lbl_8315B5E4);
    if (param_6 == (undefined4 *)0x0) {
      uVar1 = ((param_2 & 0xffffffff) >> 0x14 & 0x700 | param_2 & 0x1800) >> 8;
      fn_828F6FA8(param_4,param_5,0xffffffff820357dc,
                        *(undefined4 *)((int)&lbl_8315B5D8 + (int)(uVar1 << 2)),auStack_60,
                        *(undefined4 *)(*(int *)(param_3 * 4 + *(int *)(param_1 + 0x14)) + 0x10));
      if ((uVar1 < 2) || ((4 < uVar1 && ((uVar1 < 7 || (uVar1 == 0xf)))))) {
        fn_829379A8(param_4,param_5,0xffffffff820357d4);
      }
    }
    else {
      fn_828F6FA8(param_4,param_5,0xffffffff820357b4,
                        *(undefined4 *)
                         ((int)&lbl_8315B5D8 +
                         ((uint)(((param_2 & 0xffffffff) >> 0x14 & 0x700 | param_2 & 0xfffff8ff) >>
                                6) & 0x7c)),auStack_60,
                        *(undefined4 *)(*(int *)(param_3 * 4 + *(int *)(param_1 + 0x14)) + 0x10),
                        *param_6);
    }
  }
  return;
}

