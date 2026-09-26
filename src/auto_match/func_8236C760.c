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
extern int fn_82250A18();
extern int fn_82358D38();
extern unsigned int lbl_821B2FF0;
extern unsigned int lbl_832975B0;
extern unsigned int uStack_31;


void fn_8236C760(undefined8 param_1)

{
  int iVar1;
  undefined1 uStack_31;
  undefined **appuStack_30 [4];
  undefined ***pppuStack_20;
  
  iVar1 = lbl_832975B0;
  if (lbl_832975B0 == 0) {
    iVar1 = fn_82250A18();
  }
  if (*(char *)(iVar1 + 4) != '\0') {
    pppuStack_20 = appuStack_30;
    appuStack_30[0] = &lbl_821B2FF0;
    fn_82358D38(param_1,appuStack_30);
    if (pppuStack_20 != (undefined ***)0x0) {
      iVar1 = (int)appuStack_30 + -(int)pppuStack_20;
      (*(code *)(*pppuStack_20)[3])
                (pppuStack_20,iVar1 - (int)(&uStack_31 + (uint)(iVar1 == 0) + -(int)pppuStack_20));
    }
  }
  return;
}

