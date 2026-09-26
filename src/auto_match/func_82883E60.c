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
extern int fn_82880818();
extern int fn_82883C18();
extern int fn_828EA790();
extern unsigned int *lbl_83212A04;


void fn_82883E60(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  ulonglong uVar2;
  int *piVar3;
  int *apiStack_40 [16];
  
  apiStack_40[0] = (int *)*lbl_83212A04;
  piVar3 = lbl_83212A04;
  if (apiStack_40[0] != lbl_83212A04) {
    do {
      uVar2 = (ulonglong)(uint)apiStack_40[0][4];
      if ((uVar2 != 0) && (cVar1 = fn_82880818(uVar2,param_1), cVar1 != '\0')) {
        fn_82883C18(uVar2 + 0x60,param_2);
        piVar3 = lbl_83212A04;
      }
      fn_828EA790(apiStack_40);
    } while (apiStack_40[0] != piVar3);
  }
  return;
}

