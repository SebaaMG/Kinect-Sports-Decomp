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
extern unsigned int *auStack_6c;
extern unsigned int *auStack_80;
extern int fn_82511350();
extern int fn_8266F6B8();
extern int fn_82A1E0C0();
extern int fn_82A1E2C0();
extern int fn_82A1E508();
extern int fn_82BFE118();
extern int fn_82F691F0();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82002CFC;
extern unsigned int lbl_83154454;
extern unsigned int lbl_831E7B3C;
extern unsigned int *lbl_831E7B40;
extern unsigned int *lbl_831E7B48;
extern unsigned int uStack_70;


undefined4 * fn_82672358(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 auStack_80 [16];
  undefined4 uStack_70;
  undefined1 auStack_6c [108];
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &lbl_82002CFC;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  fn_82511350(param_1 + 0x19,auStack_80,auStack_80);
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x20] = 0;
  param_1[0x1f] = 0;
  uVar1 = lbl_82002AE0;
  param_1[0x22] = 1;
  param_1[0x28] = uVar1;
  param_1[0x21] = 1;
  param_1[0x27] = uVar1;
  param_1[0x26] = 0;
  param_1[0x25] = 0;
  param_1[0x24] = 0;
  param_1[0x23] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 1;
  param_1[0x2d] = 1;
  param_1[0x2e] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 4;
  param_1[0x41] = 1;
  if (lbl_831E7B40 == (undefined4 *)0x0) {
    lbl_831E7B40 = (undefined4 *)fn_82BFE118(4);
    if (lbl_831E7B40 == (undefined4 *)0x0) {
      lbl_831E7B40 = (undefined4 *)0x0;
    }
    else {
      *lbl_831E7B40 = 0;
    }
                    /* WARNING: Subroutine does not return */
    fn_82F691F0(auStack_6c,0,0x30);
  }
  if (lbl_831E7B48 == (undefined4 *)0x0) {
    lbl_831E7B48 = (undefined4 *)fn_82BFE118(4);
    if (lbl_831E7B48 == (undefined4 *)0x0) {
      lbl_831E7B48 = (undefined4 *)0x0;
    }
    else {
      *lbl_831E7B48 = 0;
    }
    uStack_70 = 0;
                    /* WARNING: Subroutine does not return */
    fn_82F691F0(auStack_6c,0,0x30);
  }
  if (lbl_83154454 == -1) {
    uVar2 = fn_82A1E0C0(0,0x8000,0xffffffff82670288,0,4,0xffffffff831e7b44);
    lbl_83154454 = (int)uVar2;
    fn_82A1E508(uVar2,3);
    fn_82A1E2C0(lbl_83154454);
  }
  if (lbl_831E7B3C == 0) {
    fn_8266F6B8();
  }
  RtlInitializeCriticalSection(param_1 + 0x42);
  RtlInitializeCriticalSection(param_1 + 0x49);
  RtlInitializeCriticalSection(param_1 + 0x50);
  return param_1;
}

