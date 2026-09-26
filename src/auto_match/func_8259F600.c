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
extern unsigned int lbl_821CC160;
extern unsigned int lbl_831C0814;
extern unsigned int lbl_831C0818;
extern unsigned int lbl_831C081C;
extern unsigned int lbl_831C0820;
extern unsigned int lbl_831C0824;
extern unsigned int lbl_83296890;
extern unsigned int lbl_83296C20;
extern unsigned int lbl_83296C80;


undefined8 fn_8259F600(int param_1)

{
  undefined8 *puVar1;
  
  if (lbl_831C0820 == lbl_831C0824) {
    if (((lbl_831C0814 != lbl_821CC160) && (lbl_831C0818 != lbl_821CC160)) &&
       (lbl_831C081C != lbl_821CC160)) {
      return 1;
    }
  }
  else if (((lbl_831C0814 != lbl_821CC160) && (lbl_831C0818 != lbl_821CC160)) &&
          (lbl_831C081C != lbl_821CC160)) {
    if (*(int *)(&lbl_83296C80 + param_1 * 0xb0) == 0) {
      puVar1 = &lbl_83296890;
    }
    else {
      puVar1 = (undefined8 *)(&lbl_83296C20 + param_1 * 0xb0);
    }
    if (-(*(float *)(puVar1 + 6) * *(float *)(puVar1 + 2) +
         *(float *)(puVar1 + 7) * *(float *)(puVar1 + 3) +
         *(float *)((int)puVar1 + 0x34) * *(float *)((int)puVar1 + 0x14)) < lbl_831C0824) {
      return 0;
    }
    return 1;
  }
  return 0;
}

