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
extern int fn_82A1F560();
extern int fn_82A20688();
extern int fn_82A247C0();
extern int fn_82A25330();
extern unsigned int lbl_83219B9C;
extern unsigned int lbl_83219BF4;


void fn_82A250F8(int param_1)

{
  longlong lVar1;
  
  RtlEnterCriticalSection(0xffffffff83219ba0);
  if ((*(uint *)(param_1 + 0x14) & 0xc0000000) != 0xc0000000) {
    lbl_83219BF4 = (ulonglong)*(uint *)(*(int *)(param_1 + 0x20) + 0x24) + lbl_83219BF4;
    *(undefined4 *)(**(int **)(param_1 + 0xc) + 0xc) = *(undefined4 *)(param_1 + 0x2c);
    fn_82A1F560(lbl_83219B9C,*(undefined4 *)(param_1 + 0x20));
    lVar1 = *(longlong *)(*(int *)(param_1 + 0x20) + 0x10);
    *(longlong *)(param_1 + 0x28) = lVar1;
    if (lVar1 < (longlong)(ulonglong)*(uint *)(**(int **)(param_1 + 0xc) + 8)) {
      *(undefined4 *)(param_1 + 8) = 0;
      *(code **)(param_1 + 0x10) = fn_82A25330;
      fn_82A20688(param_1);
      goto LAB_82a251b0;
    }
  }
  fn_82A247C0(param_1);
LAB_82a251b0:
  RtlLeaveCriticalSection(0xffffffff83219ba0);
  return;
}

