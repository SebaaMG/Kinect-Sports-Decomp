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
extern int fn_82F68CC0();
extern int fn_82FA5060();
extern int fn_82FA5190();
extern unsigned int lbl_831BC768;


undefined8 fn_82FF2410(int param_1,undefined8 param_2,ushort param_3)

{
  ulonglong uVar1;
  int iVar2;
  
  uVar1 = (ulonglong)param_3;
  if (uVar1 != *(ushort *)(param_1 + 8)) {
    if (*(int *)(param_1 + 4) != 0) {
      fn_82FA5190(lbl_831BC768);
      *(undefined4 *)(param_1 + 4) = 0;
      *(undefined2 *)(param_1 + 8) = 0;
    }
    if (uVar1 != 0) {
      iVar2 = fn_82FA5060(lbl_831BC768,(uVar1 + (ulonglong)param_3 * 2) * 8);
      *(int *)(param_1 + 4) = iVar2;
      if (iVar2 == 0) {
        return 0x34;
      }
      *(ushort *)(param_1 + 8) = param_3;
    }
  }
  fn_82F68CC0(*(undefined4 *)(param_1 + 4),param_2,(ulonglong)*(ushort *)(param_1 + 8) * 0x18);
  return 1;
}

