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
extern int fn_8240D930();
extern int fn_828D53C0();
extern int fn_828D7C30();
extern int fn_828D8478();
extern unsigned int uStack_30;


void fn_828D85F8(int param_1,int param_2)

{
  int iVar1;
  ulonglong uVar2;
  undefined1 uStack_30;
  
  uVar2 = (ulonglong)*(uint *)(param_1 + 0xc);
  if (uVar2 == *(uint *)(param_1 + 0x10)) {
LAB_828d8684:
    fn_828D7C30(param_1);
  }
  else {
    do {
      iVar1 = fn_8240D930(uVar2);
      if (iVar1 == param_2) {
        fn_828D8478(uVar2 + 0x1c,*(undefined4 *)(param_1 + 0x10),uVar2,uStack_30);
        fn_828D53C0((ulonglong)*(uint *)(param_1 + 0x10) - 0x1c,
                      (ulonglong)*(uint *)(param_1 + 0x10),param_1 + 0x18,uStack_30);
        *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -0x1c;
        goto LAB_828d8684;
      }
      uVar2 = uVar2 + 0x1c;
    } while ((uVar2 & 0xffffffff) != (ulonglong)*(uint *)(param_1 + 0x10));
    fn_828D7C30(param_1);
  }
  return;
}

