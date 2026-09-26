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
extern int fn_82CE4118();
extern int fn_82D9A420();
extern int fn_82DFA1C8();
extern unsigned int lbl_8212FC60;
extern unsigned int lbl_8214777C;


void fn_82E01650(longlong param_1)

{
  int iVar1;
  undefined4 *puVar2;
  longlong lVar3;
  
  puVar2 = (undefined4 *)param_1;
  iVar1 = puVar2[4];
  *puVar2 = &lbl_8214777C;
  if (iVar1 != 0) {
    if ((*(short *)(puVar2 + 1) != 0) && (*(short *)(iVar1 + 4) != 0)) {
      lVar3 = param_1 + 0x1c;
      if (param_1 == -0x14) {
        lVar3 = 0;
      }
      fn_82D9A420(iVar1,lVar3);
    }
    fn_82CE4118(puVar2[4]);
  }
  fn_82DFA1C8(param_1 + 0x14);
  *puVar2 = &lbl_8212FC60;
  return;
}

