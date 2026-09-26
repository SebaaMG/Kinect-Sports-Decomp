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
extern int fn_8267BE38();
extern int fn_826BE288();
extern int fn_826BF178();
extern int fn_826C0700();
extern int fn_826C2588();


undefined8 fn_826C25E8(int param_1,int param_2,undefined8 param_3)

{
  int *piVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  if (*(int *)(param_1 + 0x18) != 0) {
    if (*(byte *)(param_2 + 4) < 7) {
      uVar3 = fn_826C0700(*(int *)(param_1 + 0x18),param_3);
    }
    else {
      lVar2 = fn_826BF178();
      uVar3 = -(ulonglong)(lVar2 != 0) & lVar2 + 8U;
    }
    if ((uVar3 & 0xffffffff) != 0) {
      fn_826C2588(*(undefined4 *)(param_1 + 0x18),param_3,-(6 < *(byte *)(param_2 + 4)) & 1);
      piVar1 = *(int **)(param_1 + 0x18);
      if (((int *)*piVar1 == (int *)0x0) || (*(int *)*piVar1 == 0)) {
        if (piVar1 != (int *)0x0) {
          fn_826BE288(piVar1);
          fn_8267BE38(piVar1);
        }
        *(undefined4 *)(param_1 + 0x18) = 0;
      }
      return 1;
    }
  }
  return 0;
}

