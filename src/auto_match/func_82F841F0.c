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
extern int fn_82A1BB18();
extern int fn_82A1E228();
extern int fn_82A1E968();
extern int fn_82A1F2F8();
extern unsigned int lbl_831BB8F0;
extern unsigned int lbl_831BB8F4;
extern unsigned int uStack_24;
extern unsigned int uStack_28;
extern unsigned int uStack_30;


void fn_82F841F0(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uStack_30;
  uint uStack_28;
  uint uStack_24;
  
  uStack_30 = 0;
  if (lbl_831BB8F0 == 0xbb40e64e) {
    fn_82A1E228(&uStack_30);
    uVar1 = (((U64)(uStack_30) >> 0) & 0xFFFFFFFF) ^ (((U64)(uStack_30) >> 32) & 0xFFFFFFFF);
    uVar2 = fn_82A1BB18();
    uVar3 = fn_82A1F2F8();
    fn_82A1E968(&uStack_28);
    lbl_831BB8F0 = uStack_28 ^ uStack_24 ^ uVar3 ^ uVar2 ^ uVar1;
    if (lbl_831BB8F0 == 0xbb40e64e) {
      lbl_831BB8F0 = 0xbb40e64f;
    }
  }
  lbl_831BB8F4 = ~lbl_831BB8F0;
  return;
}

