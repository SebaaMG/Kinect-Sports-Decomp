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
extern int fn_82A1DDC0();
extern int fn_82FA5060();
extern int fn_82FA5190();
extern unsigned int lbl_831BC770;


void fn_83021D68(int param_1,ushort *param_2,int *param_3)

{
  ulonglong uVar1;
  
  if ((ulonglong)*(ushort *)(param_1 + 0x10) != 0) {
    if (*param_3 == 0) {
      *param_3 = *(int *)(param_1 + 0x14);
      *(undefined4 *)(param_1 + 0x14) = 0;
    }
    else {
      uVar1 = fn_82FA5060(lbl_831BC770,
                                ((ulonglong)*param_2 + (ulonglong)*(ushort *)(param_1 + 0x10)) *
                                0x14);
      if ((uVar1 & 0xffffffff) != 0) {
        fn_82A1DDC0(uVar1,*param_3,(ulonglong)*param_2 * 0x14);
        fn_82A1DDC0((ulonglong)*param_2 * 0x14 + uVar1,*(undefined4 *)(param_1 + 0x14),
                          (ulonglong)*(ushort *)(param_1 + 0x10) * 0x14);
        fn_82FA5190(lbl_831BC770,*param_3);
        fn_82FA5190(lbl_831BC770,*(undefined4 *)(param_1 + 0x14));
        *(undefined4 *)(param_1 + 0x14) = 0;
        *param_3 = (int)uVar1;
      }
    }
    *param_2 = *param_2 + *(short *)(param_1 + 0x10);
  }
  return;
}

