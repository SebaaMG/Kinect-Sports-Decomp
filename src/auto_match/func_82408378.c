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
extern unsigned int *auStack_30;
extern int fn_822315A0();
extern int fn_82359C18();
extern int fn_8288B760();
extern int fn_82F56790();
extern unsigned int lbl_821AC5E0;
extern unsigned int lbl_821B7EC8;
extern unsigned int uStack_20;


void fn_82408378(undefined4 *param_1)

{
  char cVar1;
  ulonglong uVar2;
  undefined1 auStack_30 [16];
  undefined4 uStack_20;
  
  *param_1 = &lbl_821B7EC8;
  if (param_1[0x19] != 0) {
    fn_822315A0();
  }
  if (param_1[0x17] != 0) {
    fn_822315A0();
  }
  uVar2 = (ulonglong)*(uint *)(param_1[8] + 0x84);
  if (uVar2 != 0) {
    cVar1 = fn_8288B760(uVar2);
    if (cVar1 == '\0') {
      uStack_20 = 0;
      fn_82F56790(uVar2 + 0x88,auStack_30);
      fn_82359C18(auStack_30);
    }
  }
  *param_1 = &lbl_821AC5E0;
  return;
}

