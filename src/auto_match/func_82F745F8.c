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
extern unsigned int *auStack_28;
extern int fn_82F728D0();
extern int fn_82F72F40();
extern int fn_82F73A48();
extern unsigned int *lbl_832635C0;
extern unsigned int uStack_30;


undefined8 * fn_82F745F8(undefined8 *param_1)

{
  char *pcVar1;
  char cVar2;
  undefined8 uStack_30;
  undefined1 auStack_28 [16];
  
  fn_82F72F40(&uStack_30);
  pcVar1 = lbl_832635C0 + 1;
  if ((*lbl_832635C0 == '@') && (pcVar1 = lbl_832635C0 + 2, lbl_832635C0[1] == '_')) {
    lbl_832635C0 = lbl_832635C0 + 3;
    fn_82F73A48(auStack_28,0);
    fn_82F73A48(auStack_28,0);
    cVar2 = *lbl_832635C0;
    while ((cVar2 != '\0' && (cVar2 != '@'))) {
      lbl_832635C0 = lbl_832635C0 + 1;
      cVar2 = *lbl_832635C0;
    }
    if (cVar2 == '\0') {
      lbl_832635C0 = lbl_832635C0 + -1;
      fn_82F728D0(param_1,1);
    }
    else {
      lbl_832635C0 = lbl_832635C0 + 1;
      *param_1 = uStack_30;
    }
  }
  else {
    lbl_832635C0 = pcVar1;
    *(undefined1 *)((int)param_1 + 5) = 0;
    *(undefined1 *)((int)param_1 + 4) = 2;
    *(undefined4 *)param_1 = 0;
  }
  return param_1;
}

