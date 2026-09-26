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
extern int fn_82AB15D0();
extern int fn_82AB9358();
extern int fn_82B6B0C8();
extern int fn_82B6E2F8();
extern int fn_82B6E520();
extern int fn_82B6E6D0();
extern int fn_82B6E928();


undefined8 fn_82AB94D0(int *param_1)

{
  int iVar2;
  longlong lVar1;
  ulonglong uVar3;
  
  if (param_1 == (int *)0x0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d74d0,0xffffffff820d74e0,0x185);
  }
  if (((param_1[5] != 0) && (param_1[6] != 0)) && (uVar3 = 1, 1 < (uint)param_1[4])) {
    do {
      iVar2 = fn_82B6E520(param_1[5],uVar3);
      if (iVar2 != 0) {
        lVar1 = fn_82B6E928(param_1[6],*(undefined4 *)(iVar2 + 4),*(undefined4 *)(iVar2 + 8));
        if (lVar1 == 0) {
          fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d74c8,0xffffffff820d74e0,0x1a7);
        }
        fn_82AB9358(param_1,lVar1);
      }
      uVar3 = uVar3 + 1;
    } while ((uVar3 & 0xffffffff) < (ulonglong)(uint)param_1[4]);
  }
  if (param_1[5] != 0) {
    fn_82B6E2F8();
  }
  if (param_1[6] != 0) {
    fn_82B6E6D0();
  }
  if (*param_1 != 0) {
    fn_82B6B0C8();
  }
  (*(code *)param_1[3])(param_1[1],param_1);
  return 0;
}

