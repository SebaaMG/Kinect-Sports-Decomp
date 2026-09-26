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
extern unsigned int lbl_831BC794;
extern unsigned int lbl_831BC798;
extern unsigned int lbl_831BC79C;
extern unsigned int lbl_831BC7A8;


void fn_82FECE48(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  puVar3 = (undefined4 *)0x0;
  puVar5 = lbl_831BC794;
  puVar4 = lbl_831BC794;
  if (lbl_831BC794 != (undefined4 *)0x0) {
    do {
      if (puVar5[1] == param_1) {
        puVar1 = (undefined4 *)*puVar5;
        puVar2 = puVar1;
        if (puVar5 != puVar4) {
          *puVar3 = puVar1;
          puVar2 = lbl_831BC794;
        }
        lbl_831BC794 = puVar2;
        if (puVar5 == lbl_831BC798) {
          lbl_831BC798 = puVar3;
        }
        *puVar5 = lbl_831BC79C;
        lbl_831BC7A8 = lbl_831BC7A8 + -1;
        puVar4 = lbl_831BC794;
        lbl_831BC79C = puVar5;
      }
      else {
        puVar1 = (undefined4 *)*puVar5;
        puVar3 = puVar5;
      }
      puVar5 = puVar1;
    } while (puVar1 != (undefined4 *)0x0);
    return;
  }
  return;
}

