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
extern int fn_82521468();
extern int fn_825220C8();
extern int fn_828EA608();
extern int fn_828EA618();
extern unsigned int lbl_83265A58;
extern unsigned int lbl_832660D8;
extern unsigned int lbl_832660DC;
extern unsigned int lbl_832660E0;
extern unsigned int lbl_832660E8;


void fn_82522140(int param_1)

{
  undefined4 uVar1;
  char cVar2;
  
  uVar1 = **(undefined4 **)(param_1 + 4);
  cVar2 = fn_828EA618();
  if ((cVar2 == '\0') && (cVar2 = fn_828EA608(uVar1), cVar2 != '\0')) {
    lbl_832660DC = 0;
    lbl_832660E0 = 0;
    lbl_832660E8 = 0xffffffff;
    lbl_832660D8 = uVar1;
    if (lbl_83265A58 != 6) {
      fn_82521468(6);
    }
  }
  fn_825220C8(param_1);
  return;
}

