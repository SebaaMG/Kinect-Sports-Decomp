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
#define CONCAT22(h,l) ((U32)((((U16)(h)) << 16) | ((U16)(l))))
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
#define _uStack_30 ((*(U64*)&uStack_30))
extern int fn_82F68CC0();
extern unsigned int uStack_28;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;


undefined8 fn_82F3DEF0(int param_1,int param_2,uint param_3,undefined4 *param_4)

{
  undefined8 uVar1;
  ulonglong uVar2;
  uint uStack_30;
  undefined4 uStack_2c;
  undefined8 uStack_28;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar1 = 0xffffffffc00d36b6;
  }
  else if ((param_4 == (undefined4 *)0x0) || ((param_3 != 0 && (param_2 == 0)))) {
    uVar1 = 0xffffffff80070057;
  }
  else {
    *param_4 = 0x32;
    if (param_3 < 0x32) {
      uVar1 = 0xffffffffc00d36b1;
    }
    else {
      uStack_28 = *(undefined8 *)(param_1 + 0x18);
      _uStack_30 = CONCAT44((uint)*(byte *)(param_1 + 0x13) << 0x18 |
                            (uint)*(byte *)(param_1 + 0x12) << 0x10 |
                            (uint)*(byte *)(param_1 + 0x11) << 8 | (uint)*(byte *)(param_1 + 0x10),
                            CONCAT22(*(ushort *)(param_1 + 0x14) << 8 |
                                     *(ushort *)(param_1 + 0x14) >> 8,
                                     *(ushort *)(param_1 + 0x16) << 8 |
                                     *(ushort *)(param_1 + 0x16) >> 8));
      fn_82F68CC0(param_2,&uStack_30,0x10);
      uVar2 = *(ulonglong *)(param_1 + 0x20);
      uStack_2c = (uint)uVar2;
      uStack_30 = (uint)(uVar2 >> 0x20);
      *(ulonglong *)(param_2 + 0x10) =
           ((uVar2 & 0xff) << 0x18 |
           (uVar2 & 0xff00) << 8 |
           (ulonglong)(uStack_2c >> 8) & 0xff00 | (ulonglong)(uStack_2c >> 0x18)) << 0x20 |
           ((ulonglong)uStack_30 & 0xff) << 0x18 |
           ((ulonglong)uStack_30 & 0xff00) << 8 |
           (ulonglong)(uStack_30 >> 8) & 0xff00 | (ulonglong)(uStack_30 >> 0x18);
      uStack_28 = *(undefined8 *)(param_1 + 0x58);
      uStack_2c = CONCAT22(*(ushort *)(param_1 + 0x54) << 8 | *(ushort *)(param_1 + 0x54) >> 8,
                           *(ushort *)(param_1 + 0x56) << 8 | *(ushort *)(param_1 + 0x56) >> 8);
      _uStack_30 = CONCAT44((uint)*(byte *)(param_1 + 0x53) << 0x18 |
                            (uint)*(byte *)(param_1 + 0x52) << 0x10 |
                            (uint)*(byte *)(param_1 + 0x51) << 8 | (uint)*(byte *)(param_1 + 0x50),
                            uStack_2c);
      fn_82F68CC0(param_2 + 0x18,&uStack_30,0x10);
      uVar2 = *(ulonglong *)(param_1 + 0x60);
      uVar1 = 0;
      uStack_2c = (uint)uVar2;
      uStack_30 = (uint)(uVar2 >> 0x20);
      *(ulonglong *)(param_2 + 0x28) =
           ((uVar2 & 0xff) << 0x18 |
           (uVar2 & 0xff00) << 8 |
           (ulonglong)(uStack_2c >> 8) & 0xff00 | (ulonglong)(uStack_2c >> 0x18)) << 0x20 |
           ((ulonglong)uStack_30 & 0xff) << 0x18 |
           ((ulonglong)uStack_30 & 0xff00) << 8 |
           (ulonglong)(uStack_30 >> 8) & 0xff00 | (ulonglong)(uStack_30 >> 0x18);
      *(ushort *)(param_2 + 0x30) =
           *(ushort *)(param_1 + 0x4c) << 8 | *(ushort *)(param_1 + 0x4c) >> 8;
    }
  }
  return uVar1;
}

