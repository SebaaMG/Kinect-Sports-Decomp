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
extern int fn_82514AD8();
extern int fn_828ACC40();
extern int fn_828ACCB0();
extern int fn_828ACCE8();
extern int fn_828ACD00();
extern int fn_828ADBB8();
extern int fn_828AE818();
extern unsigned int lbl_832659CC;
extern unsigned int lbl_832659CD;


void fn_825149E0(int *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = fn_828ACC40();
  if ((cVar1 == '\0') && (cVar1 = fn_828ACCB0(param_1), cVar1 == '\0')) {
    cVar1 = fn_828ACCE8(param_1);
    if (cVar1 == '\0') {
      fn_828ACD00(param_1);
    }
    else {
      cVar1 = fn_828ADBB8();
      if (cVar1 == '\0') {
        cVar1 = (**(code **)(*param_1 + 0x78))(param_1);
        if (cVar1 != '\0') {
          fn_82514AD8(param_1,0);
        }
        if (lbl_832659CD == '\0') {
          uVar2 = 0x19;
        }
        else {
          if (lbl_832659CC == '\0') {
            return;
          }
          uVar2 = 0x1a;
        }
        fn_828AE818(param_1,uVar2);
      }
    }
  }
  return;
}

