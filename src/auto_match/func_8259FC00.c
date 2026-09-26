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
extern unsigned int fStack_70;
extern int fn_82637B30();
extern int fn_82639EA8();
extern int fn_8263B758();
extern int fn_8263CBB0();
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int uStack_44;
extern unsigned int uStack_48;
extern unsigned int uStack_6c;
extern unsigned int uStack_74;
extern unsigned int uStack_78;
extern unsigned int uStack_7c;
extern unsigned int uStack_80;
extern unsigned int uStack_8c;


void fn_8259FC00(int param_1,undefined8 param_2)

{
  double dVar1;
  undefined4 uStack_8c;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  float fStack_70;
  undefined4 uStack_6c;
  undefined1 auStack_60 [24];
  uint uStack_48;
  uint uStack_44;
  
  dVar1 = (double)lbl_821CC160;
  fn_8263B758(param_2,0,auStack_60);
  fStack_70 = (float)dVar1;
  uStack_80 = 0;
  uStack_7c = 0;
  uStack_6c = lbl_821CA460;
  uStack_8c = (undefined4)(longlong)((float)uStack_48 * lbl_8218E8E8);
  uStack_78 = uStack_8c;
  uStack_8c = (undefined4)(longlong)((float)uStack_44 * lbl_8218E8E8);
  uStack_74 = uStack_8c;
  fn_82639EA8(param_1,&uStack_80);
  *(undefined4 *)(param_1 + 0x2f14) = 0;
  *(uint *)(param_1 + 0x2934) = *(uint *)(param_1 + 0x2934) & 0xfffffffd;
  *(ulonglong *)(param_1 + 0x10) = *(ulonglong *)(param_1 + 0x10) | 0x20800;
  fn_82637B30(param_1,0);
  *(uint *)(param_1 + 0x293c) = *(uint *)(param_1 + 0x293c) & 0xfffffff7;
  *(ulonglong *)(param_1 + 0x10) = *(ulonglong *)(param_1 + 0x10) | 0x40200;
  *(uint *)(param_1 + 0x2948) = *(uint *)(param_1 + 0x2948) & 0xfffffff8;
  *(ulonglong *)(param_1 + 0x10) = *(ulonglong *)(param_1 + 0x10) | 0x40;
  *(uint *)(param_1 + 0x29c0) = *(uint *)(param_1 + 0x29c0) & 0xfffffffe;
  *(ulonglong *)(param_1 + 0x20) = *(ulonglong *)(param_1 + 0x20) | 0x800000000;
                    /* WARNING: Subroutine does not return */
  fn_8263CBB0();
}

